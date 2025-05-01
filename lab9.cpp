#include <iostream>
using namespace std;


// Q1
// class ArrayMultiplier {
// protected:
// public:
//     virtual void calculate() = 0;
//     virtual ~ArrayMultiplier() {}
// };

// class ArrayMultiplier1D : public ArrayMultiplier {
// protected:
//     int* array;
//     int size;
//     int multiplier;
// public:
//     ArrayMultiplier1D(int* a, int s, int m) {
//         size = s;
//         multiplier = m;
//         array = new int[size];
//         for (int i = 0; i < size; i++) {
//             array[i] = a[i];
//         }
//     }

//     void calculate() override {
//         cout << "1D Array after multiplication:" << endl;
//         for (int i = 0; i < size; i++) {
//             array[i] *= multiplier;
//             cout << array[i] << " ";
//         }
//         cout << endl;
//     }

//     ~ArrayMultiplier1D() {
//         delete[] array;
//     }
// };

// class ArrayMultiplier2D : public ArrayMultiplier {
// protected:
//     int** array;
//     int rows, cols;
//     int multiplier;
// public:
//     ArrayMultiplier2D(int** a, int r, int c, int m) {
//         rows = r;
//         cols = c;
//         multiplier = m;
//         array = new int*[rows];
//         for (int i = 0; i < rows; i++) {
//             array[i] = new int[cols];
//             for (int j = 0; j < cols; j++) {
//                 array[i][j] = a[i][j];
//             }
//         }
//     }

//     void calculate() override {
//         cout << "2D Array after multiplication:" << endl;
//         for (int i = 0; i < rows; i++) {
//             for (int j = 0; j < cols; j++) {
//                 array[i][j] *= multiplier;
//                 cout << array[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }

//     ~ArrayMultiplier2D() {
//         for (int i = 0; i < rows; i++) {
//             delete[] array[i];
//         }
//         delete[] array;
//     }
// };

// Q2
// class Store{
//     public:
//     virtual double billafterdisc()=0;
// };
// class Imtiaz : public Store{
//     protected:
//     double totalbill;
//     double discount;
//     public:
//     Imtiaz(double bill):totalbill(bill),discount(7){}
//     double billafterdisc()override{
//         double newbill = totalbill-(totalbill*(discount/100));
//         return newbill;
//     }
// };
// class BinHashim : public Store{
//     protected:
//     double totalbill2;
//     double discount2;
//     public:
//     BinHashim(double bill):totalbill2(bill),discount2(5){}
//     double billafterdisc()override{
//         double newbill = totalbill2-(totalbill2*(discount2/100));
//         return newbill;
//     }
// };

//  Q3
// class Vehicle{
//     protected:
//     string brand,model;
//     int carID;
//     public:
//     Vehicle(int id, string brand,string model){}
//     virtual bool isAvaialable()=0;
//     virtual void rent()=0;
// };
// class Car : public Vehicle{
//     public:
//     bool available;
//     Car(int id, string brand, string model) : Vehicle(id, brand, model) {
//         available = true;}
//     bool isAvaialable()override{
//         return available;
//     }
//     void rent()override{
//         available = false;
//     }
// };
// class RentalSystem{
//     public:
//     void rentVehicle(Vehicle* v){
//         if (v->isAvaialable()){
//             v->rent();
//             cout<<"Vehicle Rented Successfully."<<endl;
//         }
//         else{cout<<"Vehicle Renting Failure."<<endl;}
//     }
//     void returnVehicle(Vehicle* v){
//         Car* car = dynamic_cast<Car*>(v);
//         if (car) {
//             car->available = true;
//             cout << "Vehicle returned successfully.\n";
//         }
//     }

// };
// class Customer{
//     public:
//     void rentVehicle(Vehicle* v, RentalSystem* r) {
//         r->rentVehicle(v);
//     }
//     void returnVehicle(Vehicle* v, RentalSystem* r) {
//         r->returnVehicle(v);
//     }
// };

// class EncyptionTechnique{
//     public:
//     string str;
//     string result;
//     EncyptionTechnique(string s):str(s),result(""){}
//     virtual void encrypt()=0;
// };
// class EncyptionTechnique1 : public EncyptionTechnique{
//     public:
//     EncyptionTechnique1(string s):EncyptionTechnique(s){}
//     void encrypt()override{
//         for (char ch : str) {
//             int ascii = (int)ch;
//             result += to_string(ascii);
//         }
//         cout<<"Encrypted by Tech 1: "<<result<<endl;
//     }
// };
// class EncyptionTechnique2 : public EncyptionTechnique{
//     public:
//     EncyptionTechnique2(string s):EncyptionTechnique( s){}
//     void encrypt()override{
//         for (char ch : str) {
//             int ascii = (int)ch;
//             result += to_string(ascii+2);
//         }
//         cout<<"Encrypted by Tech 2: "<<result<<endl;
//     }
// };

