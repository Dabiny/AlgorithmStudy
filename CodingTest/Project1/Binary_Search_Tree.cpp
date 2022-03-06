//#include <iostream>
//#include <algorithm>
//#include <queue>
//
//using namespace std;

/*
	���� Ž�� Ʈ��

		ȿ������ �ڷ��� Ž���� ���� ���� Ʈ�� ����� �ڷᱸ��
		�ڷ��� �������� ������ ǥ���ϱ� ���� ����ϴ� ���� �ƴ϶�, 
		�ڷ��� ȿ������ ������ ���� Ʈ�� ������ ���
		(������������..)


		��� ��� N�� ����, ���� ����Ʈ���� �ִ� ��� ����� Ű���� 
		��� N�� Ű ������ �۰�, ������ ����Ʈ���� �ִ� ��� ��� Ű����
		N�� Ű ������ ŭ.

							9
					4				15
				2		6		13		18
			1		 5


	����Ž�� Ư¡

		�ڷ��� Ž��, ����, ������ ��� O(log n) �ð� ���⵵�� ������ (ȿ����)
		���� Ž��Ʈ���� ������ȸ�ϸ� ������������ ���ĵ� ���� ���� �� ����


	[�ڷᱸ��]	[Ž��]	[����]	[����]
	�迭			O(n)	O(1)	O(1)
	���Ḯ��Ʈ	O(n)	O(1)	O(1)
	���ĵȹ迭	O(logn) O(n)	O(n)
	����Ž��Ʈ�� O(logn)	O(logn)	O(logn) *ȿ����

	*Ž���� O(h) (h�� ����Ʈ���� ����) -> log2n -> O(logn)
	

	����Ž��Ʈ������ Ž��

	1. ��� ��Ʈ Ű���� �������� Ÿ�ٰ��� �� 
	2. ��ƮŰ���� ������ ���� ũ�� ���������� ������
	3. ������ ����Ʈ������ �� �� 
	4. �ݺ�

	����Ž��Ʈ������ ����
	1. ��� ��Ʈ Ű���� �������� Ÿ�ٰ� ��
	2. ��ƮŰ���� ������ ��, ũ�� ��
	3. ������ ����Ʈ���� ��򰡿� �����ؾ���
	4. ������ ����Ʈ���� �� 
	5. �������� ��� �� �ϰ� �����ʿ� ��������ָ�� 
	

	����Ž��Ʈ������ ����
		���� Ž�� Ʈ������ �ڷ��� ������ �ش� ��带 ���� �� ��, 
		BST�Ӽ��� ������ �� �ִ� �ٸ� ������ ��带 ã�� �ش� ���� ��ü�ؾ���

	case1. �ڽ� ��尡 ���°�� -> 
			�ش��带 �����ϰ� �θ��� ��ũ�� ����

	case2. �ڽ� ��尡 �ϳ��� �ִ°�� -> 
			�ش��带 �����ϰ�, �θ��� �����Ͱ� �ش� ����� �ڽ� ��带 ����Ű���� ����

	case3. �ڽ� ��尡 �ΰ� �ִ°�� ->
			�ļ� ����� ���� ���� ���� �����ϰ�, �ļ� ��带 ���� 
			 *�İ��� ��� (successor): ���� ��� �������� ū ���ڸ� ���� ���
									(���� ����� ������ ����Ʈ������ ���� ���� ���� ���,
									 �ļӳ��� �ڽ��� ���ų� ������ �ڽĸ� ����. )


	���� Ž�� Ʈ���� ������
		������ ���� ������ ���� ���� Ž�� Ʈ���� �������� ġ��ģ ���·� ������ �� ����.
		Ʈ���� �������� ġ��ĥ ���, Ʈ���� ���̰� h = n-1 ���·� �����ǹǷ�, 
		Ž��, ����, ���� ������ �ð� ���⵵�� O(n)���� ������.

	���� Ž��Ʈ���� ������ �ذ���
		�������� ġ��ģ Ʈ���� �����������Ͽ� �������� Ʈ�� ���·� ���� �� �� ����.
		Ʈ��ȸ���Ͽ� Ʈ���� ������ �����ش�. 

						7										5
				5				9						3				7
			3		6				 =>	Ʈ��ȸ��		2		4		6		9
		  2  4


	�������� Ʈ���� ��
		AVLƮ��, �����Ʈ�� , BƮ��, ���÷��� Ʈ��


*/

