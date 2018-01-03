#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
	ifstream inf("input.txt");
	ofstream ouf("output.txt");
	double a,b,c,d;
	inf>>a>>b>>c;
	ouf<<fixed<<setprecision(9)<<(a+b+c)/6;
}