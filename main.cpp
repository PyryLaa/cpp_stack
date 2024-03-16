#include <iostream>
#include "my_stack.h"

int main(){
  //Create a few stacks, float and string for example
  typedef Stack<float> FloatStack;
  typedef Stack<std::string> StringStack;

  FloatStack fls(15); //Float stack of 15 floats
  StringStack strs(2);
  //Add items to the stack
  float f = 2.5;
  while(fls.push(f)){
    f += 3.1;
  }
  std::string str = "a";
  while(strs.push(str)){
    str = str + "b";
  }

  //Print out the stacks
  std::cout << "This is the float stack" << std::endl;
  fls.printStack();

  std::cout << "This is the string stack" << std::endl;
  strs.printStack();

  //Peek the topmost element of the stacks
  std::cout << "Peeking the float stack" << std::endl;
  fls.peek();
  
  std::cout << "Peeking the string stack" << std::endl;
  strs.peek();

  //Pop values from the stack
  std::cout << "Popping from the float stack" << std::endl;
  fls.pop(f);
  std::cout << "Now the float stack contains these items" << std::endl;
  fls.printStack();
  
  std::cout << "Popping from the string stack" << std::endl;
  strs.pop(str);
  std::cout << "Now the string stack contains these items" << std::endl;
  strs.printStack();
  return 0;
}
