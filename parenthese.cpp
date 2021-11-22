#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
#define MAX 50
int check(char[]);
void push(char ch);
int pop();
int stack[MAX], top = -1;
int main()
{
    system("cls");
    char exp[MAX];
    cout << "enter experation :";
    cin >> exp;
    if (check(exp))
        cout << "expression is correct";
    else
        cout << "expression is not correct";
}

// check
int check(char exp[])
{

    for (int i = 0; i < strlen(exp); i++)
    {
        char ch = exp[i];
        if (ch == '[' || ch == '{' || ch == '(')
        {
            push(ch);
        }
        else if (ch == ']')
        {
            char temp = stack[top];
            if (pop() == 0 || temp != '[')
                return (0);
        }
        else if (ch == '}')
        {
            char temp = stack[top];
            if (pop() == 0 || temp != '{')
                return (0);
        }
        else if (ch == ')')
        {
            char temp = stack[top];
            if (pop() == 0 || temp != '(')
                return (0);
        }
    }
    if (top == -1)
        return (1);
    else
        return (0);
}

// push
void push(char ele)
{
    if (top + 1 != MAX)
    {
        top++;
        stack[top] = ele;
    }
    else
    {
        cout << "stack is full\n";
    }
}

// pop
int pop()
{
    if (top != -1)
    {
        top--;
        return (1);
    }
    else
    {
        return (0);
    }
}
