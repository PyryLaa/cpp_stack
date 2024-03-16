#include <iostream>
#include "my_stack.h"

template<class T>
Stack<T>::Stack(int s){
  const int MAX_SIZE = 10000;
  if(s <= MAX_SIZE){
    size = s;
  }else{
    size = 10;
  }
  top = -1; //Stack is empty
  stack_ptr = new T[size]; //Array holds the type T values inside the stack
}

template<class T>
int Stack<T>::push(const T& item){
  int rval = 0;
  if(!full()){
    stack_ptr[++top] = item;
    rval = 1;
  }else{
    rval = 0; //Can't push
  }
  return rval;
}

template<class T>
int Stack<T>::pop(T& item){
  int rval = 0;
  if(!empty()){
    item = stack_ptr[top--];
    rval = 1;
  }else{
    rval = 0; //Can't pop
  }
  return rval;
}

template<class T>
int Stack<T>::printStack() const{
  int rval = 0;
  if(!empty()){
    for(int i = 0; i <= top; i++){
      std::cout << stack_ptr[i] << std::endl;
    }
    rval = 1;
  }else{
    rval = 0; //Can't print
  }
  return rval;
}

template<class T>
int Stack<T>::peek() const{
  int rval = 0;
  if(!empty()){
    std::cout << stack_ptr[top] << std::endl;
    rval = 1;
  }else{
    rval = 0; //Can't peek
  }
  return rval;
}

