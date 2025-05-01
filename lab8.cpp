#include <iostream>
#include <string>

using namespace std;


// Q4
// class Media {
// protected:
//     string title;
//     bool isBorrowed;

// public:
//     Media(const string& title) : title(title), isBorrowed(false) {}

//     void borrow() {
//         if (!isBorrowed) {
//             isBorrowed = true;
//             cout << title << " has been borrowed." << endl;
//         } else {
//             cout << title << " is already borrowed." << endl;
//         }
//     }

//     void returnMedia() {
//         if (isBorrowed) {
//             isBorrowed = false;
//             cout << title << " has been returned." << endl;
//         } else {
//             cout << title << " was not borrowed." << endl;
//         }
//     }

//     virtual void displayInfo() const {
//         cout << "Title: " << title << endl;
//         cout << "Status: " << (isBorrowed ? "Borrowed" : "Available") << endl;
//     }

//     virtual ~Media() {}
// };

// class Book : public Media {
// private:
//     string author;

// public:
//     Book(const string& title, const string& author) 
//         : Media(title), author(author) {}

//     void displayInfo() const override {
//         cout << "=== Book Information ===" << endl;
//         Media::displayInfo();
//         cout << "Author: " << author << endl;
//         cout << "..." << endl;
//     }
// };

// class Magazine : public Media {
// private:
//     int issueNumber;

// public:
//     Magazine(const string& title, int issueNumber) 
//         : Media(title), issueNumber(issueNumber) {}

//     void displayInfo() const override {
//         cout << "=== Magazine Information ===" << endl;
//         Media::displayInfo();
//         cout << "Issue Number: " << issueNumber << endl;
//         cout << "..." << endl;
//     }
// };

// class DVD : public Media {
// private:
//     string director;

// public:
//     DVD(const string& title, const string& director) 
//         : Media(title), director(director) {}

//     void displayInfo() const override {
//         cout << "=== DVD Information ===" << endl;
//         Media::displayInfo();
//         cout << "Director: " << director << endl;
//         cout << "..." << endl;
//     }
// };

// Q1
// class Vehicle{
//     private:
//     string type,make,model,color;
//     int year;
//     double milesdrive;

//     public:
//     Vehicle(string t,string mk,string mo,string c,int y,double drive):type(t),make(mk),model(mo),color(c),year(y),milesdrive(drive){}
//     virtual void display(){
//         cout <<"Type : " << type <<"\nMake : " << make <<"\nModel : " << model <<"\nColor : "
//         << color << "\nYear : " << year << "\nMiles Driven : " << milesdrive << endl;	
//     }
// };
// class ElecticVehicle : virtual public Vehicle{
//     protected:
//     double energystore;
//     public:
//     ElecticVehicle(string t,string mk,string mo,string c,int y,double d,double energy):Vehicle(t, mk, mo, c, y, d),energystore(energy){}
//     void display()override{
//         Vehicle::display();
//         cout<< "Energy Storage: " << energystore << endl;
//         }
		
