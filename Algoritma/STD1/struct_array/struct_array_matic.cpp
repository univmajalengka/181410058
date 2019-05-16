#include<iostream>
#include<string>
#include<sstream>
using namespace std;

	struct onderdil
	{
		string onderdil1;
		int harga;
	}onder1[3];

void printonder(onderdil onder);

int main ()
{
     string matic;
     int x;
             for(x=0; x<3;x++)
             {
             cout<<"Masukkan Nama onderdil : ";
             getline(cin,onder1[x].onderdil1);
             cout<<"Masukkan Harga : Rp.";
             
             getline(cin,matic);
             stringstream(matic)>>onder1[x].harga;                    }
             
       cout<<"\nOnderdil yang Telah Diinput :\n";
       for(x=0;x<3;x++)
       printonder(onder1[x]);   
     
return 0;

}

void printonder(onderdil onder)
{
	cout<<onder.onderdil1<<"\t";
	cout<<"\tRp. "<<onder.harga<<",-\n";
}
