#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <sstream>
#include <algorithm>    
#include <ctime>
#include <map>
#include <set>

using namespace std;


// Q2
// class DynamicStack {
// private:
//     vector<char> stack; 

// public:
    
//     void push(char ch) {
//         stack.push_back(ch);
//     }

    
//     char pop() {
//         if (!stack.empty()) {
//             char top = stack.back();
//             stack.pop_back();
//             return top;
//         }
//         throw out_of_range("Stack is empty!");
//     }

    
//     char peek() {
//         if (!stack.empty()) {
//             return stack.back();
//         }
//     }

    
//     bool isEmpty() const {
//         return stack.empty();
//     }

    
//     void clear() {
//         stack.clear();
//     }

    
//     string reverseWords(const string& sentence) {
//         stringstream ss(sentence);
//         string word, result;

//         while (ss >> word) {
            
//             for (char ch : word) {
//                 push(ch);
//             }

            
//             while (!isEmpty()) {
//                 result += pop();
//             }

//             result += ' '; 
//         }


//         if (!result.empty()) {
//             result.pop_back();
//         }

//         return result;
//     }
// };

// Q3
// void manualSort(vector<int>& vec) {
//     int n = vec.size();
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (vec[j] > vec[j + 1]) {
//                 swap(vec[j], vec[j + 1]);
//             }
//         }
//     }
// }

// void printVector(const vector<int>& vec) {
//     for (int val : vec) {
//         cout << val << " ";
//     }
//     cout << endl;
// }

// Q4
// void retrieveGrade(const map<string, float>& students) {
//     string name;
//     cout << "Enter student name to retrieve grade: ";
//     getline(cin, name);
    
//     auto it = students.find(name);
//     if (it != students.end()) {
//         cout << name << "'s grade: " << it->second << endl;
//     } else {
//         cout << "Student not found.\n";
//     }
// }

// // Function to update grade
// void updateGrade(map<string, float>& students) {
//     string name;
//     cout << "Enter student name to update grade: ";
//     getline(cin, name);

//     auto it = students.find(name);
//     if (it != students.end()) {
//         float newGrade;
//         cout << "Enter new grade for " << name << ": ";
//         cin >> newGrade;
//         cin.ignore();
//         it->second = newGrade;
//         cout << "Grade updated successfully.\n";
//     } else {
//         cout << "Student not found.\n";
//     }
// }

// // Function to delete student
// void deleteStudent(map<string, float>& students) {
//     string name;
//     cout << "Enter student name to delete: ";
//     getline(cin, name);

//     if (students.erase(name)) {
//         cout << "Student deleted successfully.\n";
//     } else {
//         cout << "Student not found.\n";
//     }
// }

// // Function to display all students and grades
// void displayAll(const map<string, float>& students) {
//     if (students.empty()) {
//         cout << "No student records available.\n";
//         return;
//     }

//     cout << "\n--- Student Grades ---\n";
//     for (const auto& pair : students) {
//         cout << pair.first << ": " << pair.second << endl;
//     }
//     cout << "----------------------\n";
// }

int main() {

     // Q5
     set<string> guests;
    string name;
    char choice;

    cout << "=== Party Guest Tracker ===\n";

    do {
        cout << "Enter guest name: ";
        getline(cin, name);

        auto result = guests.insert(name);
        if (!result.second) {
            cout << "This guest is already in the list (duplicate ignored).\n";
        }

        cout << "Do you want to add another guest? (y/n): ";
        cin >> choice;
        cin.ignore();

    } while (tolower(choice) == 'y');

    cout << "\n--- Guest List ---\n";
    for (const auto& guest : guests) {
        cout << guest << endl;
    }

    cout << "------------------\n";
    cout << "Total unique guests: " << guests.size() << endl;



    // Q4
    // map<string, float> students;
    // int choice;

    // while (true) {
    //     cout << "\n==== Student Grade Manager ====\n";
    //     cout << "1. Add student\n";
    //     cout << "2. Retrieve grade\n";
    //     cout << "3. Update grade\n";
    //     cout << "4. Delete student\n";
    //     cout << "5. Display all students\n";
    //     cout << "6. Exit\n";
    //     cout << "Enter your choice: ";

    //     if (!(cin >> choice)) {
    //         cin.clear(); // clear error flags
    //         cin.ignore(1000, '\n'); // discard invalid input
    //         cout << "Invalid input. Please enter a number between 1 and 6.\n";
    //         continue;
    //     }

    //     cin.ignore(); // flush newline

    //     switch (choice) {
    //         case 1: {
    //             string name;
    //             float grade;
    //             cout << "Enter student name: ";
    //             getline(cin, name);
    //             cout << "Enter grade: ";
    //             if (!(cin >> grade)) {
    //                 cin.clear();
    //                 cin.ignore(1000, '\n');
    //                 cout << "Invalid grade input. Must be a number.\n";
    //                 break;
    //             }
    //             cin.ignore();
    //             students[name] = grade;
    //             cout << "Student added successfully.\n";
    //             break;
    //         }
    //         case 2:
    //             retrieveGrade(students);
    //             break;
    //         case 3:
    //             updateGrade(students);
    //             break;
    //         case 4:
    //             deleteStudent(students);
    //             break;
    //         case 5:
    //             displayAll(students);
    //             break;
    //         case 6:
    //             cout << "Exiting program.\n";
    //             return 0;
    //         default:
    //             cout << "Invalid choice. Please try again.\n";
    //     }
    // }



    // Q3
    // int N;
    // cout << "Enter number of integers: ";
    // cin >> N;

    // vector<int> originalVec(N);
    // cout << "Enter " << N << " integers:\n";
    // for (int i = 0; i < N; i++) {
    //     cin >> originalVec[i];
    // }


    // vector<int> manualVec = originalVec;
    // vector<int> stlVec = originalVec;

    // clock_t startManual = clock();
    // manualSort(manualVec);
    // clock_t endManual = clock();

    // double manualTime = double(endManual - startManual) / CLOCKS_PER_SEC;

    // cout << "\nSorted using manual method:\n";
    // printVector(manualVec);
    // cout << "Time taken (manual sort): " << manualTime << " seconds\n";

    // // Measure STL sort time
    // clock_t startSTL = clock();
    // sort(stlVec.begin(), stlVec.end());
    // clock_t endSTL = clock();

    // double stlTime = double(endSTL - startSTL) / CLOCKS_PER_SEC;

    // cout << "\nSorted using STL sort:\n";
    // printVector(stlVec);
    // cout << "Time taken (STL sort): " << stlTime << " seconds\n";
;



    // Q2
    // DynamicStack stackObj;

    // string input;
    // cout << "Enter a sentence: ";
    // getline(cin, input);

    // string reversed = stackObj.reverseWords(input);
    // cout << "Reversed words: " << reversed << endl;



    // Q1
    // string user, password;
    // cout << "Enter username: ";
    // cin >> user;
    // cout << "Enter password: ";
    // cin >> password;

    // try {
    //     if (password.size() < 6) {
    //         throw "Password must be at least 6 characters long.";
    //     }

    //     bool hasDigit = false;
    //     for (char ch : password) {
    //         if (isdigit(ch)) {
    //             hasDigit = true;
    //             break;
    //         }
    //     }

    //     if (!hasDigit) {
    //         throw "Password must contain at least one digit.";
    //     }

    //     cout << "Login successful!" << endl;
    // }
    // catch (const char* msg) {
    //     cout << "Error: " << msg << endl;
    // }

    return 0;
}
