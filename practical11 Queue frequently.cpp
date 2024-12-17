



#include <iostream>
using namespace std;
#include<stdio.h>

#define SIZE 5
void enqueue(int x);
void dequeue();
void display();
int FRONT=-1;
int REAR=-1;
int QUEUE[SIZE];
main()
{
    int x,ch;
      while(1){
        cout<<"\n1:Add Job";
        cout<<"\n2:Delete Job";
        cout<<"\n3:Display";
        cout<<"n4:Exit Your Choice:";
        cin>>ch;
        {  
            case1:
            cout<<"Enter Job:";
            cin>>x;
            enqueue(x);
            break;
            case2:
            dequeue();
            break;
            case3:
            display();
            break;
            case4:
              exit(0);

            
        }
      }//getc();

} void enqueue(int x)
{
    if (REAR>=SIZE-1)
    cout<<"Queue is overflow";
    else{
        REAR=REAR+1;
        QUEUE[REAR]=x;
        if (FRONT==-1)
        FRONT=0;

    }
}void dequeue(){
    if(FRONT==-1)
    cout<<"Queue is overflow";
    else{
        cout<<"Deleted element is:"<<QUEUE[FRONT];
        if(FRONT==REAR){
            FRONT=-1;
            REAR=-1;
        }else
        {
            FRONT=FRONT+1;

        }
    }
}void display()
{
    int i;
    if (FRONT==-1)
    cout<<"Queueis empty\n";
    else{
        for(i=FRONT;i<=REAR;i++)
        cout<<"QUEUE[i]";

    }
}


//Output:-
//PS C:\Users\Aditya\OneDrive\Desktop\oop> cd "c:\Users\Aditya\OneDrive\Desktop\26-Aaditya kulkarni\" ; if ($?) { g++ practical11.cpp -o practical11 } ; if ($?) { .\practical11 }

//1:Add Job
//2:Delete Job
//3:Displayn4:Exit Your Choice:1
//Enter Job:software engineering