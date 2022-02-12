#pragma once
#include <iostream>

//Node Class establishes how nodes are set up
class Node {
public:
	int key;
	int data;
	Node* next;
	Node* previous;

	Node() {
		key = 0;
		data = 0;
		next = NULL;
		previous = NULL;
	}
	Node(int k, int d) {
		key = k;
		data = d;
	}
};