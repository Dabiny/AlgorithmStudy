//#include <vector>
//#include <iostream>
//#include <stack>
//
//using namespace std;

/*
	���� �켱 Ž��(Depth First Search)

	���� ������ ������ ���� �� �ϳ��� �����ؼ� �̵��ϴ� ������ �ݺ�.
	���̻� �̵������� ���� �� (���ٸ� �� �϶�) �� ������ �� Ʈ��ŷ(back tracking) �Ͽ�
	�ٽ� �̵��� ��θ� ����!

	start�������κ��� �Ÿ��� �־�����(�Ÿ� == ����) ���

	���� ��ͳ� �������� �����Ѵ�. 

	0 - 1 - 2
	| \ |	|
	3 - 4 - 5  

	0 -> 1 -> 2 -> 5(��) -> 2(��) -> 1 -> 4 -> 3

	0 -> 1 -> 2 -> 5 -> 4 -> 3
*/

// ��� ���� 
//const int N = 6; //���� ��
//bool gVisited[N] = {};
//
//void dfs_recursion(const vector<vector<int>>& adj_list, int s) //s�� ���� ����
//{
//	if (gVisited[s]) //gvisited [0]�� Ʈ���̸� ���� (��Ʈ��ŷ || ��� Ż�� ����)
//	{
//		return;
//	}
//
//	gVisited[s] = true; // �޽��� Ʈ��� �������ְ�
//	cout << s << ", "; // 0�� ����Ʈ ����ġ�� �ʿ��� �ڵ� �ۼ�
//
//	for (int v : adj_list[s]) // adj_list [0]�� ��Ʈ�� {1,3,4}�� ���鼭 ���ȣ��
//	{
//		dfs_recursion(adj_list, v); // 1 ȣ�� ...�ݺ�
//	}
//}
//
//int main()
//{
//	vector<vector<int>> adj_list = {
//		{1,3,4}, //0
//		{0,2,4}, //1
//		{1,5},   //2
//		{0,4},   //3
//		{0,1,3}, //4
//		{2}      //5
//	};
//
//	dfs_recursion(adj_list, 0);
//	cout << endl;
//}

//vector<int> dfs(const vector<vector<int>>& adj_list, int s)
//{
//	vector<bool> visited(adj_list.size(), false);
//	vector<int> visit_order;
//	stack<int> stk;
//
//	stk.push(s); //0 ����
//
//	while (!stk.empty())
//	{
//		int v = stk.top();
//		stk.pop();
//
//		if (visited[v]) continue;
//
//		visited[v] = true;
//		visit_order.push_back(v);
//		//�� ��ġ�� �ʿ��� �ڵ� �ۼ�
//
//		for (int a : adj_list[v])
//		{
//			if (!visited[a])
//			{
//				stk.push(a);
//			}
//		}
//	}
//
//	return visit_order;
//}