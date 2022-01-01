#include<iostream>
using namespace std;
class stacks{
    private:
    int top;
    int n;
    int arr[];
    public:
    stacks(){
    cout<<"enter the size of stack: ";cin>>n;
    arr[n];
    for(int i=0;i<n;++i){
        arr[i]=0;
        cout<<" |        "<<arr[i]<<"        | "<<endl;
        top=-1;
    }
        cout<<" ____________________"<<endl;
    }
    void full(){
        if(top==n-1){
                cout<<"stack overflow!!"<<endl;
                exit;
            }
    }
    void empty(){
        if (top==-1){
            cout<<"stack underflow!!"<<endl;
            display();
            exit;
        }
    }
    void insert(){
        for(int i=0;i<n;i++){
            int x;
            cout<<"enter to element to add into stack: ";cin>>x;
            arr[i]=x;
            top++;
            cout<<endl;
            full();
        }
    }
    void del(){
        int y;
        y=arr[top];
        arr[top]=0;
        top--;
        cout<<"deleted:-> "<<y<<endl;
        empty();
    }
    void display(){
        for(int i=n-1;i>=0;i--){
        cout<<" |        "<<arr[i]<<"         | "<<endl;
        }
        cout<<" ___________________"<<endl<<endl;
    }
};
int main(){
    stacks s;
    s.insert();
    s.display();
    s.del();
    s.display();
    s.del();
    return 0;
}