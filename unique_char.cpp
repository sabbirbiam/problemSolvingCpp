#include<iostream >

using namespace std;

#define MAX_SIZE  255


bool isUniqueChars2(string s1)
{
    bool check[MAX_SIZE] = {false};

    if(s1.length() > MAX_SIZE) return false;

    for (int i =0; i<s1.length(); ++i)
    {
        int value = (int)(s1[i]);

        if(check[value]) return false;
        else {
            check[value] =  true;
        }
    }
    return true;
}

int main()
{
    string s1 = "123abcd!@#";
    bool result = isUniqueChars2(s1);

    if(result)
    {
        cout<<"String is unique"<<endl;
    }
    else {
        cout<<"String is not unique"<<endl;
    }
}
