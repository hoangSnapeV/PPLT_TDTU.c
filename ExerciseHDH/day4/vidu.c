#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
#include<sys/types.h>

int a[100];
int n;
static int max;
static int min;
static float tb = 0;


int check(char name[]) {

    int n = strlen(name);
    for (int i = 0; i < n; i++)
    {
        if (isdigit(name[i]) == 0) 
        {
            return 0;
        }
        
    } 
    return 1;
}


void printArray(int arr[], int count) {
    

    for (int i = 0; i < count; i++)
    {
        printf("%d ",arr[i]);
        
    }
    printf("\n");
}

void* thr1(void* ar){
	
	int max = a[0];
	for(int i = 1; i < n; i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	printf("So lon nhat :%d\n", max);
}
void* thr2(void* ar){
	int min = a[0];
	for(int i = 1; i < n; i++){
		if(a[i] < min){
			min = a[i];
		}
	}
	printf("So nho nhat :%d\n", min);
}

void* thr3(void*ar){
	float t = 0;
	for (int i = 0; i <= n; i++)
	{
		t = t + a[i];
	}
	tb = (float)t/n;
}

int main(int argc, char **argv){
	
	
    int count = 0;
    for (int i = 0; i < argc; i++)
    {
        if (check(argv[i]))
        {
            count++;
        }
        
    }

    //create array
    n = count;
    int index = 0;
	
    for (int i = 0; i < argc; i++)
    {
        if (check(argv[i]))
        {
            a[index] = atoi(argv[i]);
            index++;
        }
        
    }
	printArray(a, n);

	pthread_t td1;
	pthread_create(&td1, NULL, &thr1, NULL);
	pthread_join(td1, NULL);

	
	pthread_t td2;
	pthread_create(&td2, NULL, &thr2, NULL);
	pthread_join(td2, NULL);
	pthread_t td3;
	pthread_create(&td3, NULL, &thr3, NULL);
	pthread_join(td3, NULL);
	printf("Trung binh day so: %.2f\n", tb);
	return 0;
}
