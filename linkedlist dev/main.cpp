#include <iostream>
#include <iostream>
#include "LinkedList.h" 
using namespace std;


int main(int argc, char** argv) {
	
	LinkedList list1;	
	
	list1.insertToHead(10);
	list1.insertToHead(20); 
	
	list1.insetAfter(15,20);
		
	list1.insertToTail(6);
	
	cout << "head: " << list1.head->value << endl;
	cout << "tail: " << list1.tail->value << endl;
	list1.printAll();
	
	
	return 0;
}