//struct Node
//{
//	int data;
//	Node* left;
//	Node* right;
//
//	Node(int d) : data(d), left(nullptr), right(nullptr) {}
//};
//
//class BinarySearchTree
//{
//private:
//	Node* root = nullptr;
//
//public:
//	~BinarySearchTree()
//	{
//		delete_tree(root);
//	}
//
//	void insert(int value)
//	{
//		if (!root)
//		{
//			root = new Node(value);
//		}
//		else
//		{
//			insert_impl(root, value); 
//		}
//	}
//
//	Node* find(int value)
//	{
//		return find_impl(root, value);
//	}
//
//	void inorder() //��������
//	{
//		inorder_impl(root);
//	}
//
//	void erase(int value) // ��� ���� �Լ�
//	{
//		root = erase_impl(root, value);
//	}
//
//private:
//	void insert_impl(Node* curr, int value) //implimantation
//	{
//		if (value < curr->data)
//		{
//			if (!curr->left)
//			{
//				curr->left = new Node(value);
//			}//���� ���������Ͱ� ����Ű�°� ���̶��
//			 //���ο� ��带 ���� ����� �־���
//			else
//			{
//				insert_impl(curr->left, value); //��������� �ٽ�ȣ���ϸ鼭 ��
//			}
//		}
//		else
//		{
//			if (!curr->right)
//			{
//				curr->right = new Node(value);
//			}
//			else
//			{
//				insert_impl(curr->right, value);
//			}
//		}
//	}
//
//	Node* find_impl(Node* curr, int value)
//	{
//		if (curr == nullptr)
//		{
//			return nullptr;
//		}
//
//		if (value == curr->data)
//		{
//			return curr;
//		}
//		else
//		{
//			if (value < curr->data)
//			{
//				return find_impl(curr->left, value);
//			}
//			else
//			{
//				return find_impl(curr->right, value);
//			}
//		}
//	}
//
//	void inorder_impl(Node* curr)
//	{
//		if (curr != nullptr)
//		{
//			inorder_impl(curr->left);
//			cout << curr->data << ", ";
//			inorder_impl(curr->right);
//		}
//	}
//
//	void delete_tree(Node* node)
//	{
//		if (node)
//		{
//			delete_tree(node->left);
//			delete_tree(node->right);
//
//			delete node;
//		}
//	}
//
//	//��� ���� ��, �θ� ��� �����Ͱ� �����Ѿ� �� ����� �ּҸ� ��ȯ
//	Node* erase_impl(Node* curr, int value)
//	{
//		if (!curr) //��尡 ���ΰ��
//		{
//			return nullptr;
//		}
//
//		if (value < curr->data)
//		{
//			curr->left = erase_impl(curr->left, value);
//		}
//		else if (value > curr->data)
//		{
//			curr->right = erase_impl(curr->right, value);
//		}
//		else
//		{
//			if (curr->left && curr->right) //�ڽ� ��尡 �� �� �ִ� ���
//			{
//				auto succ = successor(curr);
//				curr->data = succ->data;
//				curr->right = erase_impl(curr->right, curr->data);
//			}
//			else //�ڽ� ��尡 ���� ���ų�, ���� �ڽĸ� �ִ°��
//			{
//				auto tmp = curr->left ? curr->left : curr->right;
//				//�Ѵ� ������ �ΰ�
//				delete curr;
//				return tmp;
//			}
//		}
//
//		return curr;
//	}
//
//	Node* successor(Node* curr) // �ļ� ��� ã��
//	{
//		auto node = curr->right;
//		
//		while (node && node->left)
//		{
//			node = node->left;
//			
//		}
//
//		return node;
//	}
//};
//
//int main()
//{
//	BinarySearchTree bst;
//
//	bst.insert(10);		bst.insert(14);
//	bst.insert(5);		bst.insert(7);
//	bst.insert(18);		bst.insert(4);
//	bst.insert(6);		bst.insert(20);
//	bst.insert(16);
//	bst.inorder();
//	cout << endl;
//
//	if (bst.find(7))
//	{
//		cout << "7 is found" << endl;
//	}
//	else
//	{
//		cout << "7 is not found" << endl;
//	}
//
//	if (bst.find(15))
//		cout << "15 is found" << endl;
//	else
//		cout << "15 is not found" << endl;
//
//	bst.insert(9);
//	bst.insert(12);
//
//	bst.inorder(); 
//	cout << endl;
//	
//
//	bst.erase(4);
//	bst.erase(5);
//	bst.erase(14);
//	bst.inorder();
//	cout << endl;
//
//	bst.insert(15);
//	bst.erase(10);
//	bst.inorder();
//	cout << endl;
//}