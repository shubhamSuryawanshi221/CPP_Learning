#include<iostream>
using namespace std;
int main(){

int a=45;
float b=45.46;

cout<<"The value of a is"<<(float)a;
cout<<"The value of b is"<<float(a);

cout<<"The value of b is"<<(int)b<<endl;
cout<<"The value of b is"<<int(b);
int c=int(b);

cout<<"The Expression is"<<a+b<<endl;
cout<<"The Expression is"<<a+int(b)<<endl;
cout<<"The Expression is"<<a+(int)b<<endl;

return 0;

}