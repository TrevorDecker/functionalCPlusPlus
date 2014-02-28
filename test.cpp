#include <iostream>
#include <stdio.h>

//array Sequence
//spawns n threads that will each applly fun to every element in array
//Tree 

template<typename type>
struct seqType{
  int length;
  type * seq;
};


class ArraySequence{
 public:

  //maps a sequence (array) of type inputType to a sequence (array) of type resultType
  template<typename resultType,typename inputType>
  seqType<resultType> map(resultType (*fun)(inputType),seqType<inputType> seq);

  //reduces a sequence (array) to a single element using function fun 
  template<typename type>
  type reduce(type (*fun)(type,type),type baseCase,seqType<type> seq);

  //evaluates to the nth elment in the sequence(array)
  template<typename type>
  type nth(int i,seqType<type> seq);

  //evalutes to the length(number of elements) in the sequence
  template<typename type>
  int length(seqType<type> seq);

  template<typename type>
  seqType<type> empty();

  //creates a sequence of length n where each element has the value fun(i)
  template<typename type>
  seqType<type> tabulate(type (*fun)(int i),int n);
  
  template<typename type>
  seqType<type> singleton(type a);
  
  template<typename type>
  bool equal(seqType<type> a,seqType<type> b);  

  template<typename type>
  seqType<type> append(seqType<type> a,seqType<type> b);

  template<typename type>
  seqType<type> rev(seqType<type> seq);

  template<typename type>
  seqType<type> drop(int i,seqType<type> seq);

  template<typename type>
  seqType<type> take(int i,seqType<type> seq);


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

//maps a sequence (array) of type inputType to a sequence (array) of type resultType
template<typename resultType,typename inputType>
 seqType<resultType> ArraySequence::map(resultType (*fun)(inputType),seqType<inputType> seq){
  //TODO make parllel 
  //TODO add error handling 

  //creates the new sequence to store values in 
  seqType<resultType> result;
  result.seq = new resultType [seq.length];
  result.length = seq.length;

  for(int i = 0;i<seq.length;i++){
    result.seq[i] = fun(seq.seq[i]);
  }
}

  //reduces a sequence (array) to a single element using function fun 
  template<typename type>
  type ArraySequence::reduce(type (*fun)(type,type),type baseCase,seqType<type> seq){
    //TODO implment 
  }

  //evaluates to the nth elment in the sequence(array)
  template<typename type>
  type ArraySequence::nth(int i,seqType<type> seq){
    assert(i>-1 && i <seq.length); 
    return seq.seq[i];
  }

  //evalutes to the length(number of elements) in the sequence
  template<typename type>
  int ArraySequence::length(seqType<type> seq){
    return seq.length;
  }

  template<typename type>
  seqType<type> ArraySequence::empty(){
    seqType<type> result;
    result.seq = new type [0]; //not strictly required consider removing
    result.length = 0;
    return result;
  }

  //creates a sequence of length n where each element has the value fun(i)
  template<typename type>
  seqType<type> ArraySequence::tabulate(type (*fun)(int i),int n){
    //TODO implment
  }
  
  template<typename type>
  seqType<type> ArraySequence::singleton(type a){
    //TODO implment
  }
  
  template<typename type>
  bool ArraySequence::equal(seqType<type> a,seqType<type> b){
    //TODO implmnet
  }

  template<typename type>
  seqType<type> ArraySequence::append(seqType<type> a,seqType<type> b){
    //TODO implmment
  }

  template<typename type>
  seqType<type> ArraySequence::rev(seqType<type> seq){
    //TODO implment
  }

  template<typename type>
  seqType<type> ArraySequence::drop(int i,seqType<type> seq){
    //TODO implment
  }

  template<typename type>
  seqType<type> ArraySequence::take(int i,seqType<type> seq){
    //TODO implment
  }






int main() 
{
  std::cout << "Hello World!\n";
  return 0; 
}
