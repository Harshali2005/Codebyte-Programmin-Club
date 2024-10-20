#include <iostream>

using namespace std;

int main()
{
    int i,n,x;
    float arr[100];
    cout<<"how many number you want to enter: ";
    cin>>n;                                       //accept array size
    cout<<"Enter the numbers:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];                              //accept numbers in array
    }

    int max = arr[0];                           //create array for max number
    for(i=0;i<n;i++)                            //loop start from first index to last index
    {
        for(int j=i+1;j<n;j++)                  //loop start from second index to last index
        {
         if(arr[i]<arr[j])                      //if array value is less than its next array value
         {
          x = arr[i];                           //store last second largest number in x
          arr[i]=arr[j];                        //store largest number in array of i
         }
        }
    }

    cout<<"Second largest element from array: "<<x;    //print second last largest number

    return 0;
}
