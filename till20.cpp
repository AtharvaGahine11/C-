// /*Create a program in C++ based on Strings a. Reverse of string
// b. Concatenate two strings
// c. String Length calculation*/
// #include <iostream>
// #include <cstring> // For string length calculation
// using namespace std;

// // Function to reverse a string
// void reverseString(string &str) {
//     int n = str.length();
//     for (int i = 0; i < n / 2; ++i) {
//         swap(str[i], str[n - i - 1]);
//     }
// }

// // Function to concatenate two strings
// string concatenateStrings(string str1, string str2) {
//     return str1 + str2;
// }

// // Function to calculate the length of a string
// int stringLength(string str) {
//     return str.length();
// }

// int main() {
//     string str1, str2;

//     // Input for the strings
//     cout << "Enter first string: ";
//     getline(cin, str1);

//     cout << "Enter second string: ";
//     getline(cin, str2);

//     // Reverse of the first string
//     string reversedStr1 = str1;
//     reverseString(reversedStr1);
//     cout << "Reversed string of first string: " << reversedStr1 << endl;

//     // Concatenate the two strings
//     string concatenatedStr = concatenateStrings(str1, str2);
//     cout << "Concatenated string: " << concatenatedStr << endl;

//     // Length of the first string
//     cout << "Length of the first string: " << stringLength(str1) << endl;

//     // Length of the second string
//     cout << "Length of the second string: " << stringLength(str2) << endl;

//     return 0;
// }

// /* Explain how swapping works using pointers.
// Modify above Program to find both the largest and smallest elements.
// Explain why *(ptr + i) is used to access array elements in Program 
// 3. Write a program to calculate the product of two numbers using pointers. 
// Add a feature to the above Program to calculate the sum of all array elements using pointer arithmetic.*/

// /* Write a program where a base class defines a display() function, and the derived class overrides it to provide its implementation.*/
// #include <iostream>
// using namespace std;

// // Base class
// class Base {
// public:
//     // Virtual function to allow overriding in derived classes
//     virtual void display() {
//         cout << "Base class display function" << endl;
//     }
// };

// // Derived class
// class Derived : public Base {
// public:
//     // Override the display function in the derived class
//     void display() override {
//         cout << "Derived class display function" << endl;
//     }
// };

// int main() {
//     Base *basePtr;       // Pointer to base class
//     Derived derivedObj;  // Object of derived class

//     // Pointing base class pointer to derived class object
//     basePtr = &derivedObj;

//     // Calling display function (will call the overridden version in derived class)
//     basePtr->display();

//     return 0;
// }
// /* Write a program to demonstrate the use of a parameterized constructor. 
// Create a class Rectangle that accepts the length and width as arguments and calculates the area of the rectangle.*/
// #include <iostream>
// using namespace std;

// // Class definition for Rectangle
// class Rectangle {
// private:
//     float length, width;

// public:
//     // Parameterized constructor to initialize length and width
//     Rectangle(float l, float w) {
//         length = l;
//         width = w;
//     }

//     // Function to calculate the area of the rectangle
//     float calculateArea() {
//         return length * width;
//     }
// };

// int main() {
//     float length, width;

//     // Taking input from the user for length and width
//     cout << "Enter the length of the rectangle: ";
//     cin >> length;
//     cout << "Enter the width of the rectangle: ";
//     cin >> width;

//     // Creating an object of Rectangle class and passing arguments to the constructor
//     Rectangle rect(length, width);

//     // Calculating and displaying the area
//     cout << "The area of the rectangle is: " << rect.calculateArea() << endl;

//     return 0;
// }
// /* Create a simple Bank Account class with a method to withdraw money. 
// Throw an exception if the withdrawal amount exceeds the account balance.*/
// #include <iostream>
// #include <stdexcept>  // For std::exception and std::runtime_error
// using namespace std;

// // BankAccount class definition
// class BankAccount {
// private:
//     double balance;

// public:
//     // Constructor to initialize the balance
//     BankAccount(double initialBalance) {
//         if (initialBalance < 0) {
//             throw invalid_argument("Initial balance cannot be negative.");
//         }
//         balance = initialBalance;
//     }

