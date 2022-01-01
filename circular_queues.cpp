#include<iostream>
using namespace std;

class queues{
private:
int rear,front;
int n;
int arr[];
public:
queues(){
    rear=-1;
    front=-1;
    cout<<"enter the size of queue: ";cin>>n;
    arr[n];
    for (int i=0;i<n;i++){
        arr[i]=0;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
    void full(){
        if(rear==n){
            cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! FIRST DEQUEUE AN ELEMENT !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
            rear=0;
            return;
        }
    }
    void empty(){
        if(front==-1 && rear==-1){
            front=0,rear=0;
            return;
        }
        else if(front==n && rear==n){
            rear=0;front=0;
            return;
        }
    }
    void enqueue(){
        empty();
        int x;
        cout<<"enter an element to add in queue: "<<" ";cin>>x;
        arr[rear]=x;

        rear++;
        full();
        return;
    }
    void dequeue(){
        empty();
        int y;
        y=arr[front];
        arr[front]=0;
        front++;
        return;
    }
    void display(){
        for(int j=0;j<n;j++){
            cout<<arr[j]<<" ";
        }
    }
};
int main(){
    queues q;
    while(true){
        int u;
        cout<<"enter your choice?\tPress Ctrl+C to exit the program\n1.Enqueue\n2.Dequeue\n3.Display\n4.Clear Screen."<<endl;cin>>u;
        switch(u){
        case 1:{
            q.enqueue();
            break;
        }
        case 2:{
            q.dequeue();
            break;
        }
        case 3:{
            q.display();
            break;
        }
        case 4:{
            system("cls");
            break;
        }

    }
}
}