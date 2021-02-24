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
	bool getData(Iterator<T>& iter, int index);
	int getLength() const;
	List<T>& operator = (const List<T>& otherList) const;
	void sort();
	Iterator<T> begin() const;
	Iterator<T> end() const;

private:
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
	for (int i = 0; i < getLength; i++)
	{
		begin++;
		delete begin* T;
	}
	delete this;
}

template<typename T>
inline T List<T>::front() const
{
	return m_head.data;
}

template<typename T>
inline T List<T>::back() const
{
	return m_tail.data;
}

template<typename T>
inline bool List<T>::contains(const T& object) const
{
	if (this->m_head->data == object)
		return true;

	if (this->m_head->data == object)
		return true;

	for (T i = this->begin(); i != this->end(); i++)
	{
		if (*i == object)
			return true;
	}
	return false;
}

template<typename T>
inline void List<T>::pushFront(const T& object)
{
	
}

template<typename T>
inline void List<T>::pushBack(const T& object)
{

}

template<typename T>
inline bool List<T>::insert(const T& value, int index)
{
	
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
	m_head = nullptr;
	m_tail = nullptr;
	m_nodeCount = 0;
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
inline bool List<T>::getData(Iterator<T>& iter, int index)
{
	return false;
}

template<typename T>
inline int List<T>::getLength() const
{
	return m_nodeCount;
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
	return new Iterator<T>(m_head);
}

template<typename T>
inline Iterator<T> List<T>::end() const
{
	return new Iterator<T>(m_tail);
}

template<typename T>
inline void List<T>::copyList(const List<T>& other)
{
	this->m_head = other.m_head;
	this->m_trail = other.m_tail;
	m_nodeCount = other.getLength();
	delete other;
}
