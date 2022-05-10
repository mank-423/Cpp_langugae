#include<iostream>
#include<string>

using namespace std;

int main()
{
    // string name = "Mayank";
    // cout<<"The name is :"<<name<<endl;
    // cout<<"The lenght of name is :"<<name.length()<<endl;
    // cout<<"The name is :"<<name.substr(0,3)<<endl;
    // cout<<"The name is :"<<name.substr(2,5)<<endl;
    // return 0;

    int a=8;
    int *ptra = &a;
    cout<<"The value of a is:"<<a<<endl;
    cout<<"The value of a is: "<<*ptra<<endl;
    cout<<"The address of a is:"<<&a<<endl;
    cout<<"The address of a is:"<<ptra<<endl;
}