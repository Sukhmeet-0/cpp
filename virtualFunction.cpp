#include<iostream>
using namespace std;

class A{
private:
int i;
public:
virtual void display(){
    i=10;
    cout<<i<<endl;
}
};
class B : public A{
    private:
    int j;
    public:
    void display(){
    // A::display();
        j=20;
        cout<<j<<endl;
    }
};

int main(){
    B a;
    a.display();
    a.A::display();
    // A::display();

    return 0;
}