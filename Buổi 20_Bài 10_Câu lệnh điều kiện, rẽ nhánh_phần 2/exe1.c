#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

int mynum = 0; /* A global variable*/

int main(void) {
  pid_t childPID;
  int i;
  childPID = [1];
  if ([2]) // Child process
  {
    printf("Child process ID: %d\n", getpid());
    for (i = 0;; ++i) /*both processes do this*/ {
      mynum = i;
      sleep(1);
      printf("CHILD%d\n", mynum);
    }
  } else if ([3]) //Parent process
  {
    printf("Parent process ID: %d\n", getpid());
    for (i = 0;; ++i) /*both processes do this*/ {
      sleep(1);
      printf("PARENT%d\n", mynum);
    }
  } else // fork failed
  {
    printf("\n Fork failed, quitting!!!!!!\n");
    return 1;
  }
  return 0;
}