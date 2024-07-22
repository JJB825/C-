#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    char name1[26];
    char name2[26];
    char name3[26];
    cout<<"Enter your name and name of your best friend : ";
    cin>>name1>>name2;
    strcpy(name3,name2);
    cout<<"The name of your friend is : "<<name3<<endl;
    strcat(name1,name3);
    cout<<"Conacating your's and your friend's name : "<<name1<<endl;
    int len = strlen(name3);
    cout<<"The number of characters in your friend's name is : "<<len<<endl;
    return 0;
}