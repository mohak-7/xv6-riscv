#include "kernel/types.h"
#include "user/user.h"
#include "user/mohak_lib.h"

int main(int argc, char *argv[]) {
  printf("Now, running the test program. I will call mohak.\n");
  call_mohak();
  printf("Exiting...\n");
  exit(0);
}
