#include <iostream>

using namespace std;

int main()
{
    int cp;
    cin>>cp;
    string pal;
    while(cp--)
    {
        cin>>pal;
        if(pal.size()==5)
            cout<<3<<endl;
        else
        {
            if(pal[0]=='t' and pal[1]=='w')
                cout<<2<<endl;
            else
            {
                if(pal[0]=='t' and pal[2]=='o')
                    cout<<2<<endl;
                else
                {
                    if(pal[1]=='w' and pal[2]=='o')
                        cout<<2<<endl;
                    else
                        cout<<1<<endl;
                }
            }
        }
    }
    return 0;
}
