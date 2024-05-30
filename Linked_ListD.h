#ifndef Linked_listD_H
#define Linked_listD_H

class Linked_listD{
private:
	struct Node {
		int data{ 0 };
		Node* next{ nullptr };
		Node* prev{ nullptr };
	};
	int m_node_count;

	Node* m_head{ nullptr };

public:
	Linked_listD();
	~Linked_listD();
	int Node_Count() const;
	void Insert_Head(int n);
	void Insert_after(int index, int n);
	void Remove_Head();
	void Remove_After(int index);
	void Clear();
	int Find(int n);
	void Print_List();


};

#endif
