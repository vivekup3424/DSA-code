//Search an element in a sorted and rotated array
#include <iostream>
using namespace std;
int main()
{
    int length;
    cout << "Enter the length of the array: ";
    cin>>length;
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        scanf("%d",&arr[i]);
    }
    int last = arr[sizeof(arr)/sizeof(int)-1];
}