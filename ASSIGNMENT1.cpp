
// Q1

// #include <iostream>
// using namespace std;

// int main() {
    
//     double num1, num2, num3;

    
//     cout << "Enter three numbers: ";
//     cin >> num1 >> num2 >> num3;

//     double maxnum;
        

    
//     if (num1 >= num2 && num1 >= num3) {
//         maxnum = num1;
//     } else if (num2 >= num1 && num2 >= num3) {
//         maxnum = num2;
//     } else {
//         maxnum = num3;
//     }

    
//     cout << "The maximum number is: " << maxnum << endl;

//     return 0;

// }


// Q2
// #include <iostream>
// using namespace std;

// int main() {
//     double number;  

//     cout << "Enter a number: ";
//     cin >> number;

//     if (number > 0) {
//         cout << "The number is positive." << endl;
//     } else if (number < 0) {
//         cout << "The number is negative." << endl;
//     } else {
//         cout << "The number is zero." << endl;
//     }

//     return 0;
// }

// Q3
// #include <iostream>
// using namespace std;

// int main() {
//     int number;

//     // Input from the user
//     cout << "Enter an integer: ";
//     cin >> number;

//     // Check if the number is even or odd
//     if (number % 2 == 0) {
//         cout << number << " is even." << endl;
//     } else {
//         cout << number << " is odd." << endl;
//     }

//     return 0;
// }

// Q4
// #include <iostream>
// using namespace std;

// int main() {
//     int year;

//     // Ask the user to input a year
//     cout << "Enter a year: ";
//     cin >> year;

//     // Check if the year is a leap year
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 

// Q5
// #include <iostream>
// using namespace std;

// int main() {
//     int weekNumber;

//     // Ask the user to input a week number
//     cout << "Enter a week number (1-7): ";
//     cin >> weekNumber;

//     // Print the corresponding weekday
//     switch (weekNumber) {
//         case 1:
//             cout << "Monday" << endl;
//             break;
//         case 2:
//             cout << "Tuesday" << endl;
//             break;
//         case 3:
//             cout << "Wednesday" << endl;
//             break;
//         case 4:
//             cout << "Thursday" << endl;
//             break;
//         case 5:
//             cout << "Friday" << endl;
//             break;
//         case 6:
//             cout << "Saturday" << endl;
//             break;
//         case 7:
//             cout << "Sunday" << endl;
//             break;
//         default:
//             cout << "Invalid week number! Please enter a number between 1 and 7." << endl;
//     }

//     return 0;
// }

// Q6
// #include <iostream>
// using namespace std;

// int main() {
//     int month;

//     // Ask the user to input a month number
//     cout << "Enter a month number (1-12): ";
//     cin >> month;

//     // Determine the number of days in the given month
//     switch (month) {
//         case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//             cout << "31 days" << endl;
//             break;
//         case 4: case 6: case 9: case 11:
//             cout << "30 days" << endl;
//             break;
//         case 2:
//             cout << "28 or 29 days (depending on leap year)" << endl;
//             break;
//         default:
//             cout << "Invalid month number! Please enter a number between 1 and 12." << endl;
//     }

//     return 0;
// }

// Q7
#include <iostream>
using namespace std;

int main() {
    float basicSalary, HRA, DA, grossSalary;

    // Ask the user to input the basic salary
    cout << "Enter the basic salary of the employee: ";
    cin >> basicSalary;

    // Calculate HRA and DA based on the basic salary
    if (basicSalary <= 10000) {
        HRA = 0.2 * basicSalary;
        DA = 0.8 * basicSalary;
    } else if (basicSalary <= 20000) {
        HRA = 0.25 * basicSalary;
        DA = 0.9 * basicSalary;
    } else {
        HRA = 0.3 * basicSalary;
        DA = 0.95 * basicSalary;
    }

    // Calculate gross salary
    grossSalary = basicSalary + HRA + DA;

    // Display the gross salary
    cout << "Gross Salary: " << grossSalary << endl;

    return 0;
}
