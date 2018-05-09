// note the -> is just shortcut for dot version to access elements of struct/class instead of a reference. This is called an indirect selector.
// nodePtr->dataPtr is the same as (*nodePtr).dataPtr

// Can store an address in a void pointer without worrying about its type, but to use a void pointer (even assignment only), must be cast. (In this case cast as integer)

typedef struct node
{
         void* dataPtr;
  struct node* link;
} NODE;

NODE* createNode (void* itemPtr)
{
  NODE* nodePtr;
  nodePtr = (NODE*) malloc (sizeof (NODE));
  nodePtr->dataPtr  = itemPtr;
  nodePtr->link     = NULL;
  return nodePtr;
}
