#include <iostream>
#include <sstream>
using namespace std;
int A[10001];
int H[10001];
void init(int n)
{
	for(int i=1;i<=n;i++)
	{
		A[i]=i;
		H[i]=0;
	}
}
int find(int n)
{
	if(A[n]==n)
		return n;
	return A[n]=find(A[n]);
}
void unir(int a,int b)
{
	int u=find(a),v=find(b);
	if(u!=v)
	{
		if(H[u]>H[v])
			swap(u,v);
		A[u]=v;
		if(H[u]==H[v])
			H[v]++;
	}
}
int main()
{
	char ord;
	string inst,bl;
	int cp,n,wa,ac,a,b;
	cin>>cp;
	cin.ignore();
	getline(cin,bl);
	for(int i=0;i<cp;i++)
	{
		ac=0;
		wa=0;
		cin>>n;
		init(n);
		cin.ignore();
		while(getline(cin,inst) and inst.size()!=0)
		{

			istringstream I(inst);
			I>>ord>>a>>b;
			if(ord=='c')
			{
				unir(a,b);
			}
			if(ord=='q')
			{
				if(find(a)==find(b))
					ac++;
				else
					wa++;
			}
		}
		cout<<ac<<","<<wa<<endl;
		if(i!=cp-1)
			cout<<endl;
	}
	return 0;
}
