#pragma once
#include <iostream>
template <typename T>
struct Node
{
public:
	Node();
	Node(T value);
	Node* next;
	Node* previous;
	T data;
private:

};

template<typename T>
inline Node<T>::Node()
{

}

template<typename T>
inline Node<T>::Node(T value)
{
	data = value;
}