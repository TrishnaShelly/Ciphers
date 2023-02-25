#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[100],a[100],b[100],c[100];
    cout<<"Enter the string:";
    cin.getline(str,100);
    int len = strlen(str);
    for(int i=0;i<len;i++)
    {
        c[i]=str[i]^127;
        a[i]=str[i]&127;
        b[i]=str[i]|127;
    }
    cout<<"The string after XOR operation is: "<<c<<endl;
    cout<<"The string after AND operation is: "<<a<<endl;
    cout<<"The string after OR operation is: "<<b;
    return 0;
}
