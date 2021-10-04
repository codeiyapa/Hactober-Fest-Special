//Author : RAHUL KUMAR ROY
// Problem : Kids with Greatest Candies Leetcode Problem
//this is achieved in O(n^2)
// space complexity is O(n)
#include <iostream>
using namespace std;
int *kidsWithMaxCandies(int arr[], int size, int extraCandies)
{
       int big = arr[0];
       for(int i = 1;i<size;i++){
           if (big<arr[i])
           {
               big  = arr[i];
           }
       }
       /* ---------------LOGIC-----------------------------------------
       logic find greatest element in the array
       Then Find the difference B/w  (Big-extraCandies)
       if differnce is greater then or equal to arr[i] assign ,true else assign false.
       ---------------------------------------------------------------- */

       big = big - extraCandies;
       for(int i=0;i<size;i++){
           if (arr[i]>=big)
           {
               arr[i] = true;
           }
           else{
               arr[i] = false;
           }  
       }
    return arr;
}
int main()
{
    int arr[] = {2,3,5,1,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int extracandies = 3;
    int *ptr = kidsWithMaxCandies(arr, size, extracandies);
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << " ";
    }

    return 0;
}