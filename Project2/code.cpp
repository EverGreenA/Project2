#include "SLinkedList.h"
#include <iostream>
#include <string>

template <typename E>
SLinkedList<E>::SLinkedList()
	: head(NULL) { }

template <typename E>
bool SLinkedList<E>::empty() const
{
	return head == NULL;
}

template <typename E>
const E& SLinkedList<E>::front() const
{
	return head->elem;
}

template <typename E>
SLinkedList<E>::~SLinkedList()
{
	while (!empty()) removeFront();
}

template <typename E>
void SLinkedList<E>::addFront(const E& e) {
	SNode<E>* v = new SNode<E>;
	v->elem = e;
	v->next = head;
	head = v;
}

template <typename E>
void SLinkedList<E>::removeFront() {
	SNode<E>* old = head;
	head = old->next;
	delete old;
}
