#pragma once
#include <iostream>

template <typename E>
class SNode {
private:
	E elem;
	SNode<E>* next;
	friend class SLinkedList<E>;
};