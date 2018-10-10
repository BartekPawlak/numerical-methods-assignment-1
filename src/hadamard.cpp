#include "hadamard.h"


double hadamard(double **m1, double **m2,int wiersze,int kolumny)
{
			srand(time(NULL));
			double c=0;
			for(int i=0;i<wiersze;i++)
			{
				for(int j=0;j<kolumny;j++)
				{
						m1[i][j]=rand()%20;
						m2[i][j]=rand()%20;
						c+=m1[i][j]*m2[i][j];
				}
			}
			return c;
}