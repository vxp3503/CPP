#include <iostream>
using namespace std;
void print(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i];
    }
}
int main()
{
    int n;
    cout << "Enter the size of array";
    cin >> n;
    cout << "Enter the elements";
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    print(a, n);
}