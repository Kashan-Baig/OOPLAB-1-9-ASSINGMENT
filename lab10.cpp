#include <iostream>
#include <type_traits>
using namespace std;

// template<class T,class W>
// class Calculate{
//     public:
//     T num1;
//     W num2;
//     void getinfo(){
//         cout<<"Input num1 and num 2: "<<endl;
//         cin>>num1>>num2;
//     }
//     void add(){
//         cout<<"Addition : "<<num1+num2<<endl;
//     }
//     void sub(){
//         cout<<"Subtraction : "<<num1-num2<<endl;
//     }
//     void product(){
//         cout<<"Product : "<<num1*num2<<endl;
//     }
//     void division(){
//         cout<<"Division : "<<num1/num2<<endl;
//     }
// };

// template<class T>
// class mycontainer{
//     public:
//     T var;
//     mycontainer(T a):var(a){}
//     T increase(){
//         return var+=1;}
// };
// template<>
// class mycontainer<char>{
//     public:
//     char var;
//     mycontainer(char a):var(a){}
//     void uppercase(){
//        cout<<"Char to uppercase: "<<(char)toupper(var) << endl;
//     }
// };

template<class T,class W>
class calc{
    public:
    void swapValues(T &a, W &b) {
        auto temp = a;
        a = b;
        b = temp;
        cout << "After swap: " << a << " " << b << endl;
    }
};



int main(){

    // Q2
    int x = 2;
    float y = 3.5;
    calc<int, float> c;
    cout << "Before swap: " << x << " " << y << endl;
    c.swapValues(x, y);




    // Q3
    // mycontainer <int> num(5);
    // cout<<"Number increased to: "<<num.increase()<<endl;
    // mycontainer <char> chr('a');
    // chr.uppercase();



    // Q1
    // Calculate <int,int> a;
    // Calculate <float,int> b;
    // a.getinfo();a.add();a.sub();a.product();a.division();
    // b.getinfo();b.add();b.sub();b.product();b.division();



    return 0;
}