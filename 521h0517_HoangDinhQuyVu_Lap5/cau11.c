#include<stdio.h>
#include<string.h>
void delete_char(char s[], int n, int position)
{
	int count = strlen(s);
	int i;
	for(i = 0; i <= count - n; i++)
	{
		if(i >= position)
		{
			s[i] = s[i + n];
		}
	}
}
int main()
{
	char s[] = "Hoang dinh quy vu";
	printf("before delete: %s\n", s);
	
	delete_char(s, 5, 6);
	printf("after delete: %s", s);
	return 0;
}