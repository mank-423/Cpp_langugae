#include<iostream>

using namespace std;

int main(){
    int a,b,div;
    cout<<"Enter Number A:"<<endl;
    cin>>a;
    cout<<"Enter Number B:"<<endl;
    cin>>b;

    try{
        if (b==0){
            throw 1;
        }

        if (b<0){
            throw 10.5;
        }

        div=a/b;
        cout<<"Division:"<<div<<endl;
    }

    catch(...){
        cout<<"Invalid input to the console"<<endl;
    }
    /*
    catch(int i){
        cout<<"This will be invalid division"<<endl;
    }

    catch(double i){
        cout<<"This will be invalid too"<<endl;
    }
    */
    /*
    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;
    try{
        if (age<18){
            throw 1;
        }
        cout<<"Welcome to vote"<<endl;
    }

    catch(int i){
        cout<<"You are not eligible"<<endl;
    }
    */
    return 0;
}