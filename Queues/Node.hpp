#pragma once
template<typename T> class LinkedList;
template<typename T> class LinkedIterator;

template<typename T>
class Node
{
	friend class LinkedList<T>;
	friend class LinkedIterator<T>;

private:
	Node() : _next(0), _prev(0)
	{

	}

	T _data;
	Node* _next;
	Node* _prev;
};