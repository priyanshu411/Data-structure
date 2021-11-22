#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
#define Size 10
void insert(char);
void _remove();
void show();
char stack[Size];
int top=-1;

int main(){
    int choice;
    char ch;
    while(1){
        system("cls");
        cout<<"1 :insert\n";
        cout<<"2 :delete\n";
        cout<<"3 :display\n";
        cout<<"4 :exit\n";
        cout<<"Enter choice :";
        cin>>choice;
        switch(choice){
                case 1:
                    cout<<"enter element :";
                    cin>>ch;
                    insert(ch);
                    break;
                case 2:
                    _remove();
                    break;
                case 3:
                    show();
                    break;
                case 4:
                    exit(1);
                default:
                    cout<<"Invalid choice";
                    getch();
        }

    }
}



void insert(char ele){
    if(top!=Size-1){
        top++;
        stack[top]=ele;
        cout<<"element added";
    }
    else{
        cout<<"stack is full";
    }
    getch();
}

void _remove(){
    if(top!=-1){
        cout<<"remove element :"<<stack[top];
        top--;
    }
    else{
        cout<<"stack is empty";
    }
    getch();
}
void show(){
    if(top!=-1){
        cout<<"elements are :\n";
        for(int i=top;i>=0;i--){
            cout<<stack[i];
        }
        cout<<"\n";
    }
    else{
        cout<<"stack is empty";
    }
    getch();
}