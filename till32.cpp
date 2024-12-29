// /* Write a program to input basic salary of an employee and calculate its Gross salary according to following:
// Basic Salary <= 10000 : HRA = 20%, 
// DA = 80% Basic Salary <= 20000 : HRA = 25%,
// DA = 90% Basic Salary > 20000 : HRA = 30%, 
// DA = 95%*/

// #include <iostream>
// using namespace std;

// class Employee {
// private:
//     double basicSalary;
//     double grossSalary;
//     double HRA;
//     double DA;

// public:
//     // Method to input basic salary and calculate gross salary
//     void calculateGrossSalary() {
//         cout << "Enter the basic salary of the employee: ";
//         cin >> basicSalary;

//         // Calculate HRA and DA based on the basic salary
//         if (basicSalary <= 10000) {
//             HRA = 0.20 * basicSalary;  // 20% of basic salary
//             DA = 0.80 * basicSalary;   // 80% of basic salary
//         }
//         else if (basicSalary <= 20000) {
//             HRA = 0.25 * basicSalary;  // 25% of basic salary
//             DA = 0.90 * basicSalary;   // 90% of basic salary
//         }
//         else {
//             HRA = 0.30 * basicSalary;  // 30% of basic salary
//             DA = 0.95 * basicSalary;   // 95% of basic salary
//         }

//         // Calculate gross salary
//         grossSalary = basicSalary + HRA + DA;
//     }

//     // Method to display the calculated gross salary
//     void displaySalaryDetails() {
//         cout << "\nSalary Details:" << endl;
//         cout << "Basic Salary: $" << basicSalary << endl;
//         cout << "HRA: $" << HRA << endl;
//         cout << "DA: $" << DA << endl;
//         cout << "Gross Salary: $" << grossSalary << endl;
//     }
// };

// int main() {
//     Employee emp;

//     // Calculate gross salary
//     emp.calculateGrossSalary();

//     // Display the salary details
//     emp.displaySalaryDetails();

//     return 0;
// }

// /*Create a program for “Student Grading System” 90% and above: Grade A
// 75% - 89%: Grade B
// 50% - 74%: Grade C
// Below 50%: Grade F*/

// #include <iostream>
// using namespace std;

// class Student {
// private:
//     string name;
//     double marks[5];  // Array to store marks of 5 subjects
//     double totalMarks;
//     double percentage;
    
// public:
//     // Method to input student name and marks
//     void inputDetails() {
//         cout << "Enter student name: ";
//         getline(cin, name);
        
//         totalMarks = 0.0;
//         cout << "Enter marks for 5 subjects (out of 100):" << endl;
//         for (int i = 0; i < 5; i++) {
//             cout << "Subject " << i + 1 << ": ";
//             cin >> marks[i];
//             totalMarks += marks[i];  // Accumulate the total marks
//         }
        
//         // Calculate percentage
//         percentage = (totalMarks / 500) * 100;  // Total marks is 500
//     }

//     // Method to calculate grade based on percentage
//     void calculateGrade() {
//         cout << "\nStudent Name: " << name << endl;
//         cout << "Total Marks: " << totalMarks << "/500" << endl;
//         cout << "Percentage: " << percentage << "%" << endl;
        
//         if (percentage >= 90) {
//             cout << "Grade: A" << endl;
//         }
//         else if (percentage >= 75) {
//             cout << "Grade: B" << endl;
//         }
//         else if (percentage >= 50) {
//             cout << "Grade: C" << endl;
//         }
//         else {
//             cout << "Grade: F" << endl;
//         }
//     }
// };

// int main() {
//     Student student;
    
//     // Input student details and marks
//     student.inputDetails();
    
//     // Calculate and display grade
//     student.calculateGrade();
    
//     return 0;
// }

// /* Create an Array having 20 integer inputs from user and print the following:
// ● number of positive numbers
// ● number of negative numbers
// ● number of odd numbers
// ● number of even numbers
// ● number of 0s. */

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[20];  // Array to store 20 integers
//     int positiveCount = 0, negativeCount = 0, oddCount = 0, evenCount = 0, zeroCount = 0;
    
//     // Taking input from the user
//     cout << "Enter 20 integers: " << endl;
//     for (int i = 0; i < 20; i++) {
//         cin >> arr[i];
//     }

