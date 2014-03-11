//Created by Trevor Decker for the functional C++ project
//data type is an arry of arbatray type 

//array Sequence
//spawns n threads that will each applly fun to every element in array


#ifndef _ArraySequence_
#define _ArraySequence_

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
  bool equal(bool (*fun)(type,type),seqType<type> a,seqType<type> b);  

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


#endif
