#include <iostream>
#include <math.h>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL,"RUSSIAN");	
	float a,b,d,c;//объ€вление переменных
	double res;
	cout<<"Input a-->";
	cin>>a;
	cout<<"Input b-->";
	cin>>b;
	cout<<"Input c-->";
	cin>>c;
	cout<<"Input d-->";
	cin>>d;	
				res=(tan((float)b+23)-c)/(a/2-4*d-1);
			cout<<res<<endl;
	
	return 0;
}

