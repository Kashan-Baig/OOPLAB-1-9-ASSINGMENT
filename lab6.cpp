#include <iostream>
#include <cmath>
using namespace  std;

// class shape{
//     public:
//     int numofsides;
//     double area;

//     shape(int nos):numofsides(nos),area(0){}
// };
// class rectangle: public shape{
//     public:
//     float lenght,width;
//     rectangle(float l,float w):shape(4),lenght(l),width(w){}
//     double generatearea(){
//         area = lenght*width;
//         return area;
//     }
//     //double getarea(){return area;}
// };
// class circle: public shape{
//     public:
//     float radius;
//     circle(float r):shape(0),radius(r){}
//     double generatearea(){
//         area = 3.14*radius*radius;
//         return area;
//     }
//     //double getarea(){return area;}
// };
// class triangle: public shape{
//     public:
//     float height,base;
//     triangle(float h,float b):shape(3),height(h),base(b){}
//     double generatearea(){
//         area = (height*base)/2;
//         return area;
//     }
//     //double getarea(){return area;}
// };
// class square: public rectangle{
//     public:
//     square(int nos ):rectangle( nos, nos){}
//     void checkside(){
//         if(lenght==width){
//             cout<<"Both side are equal hence a square."<<endl;
//         }
//         else{
//             cout<<"Both sides are unequal."<<endl;
//         }
//     }
//     double generatearea(){
//         area = lenght*lenght;
//         return area;
//     }
// };

// class calculator{
//     private:
//     int num1,num2,num3;
//     public:
    
//     int add(int n1,int n2){
//         num1 =n1;
//         num2=n2;
//         return num1+num2;
//     }
//     int add(int n1,int n2,int n3){
//         num1 =n1;
//         num2=n2;
//         num3=n3;
//         return num1+num2+num3;
//     }
//     int multiply(int n1,int n2){
//         num1 =n1;
//         num2=n2;
//         return num1*num2;
//     }
//     int multiply(int n1,int n2,int n3){
//         num1 =n1;
//         num2=n2;
//         num3=n3;
//         return num1*num2*num3;
//     }
//     int sub(int n1,int n2){
//         num1 =n1;
//         num2=n2;
//         return num1-num2;
//     }
//     int sub(int n1,int n2,int n3){
//         num1 =n1;
//         num2=n2;
//         num3=n3;
//         return num1-num2-num3;
//     }
//     double divide(int n1,int n2){
//         num1 =n1;
//         num2=n2;
//         return num1/num2;
//     }
//     double divide(int n1,int n2,int n3){
//         num1 =n1;
//         num2=n2;
//         num3=n3;
//         return (num1/num2)/num3;
//     }
// };

// class vector {
//     private:
//         double x, y;
    
//     public:
//         vector(double v1, double v2) : x(v1), y(v2) {}
    
//         double getx() { return x; }
//         double gety() { return y; }
    
//         vector operator+(const vector& obj) {
//             return vector(x + obj.x, y + obj.y);
//         }
    
//         vector operator-(const vector& obj) {
//             return vector(x - obj.x, y - obj.y);
//         }
    
//         vector operator*(double scalar) {
//             return vector(x * scalar, y * scalar);
//         }
    
//         vector operator/(double scalar) {
//             return vector(x / scalar, y / scalar);
//         }
    
//         double magnitude() {
//             return sqrt(x * x + y * y);
//         }
    
//         void display() {
//             cout << "(" << x << ", " << y << ")" << endl;
//         }
//     };

#include <iostream>
#include <vector>

using namespace std;


class Person {
protected:
    string name;
    string occupation;

public:
    Person(string _occupation) : occupation(_occupation) {}

    virtual void Draw() { 
        cout << "A person can draw in many ways" << endl;
    }

    virtual ~Person() {} 
};


class Artist : public Person {
public:
    Artist() : Person("artist") {}

    void Draw() override { 
        cout << "An artist can draw with a paint brush" << endl;
    }
};


class Gunman : public Person {
public:
    Gunman() : Person("gunman") {}

    void Draw() override { 
        cout << "A gunman draws a gun to shoot" << endl;
    }
};

int main() {
    vector<Person*> people; 


    people.push_back(new Artist());
    people.push_back(new Gunman());

    for (Person* person : people) {
        person->Draw();
    }

    for (Person* person : people) {
        delete person;
    }

        
        
        
        
        
        
        
        
        // vector v1(5, 7), v2(7, 11);
        // v1.display();
        // v2.display();
    
        // vector sum = v1 + v2;
        // sum.display();
    
        // vector sub = v1 - v2;
        // sub.display();
    
        // vector scaled = v1 * 2.5;
        // scaled.display();
    
        // vector division = v1 / 2;
        // division.display();
    
        // cout << "Magnitude v1: " << v1.magnitude() << endl;
        // cout << "Magnitude v2: " << v2.magnitude() << endl;

    
    // calculator c1;
    // cout<<"Addition of 2 input numbers is: "<<c1.add(5,6)<<endl;
    // cout<<"Addition of 3 input numbers is: "<<c1.add(5,6,7)<<endl;
    // cout<<"Subtraction of 2 input numbers is: "<<c1.sub(8,6)<<endl;
    // cout<<"Subtraction of 3 input numbers is: "<<c1.sub(100,6,7)<<endl;
    // cout<<"Multiplication of 2 input numbers is: "<<c1.multiply(5,6)<<endl;
    // cout<<"Multiplication of 3 input numbers is: "<<c1.multiply(5,6,7)<<endl;
    // cout<<"Division of 2 input numbers is: "<<c1.divide(8,6)<<endl;
    // cout<<"Division of 3 input numbers is: "<<c1.divide(100,6,7)<<endl;
    
    // rectangle r(12,5.5);
    // cout<<"Area of rectangel is: "<<r.generatearea()<<endl;
    // circle c(4);
    // cout<<"Area of circle is: "<<c.generatearea()<<endl;
    // triangle t(5,5);
    // cout<<"Area of triangle is: "<<t.generatearea()<<endl;
    // square s(5.5);
    // s.checkside();
    // cout<<"Area of square is: "<<c.generatearea()<<endl;

    return 0;
}