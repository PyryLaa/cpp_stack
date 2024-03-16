#pragma once

template <class T> class Stack{
 public:
  Stack(int = 10); //Stack constructor, default stack size 10
  ~Stack() {delete [] stack_ptr;} //Deconstructor, clear the array pointed by stack_ptr
  int push(const T&);
  int pop(T&);
  bool empty() const {return top == -1;}
  bool full() const {return top == size - 1;}
  int printStack() const;
  int peek() const;

 private:
  int size;
  int top;
  T* stack_ptr;
};

#include "my_stack.tpp"
