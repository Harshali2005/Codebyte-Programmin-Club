#include <iostream>

using namespace std;

int checkSortedandrotated(int*arr,int n){  //create function to check array sorted and rotated
  int count=0;
  for(int i=0;i<n;i++){
  if(arr[i] > arr[i+1])
    count++;
   }
  return (count<=1);
 }


int main()
{
    int arr[] = {5,6,7,1,2,3,4};            //create array
    int n = sizeof(arr) / sizeof(int);     // variable n is created
    if(checkSortedandrotated(arr,n)){       //if condition satisfy print true if not satisfy print false
        cout<<"True"<<endl;
    }else{
     cout<<"False"<<endl;
    }
    return 0;
}
