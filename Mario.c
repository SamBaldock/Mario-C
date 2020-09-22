#include <stdio.h>


int main(void)
{

		// declaring that all variables are ints
		int height;
		int row;
		int space;
		int hashtag:
		do //if the nuber isnt 0-23 asks again
		{
				printf("Height (0-23) ---> ");
				scanf("%d", &height);
		}
		while ((height < 0) || (height > 23));//Checks the number is 0-23


		for (row = 1; row <= height; row++)//Rows
		{
				for (space = (height - row); space > 0; space--)//spaces
				{
						printf(" ");
				}

				for (hashtag = 1; hashtag <= (row + 1); hashtag++)//Hashtags
				{
						printf("#");
				}

				printf("\n");
		}
		return 0;
}
