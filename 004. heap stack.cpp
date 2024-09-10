#include <iostream>

using namespace std;

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 1;
    int* p = &x;
    int* q = new int;
    if(q == nullptr){
        cout << "allocation error" << endl;
    }
    *q = x;
    cout << "x = " << x <<" *p = " << *p << " *q = " << *q << endl;
    swap(p, q);
    cout << "x = " << x <<" *p = " << *p << " *q = " << *q << endl;
    delete q;
    return 0;
}

/*
Write a C++ program that demonstrates the following:

    Declare a local integer variable x on the stack and a pointer p that points to x.
    Dynamically allocate an integer on the heap using new and assign it to a pointer q.
    Assign the value of x to the memory location pointed to by q.
    Create a function swap that takes two pointers to integers as arguments and swaps the values they point to.
    Call the swap function to swap the values of x and the memory location pointed to by q.
    Print the values of x, *p, and *q to the console before and after the swap.
    Deallocate the memory allocated in step 2 using delete.

Constraints:

    Do not use any global variables.
    Do not use any C-style arrays (e.g., int arr[10];).
    Do not use any smart pointers (e.g., unique_ptr, shared_ptr).
    The swap function should not modify the original pointers p and q, but only the values they point to.

Additional challenges:

    Use a const correctness: ensure that the swap function does not modify the original pointers p and q.
    Use a reference to a pointer as a function parameter to modify the original pointer.

Your task:

Write the C++ code to implement the above exercise. Think carefully about the memory management, pointer arithmetic, and the relationships between the variables, pointers, and memory locations.

Good luck!