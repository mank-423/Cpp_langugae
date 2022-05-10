#include<iostream>
#define n 3
using namespace std;

class Example{
    protected:
        int a ,b;
        int c=20;
    private:
        int d = 10;
    public:
    Example(){
        a=10;b=20;
        cout<<"This is constrcutor call"<<endl;
        cout<<a<<endl;//<<b
        cout<<b<<endl;
    }

    Example(int x, int y ){
        a=x;
        b=y;
        cout<<"This is paramaterized constrcutor call"<<endl;
        cout<<a<<endl;//<<b
        cout<<b<<endl;
    }

    Example(const Example &p){
        cout<<p.a<<endl;
        cout<<p.b<<endl;
    };

    void display(){
        cout<<"This is function call"<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
    }

    friend class Egs;
};

class Egs{
    private:
    int ch = 4;
    public:
    Egs(){
        cout<<ch<<endl;
    }

    void show(Example& x){
        cout<<x.c<<" "<<x.d<<endl;
    }
};


int main(){
    Egs e1;
    Example e2;
    e1.show(e2);
    return 0;
}