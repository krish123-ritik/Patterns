#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int c = 0;
    for(int i = 1; i<=n; i++)
    {
        for(int j=1; j <= 2*i+1; j++)
        {
            c = c*(i-j)/j;
            c++;
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}