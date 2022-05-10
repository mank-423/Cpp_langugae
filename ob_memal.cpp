#include<iostream>
using namespace std;

class Complex{
    int real,img;
    public:
        void getData(){
            cout<<"The real part is:"<<real<<endl;
            cout<<"The imaginary part is:"<<img<<endl;
        }

        void setData(int a , int b){
            real  = a;
            img = b;
        }

};


int main()
{
    // Complex obj1;
    // Complex *ptr = &obj1;
    Complex *ptr = new Complex;
    (*ptr).setData(1,34); //ptr->setData() will also do the same
    ptr->getData();;

    //Array of objects
    Complex *ptr1 = new Complex[4];
    (*ptr1).setData(1,34); //ptr->setData() will also do the same
    ptr1->getData();
    return 0;
}