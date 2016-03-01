template<typename T>
class Stack {
private:
    Vector<T>vec;
  	bool created;
public:
	void push(T value) {
	  	created = true;
    	vec.push_back(value);
		//std::cout << vec.getSize();
	}

	T pop() {
    	if(vec.getSize() > 0) {
    	    T tmp = vec[vec.getSize()-1];
    	    vec.erase(vec.getSize()-1, vec.getSize()-1);
    	    return tmp;
   	 	} else {return 0;}
	}

	Stack() : created(false) {}

	bool isEmpty() {
	  if(!created) {return true;}
		else {
	  		return (vec.getSize() == 0);
		}
	}
};
