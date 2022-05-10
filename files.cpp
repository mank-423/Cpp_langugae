#include<iostream>
#include<fstream>

using namespace std;

int main(){
    char arr3[100],arr1[100],arr2[100];
    ifstream myfile1("Defence.txt");
    ifstream myfile2("gtl.txt");
    ofstream myfile3("result.txt",ios::app);
    
    
    myfile1.getline(arr1,100);
    myfile3<<arr1;
    myfile2.getline(arr2,100);
    myfile3<<arr2;
    cout<<"Two files are merged"<<endl;


    return 0;
}