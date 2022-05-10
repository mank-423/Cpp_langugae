#include<iostream>
using namespace std;


class Test{
    private:
        int count;
    public:
        Test(){
            count = 5;
        }

        void operator ++(int){
            count = count+2;
        }

        void display(){
            cout<<"new Count:"<<count<<endl;
        }
};

int main(){
    Test obj1;
    //obj1++;
    obj1.display();
    return 0;
}