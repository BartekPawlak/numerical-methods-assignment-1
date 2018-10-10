#include "hadamard.h"


double** hadamard(double **A, double **B,double **AB,int m,int n)
{			
			for(int i=0;i<m;i++)
			{
				for(int j=0;j<n;j++)
				{
						A[i][j]=rand()%20;
						B[i][j]=rand()%20;
						AB[i][j]=A[i][j]*A[i][j];
				}
			}
			
			return AB;
}