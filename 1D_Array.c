#include<stdio.h>
int main() {
   //declaring and initializing one-dimensional array in C
int arr[3] = {10, 20, 30}; 

    // After declaration, we can also initialize the array as:
    // arr[0] = 10; arr[1] = 20; arr[2] = 30;

for (int i = 0; i < 3; i++)
{
        // accessing elements of array
    printf(" Value of arr[%d]: %d\n", i, arr[i]);
}
return 0;
}