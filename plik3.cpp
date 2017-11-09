#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int max(int tab[],int z, int n)
{int ma=0,s=0;
	for(int x=z;x<n-z;x++)
	if(tab[x]>ma){
	ma=tab[x];
 s=x;}
return s;	
	}

int min(int tab[],int z,  int n)
{int mi=1111,s=0;
	for(int x=z;x<n;x++)
	if(tab[x]<mi)
	{mi=tab[x];
	s=x;}
	
return s;	
	}

/*void sort(int tab[],int n){
int temp=0;	
	for(int x=0;x<n;x++){
	temp=max(tab,x,n);
	max(tab,x,n)=min(tab,x,n);
	min(tab,x,n)=temp;
	}
	
	}
*/
int main(){
	
	int t [10];
	int rozmiar=10;
	
	srand(time(NULL));
	
	for(int x=0;x<rozmiar;x++)
	t[x]=rand()%10;
	
		
	for(int x=0;x<rozmiar;x++)
	cout<<t[x]<<" ";
	
	cout<<endl<<"Sortowanie"<<endl;
	for(int x=0,y=rozmiar-1;x<(rozmiar+1)/2;x++,y--){
	swap(t[x],t[min(t,x,rozmiar)]);
	swap(t[y],t[max(t,x,rozmiar)]);
	
	for(int x=0;x<10;x++)
	cout<<t[x]<<" ";
	cout<<endl;}
	
	return 0;
}
	