//     // Method to withdraw money
//     void withdraw(double amount) {
//         if (amount > balance) {
//             throw runtime_error("Insufficient funds for withdrawal.");
//         }
//         balance -= amount;
//         cout << "Withdrawal of " << amount << " successful!" << endl;
//     }

//     // Method to check the balance
//     double getBalance() {
//         return balance;
//     }
// };

// int main() {
//     try {
//         // Create a bank account with an initial balance
//         BankAccount account(500.00);

//         cout << "Current balance: $" << account.getBalance() << endl;

//         // Try to withdraw an amount
//         double withdrawalAmount;
//         cout << "Enter withdrawal amount: $";
//         cin >> withdrawalAmount;

//         // Perform the withdrawal
//         account.withdraw(withdrawalAmount);

//         cout << "Remaining balance: $" << account.getBalance() << endl;
//     }
//     catch (const runtime_error &e) {
//         // Catch and display runtime errors (e.g., insufficient funds)
//         cout << "Error: " << e.what() << endl;
//     }
//     catch (const invalid_argument &e) {
//         // Catch invalid argument errors (e.g., negative initial balance)
//         cout << "Error: " << e.what() << endl;
//     }

//     return 0;
// }
// /*Create a C++ program for Library management system 
// HAVING DATA MEMBERS :BOOKID,BOOKNAME,AUTHOR PERFORM OPERATION TO ADD AND DISPLAY */
// #include <iostream>
// #include <vector>
// using namespace std;

// // Book class definition
// class Book {
// private:
//     int bookID;
//     string bookName;
//     string author;

// public:
//     // Parameterized constructor to initialize the data members
//     Book(int id, string name, string authorName) {
//         bookID = id;
//         bookName = name;
//         author = authorName;
//     }

//     // Function to display the book information
//     void displayBookDetails() {
//         cout << "Book ID: " << bookID << endl;
//         cout << "Book Name: " << bookName << endl;
//         cout << "Author: " << author << endl;
//         cout << "----------------------------" << endl;
//     }

//     // Getter functions
//     int getBookID() {
//         return bookID;
//     }

//     string getBookName() {
//         return bookName;
//     }

//     string getAuthor() {
//         return author;
//     }
// };

// // Library class that manages the books
// class Library {
// private:
//     vector<Book> books; // Vector to store books

// public:
//     // Function to add a book to the library
//     void addBook(int id, string name, string author) {
//         Book newBook(id, name, author);
//         books.push_back(newBook); // Add the book to the vector
//     }

//     // Function to display all books in the library
//     void displayAllBooks() {
//         if (books.empty()) {
//             cout << "No books available in the library!" << endl;
//         } else {
//             cout << "Books available in the library:" << endl;
//             for (const auto& book : books) {
//                 book.displayBookDetails();
//             }
//         }
//     }
// };

// int main() {
//     Library library;

//     int choice;
//     do {
//         cout << "\nLibrary Management System\n";
//         cout << "1. Add a Book\n";
//         cout << "2. Display All Books\n";
//         cout << "3. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1: {
//                 int id;
//                 string name, author;

//                 cout << "\nEnter Book ID: ";
//                 cin >> id;
//                 cin.ignore(); // To ignore the leftover newline character in the input buffer

//                 cout << "Enter Book Name: ";
//                 getline(cin, name);

//                 cout << "Enter Author Name: ";
//                 getline(cin, author);

//                 // Add the book to the library
//                 library.addBook(id, name, author);
//                 cout << "Book added successfully!" << endl;
//                 break;
//             }

//             case 2:
//                 // Display all books
//                 library.displayAllBooks();
//                 break;

//             case 3:
//                 cout << "Exiting the program..." << endl;
//                 break;

//             default:
//                 cout << "Invalid choice. Please try again!" << endl;
//                 break;
//         }
//     } while (choice != 3);

//     return 0;
// }

// /* Build a simple calculator using a switch case.*/
// #include <iostream>
// using namespace std;

// int main() {
//     double num1, num2;
//     char operation;

//     cout << "Simple Calculator\n";
//     cout << "Enter first number: ";
//     cin >> num1;

//     cout << "Enter second number: ";
//     cin >> num2;

//     cout << "Enter operation (+, -, *, /): ";
//     cin >> operation;

//     switch (operation) {
//         case '+':
//             cout << "Result: " << num1 + num2 << endl;
//             break;

