#include<iostream>
using namespace std;

int main()
{
    int arr[] = {3,-2,-1,6};
    int j = 0;

    for(int i =0; i<4; i++)
    {
        if(arr[i] > 0) continue;
        else
        {
            int temp = arr[j];
            arr[j++] = arr[i];
            arr[i] = temp;
        }
    }

    for(int i = 0; i< 4; i++)
    {
        cout<<arr[i]<<endl;
    }
}
