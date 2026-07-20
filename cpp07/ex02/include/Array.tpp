// default Constructor
template <typename T>
Array<T>::Array() {
	this->arr = NULL;
	this->_size = 0;
}

//unsigned int constructor
template <typename T>
Array<T>::Array(unsigned int n) : arr(new T[n]()), _size(n) {}

//copy construtor
template <typename T>
Array<T>::Array(const Array<T>& other) : arr(NULL), _size(other._size) {
	if (other._size > 0) {
		arr = new T[_size];
		for (unsigned int i = 0; i < _size; ++i)
			arr[i] = other.arr[i];
	}
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
	if (index >= _size)
		throw std::out_of_range("index out of bounds");
	return (arr[index]);
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
	if (index >= _size)
		throw std::out_of_range("index out of bounds");
	return (arr[index]);
}

template <typename T>
Array<T>::~Array() {
	delete arr;
}

template <typename T>
unsigned int	Array<T>::size(void) {
	return (_size);
}
