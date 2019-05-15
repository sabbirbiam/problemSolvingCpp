#include<iostream>

using namespace std;

int findMxmRecurrsion(int arr[], int length)
{
    if(length == 1)
        return arr[0];
    return max(findMxmRecurrsion(arr,length-1),arr[length-1]);
}

int findMimRecurrsion(int arr[], int length)
{
    if(length == 1)
        return arr[0];
    return min(findMimRecurrsion(arr,length-1),arr[length-1]);
}

int main()
{
    int arr[] = {100,4,5,2,10};
    int s = sizeof(arr)/sizeof(arr[0]);
    int maximumNumber = findMxmRecurrsion(arr,s);
    cout<<"Maximum number is: "<<maximumNumber<<endl;
    cout<<"Minimum number is: "<<findMimRecurrsion(arr,s)<<endl;
}
