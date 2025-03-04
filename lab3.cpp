#include <iostream>
using namespace std;

// class complex{
//     public:
//     double* real;
//     double* imaginary;

//     complex(double r,double i){
//         real = new double(r);
//         imaginary = new double(i);
//     }

//     complex(const complex& obj ){
//         real = new double (*obj.real);
//         imaginary = new double (*obj.imaginary);
//     }

//     void display()const{
//         cout<<"Complex: "<<*real<<" + "<<*imaginary<<"i"<<endl;
//     }
//     ~complex(){
//        delete real;
//        delete imaginary;
//     }
// };

// class character{
//     private:
//     double* attackpower;
//     double* defence;
//     double* health;
//     public:
//     character(){
//     attackpower = new double(200);
//     defence = new double(120);
//     health = new double(100);
//     }
//     character(double attack,double def,double heal){
//         attackpower = new double(attack);
//         defence = new double(def);
//         health = new double(heal);
//     }
//     character(const character & obj){
//         attackpower = new double (*(obj.attackpower));
//         defence = new double (*(obj.defence));
//         health = new double (*(obj.health));
//     }

//     void setattack(double attack){*attackpower = attack;}
//     void setdef(double def){*defence = def;}
//     void setheal(double heal){*health = heal;}
//     double getattack()const{return *attackpower;}
//     double getdef()const{return *defence;}
//     double getheal()const{return *health;}

//     ~character(){
//         delete attackpower;
//         delete defence;
//         delete health;
//     }
//     void display(){
//         cout<<"1) Attack Power: "<<getattack()<<endl;
//         cout<<"2) Defence: "<<getdef()<<endl;
//         cout<<"3) Health: "<<getheal()<<endl;
//     }

// };

// class toolboth{
//     public:
//     int number; // total number of cars
//     double money; //total amount of money collected

//     toolboth():number(0),money(0){} 
//     void payingcar(int car){
//         number= number + car;
//         money=money+(car*0.5);
//     }
//     void display(){
//         cout<<"Total number of cars: "<<number<<endl;
//         cout<<"Total money collected: "<<money<<"$"<<endl;
//     }

// };

class bookType {
    private:
        string title;
        string authors[4];  
        int authorCount;
        string publisher;
        string ISBN;
        double price;
        int copies;
    
    public:
        bookType() : title(""), publisher(""), ISBN(""), price(0), copies(0), authorCount(0) {}
    
        bookType(string t, string a[], int aCount, string pub, string isbn, double pr, int stock) {
            title = t;
            publisher = pub;
            ISBN = isbn;
            price = pr;
            copies = stock;
            authorCount = (aCount > 4) ? 4 : aCount; 
    
            for (int i = 0; i < authorCount; i++) {
                authors[i] = a[i];
            }
        }
    
  
        void setTitle(string t) { title = t; }
        string getTitle() { return title; }
    
        void setAuthors(string a[], int aCount) {
            authorCount = (aCount > 4) ? 4 : aCount;
            for (int i = 0; i < authorCount; i++) {
                authors[i] = a[i];
            }
        }
    
        void getAuthors() {
            cout << "Authors: ";
            for (int i = 0; i < authorCount; i++) {
                cout << authors[i];
                if (i < authorCount - 1) cout << ", ";
            }
            cout << endl;
        }
    
        void setPublisher(string p) { publisher = p; }
        string getPublisher() { return publisher; }
    
        void setPrice(double pr) { price = pr; }
        double getPrice() { return price; }
    
        void setISBN(string isbn) { ISBN = isbn; }
        string getISBN() { return ISBN; }
    
        void setCopies(int c) { copies = c; }
        int getCopies() { return copies; }
    
        
        void updateCopies(int num, bool add) {
            if (add)
                copies += num;
            else if (copies >= num)
                copies -= num;
            else
                cout << "Not enough copies to remove!" << endl;
        }
    
        void display() const {
            cout << "Title: " << title << endl;
            cout << "Publisher: " << publisher << endl;
            cout << "ISBN: " << ISBN << endl;
            cout << "Price: $" << price << endl;
            cout << "Stock: " << copies << " copies" << endl;
            cout << "Authors: ";
            for (int i = 0; i < authorCount; i++) {
                cout << authors[i];
                if (i < authorCount - 1) cout << ", ";
            }
            cout << endl;
        }
    };
    

    void searchByTitle(bookType books[], int size, string title) {
        for (int i = 0; i < size; i++) {
            if (books[i].getTitle() == title) {
                cout << "Book Found!\n";
                books[i].display();
                return;
            }
        }
        cout << "Book Not Found!" << endl;
    }
    
    void searchByISBN(bookType books[], int size, string isbn) {
        for (int i = 0; i < size; i++) {
            if (books[i].getISBN() == isbn) {
                cout << "Book Found!\n";
                books[i].display();
                return;
            }
        }
        cout << "Book Not Found!" << endl;
    };
    

    int main() {
  
        string authors1[] = {"J.K. Rowling"};
        string authors2[] = {"George Orwell", "John Doe"};
        string authors3[] = {"Stephen King", "Jane Doe", "Michael Crichton"};
    
        bookType books[3] = {
            bookType("Harry Potter", authors1, 1, "Bloomsbury", "1234", 39.99, 50),
            bookType("1984", authors2, 2, "Secker & Warburg", "0987", 29.99, 30),
            bookType("The Shining", authors3, 3, "Doubleday", "1111", 25.99, 20)
        };
    
        for (int i = 0; i < 3; i++) {
            cout << "Book " << i + 1 << " Details:\n";
            books[i].display();
            cout << "-----------------------------\n";
        }
    
        cout << "\nSearching for '1984'...\n";
        searchByTitle(books, 3, "1984");
    
        cout << "\nSearching for ISBN '1234'...\n";
        searchByISBN(books, 3, "1234");
    
        cout << "\nUpdating stock for 'The Shining'...\n";
        books[2].updateCopies(5, true); 
        books[2].display();
    
    
    
    
    
    // toolboth car;
    // car.display();
    // car.payingcar(5);
    // car.display();
    // car.payingcar(3);
    // car.display();
    
    // character c1,c2(500,400,200),c3,c4;
    // cout<<"Default: "<<endl;
    // c1.display();
    // cout<<"Parameterized: "<<endl;
    // c2.display();
    // c3 = c2;
    // cout<<"Copy: "<<endl;
    // c3.display();
    // c4.setattack(400);
    // c4.setdef(200);
    // c4.setheal(230);
    // cout<<"Modifiable: "<<endl;
    // c4.display();


//  complex c1(3.5,2.5);
//  complex c2 = c1;
//  c1.display();
//  c2.display();

    return 0;
}