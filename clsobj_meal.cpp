#include<iostream>
using namespace std;

class Shop{
    int id;
    float price;
    public:
        void setData(int a,float b){
            id = a;
            price = b;
        }

        void getData(){
            cout<<"Code if item:"<<id<<endl;
            cout<<"Price of item:"<<price<<endl;
        }
};

int main()
{
    int size = 3;
    int p,q;
    Shop *ptr = new Shop[size];
    Shop *ptrtemp = ptr;

    for (int i=0;i<size;i++){
        cout<<"Id and price of item"<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }


    for (int i = 0; i < size; i++)
    {
        cout<<"Item number:"<<i+1<<endl;
        ptrtemp->getData();
        ptrtemp++;
    }
    

    return 0;
}