#include <iostream>
using namespace std;

// class rectangle {
//     private:
//     int lenght,width,height;
//     public:
//     rectangle(int l,int w,int h){
//         lenght = l;
//         width = w;
//         height = h;
//     }
//     int area(){
//         return lenght*width;
//     }
//     int volume(){
//         return lenght*width*height;
//     }
// };

// class car{
    
//     public:
//     string name;
//     int door = 4;
//     car(){
//         cout<<"Hello im car"<<endl;
//     }

// };

// class addition{
//     private:
//     int num1,num2;
//     public:
//     addition(int n1,int n2){
//         num1 = n1;
//         num2 = n2;
//     }
//     int sum(){
//         return num1+num2;
//     }
// };

class info{
    private:
    string name;
    int age;
    double gpa;
    public:
    info(string name,int age,double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
    void display(){
        cout<<"Name: "<<name<<", Age: "<<age<<", GPA: "<<gpa<<endl;
    }

};
    

int main(){

   info s1("kashan",18,3.48);
   cout<<"S1: ";
   s1.display();
//    cout<<"S2: ";
//    s2.dipaly(s1);

    return 0;
}







