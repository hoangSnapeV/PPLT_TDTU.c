#include<stdio.h>
int read(const char input[])
{
	FILE* file = fopen(input, "r");
	int n;
	fscanf(file, "%d", &n);
	int sum = 0;
	for(int i = 1; i <= n; i++)
	{
		int x;
		fscanf(file, "%d", &x);
		sum += x;
	}
	fclose(file); 
	return sum;
}
void write(const char output[], int number)
{
	FILE* file = fopen(output, "w");
	fprintf(file, "%d", number);
	fclose(file);
}
int main()
{
	int sum = read("input1.txt");
	write("output01.txt", sum);
	return 0;
}