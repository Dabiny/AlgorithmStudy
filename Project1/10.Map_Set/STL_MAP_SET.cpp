//#include <iostream>
//#include <algorithm>
//#include <queue>
//#include <set>
//#include <string>
//#include <map>
//
//using namespace std;
////
///*
//	STL �����̳� ����
//
//	���� �����̳�: vector, array, deque, list, forward_list
//
//	���� �����̳�: set, multiset, map, multimap
//
//	�������� ���� �����̳�: unordered_set, unordered_multiset, unordered_map, unordered_multimap
//
//	�����̳� �����: stack, queue, priority_queue
//
//
//	set �� map ����
//
//	- set�� Ű�� ����
//	- map�� Ű�� ���� ����
//
//	set�� multiset ����
//
//	- set�� ������ Ű�� �����͸� ����(�ߺ� ��� ����)
//	- multiset�� �ߺ��Ǵ� �����͸� ����
//
//	set�� unordered_set����
//
//	- set�� ���ο��� �����͸� �����ؼ� ����
//	- unordered_set�� �����͸� �������� ����
//
//
//	* set �����̳� *
//	
//		template<class Key, class Compare = std::less<key>,
//				class Allocator = std::allocator<key>>
//		class set;
//
//	- Key Ÿ���� Ű���� �����ϴ� ���� �����̳�
//
//	- ����� �����ʹ� Ű ���� �������� ���ĵ�
//
//	- ������ ����, ����, Ž���� O(log n) �ð� ���⵵�� ����
//
//	- std::set�� ���� ����-�� Ʈ���� �̿��Ͽ� ������
//
//	- ���� �ߺ��Ǵ� �����͸� set������ �����Ϸ��� std::multiset �����̳ʸ� ���
//
//	- ���� �����͸� ���ĵ��� ���� ���·� �����Ϸ��� std::unordered_set �����̳ʸ� ���
//
//	- ����� ���� Ÿ���� ������ ���, �񱳿���(<,>...)�� �����ؾ���
//
//	- #include<set>�� ���� �Ǿ� ����
//
//
//	begin(), end(), rbegin(), rend() : �� ���� �� ������ �ݺ��� ��ȯ
//
//	insert(): (�ߺ����� �ʴ�) ���ο� ���Ҹ� ���� 
//
//	erase(): Ư�� ���� ����
//
//	find(): Ư�� Ű ���� ���� ���Ҹ� ã�� �ݺ��ڸ� ��ȯ. ���Ҹ� ������ ã�� ���ϸ�
//			end()�� �ش��ϴ� �ݺ��ڸ� ��ȯ. (cf.)contains()
//
//	clear(): ��� ���Ҹ� ����
//
//	size(): ������ ������ ��ȯ
//
//	empty(): set�� ��������� true�� ��ȯ
//
//
//
//
//	* map �����̳� *
//			template<class Key, class T, 
//					 class Compare = std::less<Key>,
//					 class Allocator = <std::allocator<std::pair<const Key, T>>>
//			class map;
//
//	set�����̳ʿ� �ſ� ��� 
//	KeyŸ���� Ű�� TŸ���� ���� ���� �����ϴ� ���� �����̳�
//	����� �����ʹ� Ű ���� �������� ���ĵ�
//	������ ����, ����, Ž���� O(log n) �ð� ���⵵�� ����
//	���� ���� �� Ʈ���� �̿��Ͽ� ������
//	���� �ߺ��Ǵ� �����͸� map ������ �����Ϸ��� mtd::multimap �����̳ʸ� ���
//	���� �����͸� ���ĵ��� ���� ���·� �����Ϸ��� std::unordered_map �����̳ʸ� ���
//	����� ���� Ÿ���� ������ ���, �� ������ �����ؾ� �� (������ �����ε�)
//	<map>�� ���ǵǾ� ����
//
//	begin(), end(), rbegin(), rend()
//	insert()
//	erase()
//	*operator[] : Ư�� Ű�� �ش��ϴ� ������ ���� ������ ��ȯ. �ش� Ű�� ���Ұ� ������
//				  ���ο� ���Ҹ� �⺻ ������ �����Ͽ� ������ ��ȯ.
//	
//	find()
//	clear()
//	size()
//	empty()
//
//*/
//
//int main()
//{
//	set<int> odds; //Ȧ�� ������ ����
//	//set<int> odds { 1,7,5,4,9}; ��� �ʱ�ȭ�Ҽ��� ����
//
//	set<int, greater<>> evens{ 2, 4, 6, 8 }; //������������ ¦���� ����, greater<> �����߰�
//
//	evens.insert(10);
//	evens.insert(2); //�ʱⰪ���ִ� Ű���� �ߺ��̵Ǹ� �μ�Ʈ�� 2�� ���� ���õ�
//
//	if (evens.find(4) != evens.end())
//	{
//		cout << "4 is found!" << endl;
//	}
//	else
//	{
//		cout << "4 is not found" << endl;
//	}
//	// ���ε��Լ����Ἥ Ư������ ã���� ���� ã�����ϸ� �ݺ��ڴ� end()��ġ�� ����Ŵ
//	// if���ǹ��� ���� ���ε�(4)���� ���尡 �ƴҰ�� �� ã�����
//
//
//	odds.insert(1);
//	odds.insert(7);
//	odds.insert(5);
//	odds.insert(3);
//	odds.insert(9); //���� ����
//
//	for (auto n : odds)
//	{
//		cout << n << ", ";
//	}
//	cout << endl;
//	// ������������ ���ĵǴ� Ư¡�� �ִ�. 
//
//	for (auto n : evens)
//	{
//		cout << n << ", ";
//	}
//	cout << endl;
//
//	using psi = pair<string, int>; //using ����
//
//	//struct psi
//	//{
//	//	string first;
//	//	int second;
//
//	//}; 
//	//����� ����Ÿ�Կ� ���ؼ� Ű���� ���� ������ �����Ϸ��� �񱳿����� ���� 
//	// ������ �����ε��� �������Ͽ� �����.
//
//	//���ڿ��� �������� ������ �̷�� Ÿ���� �����ϰ������
//	set<psi> managers{ {"Amila", 29}, {"Noah", 25}, {"Olivia", 31} };
//	managers.insert({ "George", 35 });
//
//	psi person1 = { "Noah", 25 };
//
//	if (managers.find(person1) != managers.end())
//	{
//		cout << person1.first << "is a manager!" << endl;
//	}
//	else
//	{
//		cout << person1.first << "is not a manager!" << endl;
//	}
//
//	managers.erase({ "Sophia", 40 }); //���� Ű���̱⿡ ���õ�
//	managers.erase({ "Noah", 30 }); //30���� ��ƴ� ���⿡ ���õ�
//
//	for (const auto& m : managers)
//	{
//		cout << m.first << "(" << m.second << ")" << endl;
//		// first -> ����� Ű�� ù��° 
//		// first -> ����� Ű�� �ι�° 
//	}
//
//	/*----------------------------------------------------------*/
//	
//	map<string, int> fruits; //�����̸��� ������ ����
//
//	fruits.insert({ "apple", 1000 }); //�߰�ȣ�� �� ���� 
//	fruits.insert({ "banana", 1500 });
//	
//	// �ʵ� ��ü������ abc������ ������ �س��� ������ �μ�Ʈ ������ ������� �������� ���ĵ�
//
//	// operator[]
//	cout << fruits["apple"] << endl;
//	//���ȣ������ �ȿ� Ű���� �ְԵǸ� �׾ȿ� ���� �����Ͽ� ��ȯ��.
//
//	fruits["orange"];
//	//�ڵ带 �̷��Ը� �ۼ��ϸ� Ű���� ������ �ǰ�, �ȿ� ��(int)�� 0���� �ʱ�ȭ��.
//	fruits["orange"] = 3000;
//
//	// fruits& operator[](int a) ;
//
//
//	fruits["grape"] = 4000;
//	fruits["lemon"] = 1000;
//
//	fruits["apple"] = 2000; //���������� ���� �ٲ� ���� ����.
//
//	fruits.erase("apple"); //Ű���� ������ ������
//
///*	for (auto [name, price] : fruits)
//	{
//		cout << name << " is " << price << "won." << endl;
//	}*/ //?
//
//	for (const auto& p : fruits)
//	{
//		cout << p.first << " is " << p.second << " won." << endl;
//	}
//
//
//}