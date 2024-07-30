class Stack
{
public:
	Stack(int capacity = 4)
	{
		cout << "Stack(int capacity = 4)" << endl;
		_a = new int[capacity];
		_top = 0;
		_capacity = capacity;
	}

	~Stack()
	{
		cout << "~Stack()" << endl;
		delete[] _a;
		_a = nullptr;
		_top = _capacity = 0;
	}

private:
	int* _a;
	int _top;
	int _capacity;
};

int main()
{
	Stack* ptr = new Stack;
	delete ptr;
	return 0;
}


//这两个交换函数除了类型以外，没有任何不同
void Swap(int& left, int& right)
{
	int tmp = left;
	left = right;
	right = tmp;
}

void Swap(double& left, double& right)
{
	double tmp = left;
	left = right;
	right = tmp;
}

//函数模板
template<typename T>
void Swap(T& left, T& right)
{
	T tmp = left;
	left = right;
	right = tmp;
}

int main()
{
	int a = 10, b = 20;
	double c = 1.1, d = 2.2;
	Swap(a, b);
	Swap(c, d);
	return 0;
}
//函数模板
template<typename T>
void Swap(T& left, T& right)
{
	T tmp = left;
	left = right;
	right = tmp;
}

int main()
{
	int a = 10, b = 20;
	double c = 1.1, d = 2.2;
	Swap(a, b);
	Swap(c, d);
	return 0;
}

template<class T>
class Stack
{
public:
	Stack(int capacity = 4)
	{
		_a = new T[capacity];
		_top = 0;
		_capacity = capacity;
	}
	~Stack()
	{
		delete[] _a;
		_a = nullptr;
		_top = 0;
		_capacity = 0;
	}
private:
	T* _a;
	int _top;
	int _capacity;
};

int main()
{
	Stack<int> st1;
	Stack<double> st2;
	return 0;
}

template<class T>
class Stack
{
public:
	Stack(int capacity = 4);
	~Stack()
	{
		delete[] _a;
		_a = nullptr;
		_top = 0;
		_capacity = 0;
	}
private:
	T* _a;
	int _top;
	int _capacity;
};

//声明定义分离的时候，模板参数要跟上
template<class T>
Stack<T>::Stack(int capacity)
{
	_a = new T[capacity];
	_top = 0;
	_capacity = capacity;
}

int main()
{

	Stack<int> st1;
	Stack<double> st2;
	return 0;
}



