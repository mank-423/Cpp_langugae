#include<iostream>
using namespace std;

template <typename T>
T add (T x, T y){
    return(x+y);
}

template<typename U>
class weight{
    private:
    U kg;
    public:
        void set_data(U x){
            kg = x;
        }

        void display(){
            cout<<kg<<endl;
        }
};


int main(){
    weight <int>obj1;
    weight <float>obj2;
    obj1.set_data(5);
    obj1.display();
    obj2.set_data(5.65);
    obj2.display();


    
    /*
    cout<<add<int>(3,4)<<endl;
    cout<<add<float>(3.45,4.95)<<endl;
    return 0;
    */
}