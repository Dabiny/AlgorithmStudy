//#include <vector>
//#include <iostream>
//#include <queue>
//
//using namespace std;

/*
	�ʺ� �켱 Ž�� (BFS)

	���� �������� ������ ������ �湮 ��, �ٽ� �̵� ������ ������ ��� ������ ã�� �湮�ϴ� ���

	���� �������κ��� ����� ������ ���� �湮, �ָ� ������ �ִ� ������ ���߿� �湮

	���� ť�� �����Ѵ�.

	0 -> 1 -> 3 -> 4 -> 2 -> 5
	(DFS�׷����� �Ȱ��� ������)

*/

//vector<int> bfs(const vector<vector<int>>& adj_list, int s)
//{
//	vector<bool> visited(adj_list.size(), false);
//	vector<int> visit_order;
//	queue<int> q;
//
//	q.push(s); // 0����
//
//	while (!q.empty())
//	{
//		int v = q.front();
//		q.pop();
//
//		if (visited[v]) //Ʈ�������̸�
//		{
//			continue;
//		}
//
//		visited[v] = true;
//		visit_order.push_back(v);
//
//		for (int a : adj_list[v])
//		{
//			if (!visited[a])
//			{
//				q.push(a);
//			}
//		}
//	}
//
//	return visit_order;
//}