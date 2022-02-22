# include <iostream>
using namespace std;
class A
{
    public:
    int a1=5;
};

class B:public virtual A
{
    public:
    int b1=9;
};

class C:public virtual A
{
    public:
    int c1=8;
};

class D:public B,C
{
    public:
    int d1=3;
    void display(){
        cout<<a1<<" "<<b1<<" "<<c1<<" "<<d1;
    }
};

int main(){
    D d;
    d.display();
}



