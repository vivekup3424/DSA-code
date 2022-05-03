#include <iostream>
#include <array>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5};
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}
/*Advantages of using arrays: 

    Arrays allow random access to elements. This makes accessing elements by position faster.
    Arrays have better cache locality that makes a pretty big difference in performance.
    Arrays represent multiple data items of the same type using a single name.*/

/*Disadvantages of using arrays: 
You can’t change the size i.e. once you have declared the array you can’t 
change its size because of static memory allocation. Here Insertion(s) and deletion(s) are difficult 
as the elements are stored in consecutive memory locations and the shifting operation is costly too.
*/