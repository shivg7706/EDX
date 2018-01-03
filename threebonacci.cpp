
#include<fstream>
using namespace  std;
int main()
{
	ifstream inf("input.txt");
	ofstream ouf("output.txt");
	int a,b,c,n,q;
	inf>>a>>b>>c>>n;
	if(n==0) {ouf<<a;return 0;}
	if(n==1) {ouf<<b;return 0;}
	if(n==2) {ouf<<c;return 0;}
	if(n>2)
	{
		int z=n%2;
		int k=n/2;
		if(z==0)
		{
			ouf<<c+(k-1)*(c-b)+(k-1)*(b-a);
		}
		else
		{
			ouf<<c+(k-1)*(c-b)+(k)*(b-a);
		}
	}
	return 0;
}