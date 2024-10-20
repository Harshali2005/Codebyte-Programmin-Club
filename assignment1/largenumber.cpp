#include <iostream>

using namespace std;

int main()
{
    int i,n;
    float array[100];

    cout <<"array consist how many numbers:"<< endl;
    cin>>n;
    cout <<"Enter numbers :"<< endl;
    for(i=0;i<n;i++){
        cin>>array[i];                                //accepting numbers in array
    }

    int max = array[0];
    for(i=1;i<n;i++)                                  //loop from first index to last index of array
    {
      if( max < array[i])                             //comparing if array value is greater then max array value
      {
        max = array[i];                               //if condition satisfy store array value in max value
      }
    }
     cout<<"Greater number from array:"<< max ;        //print maximum number from array
     return 0;
}
