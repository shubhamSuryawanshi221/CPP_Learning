#include<iostream>
using namespace std;
int main(){
    int a=4,b=5;
    cout<<"operators in c++"<<endl;
    cout<<"Following are types of operators"<<endl;

    //Arithmetic operators

    cout<<"The value of a+b is"<<a+b<<endl;
    cout<<"The value of a-b is"<<a-b<<endl;
    cout<<"The value of a*b is"<<a*b<<endl;
    cout<<"The value of a/b is"<<a/b<<endl;
    cout<<"The value of a%b is"<<a%b<<endl;
    cout<<"The value of a++ is"<<a++<<endl;
    cout<<"The value of a-- is"<<a--<<endl;
    cout<<"The value of ++a is"<<++a<<endl;
    cout<<"The value of --a is"<<--a<<endl;
   

    // Assignment operator 
    //int a=3,b=9;
    //char d='d';

    // Comparison operator

    cout<<"The value of a==b is"<<(a==b)<<endl;
    cout<<"The value of a>b is"<<(a>b)<<endl;
    cout<<"The value of a<b is"<<(a<b)<<endl;
    cout<<"The value of a<=b is"<<(a<=b)<<endl;
    cout<<"The value of a>=b is"<<(a>=b)<<endl;
    cout<<"The value of a!=b is"<<(a!=b)<<endl;
    

    //Logical operator

    cout<<"Following are the logical operators"<<endl;
    cout<<"The value is"<<((a==b)&&(a<b))<<endl;
    cout<<"The value is"<<((a==b)||(a<b))<<endl;

    return 0;
    

}