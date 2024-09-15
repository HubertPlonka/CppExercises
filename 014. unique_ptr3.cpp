#include <string>
#include <memory>
#include <vector>
#include <iostream>

class Book {
    private:
    std::string title;
    std::string author;
    int year;
    
    public:
    Book(std::string t, std::string a, int y)
        : title(t), author(a), year(y) {}
    
    std::string getTitle() { return title; }
    std::string getAuthor() { return author; }
    int getYear() { return year; }
};

class Library {
    private:
    std::vector<std::unique_ptr<Book>> books;
    
    public:
    void add_book(std::unique_ptr<Book> book){
        books.push_back(move(book));
    }
    
    void remove_book(std::string title){
        for(auto i = books.begin(); i != books.end(); i++){
            if((*i)->getTitle() == title){
                books.erase(i);
                break;
            }
        }
    }
    
    void display_books(){
        for(const auto& book : books){
            std::cout << book->getTitle() << " " << book->getAuthor() << " " << book->getYear() << std::endl;
        }
    }
};

int main() {
    Library library;

    Book book1("Wind", "Tom", 1992);
    Book book2("Fire", "John", 2002);

    library.add_book(std::make_unique<Book>(book1));
    library.add_book(std::make_unique<Book>(book2));
    library.display_books();
    library.remove_book("Wind");
    library.display_books();
    return 0;
}
/*
Create a Book class with the following attributes:

    title (string)
    author (string)
    year_of_publication (int)

Then, create a Library class that will store a collection of books. The Library class should have the following methods:

    add_book (adds a book to the collection)
    remove_book (removes a book from the collection)
    display_books (displays all books in the collection)

Use unique_ptr to manage the memory of books in the collection.

Your task is:

Write code for the Book and Library classes, using unique_ptr to manage the memory of books.
*/