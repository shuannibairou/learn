#include <iostream>
#include "node_tree.h"
using namespace std;
/* 函数 */
int main(){
    // 定义一颗二叉树
    node_tree nodeG = {"G",nullptr,nullptr};
    node_tree nodeF = {"F",nullptr,nullptr};
    node_tree nodeE = {"E",&nodeG,nullptr};
    node_tree nodeD = {"D",nullptr,nullptr};
    node_tree nodeC = {"C",nullptr,&nodeF};
    node_tree nodeB = {"B",&nodeD,&nodeE};
    node_tree nodeA = {"A",&nodeB,&nodeC};

    node_tree* tree = &nodeA;
    printTreePreOrder(tree);  // A       B       D       E       G       C       F
    cout << endl;
    printTreeInOrder(tree);  // D       B       G       E       A       C       F
    cout << endl;
    printTreePosOrder(tree);  // D       G       E       B       F       C       A
    cout << endl;
    cin.get();
}