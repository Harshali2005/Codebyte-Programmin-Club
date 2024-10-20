#include <iostream>

using namespace std;

int main()
{
    int i,n,j,k;
    float arr[100];
    cout<<"How many numbers in array:";// ask array size
    cin>>n;                            //accept array size
    cout<<"Enter numbers:";            //enter numbers in array
    for(i=0;i<n;i++)
    {
     cin>>arr[i];
    }

    for(i=0;i<n;i++)                  //initialize loop for first array element toward last element
    {
     for(j=i+1;j<n;j++)               //Initialize loop from second array element toward last element
     {
       if(arr[i] == arr[j])           //compare if both elements value is same
       {
       for(k=j;k<n;k++)               //remove duplicates by store its only on time presentation
        {
        arr[k] = arr[k+1];
        }
        n--;
        j--;
       }
     }
    }
    cout << "array after duplicate removal: " << endl;   //printing last array
    for(i=0;i<n;i++)
    {
     cout<<arr[i]<<"\n";
    }
    return 0;
}
