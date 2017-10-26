#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int max(int tab[], int n)
{int ma=0;
	for(int x=0;x<n;x++)
	if(tab[x]>ma)
	ma=tab[x];
	
return ma;	
	}

int min(int tab[], int n)
{int mi=1111;
	for(int x=0;x<n;x++)
	if(tab[x]<mi)
	mi=tab[x];
	
return mi;	
	}
int main()

{int tab[10];
	
srand(time(NULL));

for(int x=0;x<10;x++)
tab[x]=rand()%10;


for(int x=0;x<10;x++)
cout<<tab[x]<<endl;

cout<<"max(tab,10) "<<max(tab,10)<<endl;

cout<<"min(tab,10) "<<min(tab,10)<<endl;
return 0;
}

