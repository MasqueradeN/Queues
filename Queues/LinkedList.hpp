#pragma once
#include "Node.hpp"
#include <iostream>

template <typename T>
class LinkedList
{
private:
	Node<T>* head;
	Node<T>* tail;
	int _size = 0;
public:
	LinkedList() : _size(0), head(0), tail(0)
	{

	}

	~LinkedList()
	{
		while (head != NULL)
		{
			Pop();
		}
	}

	void Pop()
	{
		try
		{
			if (head != nullptr)
			{
				Node<T>* SecondLast = tail->_prev;
				delete tail;
				tail = SecondLast;
				tail->_next = NULL;
				_size--;
			}
			else
			{
				throw std::length_error("ERROR:EMPTY LIST\n");
			}
		}
		catch (std::length_error error)
		{
			std::cout << error.what();
		}
	}

	void Pop_Front()
	{
		Node<T>* temp = head;
		head = head->_next;
		if (head != NULL)
		{
			head->_prev = NULL;
		}

		delete temp;
		_size = (_size == 0 ? _size : _size - 1);
	}

	Node<T>* Begin()
	{
		return head;
	}

	LinkedList<T>* End()
	{
		return NULL;
	}

	void Push(T data)
	{
		Node<T>* temp = new Node<T>;
		temp->_data = data;
		temp->_next = NULL;
		temp->_prev = NULL;
		if (head == nullptr)
		{
			head = tail = temp;
			_size = 1;
		}
		else
		{
			tail->_next = temp;
			temp->_prev = tail;
			tail = temp;
			_size++;
		}
	}

	int GetSize()
	{
		return _size;
	}
};