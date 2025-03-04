#include <iostream>
using namespace std;

// class base{
//     private: int privateint = 0;
//     protected: int protectedint = 0;
//     public: int publicint = 0;

//     base():privateint(0),protectedint(0),publicint(0){}

//     void set_private(int priv){
//         privateint = priv;
//     }
//     int get_private(){return privateint;}
//     void set_protected(int protect){
//         protectedint = protect;
//     }
//     int get_protected(){return protectedint;}
//     void set_public(int pub){
//         publicint = pub;
//     }
//     int get_public(){return publicint;}
// };
// class publicchild: public base{
//     public:
//     void showAccess(){
//     cout << "PublicChild Access:" << endl;
//         cout << "Cannot access privateInt directly." << endl;
//         cout << "ProtectedInt (via getter): " << get_protected() << endl;
//         cout << "PublicInt (directly): " << publicint << endl;}
// };
// class protectedchild: protected base{
//     public:
//     void showAccess(){
//     cout << "ProtectedChild Access:" << endl;
//         cout << "Cannot access privateInt directly." << endl;
//         cout << "ProtectedInt (via getter): " << get_protected() << endl;
//         cout << "PublicInt (via getter): " << get_public() << endl;}
// };
// class privatechild: private base{
//     public:
//     void showAccess(){
//     cout << "PriavteChild Access:" << endl;
//         cout << "Cannot access privateInt directly." << endl;
//         cout << "ProtectedInt (via getter): " << get_protected() << endl;
//         cout << "PublicInt (via getter): " << get_public() << endl;}
// };

// class teacher{
//     private:
//     string name,institute;
//     int age;
//     public:
//     teacher():name("TBD"),institute("TBD"),age(0){}
//     void setname(string n){name=n;}
//     void setninstitute(string i ){institute=i;}
//     void setage(int a){age=a;}
//     string getname(){return name;}
//     string getinstitute(){return institute;}
//     int getage(){return age;}

// };
// class humanitiesteacher: public teacher{
// public:
// string department;
// string coursname;
// string designation;

// humanitiesteacher():department("Humanities"),coursname("TBD"),designation("TBD"){};
// humanitiesteacher(string course,string desig):department("Humanities"){
//     coursname = course;
//     designation = desig;
// }
// void display(){
//     cout<<"Name: "<<getname()<<"  Institute: "<<getinstitute()<<"  Age: "<<getage()<<endl;
//     cout<<"Department: "<<department<<"  Course Name: "<<coursname<<"  Designation: "<<designation<<endl;
// }
// };
// class mathsteacher: public teacher{
//     public:
//     string department;
//     string coursname;
//     string designation;
    
//     mathsteacher():department("Maths"),coursname("TBD"),designation("TBD"){};
//     mathsteacher(string course,string desig):department("Maths"){
//         coursname = course;
//         designation = desig;
//     }
//     void display(){
//         cout<<"Name: "<<getname()<<"  Institute: "<<getinstitute()<<"  Age: "<<getage()<<endl;
//         cout<<"Department: "<<department<<"  Course Name: "<<coursname<<"  Designation: "<<designation<<endl;
//     }
//     };
//     class scienceteacher: public teacher{
//         public:
//         string department;
//         string coursname;
//         string designation;
        
//         scienceteacher():department("Science"),coursname("TBD"),designation("TBD"){};
//         scienceteacher(string course,string desig):department("Science"){
//             coursname = course;
//             designation = desig;
//         }
//         void display(){
//             cout<<"Name: "<<getname()<<"  Institute: "<<getinstitute()<<"  Age: "<<getage()<<endl;
//             cout<<"Department: "<<department<<"  Course Name: "<<coursname<<"  Designation: "<<designation<<endl;
//         }
//         };

// class weapon{
//     public: 
//     void weapondesription(){
//         cout << "Weapons are used for defense and offense in combat." << endl;
//     }
// };
// class Hotweapons: public weapon{
//     public:
//     void hotweaponsdescription(){
//         cout << "Hot weapons use gunpowder or explosives to function." << endl;
//     }
// };
// class Bomb: public Hotweapons{
//     public:
//     void BombsDescription() {
//         cout << "Bombs blow up and cause destruction." << endl;
//     }
// };
// class nuclearbomb: public Bomb{
//     public:
//     void NuclearBombsDescription() {
//         cout << "Nuclear bombs blow up and use nuclear fission and fusion for massive destruction." << endl;
//     }
// };

class item {
    public:
        string name;
        int quantity;
    
        item(string n, int q) : name(n), quantity(q) {}
    
        void display() {
            cout << "Item name: " << name << " | Quantity: " << quantity << endl;
        }
    };
    
    class bakedgoods : public item {
    public:
        double discount = 0.9;
        bakedgoods(string n, int q) : item(n, q) {}
    };
    
    class cakes : public bakedgoods {
    public:
        double price = 600;
        cakes(int q) : bakedgoods("Cake", q) {}
    
        double calc() {
            return quantity * price * discount;  // Don't modify `price`
        }
    
        void display() {
            cout << " | Category: Cake | Price per item: " << price << " | Discount: 10% | Total: " << calc() << endl;
        }
    };
    
    class bread : public bakedgoods {
    public:
        double price = 200;
        bread(int q) : bakedgoods("Bread", q) {}
    
        double calc() {
            return quantity * price * discount;  // Don't modify `price`
        }
    
        void display() {
            cout << " | Category: Bread | Price per item: " << price << " | Discount: 10% | Total: " << calc() << endl;
        }
    };
    
    class drinks : public item {
    public:
        double price = 100;
        double discount = 0.95;
    
        drinks(int q) : item("Drink", q) {}
    
        double calcdrinks() {
            return quantity * price * discount;  // Don't modify `price`
        }
    
        void display() {
            cout << " | Category: Drinks | Price per item: " << price << " | Discount: 5% | Total: " << calcdrinks() << endl;
        }
    };
    
    int main() {
        int cakeQty, breadQty, drinkQty;
        cout << "Enter quantity of cakes: ";
        cin >> cakeQty;
        cout << "Enter quantity of bread: ";
        cin >> breadQty;
        cout << "Enter quantity of drinks: ";
        cin >> drinkQty;
    
        cakes cake(cakeQty);
        bread bread(breadQty);
        drinks drink(drinkQty);
    
        cout << "\nBill Summary:\n";
        cake.display();
        bread.display();
        drink.display();
    
        double totalBill = cake.calc() + bread.calc() + drink.calcdrinks();
        cout << "\nTotal Bill: " << totalBill << "\n";
    



    
    // nuclearbomb n1;
        // n1.weapondesription();
        // n1.hotweaponsdescription();
        // n1.BombsDescription() ;
        // n1.NuclearBombsDescription();
    
    //humanitiesteacher h1;
    // h1.display();
    // mathsteacher m1("Calculas","Professor");
    // m1.setname("Kashan");
    // m1.setninstitute("NED");
    // m1.setage(28);
    // m1.display();
    // scienceteacher s1("Biology","Lecturer");
    // s1.display();/ 
    
    // publicchild p1;
    // p1.set_private(10);
    // p1.set_protected(15);
    // p1.set_public(5);
    // p1.showAccess();
    // protectedchild pt1;
    // pt1.showAccess();
    // privatechild pr1;
    // pr1.showAccess();
    return 0;
}