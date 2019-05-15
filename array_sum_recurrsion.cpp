#include<iostream>

using namespace std;

int sumRecurssion(int arr[], int length)
{
    if(length <= 0)
    {
        return 0;
    }
    else
    {
        // cout<<"in the loop"<<endl;
        return (sumRecurssion(arr, length-1)+ arr[length -1]);
    }
}

int main()
{
    int arr[] = {1,2,4,6,7};
    int s = sizeof(arr)/sizeof(arr[0]);
    int result = sumRecurssion(arr,s);
    cout<<result<<endl;
    return 0;
}
