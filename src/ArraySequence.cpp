
#include "ArraySequence.h"


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
  //clean up 
  delete(seq.seq);
  delete(seq);
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
    //TODO parllize
    //TODO add error handling
    seqType<type> result;
    result.seq= new type [n];
    for(int i = 0;i<n;i++){
      result.seq[i] =  fun(i);
    }
    return result;
  }
  
  template<typename type>
  seqType<type> ArraySequence::singleton(type a){
    seqType<type> result;
    result.length = 1;
    result.seq = new type[1];
    result.seq[0] = a;
    return result;
  }
  
  template<typename type>
  bool ArraySequence::equal(bool (*fun)(type,type),seqType<type> a,seqType<type> b){
    if(a.length != b.length){
      //ensures that if a is shorter then b that false positive can not be returned
      return false;
    }
    struct temp{ 
      type reduce(bool l ,bool r){ return l && r; } 
      //Try to find a better solution 
      type map(int i){ return this->fun( ArraySequence::nth<type>(i,this->a),ArraySequence::nth<type>(i,this->b));}
    };
    struct temp f;
    seqType<bool> c = ArraySequence::tabulate<bool>(&f.map,a.length);
    return ArraySequence::reduce<bool>(&f.reduce,true,c);
  }

  template<typename type>
  seqType<type> ArraySequence::rev(seqType<type> seq){
    struct temp{
      
      type f(int i){
	seqType<type> seq;//temp until I inline
	return ArraySequence::nth<type>(seq.length - i -1,seq);
      }
    };
    //I know this is ugly and I am trying to find a better solution 
    struct temp fun;
    return ArraySequence::tabulate(&fun.f ,seq.length);
  }

  template<typename type>
  seqType<type> ArraySequence::append(seqType<type> a,seqType<type> b){
    //TODO implmment
  }

  template<typename type>
  seqType<type> ArraySequence::drop(int i,seqType<type> seq){
    //TODO implment
  }

  template<typename type>
  seqType<type> ArraySequence::take(int i,seqType<type> seq){
    //TODO implment
  }
