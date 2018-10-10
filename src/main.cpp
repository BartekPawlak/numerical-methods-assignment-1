#include "hadamard.h"

using namespace std;

int main(int argc, char** argv) {
	
		srand(time(NULL));
		
		const int m=2;
		const int n=2;

		double **A;
		A=new double*[n];
		double **B;
		B=new double*[n];
		double **AB;
		AB=new double*[n];

		for(int i=0;i<n;i++)
		{
				A[i]=new double[m];
				B[i]=new double[m];
				AB[i]=new double[m];
		}


		AB=hadamard(A,B,AB,m,n);
		
		for(int i=0;i<m;i++)
			{
				for(int j=0;j<n;j++)
				{
						cout<<AB[i][j]<<" ";
				}
				cout<<endl;
			}
		system("PAUSE");
  
  return 0;
}
