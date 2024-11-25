#pragma once

class Tree
{
	class Node
	{
	public:
		int value;
		Node* right;
		Node* left;
		Node(int value);
		Node(int value, Node* right, Node* left);
		
	};
	Node* root;
	void Insert(int value, Node* node);
public:
	Tree();
	void Insert(int value);
	void Print();
};

