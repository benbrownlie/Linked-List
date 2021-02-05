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
	//Placeholder until Node struct is created
	Node<T>* current;
};

template<typename T>
inline Iterator<T>::Iterator()
{

}

template<typename T>
inline Iterator<T>::Iterator(Node<T>* node)
{

}

template<typename T>
inline Iterator<T> Iterator<T>::operator++()
{
	Node node;

}

template<typename T>
inline Iterator<T> Iterator<T>::operator--()
{
	return Iterator<T>();
}

template<typename T>
inline const bool Iterator<T>::operator==(const Iterator<T>& iter)
{
	return false;
}

template<typename T>
inline const bool Iterator<T>::operator!=(const Iterator<T>& iter)
{
	return false;
}

template<typename T>
inline T Iterator<T>::operator*()
{
	return T();
}
