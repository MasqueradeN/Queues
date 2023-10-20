#pragma once
#include "LinkedIterator.hpp"
#include "LinkedList.hpp"

template<typename T>

class Queue
{
private:
	LinkedList<T> _elements;
	int _size;
public:
	Queue(int size)
	{
		_size = size;
	}

	~Queue()
	{

	}

	void Push(T val)
	{
		if (_elements.GetSize() < _size)
		{
			_elements.Push(val);
		}
	}

	void Pop()
	{
		_elements.Pop_Front();
	}

	const T& Front()
	{
		LinkedIterator<T> it;
		it = _elements.Begin();
		return *it;
	}

	int GetSize()
	{
		return _elements.GetSize();
	}

	int GetMaxSize()
	{
		return _size;
	}

	bool isEmpty()
	{
		return (_elements.GetSize() == 0);
	}

	bool Resize(int size)
	{
		_size = size;
	}
};