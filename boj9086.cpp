#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main()
{
	char word[1002];
	int case_volume;
	int last = 0;
	scanf("%d", &case_volume);
	for (int i = 0; i < case_volume; i++)
	{
		scanf("%s", word);
		last = strlen(word);
		printf("%c%c\n", word[0], word[last - 1]);
	}
	return 0;

}