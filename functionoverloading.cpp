#include<iostream>
using namespace std;
int sum(float a, int b){
    cout<<"using function with 2 arguments"<<endl;
    return a+b;
}
int sum(float a, int b, int c){
    cout<<"using function with 3 arguments"<<endl;
    return a+b+c;
}

//Calculate the volume of cylinder
int volume (double r,int h){
    return(3.14*r*r*h);
}
//Calculate the volume of cube
int volume (int a){
    return(a*a*a);
}
//Rectangular box
int volume(int l,int b,int h){
    return(l*b*h);
}

int main(){
    cout<<"The sum of 3 & 6 is"<<sum(3,6)<<endl;
     cout<<"The sum of 3,7 & 6 is"<<sum(3,7,6)<<endl;
      cout<<"The volume of cuboid of  3,7 & 6 is"<<volume(3,7,6)<<endl;
      cout<<"The volume of cylinder of radius 3 & height is 6"<<volume(3,6)<<endl;
      cout<<"The volume of cube of cube of side 3 is"<<volume(3)<<endl;
      return 0;
      



}