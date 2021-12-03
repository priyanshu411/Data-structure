#include<iostream>
#include<conio.h>
using namespace std;
#define MAX 10
void set(int arr[],int n);
void remove(int arr[],int n,int pos);
void display(int arr[],int n);
int main(){
    system("cls");
    int arr[MAX],n,pos;
    cout<<"enter how many elements you want to store :";
    cin>>n;
    cout<<"enter elements :\n";
    set(arr,n);
    cout<<"enter position of a number you want to delete :";
    cin>>pos;
    if(pos<n){
        remove(arr,n,pos);
        n--;
    }
    else{
        cout<<"position is empty\n";
    }
    display(arr,n);
    getch();
}

void set(int arr[],int n){
    for(int i=0;i<n;i++)
        cin>>arr[i];
}

void remove(int arr[],int n,int pos){
    for(int i=pos;i<n;i++){
        arr[i]=arr[i+1];
    }
}
void display(int arr[],int n){
    cout<<"elements are\n";
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ,";
    }
    cout<<"\b \n";
}