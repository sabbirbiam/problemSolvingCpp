#include<iostream>

using namespace std;

int main()
{
    int arr[] = {3,4,6,8,1};
    int j = 0;

    for(int i = 0; i<5; i++)
    {
        if(arr[i] % 2 != 0) continue;
        else
        {
            int temp = arr[j];
            arr[j++] = arr[i];
            arr[i] = temp;
        }
    }

    for(int i = 0; i<5; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
