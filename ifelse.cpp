#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    if(age<18){
        cout<<"You cam not come to my party"<<endl;
    }
    else if (age==18){
        cout<<"You are a kid you will get a kid pass"<endl;
    }
    else{
        cout<<"you can come to party"<<endl;

    }
    return 0;

    }
