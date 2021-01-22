#include <iostream>
using namespace std;
bool search(int element, int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (element == a[i])
        {
            cout << "true";
            return true;
        }
    }
    cout << "false";
    return false;
}
int main()
{
    int n;
    cout << "Enter the no. of elements in array";
    cin >> n;
    cout << "Enter the element which you want to searh";
    int element, a[n];
    cin >> element;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    search(element, a, n);
}