// };
// class GasVehicle : virtual public Vehicle{
//     protected:
//     double fuelsize;
//     public:
//     GasVehicle(string t,string mk,string mo,string c,int y,double d,double s):Vehicle(t, mk, mo, c, y, d),fuelsize(s){}
//     void display()override{
//         Vehicle::display();
//         cout<< "Fuel Tank Size: " << fuelsize << endl;
//         }
// };
// class HeavyVehicle: public GasVehicle, public ElecticVehicle{
//     private:
//     double maxweight,numberofwheels;
//     int length;
//     public:
//     HeavyVehicle(string t,string mk,string mo,string c,int y,double d,double energy,double s,double max,double num,int l): Vehicle(t, mk, mo, c, y, d),
//     GasVehicle( t, mk, mo, c, y, d, s),ElecticVehicle( t, mk, mo, c, y, d, energy),maxweight(max),numberofwheels(num),length(l){}
//     void display() override {
//         Vehicle::display();
//         cout << "Energy Storage: " << ElecticVehicle::energystore << endl;
//         cout << "Fuel Tank Size: " << GasVehicle::fuelsize << endl;
//         cout << "Max Weight: " << maxweight << "\nNumber of Wheels: " << numberofwheels
//              << "\nLength: " << length << endl;
//     }
// };
// class HighPerformance: public GasVehicle{
//     protected:
//     int horsepower;
//     float topspeed;
//     public:
//     HighPerformance(string t,string mk,string mo,string c,int y,double d,double s,int hp,float speed): Vehicle(t, mk, mo, c, y, d),
//     GasVehicle( t, mk, mo, c, y, d, s),horsepower(hp),topspeed(speed){}
//     void display() override {
//        GasVehicle::display();
//         cout << "Top Speed: " << topspeed<<"  Horse Power: "<<horsepower << endl;
//     }
// };
// class sportscar: public HighPerformance{
//     private:
// 		string gearbox, drivesystem;
//     public:
//     sportscar(string t,string mk,string mo,string c,int y,double d,double s,int hp,float speed,string gear,string drsys): 
//     HighPerformance( t, mk, mo, c, y, d, s, hp, speed),gearbox(gear), Vehicle(t, mk, mo, c, y, d),drivesystem(drsys){};
//     void display()override{
//         HighPerformance::display();
//         cout<<"GearBox: "<<gearbox<<"  Drive System: "<<drivesystem<<endl;
//     }
// };
// class constructiontruck: public HeavyVehicle{
//     private:
//     string cargo;
//     public:
//     constructiontruck(string t,string mk,string mo,string c,int y,double d,double energy,double s,double max,double num,int l,string cargoo):
//     HeavyVehicle( t, mk, mo, c, y, d, energy, s, max, num, l), Vehicle(t, mk, mo, c, y, d),cargo(cargoo){}
//     void display()override{
//         HeavyVehicle::display();
//         cout<<"Crgo Type: "<<cargo<<endl;
//     }
// };
// class Bus: public HeavyVehicle{
//     private:
//     int noofseats;
//     public:
//     Bus(string t,string mk,string mo,string c,int y,double d,double energy,double s,double max,double num,int l,int numberseat):
//     HeavyVehicle( t, mk, mo, c, y, d, energy, s, max, num, l), Vehicle(t, mk, mo, c, y, d),noofseats(numberseat){}
//     void display()override{
//         HeavyVehicle::display();
//         cout<<"Number of seats: "<<noofseats<<endl;
//     }
// };

// Q2
// class Character{
//     protected:
//     string name;
//     int level;
//     double health;
//     public:
//     Character(string n,int l,double h):name(n),level(l),health(h){}
//     virtual void display(){
//         cout<<"Name: "<<name<<"\nLevel: "<<level<<"\nHealth: "<<health<<endl;
//     }

// };
// class Warrior:virtual public Character{
//     protected:
//     int strenght;
//     double melee;
//     public:
//     Warrior(string n,int l,double h,int s,double m):Character( n, l, h),strenght(s),melee(m){}
//     void SlashAbility(){cout<<"Warrior slashes with their sword, dealing heavy melee damage!"<<endl;}
//     void display()override{
//         Character::display();
//         cout<<"Strenght: "<<strenght<<" Melee: "<<melee<<endl;
//         SlashAbility();
//     }
// };
// class Mage:virtual public Character{
//     protected:
//     int intelligence;
//     double spellCastingProficiency;
//     public:
//     Mage(string n,int l,double h,int i,double scp):Character( n, l, h),intelligence(i),spellCastingProficiency(scp){}
//     void fireballAbility(){
//         cout<< "Mage casts a fireball, burning enemies!"<<endl;
//     }
//     void display()override{
//         Character::display();
//         cout<<"Intelligence: "<<intelligence<<" Spell Casting Profieciency: "<<spellCastingProficiency<<endl;
//         fireballAbility();
//     }
// };
// class Archer:public Character{
//     protected:
//     int dexterity;
//     double rangedProficiency;
//     public:
//     Archer(string n,int l,double h,int d,double rp):Character( n, l, h),dexterity(d),rangedProficiency(rp){}
//     void rapidShotAbility(){

