#include<fstream>
using namespace std;
int main(){
	ifstream inf("input.txt");
	ofstream ouf("output.txt");
	int a,b;
	inf>>a>>b;
	ouf<<a+b<<endl;
}