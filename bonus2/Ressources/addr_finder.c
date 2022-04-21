#include <unistd.h>

int main(void)
{
  printf("EGG address: 0x%lx\n", getenv("EGG"));

  return 0;
}

// gcc -g -w adrr_finder.c -o adrr_finder