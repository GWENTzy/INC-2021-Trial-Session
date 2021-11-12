#include <stdio.h>

int main ()
{
    int A;
    int temp[30] = {0};
    int temp2[30] = {0};
    int max = -1;

    scanf("%d", &A);

    char str1[A+5];
    char str2[A+5];
    scanf(" %s %s", &str1, &str2);
    for(int i=0; i<A; i++)
	{
        if(str1[i] == str2[i])
		{
            temp[str1[i] - 'a']++;
        }
		else
		{
            temp[str1[i] - 'a']++;
            temp2[str2[i] - 'a']++;
        }
        if((temp[str1[i] - 'a'] + temp2[str1[i] - 'a']) > max)
		{
            max = (temp[str1[i] - 'a'] + temp2[str1[i] - 'a']);
        }
		else if((temp[str2[i] - 'a'] + temp2[str2[i] - 'a']) > max)
		{
            max = (temp[str2[i] - 'a'] + temp2[str2[i] - 'a']);
        }
    }
     printf("%d", max);
}
