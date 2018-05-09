#include <stdio.h>
#include <stdlib.h>
#include "create_linked_list_header.h"

int main (void)
{
  int*  newData;
  int*  nodeData;
  NODE* node;

  newData = (int*)malloc (sizeof (int));
  *newData = 7;

  node = createNode (newData);

  nodeData = (int*)node->dataPtr;
  printf ("Data from node: %d\n", *nodeData);

  return 0;
}
