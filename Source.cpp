#include"Linked_ListD.h"
#include<iostream>
using namespace std;

int main(){
	cout << "Testing the linked list class " << endl;
	Linked_listD a;
	a.Insert_Head(3);
	a.Insert_Head(4);
	a.Insert_Head(5);
	a.Insert_Head(6);
	auto pos = a.Find(4);

	cout << "The position of element 4 is " << pos << endl;

	a.Insert_after(3, 7);
	a.Print_List();
	a.Insert_after(5, 7);
	a.Insert_after(5, 7);
	a.Insert_after(2, 7);

	a.Print_List();

	a.Remove_After(3);
	a.Print_List();
	a.Remove_After(3);


	a.Print_List();

	a.Clear();
	a.Remove_Head();
	return 0;
}