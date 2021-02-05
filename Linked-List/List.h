#pragma once
#include "Iterator.h"

template <typename T>
class List
{
public:
	List<T>();
	List<T>(List<T>&);
	~List<T>();
	void destroy();
	//Placeholder until Iterator class is created
	//Iterator<T> begin();
	//Iterator<T> end();
	bool contains(const T& object) const;
	void pushFront(const T& value) const;
	void pushBack(const T& value);
	bool insert(const T& value, int index);
	void remove(const T& value);
	void print() const;
	void Initialize();
	bool isEmpty() const;
	//bool getData(Iterator<T>& iter, int index);
	int getLength() const;
	List<T>& operator = (const List<T>& otherList) const;
	void sort();

private:
	//Placeholder until Node struct is created
	//Node<T> m_head;
	//Node<T> m_tail;
	int m_nodeCount;
};

template<typename T>
inline List<T>::List()
{

}

template<typename T>
inline List<T>::List(List<T>&)
{

}

template<typename T>
inline List<T>::~List()
{

}

template<typename T>
inline void List<T>::destroy()
{

}

template<typename T>
inline bool List<T>::contains(const T& object) const
{
	return false;
}

template<typename T>
inline void List<T>::pushFront(const T& value) const
{

	return void();
}

template<typename T>
inline void List<T>::pushBack(const T& value)
{

}

template<typename T>
inline bool List<T>::insert(const T& value, int index)
{
	return false;
}

template<typename T>
inline void List<T>::remove(const T& value)
{
	return void();
}

template<typename T>
inline void List<T>::print() const
{
	return void();
}

template<typename T>
inline void List<T>::Initialize()
{

}

template<typename T>
inline bool List<T>::isEmpty() const
{
	return false;
}

template<typename T>
inline int List<T>::getLength() const
{
	return 0;
}

template<typename T>
inline List<T>& List<T>::operator=(const List<T>& otherList) const
{
	// TODO: insert return statement here
}

template<typename T>
inline void List<T>::sort()
{

}
