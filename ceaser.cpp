#include <iostream>
using namespace std;

void encrypt(char en[], int key)
{
    int i;
    char ch;
    for (i = 0; en[i] != '\0'; i++)
    {
        ch = en[i];
        if (ch >= 'a' && ch <= 'z')
        {       
            ch =(int)ch+ key;     
            if(ch >'z'){
            ch = ch -'z'+'a'-1;
            }
            en[i] = ch;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch =(int)ch+key; 
            if(ch >'Z'){
            ch = ch -'Z'+'A'-1;
            }
            en[i] = ch;
        }
    }
    cout << "Encrypted text: " << en<<endl;
}

void decrypt(char en[], int key)
{
    int i;
    char ch;
    for (i = 0; en[i] != '\0'; i++)
    {
        ch = en[i];
        if (ch >= 'a' && ch <= 'z')
        {       
            ch =(int)ch- key;      
            if(ch <'a'){
            ch = ch -'a'+'z'-1;
            }
            en[i] = ch;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch =(int)ch- key; 
            if(ch <'A'){
            ch = ch -'A'+'Z'-1;
            }
            en[i] = ch;
        }
    }
     cout << "Decrypted text: " << en;
}

int main()
{
    char en[100];
    int  key;
    cout << "Enter a text to encrypt: ";
    cin.getline(en, 100);
    cout << "Enter a key:";
    cin >> key;
    encrypt(en,key);
    decrypt(en,key);
    return 0;
}
