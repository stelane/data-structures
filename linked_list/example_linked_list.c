// linked-lists are better than arrays in functional programming because there's immutability between nodes instead of something like an array where changing memory is necessary for appending/prepending.

// (0, NULL) aka (count, pointer) even if list is empty there is still a point in memory

// to compile: gcc program_name.c
// to run: ./a.out

// (4, head) <-- base of list
//            ("c") ->("d")->("e")
//    ("b")---/

#include <stdio.h>
#include <stdlib.h>

struct node {
  char* data;
  struct node* next;
};

typedef
  struct node
  Node;

struct base {
  int count;
  Node* head;
};

typedef
  struct base
  List;

List* list_create() {
  List* list = malloc(sizeof(List));
  (*list).count = 0;
  (*list).head = NULL;
  return list;
};

void list_print(char* description, List* list) {
  printf("=== %s ===\n", description);
  printf("%d items: \n", (*list).count);

  Node* element = (*list).head;
  while(element){
    printf(" \"%s\" ", (*element).data);

    element = (*element).next;
    if (element) printf("->");
  }
  printf("\n\n");
};

void list_add(char* string, List* list) {
  Node* new_node = malloc(sizeof(Node));
  (*new_node).data = string;
  (*new_node).next = (*list).head;
  (*list).head = new_node;
  (*list).count += 1;
}

char* list_pop(List* list) {
  Node* old_head = (*list).head;
  printf("what is old head? %d \n", old_head);
  printf("is old_head equal to Null? %d\n", old_head == NULL);
  if(old_head == NULL) {
    return NULL;
  }
  (*list).head = (*old_head).next;
  char* string = (*old_head).data;
  free(old_head);
  return string;
}

int main(int arc, char** argv){
  List* list = list_create();

  list_print("initial", list);
  list_add("e", list);
  list_print("with e", list);

  list_add("d", list);
  list_pop(list);
  // printf("popped string is %s\n", list_pop(list));
  list_print("with d", list);
  // list_print("after pop", list);

  list_add("c", list);
  list_pop(list);
  // printf("popped string is %s\n", list_pop(list));
  list_print("with c", list);
  // list_print("after pop", list);


  list_add("b", list);
  list_pop(list);
  // printf("popped string is %s\n", list_pop(list));
  list_print("with b", list);
  // list_print("after pop", list);

  return 0;
}
