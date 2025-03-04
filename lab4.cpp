#include <iostream>
#include <cstring>
using namespace std;

// class employee{
//     private:
//     char* empname;
//     const int empid;
//     public:
//     employee(const char* name , int id):empid(id){
//         empname = new char; 
//         strcpy(empname, name);
//     }
//     char* getemp(){
//         return empname;
//     }
//     int getEmployeeId() const {
//         return empid;
//     }
//     void display() const{
//         cout<<"ID: "<<empid<<endl<<"NAME: "<<empname<<endl;
//     }
//     void change(const char* name){
//         delete empname;
//         empname = new char; 
//         strcpy(empname, name);
//     }
// };

// class dynamicarray{
//     public:
//     int *array;
//     int size;
//     int capacity;

//     dynamicarray(int s):size(s){
//         size = 0;
//         capacity = size;
//         array = new int[capacity];
//     }
//     void push(int value) {
//         if (size == capacity) {
//             capacity *= 2;  
//             int* newArray = new int[capacity];  
//             for (int i = 0; i < size; i++) {
//                 newArray[i] = array[i];  
//             }
//             delete[] array; 
//             array = newArray;  
//         }
//         array[size] = value;  
//         size++;  
//     }
//     int getsize(){
//         return size;
//     }
// };

// class account{
//     private:
//     double acc_no,acc_bal;
//     int security_code;
//     public:
//     static int count;
//     account(){count++;}
//     void setter(double no,double bal,int code){
//         acc_no = no;
//         acc_bal = bal;
//         security_code = code;
//     }
//     void display(){
//         cout<<"Account number: "<<acc_no<<endl;
//         cout<<"Balance: "<<acc_bal<<endl;
//         cout<<"Code: "<<security_code<<endl;
//     }
//     static void counter(){
//         cout<<"Total accounts created: "<<count<<endl;
//     }

// };
// int account :: count = 0;

// class bank {
//     private:
//         const long long accountNumber;  
//         double balance;
//     public:
//         bank(long long accNum, double bal) : accountNumber(accNum), balance(bal){}

//         void deposit(const double amount) {
//             if (amount > 0) {
//                 balance += amount;
//                 cout << "Deposited " << amount << ". New balance: " << balance << endl;
//             } else {
//                 cout << "Invalid deposit amount!\n";
//             }
//         }
//         void displayAccount() const {
//             cout << "Account Number: " << accountNumber << endl;
//             cout << "Balance: $" << balance << endl;
//         }
//     };

class mercato{
    public:
    const string name;
    int days;
    double rent;
    static double rate;

    mercato(const string n,int d):name(n),days(d),rent(0){}

    void calculaterent(){
        if(days>0 && days<=7){
            rent = rate*days;      
        }
        else if(days>7){
            rent = rate*(days-1);
        }
        else{
            cout<<"Invalid days !!!"<<endl;
        }
    }

    void display() const{
      cout<<"Customer Name: "<<name<<endl;
      cout<<"Days: "<<days<<endl;
      cout<<"Rent: "<<rent<<endl;
    }
};
double mercato :: rate = 1000.85;

int main(){

mercato c1("Kashan Baig",12),c2("John Doe",5);
c1.calculaterent();
c2.calculaterent();
c1.display();
c2.display();

    
    
    // bank myAccount(123456789,89000);
    // myAccount.displayAccount();  
    // myAccount.deposit(1000);
    // myAccount.displayAccount(); 
    
    
    //    account A1,A2,A3;
    //    A1.setter(45673,50000,1234);
    //    A1.display();
    //    A2.setter(3487,100000,5575);
    //    A2.display();
    //    A3.setter(2344,2340000,4010);
    //    A3.display();
    //    account :: counter();
    
    
    // dynamicarray  arr(5);
    //  arr.push(10);
    //  arr.push(20);
    //  arr.push(30);
    //  cout<<"Size is: "<<arr.getsize()<<endl;
    
    
    // employee e1("kashan",178);
    // e1.display();
    // employee e2("Ali",185);
    // e2.display();
    // e2.change("Irfan");
    // e2.display();
    // employee e3("Arsim",205);
    // e3.display();

    return 0;
}