#include <stdio.h>
#define N 10
int x[N][N] = {1};
int main() 
{
	int n = 4;
	int k = 1;
	for (int t = 0; t < 6; t++) 
{
		if (t % 2 == 0) 
{
			for (int r = t; r >= 0; r--) 
{
				int c = t - r;
				if (r < 0 || r >= n || c < 0) continue;
				x[r][c] = k++;
			}
		} 
else 
{
			for (int r = 0; r < N; r++) 
{
				int c = t - r;
				if (r < 0 || r >= n || c < 0) continue;
				x[r][c] = k++;
			}
		}
	}
	for (int r = 0; r < n; r++) 
{
		for (int c = 0; c < n; c++) 
{
			printf("%3d", x[r][c]);
		}
		printf("\n");
	}
	
	return 0;
}

