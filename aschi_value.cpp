#include<iostream>

using namespace std;

int main()
{
    string s1 = "AB";
    cout<<sizeof(s1)/sizeof(s1[0])<<endl;

    for(int i =0; i<sizeof(s1)/sizeof(s1[0]); ++i)
    {
        cout<<"ASCII -> "<< (int)s1[i]<<endl;
        cout<<"NUMBER -> "<< s1[i] - '0'<<endl;
    }

    return 0;
}
