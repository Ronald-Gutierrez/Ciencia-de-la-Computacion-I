

#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
using namespace std;

int main()
	{

	int ter,ant,sig,suma;
	ant=0;
	sig=1;
	cout<<"Ingrese el numero " <<endl;
	cin>>ter;
		if(ter==1){
		cout<<ant;
		}
		else if(ter==2){
		cout <<ant<<" "<<sig;
		}
		else if(ter>=3){
			for (int i=3;i<=ter;i++){
            cout<<endl;
			suma=ant+sig;
			cout<<suma;
			ant=sig;
			sig=suma;
			}
        }

	cout <<endl;
	return 0;
	}