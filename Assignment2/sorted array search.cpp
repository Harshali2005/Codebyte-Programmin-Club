#include <iostream>

using namespace std;

int main()
{
    int arr[50],n;
    cout<<"no of elements in array:";
    cin>>n;
    cout<<"enter elements:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     cout<<"Enter no you want to search in array: ";
     int k,i;
     cin>>k;
     for(i=0;i<=n;i++){
        if(arr[i]==k)
        {
         cout<<"True!! element is present in array";
        }else{
         cout<<"False!! element is not present in array";
        }

        break;
     }

    return 0;
}
