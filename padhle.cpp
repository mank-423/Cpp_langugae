#include<iostream>
using namespace std;

class numbers
{
    int a,b;
    public:
    void setdata(int n1,int n2)
    {
        a=n1;
        b=n2;
    }
    
    friend mean(numbers o);
};
mean(numbers o)
{
    return (o.a+o.b)/2;
}

int main()
{
    numbers obj;
    obj.setdata(2,4);
    cout<<mean(obj);
    return 0;
}
