/* this is the tree data structure
 * written by Trevor Decker
 * tdecker@andrew.cmu.edu or Mr.Trevor.Decker@gmail.com
 * Tree.cpp V0.0 last modified 3/18/2014
 */
#include "Tree.h"
#include <cstddef>

template <typename Type>
Tree<Type>* Tree<Type>::getLeft(Tree<Type>* oldTree){
	return oldTree->left;
}

template <typename Type>
Tree<Type>* Tree<Type>::getRight(Tree<Type>* oldTree){
	return oldTree->right;
}

template <typename Type>
int Tree<Type>::getSize(Tree<Type>* oldTree){
	//NULL reprsents the empty Tree
	if(oldTree == NULL)
		return 0;
	return oldTree->size;
}

template <typename Type>
Tree<Type>* Tree<Type>::Empty(){
	return NULL;
}

template <typename Type>
Tree<Type>* Tree<Type>::Leaf(Type newData){
	Tree<Type> thisLeaf  = new Tree<Type>();
	thisLeaf.left  = NULL;
	thisLeaf.right = NULL;
	thisLeaf.data = newData;
	thisLeaf.size = 1;
	return &thisLeaf;
}

template <typename Type>
Tree<Type>* Tree<Type>::Node(Tree<Type>* left,Type data,Tree<Type>* right){
	Tree<Type> thisNode = new Tree<Type>();
	thisNode.left = left;
	thisNode.right = right;
	thisNode.data = data;
	thisNode.size = left->size+right->size+1;
	return &thisNode;
}
