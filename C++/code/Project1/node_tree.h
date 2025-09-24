#pragma once
#include <string>
struct node_tree{
	std::string name;
	node_tree* left;
	node_tree* right;
};

void printTreePreOrder(node_tree* root);
void printTreeInOrder(node_tree* root);
void printTreePosOrder(node_tree* root);