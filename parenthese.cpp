#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int check(char[]);
int main()
{
    system("cls");
    char exp[20];
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
    char stack[20];
    int top = -1;

    for (int i = 0; i < strlen(exp); i++)
    {
        char ch = exp[i];
        if (ch == '[' || ch == '{' || ch == '(')
        {
            top++;
            stack[top] = ch;
        }
        else if (ch == ']' || ch == '}' || ch == ')')
        {
            if (top == -1)
            {
                return (0);
            }
            else
            {
                char temp = stack[top];
                top--;
                if (ch == ']')
                {
                    if (temp != '[')
                        return (0);
                }
                else if (ch == '}')
                {
                    if (temp != '{')
                        return (0);
                }
                else if (ch == ')')
                {
                    if (temp != '(')
                        return (0);
                }
            }
        }
    }
    if(top==-1)
      return(1);
    else
       return(0);
}
