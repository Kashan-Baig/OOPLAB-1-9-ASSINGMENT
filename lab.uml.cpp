#include <iostream>
using namespace std;

// class bank{
//     public:
//     void addaccount(){ cout<<"ACCOUNT ADDED"<<endl;}
//     void removeaccount(){cout<<"ACCOUNT REMOVED"<<endl;}
//     void addclient(){cout<<"CLIENT ADDED"<<endl;}
//     void removeclient(){cout<<"CLIENT REMOVED"<<endl;}
//     void credit(){cout<<"AMOUNT CREDITED"<<endl;}
//     void debit(){cout<<"AMOUNT DEBIT"<<endl;}
// };
// class account{
//     private:
//     int number ;
//     int balance ;

//     public:
//     account(int num, double bal = 0) : number(num), balance(bal) {}
//     void credit(int value){balance+=value;}
//     void debit(int value){balance+=value;}
//     int getnumber(){return number;}
//     int getbalance(){return balance;}
// };
// class client{
//     private:
//     string name,address;
//     int id;
//     public:
//     client(string n,string a,int ID):name(n),address(a),id(ID){}
//     string getname(){return name;}
//     string getaddress(){return address;}
//     int getid(){return id;}
// };
// class Saving : public account {
//     private:
//         double interestRate;
    
//     public:
//         Saving(int num, double bal, double interest) : account(num, bal), interestRate(interest) {}
    
//         void interest() {
//             cout<<"INTEREST!!!!!"<<endl;
//         }
//     };

// class person{
//     public:
//     string name,phonenumber,emailaddress;
//     person():name(" "),phonenumber(" "),emailaddress(" "){}
//     person(string n,string p,string ea):name(n),phonenumber(p),emailaddress(ea){}
//     void purchaseparkingpass(){

//     }
// };
// class student: public person{
//     public:
//     int studentnumber,averagemarks;
//     student(int num,int marks):person(name,phonenumber,emailaddress),studentnumber(num),averagemarks(marks){}
//     bool iseligabletoenroll(string str){}
//     int getseminarstaken(){}
// };
// class professor: public person{
//     private:
//     int yearsofservice;
//     protected:
//     int staffnumber;
//     public:
//     int salary,numberofclasses;

//     professor(int s,int staff,int sal,int nof):person(name,phonenumber,emailaddress),yearsofservice(s),staffnumber(staff),salary(sal),numberofclasses(nof){}
// };
// class address: public person{
//     public:
//     string street,city,state,country;
//     int postalcode;
//     string outputasllabel(){}
//     private:
//     bool validate(){}
// };

int main(){

    // bank b;
    // account a(101, 500);  
    // Saving s(102, 1000, 5); 
    // client c("Kashan", "ABC-127/8", 123);

    // b.addaccount();
    // s.interest();

    // cout << "Client Address: " << c.getaddress() << endl;
    // cout << "Saving Account Balance: " << s.getbalance() << endl;
    

    return 0;
}