//Header file for Tree data structure

template <typename Type>
class Tree{
private:
	//empty tree is a null pointer 
	Tree<Type>* left;
	Tree<Type>* right;
	Type data;
	int size;
	
public:
	Tree<Type>* getLeft(Tree<Type>* oldTree);
	Tree<Type>* getRight(Tree<Type>* oldTree);
	Type getNodeValue(Tree<Type>* oldTree);
	int  getSize(Tree<Type>* oldTree);
	Tree<Type>* Empty();
	Tree<Type>* Leaf(Type newData);
	Tree<Type>* Node(Tree<Type>* left,Type data,Tree<Type>* right); 
	//TODO add more Tree functins
	//TODO document code 
};
