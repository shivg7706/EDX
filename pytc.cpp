#include<fstream>
#include<cmath>
using namespace std;
int main()
{
	ifstream inf("input.txt");
	ofstream ouf("output.txt");
	int n,s=0,a=0,b=0;
	inf>>n;
	int *t=new int[n];
	int *p=new int[n];
	for(int i=0;i<n;i++)
		inf>>t[i];
	for(int i=0;i<n;i++)
		inf>>p[i];
	for(int i=0;i<n;i++)
	{
		if(t[i]>p[i]){s+=t[i];a++;}
		else {s+=p[i];b++;}
	}

	int mint=abs(t[0]-p[0]); int l=0,k=0;
	for(int i=0;i<n;i++)
	{
		if(abs(t[i]-p[i])<mint){mint=abs(t[i]-p[i]);l=i;}
	}
	if(a==0){s=s+t[l]-p[l];}
	if(b==0){s=s+p[l]-t[l];}
	ouf<<s;
}