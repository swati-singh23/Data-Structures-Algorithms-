#include<iostream>
using namespace std;

int main()
{
    char a[100];
    cout<<"enter your string";
    cin.get(a,100);
    cout<<a;
    int i, vcount=0, ccount=0;

    for(i=0;a[i]!='\0';i++)
    {
        if (a[i]=='a'|| a[i]=='e'|| a[i]=='i'|| a[i]=='o'|| a[i]=='u'||
            a[i]=='A'|| a[i]=='E'|| a[i]=='I'|| a[i]=='O'|| a[i]=='U')
            {
                vcount++;

            }
        else if (a[i]>=65 && a[i]<=90 || a[i]>=97 && a[i]<=122 || a[i]>=48 && a[i]<=57)   
            {
                ccount++;
            }
 
    }
 
    cout<<" Number of Vowels in String " <<vcount<<"\n  ";
    cout<<"Number of Consonant in String " <<ccount;



    return 0;
}