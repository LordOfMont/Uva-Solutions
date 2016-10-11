#include <iostream>

using namespace std;

int main()
{
    int n,a,b,x;
    int i=0;
    while(cin>>n and n!=0)
    {
        i++;
        a=0;b=0;
        while(n--)
        {
            cin>>x;
            if(x==0)
                a++;
            else
                b++;
        }
        cout<<"Case "<<i<<": "<<b-a<<endl;
    }
    return 0;
}
