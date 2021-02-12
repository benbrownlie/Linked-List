#pragma once
#include "Node.h"

template <typename T>
class Iterator
{
public:
	Iterator<T>();
	//Placeholder until Node struct is created
	Iterator<T>(Node<T>* node);
	Iterator<T> operator ++();
	Iterator<T> operator --();
	const bool operator ==(const Iterator<T>& iter);
	const bool operator !=(const Iterator<T>& iter);
	T operator *();

private:
	Node<T>* current;
};

template<typename T>
inline Iterator<T>::Iterator()
{
	current = nullptr;
}

template<typename T>
inline Iterator<T>::Iterator(Node<T>* node)
{
	current = node;
}

template<typename T>
inline Iterator<T> Iterator<T>::operator++()
{

}

template<typename T>
inline Iterator<T> Iterator<T>::operator--()
{
	
}

template<typename T>
inline const bool Iterator<T>::operator==(const Iterator<T>& iter)
{
	if (current->data == iter.data)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<typename T>
inline const bool Iterator<T>::operator!=(const Iterator<T>& iter)
{
	if (current->data != iter.current)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<typename T>
inline T Iterator<T>::operator*()
{
	return current->data;
}