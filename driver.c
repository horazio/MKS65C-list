#include <stdio.h>
#include <stdlib.h>

int main(){
//struct node * l = null
//l = insert_front(l, 0)


  struct node * start = NULL;
  start = insert_front(start, 8);


  start = free_list(start);
  return 0;
}
