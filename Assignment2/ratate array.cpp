#include <iostream>

using namespace std;

 void Rotate(int arr[],int n, int k){
  if(n==0)
    return;
  k = k%n;
  if(k > n)
    return;
  int temp[k];
  for(int i = n-k;i<n;i++)
  {
   temp[i - n + k] = arr[i];
  }
  for(int i = n-k-1;i>=0;i--)
  {
   arr[i + k] = arr[i];
  }
  for(int i = 0;i<k;i++)
  {
   arr[i] = temp[i];
  }
}

int main()
{
    int n = 7;
    int arr[] = {1,2,3,4,5,6,7};
    cout<<"Before rotating the elements to right"<<endl;
    for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
    int k = 1;
    Rotate(arr,n,k);
    cout<<"\nStep 1"<<endl;
    for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
    k = 1;
    Rotate(arr,n,k);
    cout<<"\nStep 2"<<endl;
    for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
    k = 1;
    Rotate(arr,n,k);
    cout<<"\nStep 3"<<endl;
    for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
   return 0;
}