//         case '-':
//             cout << "Result: " << num1 - num2 << endl;
//             break;

//         case '*':
//             cout << "Result: " << num1 * num2 << endl;
//             break;

//         case '/':
//             if (num2 != 0) {
//                 cout << "Result: " << num1 / num2 << endl;
//             } else {
//                 cout << "Error: Division by zero is not allowed." << endl;
//             }
//             break;

//         default:
//             cout << "Error: Invalid operation." << endl;
//             break;
//     }

//     return 0;
// }
// /* Write a program to simulate an online purchase. 
// If the debit card number is invalid or the balance is insufficient, 
// throw an exceptions for each case and handle them in separate catch blocks.*/

// #include <iostream>
// #include <stdexcept>  // For exceptions
// #include <string>
// using namespace std;

// // Custom exception classes
// class InvalidCardException : public exception {
// public:
//     const char* what() const noexcept override {
//         return "Error: Invalid debit card number.";
//     }
// };

// class InsufficientBalanceException : public exception {
// public:
//     const char* what() const noexcept override {
//         return "Error: Insufficient balance for the transaction.";
//     }
// };

// class OnlinePurchase {
// private:
//     string cardNumber;
//     double balance;
    
// public:
//     // Constructor to initialize card number and balance
//     OnlinePurchase(string card, double bal) : cardNumber(card), balance(bal) {}

//     // Method to simulate online purchase
//     void makePurchase(double purchaseAmount) {
//         // Check if card number is valid (e.g., must be 16 digits)
//         if (cardNumber.length() != 16 || !isValidCardNumber(cardNumber)) {
//             throw InvalidCardException();
//         }

//         // Check if there is enough balance for the purchase
//         if (balance < purchaseAmount) {
//             throw InsufficientBalanceException();
//         }

//         // Deduct the purchase amount from the balance
//         balance -= purchaseAmount;
//         cout << "Purchase successful! Remaining balance: $" << balance << endl;
//     }

// private:
//     // A simple validation to check if card number contains only digits
//     bool isValidCardNumber(const string& card) {
//         for (char c : card) {
//             if (!isdigit(c)) {
//                 return false; // Invalid card number if any non-digit is found
//             }
//         }
//         return true;
//     }
// };

// int main() {
//     try {
//         string cardNumber;
//         double balance, purchaseAmount;

//         // Input card number, balance and purchase amount
//         cout << "Enter debit card number (16 digits): ";
//         cin >> cardNumber;
//         cout << "Enter available balance: $";
//         cin >> balance;
//         cout << "Enter the amount to purchase: $";
//         cin >> purchaseAmount;

//         // Create an OnlinePurchase object
//         OnlinePurchase purchase(cardNumber, balance);

//         // Attempt to make the purchase
//         purchase.makePurchase(purchaseAmount);
//     }
//     catch (const InvalidCardException& e) {
//         cout << e.what() << endl;  // Handle invalid card number
//     }
//     catch (const InsufficientBalanceException& e) {
//         cout << e.what() << endl;  // Handle insufficient balance
//     }
//     catch (const exception& e) {
//         cout << "Unexpected error: " << e.what() << endl;
//     }

//     return 0;
// }
// /*Create a class called Max. Calculate the greatest among three numbers using the else if ladder.*/
// #include <iostream>
// using namespace std;

// class Max {
// public:
//     // Method to find the greatest among three numbers
//     void findGreatest(int num1, int num2, int num3) {
//         if (num1 >= num2 && num1 >= num3) {
//             cout << "The greatest number is: " << num1 << endl;
//         }
//         else if (num2 >= num1 && num2 >= num3) {
//             cout << "The greatest number is: " << num2 << endl;
//         }
//         else {
//             cout << "The greatest number is: " << num3 << endl;
//         }
//     }
// };

// int main() {
//     Max maxFinder;
    
//     int num1, num2, num3;

//     // Input three numbers
//     cout << "Enter the first number: ";
//     cin >> num1;
//     cout << "Enter the second number: ";
//     cin >> num2;
//     cout << "Enter the third number: ";
//     cin >> num3;

//     // Call the method to find the greatest number
//     maxFinder.findGreatest(num1, num2, num3);

//     return 0;
// }
