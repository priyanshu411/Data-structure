#include <iostream>
#include <conio.h>
using namespace std;
void set(int arr[][10], int r, int c);
void transpose(int arr[][10], int r, int c);
int main()
{
    system("cls");
    int row = 4, col = 4;
    int arr[10][10];
    set(arr, row, col);
    cout<<"Transpose of matrix is :\n";
    transpose(arr, row, col);
    getch();
}
void set(int arr[][10], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        cout<<"enter "<<i+1<<" row elements\n";
        for (int j = 0; j < c; j++)
        {
            cout << "[" << i << "]"
                 << "[" << j << "] :";
            cin >> arr[i][j];
        }
    }
}

void transpose(int arr[][10], int r, int c)
{
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}
