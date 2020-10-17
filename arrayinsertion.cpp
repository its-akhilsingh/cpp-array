#include<iostream>
using namespace std;
int minelement (int arr[],int n)//function for finding the minimum element in the array
{
int min=arr[0];
  for(int i=0;i<n;i++)
  {
    if(arr[i]<min)
      min=arr[i];
  }
  return min;
}
int insertelement(int arr[],int n,int value,int pos)
{
  for(int t=n-1;t>=pos;t--)
  {
    arr[t+1]=arr[t];
  }
  arr[pos]=value;
  return(n+1);
}
void printarray(int arr[],int n)
{
  cout<<"the array is";
  for(int q=0;q<n;q++)
  cout<<arr[q]<<" ";
}
int deleteelement(int arr[],int n,int pos)
{
  for(int i=pos;i<n-1;i++)
  {
    arr[i]=arr[i+1];
  }return(n-1);
}
int main()
{
  int n,pos,value,arr[100];
  cout<<"enter the no of elements you want to insert in array"<<endl;
  cin>>n;
  cout<<"enter the values in your array";
for(int i=0;i<n;i++)
{
  cin>>arr[i];
}
printarray(arr,n);
cout<<"enter value and its position";
cin>>value;
cin>>pos;
n=insertelement(arr,n,value,pos);
printarray(arr,n); int posi;
cout<<"enter position at which you want to delete element";
cin>>posi;
n=deleteelement(arr,n,posi);
printarray(arr,n);
}
