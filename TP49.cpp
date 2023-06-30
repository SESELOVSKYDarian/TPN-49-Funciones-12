#include <iostream>
using namespace std;

bool EsPrimo(int a);

int main()
{
    int n, i=1;
    cout<<"Ingrese el numero limite: ";
    cin>>n;
    while (i<=n)
    {
    	
        if (EsPrimo(i))
        {
            cout<<i<<endl;
        }
        i++;
    }
    return 0;
}

bool EsPrimo(int a)
{
    bool flag=true;
	int divisor=0, i=2;
    while (i<a)
    {
    	if (a%i==0)
    	{
    		flag=false;
    		i=a;
		}
		i++;
    }
    return flag;
}