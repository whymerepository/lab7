#include <stdio.h>
#include <malloc.h>

int main()
{
	char* str;
	int length, pos1 = -1, pos2 = -1;

	printf("Str length: ");
	scanf_s("%d", &length);
	getchar();

	str = (char*)calloc(length + 2, sizeof(char));
	fgets(str, length+1, stdin);


	for (int i = 0; i < length; i++)
		if (str[i] == ':')
		{
			pos1 = i + 1;
			break;
		}


	for (int i = pos1; i < length; i++)
		if (str[i] == ':')
			pos2 = i;

	printf("%d %d ", pos1, pos2);

	if (pos2 > 0)
		for (int i = pos1; i < pos2; i++)
			printf("%c", *(str + i));
	else
		for (int i = pos1; i < length; i++)
			printf("%c", *(str + i));

	return 0;
}