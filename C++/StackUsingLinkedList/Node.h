#include<iostream>
using namespace std;

template<class T>
class Node
{
	private:
		T info;
		Node<T> *next;
	
	public:
		Node(T i=0,Node<T> *n=0):info(i),next(n)
		{
		}
		
		void setInfo(T i);
		T getInfo();
		void setNext(Node<T> *n);
		Node<T>* getNext();
};//EOC

template<class T>
void Node<T>::setInfo(T i)
{
	info=i;
}

template<class T>
void Node<T>::setNext(Node<T> *n)
{
	next=n;
}

template<class T>
T Node<T>::getInfo()
{
	return info;
}

template<class T>
Node<T>* Node<T>::getNext()
{
	return next;
}

