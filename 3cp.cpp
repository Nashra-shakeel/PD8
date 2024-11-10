#include <iostream>
using namespace std;
int n,i;
string result(int);
main()
{
    string word;
    cout << "Enter any string: ";
    cin >> word;
    for (i =0;word[i]!='\0';i++)
    {
       n++;
    }
    string tf = result(n);
    cout << tf;
}
string result(int n)
{
    if (n%2==0)
    {
        return "true";
    }
    else 
    {
        return "false";
    }
}