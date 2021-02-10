#pragma once
#include "Iterator.h"

template <typename T>
class List
{
public:
	List<T>();
	List<T>(List<T>&other);
	~List<T>();
	void destroy();
	T front() const;
	T back() const;
	bool contains(const T& object) const;
	void pushFront(const T& object);
	void pushBack(const T& object);
	bool insert(const T& value, int index);
	void remove(const T& object);
	void print() const;
	void Initialize();
	bool isEmpty() const;
	//bool getData(Iterator<T>& iter, int index);
	int getLength() const;
	List<T>& operator = (const List<T>& otherList) const;
	void sort();
	Iterator<T> begin() const;
	Iterator<T> end() const;

private:
	//Placeholder until Node struct is created
	Node<T> m_head = nullptr;
	Node<T> m_tail = nullptr;
	int m_nodeCount;
	void copyList(const List<T>& other);
};

template<typename T>
inline List<T>::List()
{
	Initialize();
}

template<typename T>
inline List<T>::List(List<T>&other)
{
	copyList(other);
}

template<typename T>
inline List<T>::~List()
{
	destroy();
}

template<typename T>
inline void List<T>::destroy()
{

}

template<typename T>
inline T List<T>::front() const
{
	return T();
}

template<typename T>
inline T List<T>::back() const
{
	return T();
}

template<typename T>
inline bool List<T>::contains(const T& object) const
{
	return false;
}

template<typename T>
inline void List<T>::pushFront(const T& object)
{

	return void();
}

template<typename T>
inline void List<T>::pushBack(const T& object)
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
	for (Iterator<int> iter = begin(); iter != end(); ++iter)
	{
		std::cout << *iter << std::endl;
	}
}

template<typename T>
inline void List<T>::Initialize()
{

}

template<typename T>
inline bool List<T>::isEmpty() const
{
	if (m_nodeCount = 0)
	{
		return true;
	}
	else
	{
		return false;
	}
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

template<typename T>
inline Iterator<T> List<T>::begin() const
{
	return Iterator<T>();
}

template<typename T>
inline Iterator<T> List<T>::end() const
{
	return Iterator<T>();
}

template<typename T>
inline void List<T>::copyList(const List<T>& other)
{
}
