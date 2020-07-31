
- tree
	- subtree
		- node
			- parent
			- child
				- leaf

binary tree: tree in which no node can have more than two children

- searching

The property that makes a binary tree into a binary search tree is that for every node X:
- the values of all the items in its left subtree are '''smaller''' than the item in X.
- the values of all the items in its right subtree are '''larger''' than the item in X.

The average running time of most operations is O(logN)



> Tree Node

template <class T>
class Node
{
	T value;
	Node<T> *left;
	Node<T> *right;
};

Tree Traversal
A tree traversal is a specific order in which to trace the nodes of a tree.
There are 3 common methods:
- In-order: left, root, right. -> sorted (BFS)
- Pre-order: root, left, right. -> (DFS)
- Post-order: left, right, root.


ALWAYS SIZE OF TREE IS ONE LESS THAN ORDER BEWARE-GRAPH MUST BE CONNECTED FOR TREE
