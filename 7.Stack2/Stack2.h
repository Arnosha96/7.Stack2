#pragma once
#include <iostream>

using namespace std;


template <typename T>


class Stack2
{
private:
	struct Stack
{
	T key;
	Stack*next;
};
	Stack*next;
	int topIndex;


public:
	
	Stack2() { next = NULL; topIndex = 0; };
	

	void Push(T d)
	{
		Stack*pv = new Stack;
		pv->key = d;
		pv->next = next;
		next = pv;
		topIndex++;
	}

	T Pop()
	{
		topIndex--;
		if (topIndex >= 0)
		{
			T temp = next->key;
			Stack*pv = next;
			next = next->next;
			delete pv;
			return temp;
		}
		else throw "���� ����";
		
	}

	bool is_Empty()
	{
		if (topIndex<= 0) return true;
		else return false;
	}
	
	~Stack2()
	{
		while (next)
		{
			Stack*temp = next->next;
			delete next;
			temp = next;
		}

	}
	
	int HowMany()
	{
		return (topIndex);
	}

};