//     // Counting positive, negative, odd, even numbers and zeros
//     for (int i = 0; i < 20; i++) {
//         if (arr[i] > 0) {
//             positiveCount++;
//         }
//         else if (arr[i] < 0) {
//             negativeCount++;
//         }
//         if (arr[i] % 2 == 0) {
//             evenCount++;
//         } else {
//             oddCount++;
//         }
//         if (arr[i] == 0) {
//             zeroCount++;
//         }
//     }

//     // Output the results
//     cout << "\nNumber of positive numbers: " << positiveCount << endl;
//     cout << "Number of negative numbers: " << negativeCount << endl;
//     cout << "Number of odd numbers: " << oddCount << endl;
//     cout << "Number of even numbers: " << evenCount << endl;
//     cout << "Number of zeros: " << zeroCount << endl;

//     return 0;
// }

// /* Create a class called Factorial having member function fact() to calculate the factorial of a given number. 
// Throw an exception if number entered by the user is negative or zero*/

// #include <iostream>
// #include <stdexcept>  // For exception handling
// using namespace std;

// class Factorial {
// public:
//     // Member function to calculate factorial
//     long long fact(int num) {
//         // Throw an exception if the number is negative or zero
//         if (num <= 0) {
//             throw invalid_argument("Factorial is not defined for zero or negative numbers.");
//         }

//         long long result = 1;
//         for (int i = 1; i <= num; i++) {
//             result *= i;
//         }
//         return result;
//     }
// };

// int main() {
//     Factorial f;
//     int num;
    
//     cout << "Enter a positive integer: ";
//     cin >> num;

//     try {
//         // Attempt to calculate factorial
//         long long result = f.fact(num);
//         cout << "The factorial of " << num << " is: " << result << endl;
//     }
//     catch (const invalid_argument &e) {
//         // Catch and display exception message
//         cout << "Error: " << e.what() << endl;
//     }

//     return 0;
// }

// /* Write a C++ program to demonstrate different types of inheritance by creating a hierarchy for a university management system.
// The program should include the following:
// ● Base Class (Person): Contains common attributes like name and age and a method to display them.
// ● Derived Class (Student): Inherits from Person and includes additional attributes like roll number and course.
// ● Derived Class (Faculty): Inherits from Person and includes attributes like employee ID and department.*/

// #include <iostream>
// #include <string>
// using namespace std;

// // Base Class (Person)
// class Person {
// protected:
//     string name;
//     int age;

// public:
//     // Constructor to initialize Person's details
//     Person(string n, int a) : name(n), age(a) {}

//     // Method to display common attributes
//     void displayPersonDetails() {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//     }
// };

// // Derived Class (Student)
// class Student : public Person {
// private:
//     string rollNumber;
//     string course;

// public:
//     // Constructor to initialize Student details, including Person's attributes
//     Student(string n, int a, string r, string c) : Person(n, a), rollNumber(r), course(c) {}

//     // Method to display student-specific details
//     void displayStudentDetails() {
//         displayPersonDetails();
//         cout << "Roll Number: " << rollNumber << endl;
//         cout << "Course: " << course << endl;
//     }
// };

// // Derived Class (Faculty)
// class Faculty : public Person {
// private:
//     string employeeID;
//     string department;

// public:
//     // Constructor to initialize Faculty details, including Person's attributes
//     Faculty(string n, int a, string e, string d) : Person(n, a), employeeID(e), department(d) {}

//     // Method to display faculty-specific details
//     void displayFacultyDetails() {
//         displayPersonDetails();
//         cout << "Employee ID: " << employeeID << endl;
//         cout << "Department: " << department << endl;
//     }
// };

// int main() {
//     // Create a Student object
//     Student student1("John Doe", 20, "S12345", "Computer Science");
//     cout << "Student Details:" << endl;
//     student1.displayStudentDetails();

//     cout << "\n----------------------------\n";

//     // Create a Faculty object
//     Faculty faculty1("Dr. Smith", 45, "F9876", "Mathematics");
//     cout << "Faculty Details:" << endl;
//     faculty1.displayFacultyDetails();

//     return 0;
// }


// /* Write a C++ program to create a simple text file. The program should provide the following functionalities:
// 1.APPEND: Allow the user to write new content to a text file. Existing content, if any, should be NOT overwritten.
// 2. Read: Display the entire content of the text file to the user.*/

// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// void appendToFile(const string& filename) {
//     // Open the file in append mode
//     ofstream outFile(filename, ios::app);

//     if (!outFile) {
//         cerr << "Error opening the file!" << endl;
//         return;
//     }

