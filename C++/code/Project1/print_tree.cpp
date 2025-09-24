#include <iostream>
#include "node_tree.h"
using namespace std;
/* 函数 */
// 先序
void printTreePreOrder(node_tree* root){
	// 基准情况,如果失空树,就直接返回
	if(root == nullptr) return;
	// 先打印根节点的值
	cout << root->name << "\t";
	// 递归打印左右子树
	printTreePreOrder(root->left);
	printTreePreOrder(root->right);
}
// 中序
void printTreeInOrder(node_tree* root){
	// 基准情况,如果失空树,就直接返回
	if(root == nullptr) return;
	// 递归打印左子树
	printTreeInOrder(root->left);
	// 打印根节点的值
	cout << root->name << "\t";
	// 递归打印右子树
	printTreeInOrder(root->right);
}
// 后序
void printTreePosOrder(node_tree* root){
	// 基准情况,如果失空树,就直接返回
	if(root == nullptr) return;
	// 递归打印左子树
	printTreePosOrder(root->left);
	// 递归打印右子树
	printTreePosOrder(root->right);
	// 打印根节点的值
	cout << root->name << "\t";
}
