#pragma once
#include "Node.hpp"

template<typename T>
class LinkedIterator
{
private:
	Node<T>* _node;

public:
	LinkedIterator()
	{
		_node = NULL;
	}

	~LinkedIterator()
	{

	}

	void operator-()
	{
		_node = _node->prev;
	}

	T& operator*()
	{
		return _node->_data;
	}

	void operator++()
	{
		_node = _node->_next;
	}

	bool operator!=(Node<T>* node)
	{
		return (_node != node);
	}

	bool operator == (Node<T>* node)
	{
		return (_node == node);
	}

	bool operator = (Node<T>* node)
	{
		return (_node = node);
	}
};