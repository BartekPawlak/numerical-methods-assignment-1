#include "hadamard.h"


using namespace std;

int main(int argc, char** argv) {
	
		const int wiersze=2;
		const int kolumny=2;

		double **m1;
		m1=new double*[kolumny];
		double **m2;
		m2=new double*[kolumny];

		for(int i=0;i<kolumny;i++)
		{
				m1[i]=new double[wiersze];
				m2[i]=new double[wiersze];
		}


		double c=hadamard(m1,m2,wiersze,kolumny);
		cout<<"Iloczyn macierzy m1 i m2 jest rowny "<<c<<endl;
		system("PAUSE");
  
  return 0;
}
