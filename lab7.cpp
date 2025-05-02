#include <iostream>
using namespace std;

// class Array2D {
// public:
//     int rows;
//     int cols;
//     int** array2d;

//     Array2D() {
//         rows = 0;
//         cols = 0;
//         array2d = nullptr;
//     }

//     Array2D(int rows, int cols) {
//         this->rows = rows;
//         this->cols = cols;
//         array2d = new int*[rows];
//         for (int i = 0; i < rows; i++) {
//             array2d[i] = new int[cols];
//         }
//     }

//     Array2D(const Array2D& other) {
//         rows = other.rows;
//         cols = other.cols;
//         array2d = new int*[rows];
//         for (int i = 0; i < rows; i++) {
//             array2d[i] = new int[cols];
//             for (int j = 0; j < cols; j++) {
//                 array2d[i][j] = other.array2d[i][j];
//             }
//         }
//     }
//     Array2D& operator=(const Array2D& other) {
//         if (this == &other) return *this;  

//         for (int i = 0; i < rows; ++i) delete[] array2d[i];
//         delete[] array2d;

//         rows = other.rows;
//         cols = other.cols;
//         array2d = new int*[rows];
//         for (int i = 0; i < rows; i++) {
//             array2d[i] = new int[cols];
//             for (int j = 0; j < cols; j++) {
//                 array2d[i][j] = other.array2d[i][j];
//             }
//         }

//         return *this;
//     }


//     Array2D operator+(const Array2D& other) {
//         if (rows != other.rows || cols != other.cols) {
//             throw invalid_argument("matrix dimensions aren't equal — program exits!");
//         }
//         Array2D resultArray(rows, cols);
//         for (int row = 0; row < rows; row++) {
//             for (int col = 0; col < cols; col++) {
//                 resultArray.array2d[row][col] = array2d[row][col] + other.array2d[row][col];
//             }
//         }
//         return resultArray;
//     }


//     Array2D operator-(const Array2D& other) {
//         if (rows != other.rows || cols != other.cols) {
//             throw invalid_argument("matrix dimensions aren't equal — program exits!");
//         }
//         Array2D resultArray(rows, cols);
//         for (int row = 0; row < rows; row++) {
//             for (int col = 0; col < cols; col++) {
//                 resultArray.array2d[row][col] = array2d[row][col] - other.array2d[row][col];
//             }
//         }
//         return resultArray;
//     }


//     int* operator[](int row) {
//         return array2d[row];
//     }

//     static void printArray(const Array2D& array) {
//         for (int i = 0; i < array.rows; i++) {
//             cout << "| ";
//             for (int j = 0; j < array.cols; j++) {
//                 cout << array.array2d[i][j] << " ";
//             }
//             cout << "|" << endl;
//         }
//     }

//     bool search(int target) {
//         for (int i = 0; i < rows; i++) {
//             for (int j = 0; j < cols; j++) {
//                 if (array2d[i][j] == target) {
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }

//     ~Array2D() {
//         for (int i = 0; i < rows; ++i) delete[] array2d[i];
//         delete[] array2d;
//     }
// };

// Q3 & 4   
class Employee {
private :
string name;
int id;
string designation;
int salary;
public:
Employee(string n , int id , string des , int salary) :
name(n),id(id),designation(des) , salary(salary) {}
void display() const {
 cout << "Name: " << name << "\nID: " << id
 << "\nDesignation: " << designation
 << "\nSalary: " << salary << endl;
}
friend class Payroll ;
};
class Payroll{
public :
void updateSalary(Employee &e){
 cout << e.name << "'s salary has been increased by 15% " << endl;
 cout << "old salary " <<e.salary << endl;
 e.salary = e.salary + (e.salary * 0.15);
 cout << "new salary " <<e.salary << endl;
}

};



int main() {

// Q3 & 4
    Employee emp("Ali", 101, "Developer", 50000);
    Payroll payroll;
    cout << "Before salary update:" << endl;
    emp.display();
    cout << "\nUpdating salary..." << endl;
    payroll.updateSalary(emp);
    cout << "\nAfter salary update:" << endl;
    emp.display();

    // Q1 & 2
    // Array2D arr1(3, 3);
    // Array2D arr2(3, 3);
    // for (int i = 0; i < 3; ++i) {
    //     for (int j = 0; j < 3; ++j) {
    //         arr1[i][j] = i + j;
    //         arr2[i][j] = i - j;
    //     }
    // }

    // Array2D arr3 = arr1 + arr2;
    // Array2D::printArray(arr3);
    // cout << "Addition above" << endl;

    // Array2D arr4 = arr1;  
    // arr1 = arr2;          
    // Array2D::printArray(arr1);
    // cout << endl;
    // Array2D::printArray(arr2);
    // cout << endl;
    // Array2D::printArray(arr4);
    // cout << endl;

    // Array2D arrsearch(4, 4);
    // int value = 1;
    // for (int i = 0; i < 4; i++) {
    //     for (int j = 0; j < 4; j++) {
    //         arrsearch[i][j] = value++;
    //     }
    // }

    // arrsearch.printArray(arrsearch);
    // int target = 16;
    // if (arrsearch.search(target)) {
    //     cout << "Value " << target << " found in the array!" << endl;
    // } else {
    //     cout << "Value " << target << " not found in the array!" << endl;
    // }

    return 0;
}

