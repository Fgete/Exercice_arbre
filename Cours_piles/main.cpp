#include "list.h"
#include "tree.h"


int main() {

	// --- TREE ---
	binary_tree<int> myTree;

	binary_node<int> node0(10);
	myTree.addNode(&node0);
	cout << "Balance : " << myTree.balance() << endl << endl;

	binary_node<int> node1(5);
	myTree.addNode(&node1);
	cout << "Balance : " << myTree.balance() << endl << endl;

	binary_node<int> node2(6);
	myTree.addNode(&node2);
	cout << "Balance : " << myTree.balance() << endl << endl;
	myTree.print();

	myTree.doBalance();
	cout << "Balance : " << myTree.balance() << endl << endl;
	myTree.print();


	return 0;
}