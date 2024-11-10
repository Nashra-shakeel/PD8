#include <iostream>
using namespace std;
int found(string,string);
main()
{
    string s1,s2;
    cout << "Enter a string: ";
    cin >> s1;
    cout << "Enter another string: ";
    cin >> s2;
    int output=found(s1,s2);
    cout << "String have "<<output<< " common characters ";
}
int found(string s1,string s2)
{
    int c=0;
    for (int i=0;s1[i]!='\0';i++)
    {
        for (int j=0;s2[j]!='\0';j++)
        {
            if (s1[i]==s2[j])
            {
                c++; 
                s2[j]=238;
                break;
            }
        }
    }
    return c;
} 