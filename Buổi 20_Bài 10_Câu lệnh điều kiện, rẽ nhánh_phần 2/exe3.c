#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>

#define BUF_SIZE 3 /* Size of shared buffer */

char buffer[BUF_SIZE][15]; /* shared buffer */

int add = 0; /* place to add next element */
int rem = 0;
/* place to remove next element

 */
int num = 0; /* number elements in buffer */

/* mutex lock for buffer */
pthread_mutex_t m = PTHREAD_MUTEX_INITIALIZER;

/* consumer waits on this cond var */
pthread_cond_t c_cons = PTHREAD_COND_INITIALIZER;

/* producer waits on this cond var */
pthread_cond_t c_prod = PTHREAD_COND_INITIALIZER;

void *producer(void *param);
void *consumer(void *param);

int main(int argc, char *argv[]) {
  pthread_t tid1, tid2; /* thread identifiers */
  int i;

  /* create the producer threads*/
  if (pthread_create([1]) != 0) {
    fprintf(stderr, "Unable to create producer thread\n");
    exit(1);
  }

  /* create the consumer threads*/
  if (pthread_create([2]) != 0) {
    fprintf(stderr, "Unable to create consumer thread\n");
    exit(1);
  }

  /* wait for created thread to exit */
  pthread_join([3]);
  pthread_join([4]);
  printf("Parent quiting\n");
  return 0;
}

/* Produce value(s) */

void *producer(void *param) {
  int i;
  char mess[15];
  for (i = 1; i <= 10; i++) {
    /* Insert into buffer */
    pthread_mutex_lock([5]);
    if (num > BUF_SIZE) exit(1); /* overflow */
    while (num == BUF_SIZE) /* block if buffer is full */
      pthread_cond_wait([6]);
    /* if executing here, buffer not full so add element */
    sprintf(mess, "Message %d", i);
    strcpy(buffer[add], mess);
    add = (add + 1) % BUF_SIZE;
    num++;
    printf("Producer: writes %s\n", mess);
    pthread_mutex_unlock([7]);
    pthread_cond_signal([8]);
    fflush(stdout);
  }
  printf("producer quiting\n");
  fflush(stdout);
  return 0;
}

/* Consume value(s); Note the consumer never terminates */
void *consumer(void *param) {
  int i;
  char mess[15];
  while (1) {
    [9];
    if (num < 0) exit(1); /* underflow */
    while (num == 0) /* block if buffer empty */
      [10];

    /* if executing here, buffer not empty so remove element */
    strcpy(mess, buffer[rem]);
    rem = (rem + 1) % BUF_SIZE;
    num--;
    printf("Consume: reads %s\n", mess);
    [11];
    [12];
    fflush(stdout);
  }

  return 0;
}