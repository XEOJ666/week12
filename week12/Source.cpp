
#include<stdio.h>
void getStr(char*);
void network(char*);
int main()
{
	char str[999];
	char* pStr = str;

	getStr(pStr);
	network(pStr);

	return 0;
}
void getStr(char* pA) {
	scanf_s("%[^\n]s", pA, 999);
}


void network(char* pB)
{
	int i = 0;
	int never = 0;
	while (*(pB + i) != '\0')
	{
		if ((*(pB + i) == 'n' or *(pB + i) == 'N') && (*(pB + i + 1) == 'e' or *(pB + i + 1) == 'E') && (*(pB + i + 2) == 't' or *(pB + i + 2) == 'T') && (*(pB + i + 3) == 'w' or *(pB + i + 3) == 'W') && (*(pB + i + 4) == 'o' or *(pB + i + 4) == 'O') && (*(pB + i + 5) == 'r' or *(pB + i + 5) == 'R') && (*(pB + i + 6) == 'k' or *(pB + i + 6) == 'K'))
		{
			printf("Love ");
		}
		i++;
	}
}