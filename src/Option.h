//this is the option data structure
//is kind of pointless since you can just check for the null value of
// a pointer 
template<typename Type>
class Option{
	bool empty;
	Type value;
};
