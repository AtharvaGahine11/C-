/* write a c++ program to calculate the sum of all even numbers and the product of all odd numbers beween 1 and n*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer (n): ";
    cin >> n;

    if (n < 1) {
        cout << "Please enter a number greater than or equal to 1." << endl;
        return 1;
    }

    int evenSum = 0;
    long long oddProduct = 1; 

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            evenSum += i;
        } else {
            oddProduct *= i;
        }
    }

    cout << "Sum of all even numbers between 1 and " << n << ": " << evenSum << endl;
    cout << "Product of all odd numbers between 1 and " << n << ": " << oddProduct << endl;

    return 0;
}

/* write a program that defines a class rectangle with the following: two private data members: length and width. 
A default constructor that initializes length and width.
A member function area() to calculate and return the area of the rectangle
A main() function to create an object of the rectangle class, call the area() function and print the result */

#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Default constructor
    Rectangle() : length(1.0), width(1.0) {}

    // Member function to calculate area
    double area() const {
        return length * width;
    }

    // Setter for dimensions
    void setDimensions(double l, double w) {
        if (l > 0 && w > 0) {
            length = l;
            width = w;
        } else {
            cout << "Length and width must be positive values." << endl;
        }
    }
};

int main() {
    Rectangle rect;
    double length, width;

    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;

    rect.setDimensions(length, width);

    cout << "Area of the rectangle: " << rect.area() << endl;

    return 0;
}

/* write a c++ program to define a class student with the following
private data members: name and age
A parametrized constructor to initialize the name and the age 
A copy constructor to create a copy of existing student object
in the main() function, create an object of the student class using the parametrized constructor and anothe object using the copy constructor. 
display the details of both students  */

// #include <iostream>
// #include <string>

// using namespace std;

// class Student {
// private:
//     string name;
//     int age;     

// public:
    
//     Student(const string &name, int age) : name(name), age(age) {}

    
//     Student(const Student &other) : name(other.name), age(other.age) {}

    
//     void display() const {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }
// };

// int main() {
    
//     Student student1("Alice", 20);

//     Student student2 = student1; 

//     cout << "Details of Student 1:" << endl;
//     student1.display();

//     cout << "Details of Student 2 (copy of Student 1):" << endl;
//     student2.display();

//     return 0; 
// }

/* write a program that defines a function int add(int a, int b) to calculate and return the sum of two integers */

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Parameterized constructor
    Student(string studentName, int studentAge) {
        name = studentName;
        age = studentAge;
    }

    // Copy constructor
    Student(const Student &other) {
        name = other.name;
        age = other.age;
    }

    // Member function to display student details
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

int main() {
    // Create a Student object using the parameterized constructor
    Student student1("Alice", 20);

    // Create another Student object using the copy constructor
    Student student2 = student1;

    // Display the details of both students
    cout << "Details of student1:" << endl;
    student1.display();

    cout << "Details of student2:" << endl;
    student2.display();

    // Get user input for add function
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Call the add function with user input and display the result
    int result = add(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}



/* write a program to demonstrate function overloading by creating three functions named max:
int max(int a, int b) to find the larger of two integers 
double max(double a, double b) to find the larger of two double values */

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Parameterized constructor
    Student(string studentName, int studentAge) {
        name = studentName;
        age = studentAge;
    }

    // Copy constructor
    Student(const Student &other) {
        name = other.name;
        age = other.age;
    }

    // Member function to display student details
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Overloaded max functions
int max(int a, int b) {
    return (a > b) ? a : b;
}

double max(double a, double b) {
    return (a > b) ? a : b;
}

int main() {
    // Create a Student object using the parameterized constructor
    Student student1("Alice", 20);

    // Create another Student object using the copy constructor
    Student student2 = student1;

    // Display the details of both students
    cout << "Details of student1:" << endl;
    student1.display();

    cout << "Details of student2:" << endl;
    student2.display();

    // Get user input for add function
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Call the add function with user input and display the result
    int result = add(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;

    // Demonstrate max function overloading
    int int1 = 15, int2 = 25;
    double double1 = 10.5, double2 = 20.7;

    cout << "The larger of " << int1 << " and " << int2 << " is: " << max(int1, int2) << endl;
    cout << "The larger of " << double1 << " and " << double2 << " is: " << max(double1, double2) << endl;

    return 0;
}


/* write a recursive function int factorial(int n) that calculates the factorial of a given number n 
in the main() function, prompt the user to enter a positive inetger and call the factorial function to compute and display the result */

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Parameterized constructor
    Student(string studentName, int studentAge) {
        name = studentName;
        age = studentAge;
    }

    // Copy constructor
    Student(const Student &other) {
        name = other.name;
        age = other.age;
    }

    // Member function to display student details
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Overloaded max functions
int max(int a, int b) {
    return (a > b) ? a : b;
}

double max(double a, double b) {
    return (a > b) ? a : b;
}

// Recursive function to calculate factorial
int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    // Create a Student object using the parameterized constructor
    Student student1("Alice", 20);

    // Create another Student object using the copy constructor
    Student student2 = student1;

    // Display the details of both students
    cout << "Details of student1:" << endl;
    student1.display();

    cout << "Details of student2:" << endl;
    student2.display();

    // Get user input for add function
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Call the add function with user input and display the result
    int result = add(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;

    // Demonstrate max function overloading
    int int1 = 15, int2 = 25;
    double double1 = 10.5, double2 = 20.7;

    cout << "The larger of " << int1 << " and " << int2 << " is: " << max(int1, int2) << endl;
    cout << "The larger of " << double1 << " and " << double2 << " is: " << max(double1, double2) << endl;

    // Get user input for factorial function
    int number;
    cout << "Enter a positive integer to calculate its factorial: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "The factorial of " << number << " is: " << factorial(number) << endl;
    }

    return 0;
}
/* Write a C++ program to input 5 integers from the user into an array and find the largest number in the array */

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Parameterized constructor
    Student(string studentName, int studentAge) {
        name = studentName;
        age = studentAge;
    }

    // Copy constructor
    Student(const Student &other) {
        name = other.name;
        age = other.age;
    }

    // Member function to display student details
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Overloaded max functions
int max(int a, int b) {
    return (a > b) ? a : b;
}

double max(double a, double b) {
    return (a > b) ? a : b;
}

// Recursive function to calculate factorial
int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    // Create a Student object using the parameterized constructor
    Student student1("Alice", 20);

    // Create another Student object using the copy constructor
    Student student2 = student1;

    // Display the details of both students
    cout << "Details of student1:" << endl;
    student1.display();

    cout << "Details of student2:" << endl;
    student2.display();

    // Get user input for add function
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Call the add function with user input and display the result
    int result = add(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;

    // Demonstrate max function overloading
    int int1 = 15, int2 = 25;
    double double1 = 10.5, double2 = 20.7;

    cout << "The larger of " << int1 << " and " << int2 << " is: " << max(int1, int2) << endl;
    cout << "The larger of " << double1 << " and " << double2 << " is: " << max(double1, double2) << endl;

    // Get user input for factorial function
    int number;
    cout << "Enter a positive integer to calculate its factorial: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "The factorial of " << number << " is: " << factorial(number) << endl;
    }

    // Find the largest number in an array
    int arr[5];
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "The largest number in the array is: " << largest << endl;

    return 0;
}

