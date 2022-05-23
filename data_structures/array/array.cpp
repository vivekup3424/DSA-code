#include <iostream>
using namespace std;

void input_array(float *arr,int length)
{
    float num;
    int counter = 0;
    while (counter!=length)
    {
        scanf("%f",arr+counter);
        counter++;
    }
}
void transverse_array(float arr[],int no_elements)
{
    for (int i = 0; i < no_elements; i++)
    {
        printf("%0.2f ",*(arr+i));
    }
    printf("\n");
}
int main()
{
    float arr[100];
    int length;
    printf("Enter the length of array: ");
    scanf("%d",&length);
    printf("Enter the elements of array: \n");
    input_array(arr,length);
    printf("\n*************\n");
    printf("The given array is: \n");
    transverse_array(arr,length);

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