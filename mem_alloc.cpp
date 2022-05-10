#include<iostream>
using namespace std;
int main()
{
    //Basic concepts
    // int a = 4;
    // int *ptr = &a;
    // cout<<"The value of a is :"<<(*ptr)<<endl;
    // cout<<"The address of a is :"<<ptr<<endl;
    //

    //Memory allocation in C++
   // int *p = new int(40);
    // float *p = new float(40.78);
    // cout<<"The value at p is :"<<*p<<endl;

    //new operarator
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    //Delete operator
    delete[] arr;  //[] for an array deletion
    cout<<"The value of arr[0] is :"<<arr[0]<<endl;
    cout<<"The value of arr[1] is :"<<arr[1]<<endl;
    cout<<"The value of arr[2] is :"<<arr[2]<<endl;


    

     return 0;
    
}