#include <iostream>

using namespace std;

int main()
{
    int cp,n,aux,menor,mayor;
    cin>>cp;
    while(cp--)
    {
        menor=110;
        mayor=-1;
        cin>>n;
        while(n--)
        {
            cin>>aux;
            if(aux>mayor)
                mayor=aux;
            if(aux<menor)
                menor=aux;
        }
        cout<<(mayor-menor)*2<<endl;
    }
    return 0;
}
