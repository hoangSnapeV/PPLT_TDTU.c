// 2021 June 2
// Author: Abraham Silberschatz  in book Operating System Concepts 8th Edition p.170
// Demo using how to speed up sum of sequence integer.
#include<pthread.h>

#include<stdio.h>

#include<stdlib.h>

#include <string.h>
#include <ctype.h>


int ave,min,max; /* this data is shared by the thread(s) */

typedef struct  {
  int a[100];
  int size;
}array;


void * runner(void * param); /* threads call this function */
void * average(void * param);

//
int check(char name[]);
void printArray(int arr[], int count);
int addArray(array a[], char * argv[], int argc);

void * average(void * param);

int main(int argc, char * argv[]) {
  
  // thêm data vào struct array A;
  array b;
  int result = addArray(&b, argv, argc);

  printArray(b.a, result);
  printf("%d\n", b.size);

  pthread_t tid[3]; /* the thread identifier */
  pthread_attr_t attr; /* set of thread attributes */
  /* set the default attributes of the thread */
  pthread_attr_init( & attr);
  /* create the thread */
  pthread_create( & tid[0], & attr, average, (void *) &b);
  // pthread_create( & tid[1], & attr, lonnhat, argv[1]);

  // pthread_create( & tid[2], & attr, nhonhat, argv[1]);

  /* wait for the thread to exit */
  pthread_join(tid[0], NULL);


  // pthread_join(tid[1], NULL);
  // pthread_join(tid[2], NULL);
  //printf("sum = %d∖n", sum);
}
/* The thread will execute in this function */
void * average(void * b) {
  int max = ;

  for(int i = 1; i < b.size; i++){
		if(b.a[i] > max){
			max = b.a[i];
		}
	}
	printf("So lon nhat : %d\n", max);
  
  pthread_exit(0);
}

/* The thread will execute in this function */
// void * lonnhat(void * param) {
//   array *B = (struct array*) param;
//     int i;
//   for(i=0; i < B->size ; i++) //do something
//     // tìm mã
//   pthread_exit(0);
// }

/* The thread will execute in this function */
// void * nhonhat(void * param) {
//   int upper = atoi(param);
//   // tìm min
//   pthread_exit(0);
// }

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

int addArray(array* b, char * argv[], int argc) {
  
  int index = 0;
  for (int i = 0; i < argc; i++)
  {
    if (check(argv[i]))
    {
      b->a[index] = atoi(argv[i]);
      index++;
    }
  }
  b->size = index;
  return index;
}