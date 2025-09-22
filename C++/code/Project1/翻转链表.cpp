#include <iostream>
#include "node_list.h"  // 自定义的头文件
using namespace std;
/* 函数 */
int main(){
    // 定义链表 1->2->3->4->5->NULL
    node_list node5 = {5,nullptr};
    node_list node4 = {4,&node5};
    node_list node3 = {3,&node4};
    node_list node2 = {2,&node3};
    node_list node1 = {1,&node2};

    node_list* list = &node1;
    // 打印链表
    node_list* np = list;  // 指向结点的指针
    while(np){
    	cout << np->value << "->";
    	np = np->next;
    }
    cout << "NULL" << endl;

    // 定义两个指针,一个指向当前遍历的节点,另一个指向之前的节点
    node_list *curr = list;  // 前一个
    node_list *prev = nullptr;  // 当前
    while(curr){
    	// 临时保存指向下一个节点的指针
    	node_list *temp=curr->next;
    	curr->next=prev;
    	prev=curr;
    	curr=temp;
    }
    // 翻转之后的链表
    node_list *newList = prev;

    // 打印链表
    np = newList;  // 指向结点的指针
    while(np){
    	cout << np->value << "->";
    	np = np->next;
    }
    cout << "NULL" << endl;
    cin.get();
    return 0;
}