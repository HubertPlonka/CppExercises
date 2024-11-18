/*
Exercise 5: Self-assignment Check

Create a class String that manages a dynamic string. Implement a copy assignment operator that uses this to check for self-assignment before copying data.

Example:

String str1("Hello");
String str2("World");
str1 = str2; // Ensure self-assignment doesn't cause issues

Implementation Tips

    Remember to use this to differentiate between member variables and parameters when they have the same name.
    Use this to return the current object for method chaining.
    Always ensure you manage memory properly when dealing with dynamic memory allocation.
*/