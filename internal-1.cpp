// Internal 1 Q-3 solution

#include<iostream>
#include<conio.h>
using namespace std;
#define R 5  //row of matrix
#define C 5  //column of matrix

int marks[R][C];

//each subject average (a)
void sub_avg(){
    float sum=0.0;
    for(int i=0;i<C;i++){
        for(int j=0;j<R;j++){
            sum+=marks[j][i];
        }
        cout<<i+1<<" subject average marks :"<<(sum/R)<<endl;
        sum=0.0;
    }
    cout<<"\n\n";
}

// every student average (b)
void stu_avg(){
    float sum=0.0;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            sum+=marks[i][j];
        }
        cout<<i+1<<" student average marks :"<<(sum/C)<<endl;
        sum=0.0;
    }
    cout<<"\n\n";
}

// student average below 50 (c)
void stu_below_50(){
    float sum=0.0;
    int count=0;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            sum+=marks[i][j];
        }
       if((sum/C)<50)
         count++;
       sum=0.0;
    }
    cout<<"student average below 50 :"<<count<<"\n\n";
}

// display score of every student (d)
void display_score(){
   int score=0;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            score+=marks[i][j];
        }
        cout<<i+1<<" student score :"<<score<<endl;
        score=0;
    }
    cout<<"\n\n";
}

int main(){

    system("cls");

    // get marks
    for(int i=0;i<R;i++){
        cout<<"enter "<<i+1<<" student's "<<C<<" subject marks\n";
        for(int j=0;j<C;j++){
            cin>>marks[i][j];
        }
    }

    // call function
    sub_avg();
    stu_avg();
    stu_below_50();
    display_score();

    getch();
}