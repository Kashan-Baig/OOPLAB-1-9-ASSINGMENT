#include <iostream>
using namespace std;


class Bank{
    private:
    double balance;
    int transactions;
public:
Bank(double initbalance = 0){
    balance = initbalance;
    transactions = 0;
}
void deposit(double amount){
    if(amount>0){
        balance+=amount;
        transactions++;
        cout<<"Deposited amount = "<<amount<<endl;
        cout<<"New balance = "<<balance<<endl;
    }
    else{
       cout<<"Inappropriate amount !!!"<<endl;
    }
}
void withdrawl(double amount){
    if(amount>0 && amount<=balance){
        balance-=amount;
        transactions++;
        cout<<"Withdrawl amount = "<<amount<<endl;
    }
    else{
       cout<<"Inappropriate amount !!!"<<endl;
    }
}
double getbalance(){
    return balance;
}
double gettransaction(){
    return transactions;
}
};


int choose(Bank &b1){
    int choice;
    double deposit,withdrwal;
    while(true){
    cout<< "MENU: "<<endl<<endl;
    cout<<"1. Display the account balance"<<endl<<"2. Display the number of transactions"<<endl<<"3. Display interest earned for this period "<<endl;
    cout<<"4. Make a deposit "<<endl<<"5. Make a withdrawal"<<endl<<"6. Exit the program"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    if(choice ==1){
        cout<<"Current account balance = "<<b1.getbalance()<<endl;
    }
    else if(choice == 2){
        cout<< "total transactions made = "<<b1.gettransaction()<<endl;
    }
    else if(choice == 3){
        double interest = b1.getbalance()*0.05;
        cout<<"Your interest on "<<b1.getbalance()<<" = "<<interest<<endl;
        cout << "New amount = "<< b1.getbalance()+interest<<endl;
    }
    else if(choice == 4){
        cout<<"Enter amount deposit = "<<endl;
        cin>>deposit;
        b1.deposit(deposit);
        cout<<"Your current balance = "<<b1.getbalance()<<endl;
    }
    else if(choice == 5){
        cout<<"Enter amount withdrwal = "<<endl;
        cin>>withdrwal;
        b1.withdrawl(withdrwal);  
        cout<<"Your current balance = "<<b1.getbalance()<<endl;
    }
    else if(choice == 6){return 0;}
    }
};

int main(){
    Bank b1(100000);
    choose(b1);
    
    return 0;
}
// class student{
//     public:
//     int rollnum;
//     string name;
//     int semester;
//     char section;

//     void display(){
//         cout<<"Roll num -> "<<rollnum<<", Name-> "<<name<<", Semester-> "<<semester<<", section-> "<<section<<endl;
//     }
// };

//     student s[4] = {
//         {178, "Kashan Baig", 1, 'D'},
//         {205, "Ali Ahmed", 1, 'A'},
//         {56, "Saqlain", 2, 'B'},
//         {125, "Samar", 1, 'A'}
//     };
//    cout<<"Students in Section A are: "<<endl<<endl;

//    for(int i=1;i<5;i++){
//     if(s[i].section=='A'){
//         s[i].display(); 
//      }
//    }