/* Write a program to declare an array of size 10, initialize it with the first 10 natural numbers, and print each element on a new line. */

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Parameterized constructor
    Student(string studentName, int studentAge) {
        name = studentName;
        age = studentAge;
    }

    // Copy constructor
    Student(const Student &other) {
        name = other.name;
        age = other.age;
    }

    // Member function to display student details
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Overloaded max functions
int max(int a, int b) {
    return (a > b) ? a : b;
}

double max(double a, double b) {
    return (a > b) ? a : b;
}

// Recursive function to calculate factorial
int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    // Create a Student object using the parameterized constructor
    Student student1("Alice", 20);

    // Create another Student object using the copy constructor
    Student student2 = student1;

    // Display the details of both students
    cout << "Details of student1:" << endl;
    student1.display();

    cout << "Details of student2:" << endl;
    student2.display();

    // Get user input for add function
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Call the add function with user input and display the result
    int result = add(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;

    // Demonstrate max function overloading
    int int1 = 15, int2 = 25;
    double double1 = 10.5, double2 = 20.7;

    cout << "The larger of " << int1 << " and " << int2 << " is: " << max(int1, int2) << endl;
    cout << "The larger of " << double1 << " and " << double2 << " is: " << max(double1, double2) << endl;

    // Get user input for factorial function
    int number;
    cout << "Enter a positive integer to calculate its factorial: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "The factorial of " << number << " is: " << factorial(number) << endl;
    }

    // Find the largest number in an array
    int arr[5];
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "The largest number in the array is: " << largest << endl;

    // Declare and initialize an array of size 10 with the first 10 natural numbers
    int naturalNumbers[10];
    for (int i = 0; i < 10; i++) {
        naturalNumbers[i] = i + 1;
    }

    // Print each element on a new line
    cout << "The first 10 natural numbers are:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << naturalNumbers[i] << endl;
    }

    return 0;
}

/* Write a program to reverse the elements of an array. For example, if the array is {1, 2, 3, 4, 5}, the reversed array should be {5, 4, 3, 2, 1} */
#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;

    // Swap elements from start and end until they meet in the middle
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "Original Array: ";
    printArray(array, size);

    reverseArray(array, size);

    cout << "Reversed Array: ";
    printArray(array, size);

    return 0;
}

/* Write a program to take 6 integers as input, store them in an array, and calculate the sum of all elements in the array. */
#include <iostream>
using namespace std;

int main() {
    const int size = 6; // Size of the array
    int arr[size];
    int sum = 0;

    // Input 6 integers
    cout << "Enter 6 integers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        sum += arr[i]; // Add each element to the sum
    }

    // Display the sum
    cout << "The sum of all elements in the array is: " << sum << endl;

    return 0;
}

/* 10.Write a program to input 8 numbers into an array and count how many of them are even and how many are odd.*/

#include <iostream>
using namespace std;

int main() {
    const int size = 8; // Size of the array
    int arr[size];
    int evenCount = 0, oddCount = 0;

    // Input 8 numbers
    cout << "Enter 8 numbers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];

        // Check if the number is even or odd
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Display counts
    cout << "Number of even numbers: " << evenCount << endl;
    cout << "Number of odd numbers: " << oddCount << endl;

    return 0;
}