// Able to define pointer to a function but parens are necessary or C thinks it's a pointer.
// Pointer to function with no parameters returns void:
// void (*f1) (void);

// Compare function

void* larger (void* dataPtr1, void* dataPtr2, int (*ptrToCmpFun)(void*, void*))
{
  if ((*ptrToCmpFun) (dataPtr1, dataPtr2) > 0)
    return dataPtr1;
  else
    return dataPtr2;
}
