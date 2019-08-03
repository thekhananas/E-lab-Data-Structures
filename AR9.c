/*
* C program to read N names, store them in the form of an array
* and sort them in alphabetical order. Output the given names and
* the sorted names in two columns side by side.
*/
#include <stdio.h>
#include <string.h>
int main()
{
	char name[10][8], tname[10][8], temp[8];
	int i, j, n;
    scanf("%d", &n);
	for (i = 0; i < n; i++)
    {
    	scanf("%s", name[i]);
        strcpy(tname[i], name[i]);
	}
    for (i = 0; i < n - 1 ; i++)
    {
    	for (j = i + 1; j < n; j++)
        {
        	if (strcmp(name[i], name[j]) > 0)
            {
            	strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
			}
		}
    }
	for (i = 0; i < n; i++)
    {
    	printf("%s\n",name[i]);
	}
      return 0;
}
