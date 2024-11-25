#include "Tree.h"

Tree::Node::Node(int value) :Node(value, nullptr, nullptr) {}

Tree::Node::Node(int value, Node* right, Node* left)
	:value(value),
	right(right),
	left(left) {}


void Tree::Insert(int value, Node* node)
{
	if (node == nullptr)
	{
		Node* new_node = new Node(value);
		node = new_node;
		return;
	}
	if (node->value > value)
	{
		Insert(value, node->right);
	}
	else
	{
		Insert(value, node->left);
	}
}

Tree::Tree()
	:root(nullptr) {}

void Tree::Insert(int value)
{
	Insert(value, root);
}

void Tree::Print()
{
}

