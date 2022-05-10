#include<iostream>
#include<fstream>

using namespace std;

int main(){
    char arr[100],arr1[100];
    cout<<"Enter your name and age"<<endl;
    cin>>arr;

    ofstream myfile("gtl.txt",ios::app);
    //myfile.open("gtl.txt");
    myfile<<arr;
    myfile.close();
    cout<<"file writing done!"<<endl<<endl;
    
    /*
    cout<<"Reading from file"<<endl;
    ifstream myfile1("gtl.txt");
    myfile1.getline(arr1,100);
    cout<<"Array content: "<<arr1;
    myfile1.close();
    */
   
    fstream file1("Defence.txt",ios::out);
    myfile<<arr;
    myfile.close();
    return 0;
}