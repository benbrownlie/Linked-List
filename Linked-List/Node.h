#pragma once
#include <iostream>
template <typename T>
struct Node
{
public:
	Node();
	Node(T value);
	Node<T>* next;
	Node<T>* previous;
	T data;
private:

};

template<typename T>
inline Node<T>::Node()
{
	//next =
	//previous = 
}

template<typename T>
inline Node<T>::Node(T value)
{
	data = value;
}
