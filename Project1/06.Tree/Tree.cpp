#include <iostream>
#include <algorithm>

using namespace std;

/*
	Ʈ�� : �������� ������ ��Ÿ���� �ڷᱸ��

	���� �Ѹ�(root)�� ����, �������� (branch)�� ��(leaf)�� �Ʒ��� �ڶ�� ���·� ǥ��
	
	ex) ������, �������� , �������� ����Ʈ��


			---Ʈ�� ���---

	#	��Ʈ : ���� ��ġ
	#	�θ�(���) - �ڽ�(���) 
	#	���� : Ʈ���� �� �Ʒ��� ��ġ (�ڽĳ�尡 ���� ���̵�)
	#	���γ�� : �������ƴ� ��� (�ڽ��� �ϳ��� �������)
	#	���� : �θ� ���� ����
	#	���� - �ļ�  : ������ ����(�θ��, �θ��� �θ�), �ļ��� �ڽ��� �ڽĵ�, �ڽ����ڽĵ�
	#	���� (degree) : �ڱ��ڽ��� �ڽİ���(����) 
	#	���� (level) : ��Ʈ���� ��ŭ �������ִ���  ��Ʈ��ġ�� ���� 0 -> �׾Ʒ��� 1 -> 2 ...
	#	���� (height) : ��Ʈ��Ʈ���� ���������� �Ÿ��� �� ���� 0,1,2..��
	#	����Ʈ�� (�κ�Ʈ��) : Ư������� �����Ͽ� �ش� �ڽĵ鸸 �ش��ϴ� Ʈ�� 


	*����Ʈ��
	��� ��尡 �ִ� �ΰ��� �ڽ��� ���� Ʈ��
	- ��� ����� ������ 2 ������ Ʈ��
	- ��� ��尡 2���� ����Ʈ���� ������ �ִ� Ʈ��

	������ �ڽ� ���� �θ��� �����ڽ� �Ǵ� ������ �ڽ����� ������

						A�θ�
					B		C		C		B -> �ٸ�Ʈ���� �νĵ�
					��		��		

	* �� ����Ʈ��
	��� ��尡 0�� �Ǵ� 2�� �ڽĳ�带 ���� ����Ʈ�� 
	(������带 ������ ������ ��� �ڽ��� 2����)

	*��ȭ ����Ʈ��
	Ʈ���� ��緹������ ��尨 �ǵ� ä���� �ִ� Ʈ��
	���̰� h�̸� ��尳���� 2h - 1 �ΰ�갡��

	*���� ����Ʈ�� 
	������ ����(������)�� ������ ��� �������� ��尡 ������ ä���� �ְ�,
	������ �������� ��尡 ���ʺ��� ä���� �ִ� ����Ʈ��

	*���� ����Ʈ�� (����ȿ����)
	��� ����� ���� Ʈ�� ���� ���� ���̰� 1 ����

	*���� Ʈ��	(���� ��ȿ����)
	������带 ������ ��� ��尡 �ϳ��� �ڽ� ��常 ���� Ʈ��


	**����Ʈ�� ���� ���
	
		-	�迭 : ���� ����Ʈ���� ���, �迭�� �̿��Ͽ� ȿ�������� ǥ�� ���� -> ������ ����
		-	���Ḯ��Ʈ : ������ �����Ϳ� ���� �ڽİ� ������ �ڽ� ��带 ����Ű�� ������ 2���� ���� ����ü ���

		- ��� ���� �ڵ�						*����Ʈ ������ ����
	struct Node													data�θ�
	{													left�ڽ�		right�ڽ�
		char data;
		Node* left;
		Node* right;

		Nod(char d) : data(d), left(nullptr), right(nullptr) {}
	}
*/


//struct Node
//{
//	char data;
//	Node* left;
//	Node* right;
//
//	Node(char d) : data(d), left(nullptr), right(nullptr) {}
//};
//
//int main()
//{
//	Node* root = new Node('A');
//	root->left = new Node('B');
//	root->right = new Node('C');
//	root->left->left = new Node('D');
//	root->left->right = new Node('E');
//	root->right->right = new Node('F');
//} //�޸� �� �߻� 

//->�����忡 ���