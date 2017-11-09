#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void sort(int tab[],int n)
{int temp=0,k=0;
	bool stop=false;
		for(int x=0;x<n;x++)
		if(stop==false)
	{for(int y=0;y<n-1-x;y++)
	if(tab[y]>tab[y+1])
	{temp=tab[y];
	tab[y]=tab[y+1];
	tab[y+1]=temp;
	 k++;}	
	 if(k==0){
	 stop=true;
	cout<<x<<endl;	}
	 else k=0;
	 

	}
	
}

int main ()

{
	int tab [10];
	
	srand(time(NULL));
	
	for(int x=0;x<10;x++)
	tab[x]=rand()%10;
	
	for(int x=0;x<10;x++)
	cout<<tab[x]<<endl;
	
	cout<<endl;
	sort(tab,10);
	
	for(int x=0;x<10;x++)
	cout<<tab[x]<<endl;
	
	
	
	
return 0;	
}
