#include <iostream>
#include <stdio.h>

//array Sequence
//spawns n threads that will each applly fun to every element in array
//Tree 
//TODO

class ArraySequence{
 public:
  //maps a sequence (array) of type inputType to a sequence (array) of type resultType
  template<typename resultType,typename inputType>
  resultType* map(resultType (*fun)(inputType),inputType* seq);

  //reduces a sequence (array) to a single element using function fun 
  template<typename type>
  type reduce(type (*fun)(type,type),type baseCase,type* seq);

  //evaluates to the nth elment in the sequence(array)
  template<typename type>
  type nth(int i);

  //evalutes to the length(number of elements) in the sequence
  template<typename type>
  int length(type* seq);

  template<typename type>
  type* empty();

  //creates a sequence of length n where each element has the value fun(i)
  template<typename type>
  type* tabulate(type (*fun)(int i),int n);
  
  template<typename type>
  type* singleton(type a);
  
  template<typename type>
  bool equal(type* a,type* b);  

  template<typename type>
  type* append(type* a,type* b);

  template<typename type>
  type* rev(type* seq);

  template<typename type>
  type* drop(int i,type* seq);

  template<typename type>
  type* take(int i,type* seq);


  //not yet implmented 
  //ToList
  //toString
  //fromList
  //flatten
  //filter
  //zip
  //map2
  //enum
  //filterIdx
  //mapidx
  //inject
  //subseq
  //showl
  //showt
  //iter
  //iterh
  //scan
  //scani
  //sort
  //merge
  //collect
  //collate
  //argmax
};


int main() 
{
  std::cout << "Hello World!\n";
  return 0; 
}
