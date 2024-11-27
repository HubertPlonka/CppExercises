/*

    Create a class Book with a title and an author.
    Implement a function that takes two std::shared_ptr<Book> objects, representing two books, and prints which book has a longer title.
    In the main function, create two std::shared_ptr<Book> instances and call the function to compare the titles.
*/

#include <iostream>
#include <memory>
#include <string>

class Book{
    private:
    std::string title;
    std::string author;

    public:
    Book(std::string title, std::string author): title(title), author(author) {}
    ~Book(){}
    static void LongerTitle(const std::shared_ptr<Book>& book1,const std::shared_ptr<Book>& book2){
        if(book1->title.size() >= book2->title.size()){
            std::cout << book1->title << std::endl;
        } else {
            std::cout << book2->title << std::endl;
        }
    }
};

int main(){
    std::shared_ptr<Book> book1 = std::make_shared<Book>("titleeee", "John");
    std::shared_ptr<Book> book2 = std::make_shared<Book>("title", "Johnny");
    Book::LongerTitle(book1, book2);
    return 0;
}