// Q3
    class Account {
        protected:
            double balance;
        public:
            Account(double b) : balance(b) {}
            virtual double deposit() = 0;  
            virtual double withdraw() = 0; 
            double checkbalance() { return balance; }
        };
        
        class interestAcc : virtual public Account {
        protected:
            double interest;
        public:
            interestAcc(double b) : Account(b), interest(0.13) {}
            double deposit() override {
                balance += balance * interest;
                return balance;
            }
            double withdraw() override {
                
                return balance;
            }
        };
        
        class ChargingAcc : virtual public Account {
        protected:
            double Fee;
        public:
            ChargingAcc(double b) : Account(b), Fee(25) {}
            double withdraw() override {
                balance -= Fee;
                return balance;
            }
            double deposit() override {
                
                return balance;
            }
        };
        
        class ACI : public ChargingAcc, public interestAcc {
            public:
              
                ACI(double b) : Account(b),ChargingAcc(b), interestAcc(b) {}
            
                double deposit() override {
                   
                    balance += balance * interest;
                    return balance;
                }
            
                double withdraw() override {
                   
                    balance -= Fee;
                    return balance;
                }
            
                double transfer(double money, Account &obj) {
                    return money + obj.checkbalance();
                }
            
                double transfer(double money, interestAcc &obj) {
                    return money + obj.checkbalance();
                }
            
                double transfer(double money, ChargingAcc &obj) {
                    return money + obj.checkbalance();
                }
            };
        
        int main() {
            interestAcc iAcc(1000);
            ChargingAcc cAcc(800);
            ACI combinedAcc(2000);
        
            cout << "Initial Balances:\n";
            cout << "InterestAcc: " << iAcc.checkbalance() << endl;
            cout << "ChargingAcc: " << cAcc.checkbalance() << endl;
            cout << "ACI: " << combinedAcc.checkbalance() << endl;
        
            cout << "\nDeposit in interestAcc:\n";
            cout << "Returned: " << iAcc.deposit() << endl;
        
            cout << "\nWithdraw from chargingAcc:\n";
            cout << "Returned: " << cAcc.withdraw() << endl;
        
            cout << "\nTransfer from ACI to interestAcc:\n";
            cout << "Returned: " << combinedAcc.transfer(500, iAcc) << endl;
        
            cout << "\nTransfer from ACI to chargingAcc:\n";
            cout << "Returned: " << combinedAcc.transfer(300, cAcc) << endl;

//     }
//     void display()override{
//         Character::display();
//         cout<<"Dexterity: "<<dexterity<<" Ranged Profieciency: "<<rangedProficiency<<endl;
//         rapidShotAbility();
//     }
// };
// class NPC:public Character{
//     protected:
//     string dialogue,movementPattern;
//     public:
//     NPC(string n,int l,double h,string d,string mp):Character( n, l, h),dialogue(d),movementPattern(mp){}
//     void display()override{
//         Character::display();
//         cout<<"Dialogue: "<<dialogue<<"\nMovement Pattern: "<<movementPattern<<endl;
//     }
// };
// class Mighty: public Warrior,public Mage{
//     public:
//     Mighty(string n,int l,double h,int s,double m,int i,double scp):Character( n, l, h), Mage( n, l, h, i, scp), Warrior( n, l, h, s, m){}
//     void display()override{
//         Warrior::display();
//         cout<<"Intelligence: "<<intelligence<<" Spell Casting Profieciency: "<<spellCastingProficiency<<endl;
//         fireballAbility();
//     }
// };


// Q3


// Q2
// Archer a("Legolas", 11, 130.0, 85, 0.92);
// NPC npc("Shopkeeper", 1, 100.0, "Welcome, traveler!", "Walks around the market");
// Mighty mighty("Arthas", 15, 200.0, 90, 0.88, 92, 0.93);
// cout << "\n----- Archer -----" << endl;
// a.display();

// cout << "\n----- NPC -----" << endl;
// npc.display();

// cout << "\n----- Mighty (Warrior + Mage) -----" << endl;
// mighty.display();


// Q1
// Bus b("Bus", "toyota", "Citaro", "black", 2020, 40000, 98, 60000, 19000, 7, 15.5, 80);
// b.display();




    // Q4
    // Book book("The C++ Programming Language", "alis");
    // Magazine magazine("National Geographic", 245);
    // DVD dvd("Inception", "Christopher Nolan");

    // // Test functionality
    // cout << "\nTesting Book:" << endl;
    // book.displayInfo();
    // book.borrow();
    // book.borrow(); // Try to borrow again
    // book.returnMedia();

    // cout << "\nTesting Magazine:" << endl;
    // magazine.displayInfo();
    // magazine.borrow();
    // magazine.returnMedia();

    // cout << "\nTesting DVD:" << endl;
    // dvd.displayInfo();
    // dvd.borrow();
    // dvd.returnMedia();

    return 0;
}