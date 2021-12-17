#include <unistd.h>
void print(char c)
{
	write(1, &c, 1);
}

void rush(int x , int y)
{

	int i ;
	int j ;
 j = 1;
	while (j <= y)
	{
		i = 1;
		while( i <= x)
		{
		
			if ((i == 1 && j == 1) || (j == y && i == 1) )
				print('A');
		
			if ((i > 1 && i < x && j == 1) || (j == y && i > 1 && i < x))
				print('B');
		
			if ((i == x && j == y && i != 1 && j != 1) || ( i == x && j == 1 && x != 1) )
				print('C');
		
			if ((j > 1 && i == 1 && j < y) || ( j > 1 && i == x && j < y))
				print('B');

		if ( i > 1 && i < x && j > 1 && j < y)
			print(' ');
		
		if ( i == x )
			print('\n');
		i++;
		}
	j++;
	}
}

int main()
{
	rush(100,214747);
	return(0);
}
