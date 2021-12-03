#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;
#define N 10
void display(int arr[], int n);
int del(int arr[], int n);
int insert_mid(int arr[], int n);
void find(int arr[], int n);
int main()
{
    int arr[N] = {1, 2, 3, 4, 5};
    int size = 5, choice;
    while (1)
    {
        system("cls");
        cout << "1 -insert in middle\n";
        cout << "2 -delete element\n";
        cout << "3 -search\n";
        cout << "4 -display\n";
        cout << "5 -exit\n";
        cout << "enter your choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (insert_mid(arr, size))
            {
                size++;
                display(arr, size);
            }
            getch();
            break;
        case 2:
            if (del(arr, size))
            {
                size--;
                display(arr, size);
            }
            getch();
            break;

        case 3:
            find(arr, size);
            getch();
            break;
        case 4:
            display(arr, size);
            getch();
            break;
        case 5:
            exit(1);
        default:
            cout << "enter valid choice\n";
            getch();
        }
    }
}

// insert middle
int insert_mid(int arr[], int n)
{
    int pos;
    cout << "Which position you want to insert :";
    cin >> pos;
    if (pos <= n && pos < N && pos>0 ||pos==1 )
    {
        int ele, temp;
        cout << "enter element :";
        cin >> ele;
        for (int i = n + 1; i >= pos; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = ele;
        return (1);
    }
    else
    {
        cout << "choose position in 1-" << n - 1 << " ,or stack is full\n";
        return (0);
    }
}

// delete
int del(int arr[], int n)
{
    int pos;
    cout << "Which position element you want to delete :";
    cin >> pos;
    if (pos <= n)
    {
        for (int i = pos; i < n; i++)
        {
            arr[i - 1] = arr[i];
        }
        arr[n - 1] = -1;
        return (1);
    }
    else
    {
        cout << "position is empty";
        return (0);
    }
}

// display
void display(int arr[], int n)
{
    if (n != 0)
    {
        cout << "elements are :\n";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ,";
        }
        cout << "\n";
    }
    else
        cout << "array is empty";
}

// search
void find(int arr[], int n)
{
    int flag = 0, ele, pos;
    cout << "enter element you search :";
    cin >> ele;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            flag = 1;
            pos = i + 1;
            break;
        }
    }
    if (flag)
        cout << "elemenet found in position :" << pos;
    else
        cout << "element not found\n";
}