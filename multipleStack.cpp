#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
#define MAX 5

// one stack is integer and second is character type
union stack
{
    int a;
    char b;
};
stack multipleStack[MAX];
int topA = -1, topB = MAX;

void pushA(int ele);
void pushB(char ele);
void popA();
void popB();
void displayA_B();

int main()
{
    system("cls");
    int choice, eleA;
    char eleB;
    while (true)
    {
        system("cls");
        cout << "1 :push in A\n";
        cout << "2 :push in B\n";
        cout << "3 :pop in A\n";
        cout << "4 :pop in B\n";
        cout << "5 :display\n";
        cout << "6 :exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "enter element :";
            cin >> eleA;
            pushA(eleA);
            break;
        case 2:
            cout << "enter element :";
            cin >> eleB;
            pushB(eleB);
            break;
        case 3:
            popA();
            break;
        case 4:
            popB();
            break;
        case 5:
            displayA_B();
            break;
        case 6:
            exit(1);
        default:
            cout << "Invalid choice";
            getch();
        }
    }
}

// push A
void pushA(int ele)
{
    if ((topA + 1) != topB)
    {
        topA++;
        multipleStack[topA].a = ele;
        cout << "element inserted";
    }
    else
    {
        cout << "Stack A is full";
    }
    getch();
}

// push B
void pushB(char ele)
{
    if ((topA + 1) != topB)
    {
        topB--;
        multipleStack[topB].b = ele;
        cout << "element inserted";
    }
    else
    {
        cout << "Stack B is full";
    }
    getch();
}

// pop A
void popA()
{
    if (topA != -1)
    {
        cout << "delete element is :" << multipleStack[topA].a;
        topA--;
    }
    else
    {
        cout << "stack A is empty";
    }
    getch();
}

// pop B
void popB()
{
    if (topB != MAX)
    {
        cout << "delete element is :" << multipleStack[topB].b;
        topB++;
    }
    else
    {
        cout << "stack B is empty";
    }
    getch();
}

// display A & B
void displayA_B()
{
    if (topA != -1)
    {
        cout << "elements of A :\n";
        for (int i = topA; i >= 0; i--)
        {
            cout << multipleStack[i].a << " ";
        }
        cout << endl;
    }
    else
        cout << "stack A is empty\n";
    if (topB != MAX)
    {
        cout << "elements of B :\n";
        for (int i = topB; i < MAX; i++)
        {
            cout << multipleStack[i].b << " ";
        }
    }
    else
        cout << "stack B is empty\n";
    getch();
}