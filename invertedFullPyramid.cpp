// #include<iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=1; j<i; j++)
//         {
//             cout<<" ";
//         }
//         for(int k=1; k<n-i+1; k++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<i; j++)
        {
            cout<<" ";
        }
        for(int k=1; k<n-i+1; k++)
        {
            if(k == 1 || k == n-i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}