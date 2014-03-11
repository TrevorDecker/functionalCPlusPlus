/*
 * Written by Trevor Decker
 * email: tdecker@andrew.cmu.edu or Mr.Trevor.Decker@gmail.com
 * lazyly evaluated list for sotoring data
 * version 0.0 last updated 3/11/2014
 */

#ifndef _FunctinalCPlusPlusList__
#define _FunctinalCPlusPlusList__

/*  a gyneric linked list can have nodes of diffrent types
	but we want to be able to use a stricter type paradim for
	higher order functins */
template<typename type>
struct node{
	node* next;
	node* last;
	type data;
};


template<typename ListType>
class List{
private:
	node<ListType> head;
	node<ListType> Tail;
	
public:
	List<ListType> emptyList();
		ListType getNext();
		ListType getLast();
		ListType getNth(int n);
		List<ListType> take(List<ListType> oldList,int n);
		List<ListType> drop(List<ListType> oldList,int n);
		List<ListType> append(ListType newElement);
		List<ListType> revAppend(List<ListType> oldList,ListType newElement);
		//applys functin from left to right along the list
		template<typename NewType>
			List<NewType> apply(NewType (*fun)(ListType),List<ListType> oldList);
		
		
		List<ListType> concat(List<ListType> one,List<ListType> two);

		List<ListType> reverse(List<ListType> thisList);

		template<typename NewType>
		List<NewType> map(NewType (*fun)(ListType),List<ListType> oldList);

		List<ListType> tabulate(ListType (*fun)(int),int n);
		bool exists(bool (*fun)(ListType),List<ListType> thisList);
		bool all(bool (*fun)(ListType),List<ListType> thisList);
		
		template<typename NewType>
			NewType foldl(NewType (*fun)(ListType,NewType),List<ListType> oldList);
		
		template<typename NewType>
			NewType foldr(NewType (*fun)(NewType,ListType),List<ListType> oldList);
		//TODO sort
		//TODO add find
		//TODO add filter
		//TODO add partition
		//TODO add collate
};


#endif
  