//     string content;
//     cout << "Enter content to append to the file (type 'exit' to stop): " << endl;
//     cin.ignore();  // To ignore the newline left by previous input
//     while (true) {
//         getline(cin, content);
//         if (content == "exit") {
//             break;
//         }
//         outFile << content << endl;  // Append the content to the file
//     }

//     outFile.close();
//     cout << "Content appended successfully!" << endl;
// }

// void readFile(const string& filename) {
//     // Open the file in read mode
//     ifstream inFile(filename);

//     if (!inFile) {
//         cerr << "Error opening the file!" << endl;
//         return;
//     }

//     string line;
//     cout << "File contents:" << endl;
//     while (getline(inFile, line)) {
//         cout << line << endl;  // Display each line from the file
//     }

//     inFile.close();
// }

// int main() {
//     string filename = "sample.txt";  // Name of the text file

//     int choice;
//     while (true) {
//         // Menu for the user
//         cout << "\nText File Operations Menu" << endl;
//         cout << "1. Append content to file" << endl;
//         cout << "2. Read content from file" << endl;
//         cout << "3. Exit" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 appendToFile(filename);
//                 break;
//             case 2:
//                 readFile(filename);
//                 break;
//             case 3:
//                 cout << "Exiting program..." << endl;
//                 return 0;
//             default:
//                 cout << "Invalid choice! Please try again." << endl;
//         }
//     }

//     return 0;
// }

// /* Write a program to print following pattern */
// #include <iostream>
// using namespace std;

// int main() {
//     // Number of rows for the pattern
//     int rows = 5;

//     // Loop to print the pattern
//     for (int i = 1; i <= rows; i++) {
//         // Inner loop to print stars in each row
//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }
//         // Print a new line after each row
//         cout << endl;
//     }

//     return 0;
// }

// /* Develop a C++ program for a Student Management System that incorporates the following
// Menu-Driven Approach: Provide options for:
// ● Adding a new student.(SID,SNAME,CLASS THROUGH USER INPUT)
// ● DISPLAY student DETAILS. */

// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// class Student {
// private:
//     int SID;      // Student ID
//     string SNAME; // Student Name
//     string CLASS; // Class

// public:
//     // Constructor to initialize student details
//     Student(int id, string name, string class_name) {
//         SID = id;
//         SNAME = name;
//         CLASS = class_name;
//     }

//     // Function to display student details
//     void displayStudentDetails() {
//         cout << "Student ID: " << SID << endl;
//         cout << "Student Name: " << SNAME << endl;
//         cout << "Class: " << CLASS << endl;
//     }

//     // Getters for Student details (if needed)
//     int getSID() {
//         return SID;
//     }

//     string getSNAME() {
//         return SNAME;
//     }

//     string getCLASS() {
//         return CLASS;
//     }
// };

// class StudentManagementSystem {
// private:
//     vector<Student> students;  // A vector to store the list of students

// public:
//     // Function to add a new student
//     void addStudent() {
//         int id;
//         string name, class_name;

//         // User input for student details
//         cout << "Enter Student ID: ";
//         cin >> id;
//         cin.ignore(); // To clear the newline character left by cin
//         cout << "Enter Student Name: ";
//         getline(cin, name);
//         cout << "Enter Student Class: ";
//         getline(cin, class_name);

//         // Create a new student object and add to the vector
//         Student newStudent(id, name, class_name);
//         students.push_back(newStudent);

//         cout << "Student added successfully!" << endl;
//     }

//     // Function to display all student details
//     void displayAllStudents() {
//         if (students.empty()) {
//             cout << "No student records found!" << endl;
//             return;
//         }

//         cout << "\nDisplaying Student Details:\n";
//         for (size_t i = 0; i < students.size(); ++i) {
//             cout << "\nStudent " << (i + 1) << ":\n";
//             students[i].displayStudentDetails();
//         }
//     }
// };

// int main() {
//     StudentManagementSystem system;
//     int choice;

//     while (true) {
//         // Menu-driven approach
//         cout << "\nStudent Management System Menu:" << endl;
//         cout << "1. Add a new student" << endl;
//         cout << "2. Display student details" << endl;
//         cout << "3. Exit" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 system.addStudent();
//                 break;
//             case 2:
//                 system.displayAllStudents();
//                 break;
//             case 3:
//                 cout << "Exiting program..." << endl;
//                 return 0;
//             default:
//                 cout << "Invalid choice, please try again." << endl;
//         }
//     }

//     return 0;
// }