// Q5

class EncyptionTechnique {
public:
    string str;
    string result;
    EncyptionTechnique(string s) : str(s), result("") {}
    virtual void encrypt() = 0;
    virtual void decrypt() = 0;
};

class EncyptionTechnique1 : public EncyptionTechnique {
public:
    EncyptionTechnique1(string s) : EncyptionTechnique(s) {}
    void encrypt() override {
        for (char ch : str) {
            int ascii = (int)ch;
            result += to_string(ascii);
        }
        cout << "Encrypted by Tech 1: " << result << endl;
    }
    void decrypt() override {
        string decrypted = "";
        for (size_t i = 0; i < result.length(); ) {
            string numStr = result.substr(i, 2);
            int ascii = stoi(numStr);
            decrypted += (char)ascii;
            i += 2;
        }
        cout << "Decrypted by Tech 1: " << decrypted << endl;
    }
};

class EncyptionTechnique2 : public EncyptionTechnique {
public:
    EncyptionTechnique2(string s) : EncyptionTechnique(s) {}
    void encrypt() override {
        for (char ch : str) {
            int ascii = (int)ch;
            result += to_string(ascii + 2);
        }
        cout << "Encrypted by Tech 2: " << result << endl;
    }
    void decrypt() override {
        string decrypted = "";
        for (size_t i = 0; i < result.length(); ) {
            string numStr = result.substr(i, 2);
            int ascii = stoi(numStr) - 2;
            decrypted += (char)ascii;
            i += 2;
        }
        cout << "Decrypted by Tech 2: " << decrypted << endl;
    }
};

int main() {

    // Q5
    EncyptionTechnique1 e1("HELLO");
    EncyptionTechnique* e = &e1;
    EncyptionTechnique2 e2("HELLO");
    EncyptionTechnique* E = &e2;
    e->encrypt();
    e->decrypt();
    E->encrypt();
    E->decrypt();





    // Q4
    // EncyptionTechnique1 e1("HELLO");
    // EncyptionTechnique* e = &e1;
    // EncyptionTechnique2 e2("HELLO");
    // EncyptionTechnique* E = &e2;
    // e->encrypt();
    // E->encrypt();




    // Q3
    // RentalSystem system;
    // Customer customer;

    // Car car1(1, "Toyota", "Corolla");
    // Car car2(2, "Honda", "Civic");

    // cout << "--- Customer trying to rent Car 1 ---" << endl;
    // customer.rentVehicle(&car1, &system);

    // cout << "--- Customer trying to rent Car 1 again ---" << endl;
    // customer.rentVehicle(&car1, &system);

    // cout << "--- Customer returning Car 1 ---" << endl;
    // customer.returnVehicle(&car1, &system);

    // cout << "--- Customer renting Car 1 after return ---" << endl;
    // customer.rentVehicle(&car1, &system);

    // cout << "--- Customer renting Car 2 ---" << endl;
    // customer.rentVehicle(&car2, &system);





    // // Q2
    // Imtiaz i(30000);
    // cout<<"-----Imtiaz-----"<<endl;
    // cout<<"Total Bill after disocunt: "<<i.billafterdisc()<<endl;

    // BinHashim b(30000);
    // cout<<"-----Bin Hashim-----"<<endl;
    // cout<<"Total Bill after disocunt: "<<b.billafterdisc()<<endl;




    // int a1D[] = {1, 2, 3, 4, 5};
    // ArrayMultiplier* am1 = new ArrayMultiplier1D(a1D, 5, 3);
    // am1->calculate();
    // delete am1;

    // int rows = 2, cols = 3;
    // int** a2D = new int*[rows];
    // for (int i = 0; i < rows; i++) {
    //     a2D[i] = new int[cols];
    //     for (int j = 0; j < cols; j++) {
    //         a2D[i][j] = i + j;
    //     }
    // }

    // ArrayMultiplier* am2 = new ArrayMultiplier2D(a2D, rows, cols, 2);
    // am2->calculate();
    // delete am2;

    // for (int i = 0; i < rows; i++) {
    //     delete[] a2D[i];
    // }
    // delete[] a2D;

    return 0;
}
