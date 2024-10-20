#include <iostream>

using namespace std;

int MissingNumber(int nums[],int arr_size){
//check array pointer is NULL or Array size is zero
if(NULL == nums||arr_size==0){
    return 0;
   }

   int result = arr_size; //Initialize result as the size of array
   //Operation to find missing number
   for(int i=0;i<arr_size;i++){
    result ^= i;
    result ^= nums[i];
   }
   return result;
}

int main()
{
    int arr[10]={10,9,4,6,3,2,5,7,1,0};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout<<"Original Array\n";
    for(int i = arr_size-1 ;i>=0;i--){
        cout<<"\n"<<arr[i]<<"";
    }
    cout<<"\nMissing number in the array: ";
    cout<<"\n"<<MissingNumber(arr,arr_size);//find and print missing number
    return 0;
}
