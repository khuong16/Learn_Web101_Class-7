#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <pthread.h>

#define NUM_THREADS 4

void *hello(void * );

int main() {
  int j;
  pthread_t tid[NUM_THREADS];
  printf("My process ID %d\n", getpid());
  for (j = 0; j < NUM_THREADS; j++)
    pthread_create([1]);

  for (int i = 0; i < NUM_THREADS; i++)
    pthread_join([2]);
  return 0;
}

void *hello(void * my_id) {
  printf("Hello World from branch thread %d\n", *(int * ) my_id);
}