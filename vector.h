template<typename T>
class Vector {
private:
    int size = 0;
    T* arr;
public:
	T operator[](int count) {
	    return arr[count];
	}

	Vector() {
	    size = 0;
	}

	Vector(int s) : size(s) {
	    arr = new T[s];
	}

	Vector(int s, int count) {
	    size = s;
	    arr = new T[s];

	    for(int i = 0; i < size; ++i) {
		*arr[i] = size;
	    }
	}

	void push_back(T e1) {
	    T* tmp;
	    tmp = new T[size+1];

	    for(int i = 0; i < size; ++i) {
		tmp[i] = arr[i];
	    }


	    tmp[size] = e1;
	  	if(size != 0) {
	    	delete[] arr;
		}
		++size;
	    arr = tmp;
	}

	void pop_back( T el) {
	    T* tmp;
	    tmp = new T[size + 1];
	    tmp[0] = el;

	    for(int i = 0; i < size; ++i) {
			tmp[i+1] = arr[i];
	    }
		if(size != 0) {
	    	delete[] arr;
		}
	  	++size;
	    arr = tmp;
	}

	void insert(T el, int position) {
	    int* tmp;
	    tmp = new T[size + 1];
	    for(int i = 0; i < position; ++i) {
		tmp[i] = arr[i];
	    }

	    tmp[position] = el;
	    ++size;
	    for(int i = position + 1; i < size; ++i) {
		tmp[i] = arr[i-1];
	    }

	    delete[] arr;
	    arr = tmp;
	}

	T at(int i) {
	    return arr[i];
	}

	void erase(int first, int last) {
	    if(last >= first) {
		T* tmp = new T[last - first];
		for(int i = 0, j = 0; i < size; ++i) {
		    if(i < first || i > last) {
		        tmp[j] = arr[i];
		        ++j;
		    }
		}

		size -= (last-first+1);

		delete[] arr;
		arr = tmp;
	    }
	}

	int getSize() {
	    return size;
	}

	~Vector() {
	    delete[] arr;
	}

	void change(T value, int position) {
	    arr[position] = value;
	}
};
