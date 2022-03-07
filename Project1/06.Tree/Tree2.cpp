//#include <iostream>
//#include <algorithm>
//#include <queue>
//
//using namespace std;

/*
	Ʈ�� ��ȸ(traversal)
		- ������ ������ ���� Ʈ���� ��� ��带 �ѹ��� �湮�ϴ� �۾�


	#�������� Ʈ�� ��ȸ ���

	-	���� ��ȸ
	-	���� ��ȸ
	-	���� ��ȸ
	--------------------- ���� �켱 Ž����
	-	���� ���� ��ȸ
	--------------------- �ʺ� �켱 Ž��


	*���� ��ȸ(preorder traversal)
	������ (���� ���) -> ���� ����Ʈ�� -> ������ ����Ʈ�� 
		A -> B -> D -> H -> I -> E
		C -> F -> J -> G 
	
	- ��;˰������� ���밡�� 


	*���� ��ȸ(inorder traversal)
	���� ����Ʈ�� -> ������(�������) -> ������ ����Ʈ��
	 H->D->I->B->E->A->J->F->C->G

	 *���� ��ȸ(postorder traversal)
	 ���ʼ���Ʈ�� -> ������ ����Ʈ�� -> �������
	 H->I->D->E->B->J->F->G->C->A


	 *���� ���� ��ȸ(level order traversal)
	 ���� ������ �ִ� ��带 ��� �湮�� �� ū������ �̵��Ͽ� �湮�� �ݵ�
	 ť�� ����Ͽ� ����
	 A->B->C->D->E->F->G->H->I->J

	 ���� ����Ǿ��������� ������ ���ʴ�� �湮�ȴٴ°� Ư����
*/

//struct Node
//{
//
//	char data;
//	Node* left;
//	Node* right;
//
//	Node(char d) : data(d), left(nullptr), right(nullptr) {}
//};
//
//void preorder(Node* node)
//{
//	if (node)
//	{
//		std::cout << node->data << ", ";
//		preorder(node->left);
//		preorder(node->right);
//	}
//}
//
//void inorder(Node* node)
//{
//	if (node)
//	{
//		inorder(node->left);
//		std::cout << node->data << ", ";
//		inorder(node->right);
//	}
//}
//
//void postorder(Node* node)
//{
//	if (node)
//	{
//		postorder(node->left);
//		postorder(node->right);
//
//		std::cout << node->data << ", ";
//	}
//}
//
//void levelorder(Node* node) //root����� �����͸� �����ؾ���
//{
//	std::queue<Node*> q;
//	q.push(node);
//
//	while (!q.empty())
//	{
//		//auto�� ���������Ÿ������ ��������
//		auto curr = q.front();
//		q.pop();
//
//		cout << curr->data << ", ";
//		if (curr->left) q.push(curr->left);
//		if (curr->right) q.push(curr->right);
//	} //�׸��׸��鼭 �����غ��� ���������
//}
//
//void delete_tree(Node* node)
//{
//	if (node)
//	{
//		delete_tree(node->left);
//		delete_tree(node->right);
//
//		delete node;
//	}
//}
// 
//int main()
//{
//	/*
//			A
//		B		C
//	  D	 E		 F
//
//	*/
//	Node* root = nullptr;
//
//	root = new Node('A');
//	root->left = new Node('B');
//	root->right = new Node('C');
//	root->left->left = new Node('D');
//	root->left->right = new Node('E');
//	root->right->right = new Node('F');
//
//	preorder(root);
//	cout << endl;
//
//	inorder(root);
//	cout << endl;
//
//	postorder(root);
//	cout << endl;
//
//	levelorder(root);
//	cout << endl;
//
//	delete_tree(root); //�޸� ������
//}

/*
	����Ʈ�� �����ϱ� 
		������ ��忡�� �����ڽ� ���� �������ڽĳ�带 ���� �����ϰ� 
		�ڱ� �ڽ��� �����ϴ� �ڵ带 �����ϴ� �Լ� �����ϸ��
*/