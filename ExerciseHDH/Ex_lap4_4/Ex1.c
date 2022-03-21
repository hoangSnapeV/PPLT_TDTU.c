#include<pthread.h>

#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#define M 10
#define N 10
#define MAX_INT 10000
int a[M][N];
void * writer(void * param);
int main(int argc, char * argv[]) {
    pthread_t tid;
    pthread_attr_t attr; 
    pthread_attr_init( & attr);

    time_t t;
    srand((unsigned) time( & t));
    for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++)
        a[i][j] = rand() % MAX_INT;
    }
    FILE * fp;
    if ((fp = fopen(argv[1], "w")) == NULL) {
    printf("\nCannot open file.");
    return 0;
    }

    pthread_create( & tid, & attr, writer, (void * ) fp);

    pthread_join(tid, NULL);
    fclose(fp);       
}


void * writer(void * fp) {

    for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++)
        fprintf(fp, "%d ", a[i][j]);
    fprintf(fp, "\r\n");
    }
    pthread_exit(0);
}