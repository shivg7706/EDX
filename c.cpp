#include<fstream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	ifstream fin("input.txt");
	ofstream fout("output.txt");
	int a[3][3],b[6][3];
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			fin>>a[i][j];
	b[0][0]=b[1][0]=a[0][0];
	b[2][0]=b[3][0]=a[0][1];
	b[4][0]=b[5][0]=a[0][2];
	b[2][1]=b[4][1]=a[1][0];
	b[0][1]=b[5][1]=a[1][1];
	b[1][1]=b[3][1]=a[1][2];
	b[5][2]=b[3][2]=a[2][0];
	b[1][2]=b[4][2]=a[2][1];
	b[0][2]=b[2][2]=a[2][2];
	long max=b[0][0]*b[0][0]+b[0][1]*b[0][1]+b[0][2]*b[0][2];
	for(int i=1;i<6;i++)
	{
		if(max<b[i][0]*b[i][0]+b[i][1]*b[i][1]+b[i][2]*b[i][2])
			max=b[i][0]*b[i][0]+b[i][1]*b[i][1]+b[i][2]*b[i][2];
	}
	
	fout<<fixed<<setprecision(9)<<sqrt(max);

}