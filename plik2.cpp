#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void sort(int tab[],int n)
{int temp=0;
		for(int x=0;x<n;x++)
	for(int y=0;y<n-1;y++)
	if(tab[y]>tab[y+1])
	{temp=tab[y];
	tab[y]=tab[y+1];
	tab[y+1]=temp;}	
	
}

int main ()

{
	int tab [100];
	
	srand(time(NULL));
	
	for(int x=0;x<100;x++)
	tab[x]=rand()%100;
	
	for(int x=0;x<100;x++)
	cout<<tab[x]<<endl;
	
	cout<<endl;
	sort(tab,100);
	
	for(int x=0;x<100;x++)
	cout<<tab[x]<<endl;
	
	
	
	
return 0;	
}
