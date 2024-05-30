#include<iostream>
using namespace std;
#include"Linked_ListD.h"



Linked_listD::Linked_listD() //Creates an empty list 
{

}
Linked_listD::~Linked_listD()
{
	Clear();
}
int Linked_listD::Node_Count() const
{
	return m_node_count;
}
void Linked_listD::Insert_Head(int n) //Adds new head to the linked list 
{
	Node* node = new Node{ n };
	node->next = m_head;
	m_head = node;
	m_node_count++;



}

void Linked_listD::Insert_after(int index, int n) //Inserts node after a specific index 
{

	Node* x{ m_head };
	Node* node = new Node{ n };
	while (index > m_node_count)
	{
		cout << "Please enter a node value that is at least " << m_node_count << endl;
		cin >> index;

	}
	for (int i = 1;i < index;i++)
	{
		x = x->next;
	}
	Node* temp = x->next;
	x->next = node;
	node->next = temp;
	node->prev = x;
	m_node_count++;



}
void Linked_listD::Remove_Head() //removes node head 
{
	if (m_node_count == 0)
	{
		cout << "The list is empty " << endl;
		return;
	}
	Node* old_head = m_head;
	m_head = m_head->next;
	delete old_head;
	m_node_count--;


}
void Linked_listD::Remove_After(int index) //Removes node after specific index 
{
	if (m_node_count == 0)
	{
		cout << "The list is empty " << endl;
	}
	Node* x{ m_head };

	while (index > m_node_count)
	{
		cout << "Please enter a node value that is at least " << m_node_count - 1 << endl;
		cin >> index;

	}
	for (int i = 1;i < index;i++)
	{
		x = x->next;
	}
	Node* temp = x->next;
	x->next = temp->next;
	temp->prev = NULL;
	x->next->prev = x;
	delete temp;
	m_node_count--;
}
void Linked_listD::Clear()
{

	while (m_node_count != 0)
	{
		Remove_Head();
	}
}

int Linked_listD::Find(int n)
{

	Node* x{ m_head };
	for (int i = 0;i < m_node_count;i++)
	{
		if (x->data == n)
			return i;
		x = x->next;
	}


}

void Linked_listD::Print_List()
{
	Node* x{ m_head };
	while (x != nullptr)
	{
		cout << x->data << ' ';
		x = x->next;
	}
	cout << endl;
}