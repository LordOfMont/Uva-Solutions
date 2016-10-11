#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i=0;
    bool hecho=false;
    string pal;
    while(cin>>pal)
    {
        hecho=false;
        if(pal=="#")
            break;
        i++;
        cout<<"Case "<<i<<": ";
        if(pal=="HELLO")
        {
            cout<<"ENGLISH"<<endl;
            hecho=true;
        }
        if(pal=="HOLA")
        {
            cout<<"SPANISH"<<endl;
            hecho=true;
        }
        if(pal=="HALLO")
        {
            cout<<"GERMAN"<<endl;
            hecho=true;
        }
        if(pal=="BONJOUR")
        {
            cout<<"FRENCH"<<endl;
            hecho=true;
        }
        if(pal=="CIAO")
        {
            cout<<"ITALIAN"<<endl;
            hecho=true;
        }
        if(pal=="ZDRAVSTVUJTE")
        {
            cout<<"RUSSIAN"<<endl;
            hecho=true;
        }
        if(!hecho)
            cout<<"UNKNOWN"<<endl;
    }
    return 0;
}
