#include <iostream>
using namespace std;
main()
{
    int  n;
    cout << "How many numbers you want to enter: ";
    cin >> n;
    int i,j,num[n];
    cout << "Enter numbers: ";
    for (i=0;i<n;i++)
    {
        cin >> num[i];
    }
    cout << "Enter number of times you want to perform even-odd transformation: ";
    cin >> j;
    for (int k=0;k<j;k++)
    {
       for (i=0;i<n;i++)
        {
            if (num[i]%2==0)
            {
                num[i]=num[i]-2;
            }
            else
            {
                num[i]=num[i]+2;
            }
        }
    }
     for (int i=0;i<n;i++)
    {
        cout << num[i] << endl;
    }
}