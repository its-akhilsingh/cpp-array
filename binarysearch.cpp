#include<iostream>
using namespace std;
int binarySearch(int arr[], int first, int last, int num) {
   if (first <= last) {
      int mid = (first + last)/2;
      if (arr[mid] == num)
         return mid ;
      if (arr[mid] > num)
         return binarySearch(arr, first, mid-1, num);
      if (arr[mid] > num)
         return binarySearch(arr, mid+1, last, num);
   }
   return -1;
}
int main(void) {
   int arr[] = {1, 3, 7, 15, 18, 20, 25, 33, 36, 40};
   int n = sizeof(arr)/ sizeof(arr[0]);
   int num = 33;
   int index = binarySearch (arr, 0, n-1, num);
   if(index == -1)
      cout<< num <<" is not present in the array";
   else
      cout<< num <<" is present at index "<< index+1 <<" in the array";
   return 0;
}
