#include <iostream>
using namespace std;
string same(string element[4]);
main()
{
    string elements[4];
    int i;
    cout << "Enter input of your choice: " << endl;
    for (i=0;i<4;i++)
    {
        cin >> elements[i];
    }
    string result= same(elements);
    cout << result;
}
string same(string elements[4])
{
    string output;
    if (elements[0]==elements[1] && elements[1]==elements[2] && elements[2]==elements[3] )
    {
        output="true";
    }
    else 
    {
        output="false";
    }
    return output;
}