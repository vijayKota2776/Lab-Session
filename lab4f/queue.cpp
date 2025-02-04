#include<iostream>
using namespace std;

const int MAX=5;
int Queue[MAX],rear=-1,front=-1;

void enqueue(int num){
    if (rear==MAX-1)
        cout<<"Queue Overflow";
    else {
        if(front==-1)
            front=0;
        rear++;
        Queue[rear]=num;
    }
}

void dequeue(){
    if(front==-1)
        cout<<"Queue Underflow";
    else   
    { 
        cout<<"Removed Element is :"<<Queue[front++];
        if(front>rear)
            front=rear=-1;
    } 
}

void peek(){
    cout<<"Peeking at:"<<Queue[front];
}

void display(){
    for(int i=front;i<=rear;i++)
    {
        cout<<Queue[i]<<" ";
    }
}

int main(){
    int choice;
    do
    {
        cout<<"\n ---------- MAIN MENU ----------\t\n 1.Enqueue\t\n 2.Dequeue\t\n 3.Peek\t\n 4.Display\t\n 5.Exit";
        cout<<"\n Enter Your Choice:";
        cin>>choice;

        switch (choice)
        {
        case 1:
            int n;
            cout<<"Enter the number to add:";
            cin>>n;
            enqueue(n);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            cout<<"Try Again";
            break;
        }
        
    } while (choice!=5);
}