// /* Create a program for matrix operations (addition) */
// #include <iostream>
// using namespace std;

// int main() {
//     int rows, cols;

//     // Taking the number of rows and columns as input
//     cout << "Enter the number of rows: ";
//     cin >> rows;
//     cout << "Enter the number of columns: ";
//     cin >> cols;

//     // Declaring matrices
//     int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

//     // Taking input for the first matrix
//     cout << "Enter elements of first matrix: \n";
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << "Element at position (" << i + 1 << "," << j + 1 << "): ";
//             cin >> matrix1[i][j];
//         }
//     }

//     // Taking input for the second matrix
//     cout << "Enter elements of second matrix: \n";
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << "Element at position (" << i + 1 << "," << j + 1 << "): ";
//             cin >> matrix2[i][j];
//         }
//     }

//     // Matrix addition
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             result[i][j] = matrix1[i][j] + matrix2[i][j];
//         }
//     }

//     // Displaying the result
//     cout << "\nSum of the two matrices is: \n";
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << result[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// /* SWAPPING OF TWO NUMBERS USING POINTERS.*/

// #include <iostream>
// using namespace std;

// // Function to swap two numbers using pointers
// void swap(int* a, int* b) {
//     int temp = *a;  // Dereferencing the pointer to get the value at memory address a
//     *a = *b;        // Storing the value of b in the memory location of a
//     *b = temp;      // Storing the original value of a in the memory location of b
// }

// int main() {
//     int num1, num2;

//     // Taking input from the user
//     cout << "Enter the first number: ";
//     cin >> num1;
//     cout << "Enter the second number: ";
//     cin >> num2;

//     cout << "Before swapping: " << endl;
//     cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

//     // Calling swap function by passing the addresses of num1 and num2
//     swap(&num1, &num2);

//     cout << "After swapping: " << endl;
//     cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

//     return 0;
// }

// /* Create Result-sheet Program using student class, having data member: roll, name, sub1, sub2, sub3, total */

// #include <iostream>
// #include <string>
// using namespace std;

// class Student {
// private:
//     int roll;
//     string name;
//     int sub1, sub2, sub3, total;

// public:
//     // Constructor to initialize data members
//     Student(int r, string n, int s1, int s2, int s3) {
//         roll = r;
//         name = n;
//         sub1 = s1;
//         sub2 = s2;
//         sub3 = s3;
//         total = sub1 + sub2 + sub3;  // Calculate total marks
//     }

//     // Function to display the result sheet
//     void displayResult() {
//         cout << "=========================================" << endl;
//         cout << "Roll No.  Name    S1  S2  S3  Total" << endl;
//         cout << "=========================================" << endl;
//         cout << roll << "    " << name << "  " << sub1 << "  " << sub2 << "  " << sub3 << "  " << total << endl;
//         cout << "=========================================" << endl;
//     }
// };

// int main() {
//     int roll, sub1, sub2, sub3;
//     string name;

//     // Taking user input for student details
//     cout << "Enter Roll No: ";
//     cin >> roll;
//     cin.ignore(); // To clear the newline character left by cin
//     cout << "Enter Name: ";
//     getline(cin, name);
//     cout << "Enter marks for Subject 1: ";
//     cin >> sub1;
//     cout << "Enter marks for Subject 2: ";
//     cin >> sub2;
//     cout << "Enter marks for Subject 3: ";
//     cin >> sub3;

//     // Create a Student object and display the result
//     Student student(roll, name, sub1, sub2, sub3);
//     student.displayResult();

//     return 0;
// }

// /* WAP in C++ to take the string from the user Use at least three function of string*/
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str;

//     // Taking input from the user
//     cout << "Enter a string: ";
//     getline(cin, str);

//     // 1. Find the length of the string
//     cout << "Length of the string: " << str.length() << endl;

//     // 2. Convert the string to uppercase
//     for (int i = 0; i < str.length(); i++) {
//         str[i] = toupper(str[i]);
//     }
//     cout << "String in uppercase: " << str << endl;

//     // 3. Find the position of the first occurrence of a character ('a' in this case)
//     size_t pos = str.find('A');
//     if (pos != string::npos) {
//         cout << "'A' found at position: " << pos << endl;
//     } else {
//         cout << "'A' not found in the string." << endl;
//     }

//     // 4. Replace a part of the string
//     str.replace(0, 1, "Z");  // Replaces the first character with "Z"
//     cout << "String after replacement: " << str << endl;

//     return 0;
// }
