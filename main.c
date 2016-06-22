#include "hello.h"

int
main (void)
{
  int s = structuralMethod();
  hello ("world" + s);
  
  return 0;
}