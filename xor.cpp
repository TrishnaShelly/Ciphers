#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter the string:";
    cin.getline(str,100);
    int len = strlen(str);
    for(int i=0;i<len;i++)
    {
        str[i]=str[i]^0;
    }
    cout<<"The string is: "<<str;
    return 0;
}
