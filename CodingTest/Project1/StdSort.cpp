//#include <algorithm>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
///*
//	template<typename RandomIt>
//	void sort(RandomIt first, RandomIt last);
//
//	template<typename RandomIt>
//	void sort(RandomIt first, RandomIt last, Compare comp);
//
//
//	**std::sort() �Լ�
//
//	���� �����̳ʿ� ���� (first, last) ������ ���ҵ��� ������ �������
//	���� ( �⺻��: �������� )
//
//	���� ���� ���� ������ ������ ������� ����
//	(���� ������ std::stabe_sort()�Լ� ���, �ణ ����)
//
//	std::sort()�Լ��� O(n log n)���� �����ؾ���
//
//	C��Ÿ�� �迭, vector, deque, array�� �����Ҷ� �ַ� ���
//	(list, forward_list�� ��ü ��� �Լ� ���)
//
//	comp ���ڿ� �� �Լ� ��ü�� ���� �Ҽ� ����
//
//	
//*/
//
//class Person
//{
//public:
//	string name;
//	int age;
//
//	void print() const
//	{
//		cout << name << ", " << age << endl;
//	}
//
//	bool operator<(const Person& a) const //���̼�
//	{
//		return this->age < a.age;
//	}
//};
//
//bool abs_cmp(const int a, const int b);
//
//int main()
//{
//
//
//	/*�迭 ����*/
//	int arr[5] = { 4, 2, 3, 5, 1 };
//	sort(arr, arr + 5);  // (ù��° ���ڴ� sort�� �迭������Ŵ �� ��������, �ι�°�� arr�� ũŰ)
//	sort(begin(arr), end(arr)); //c++��Ż std::begin(),std::end() ���̺귯�� �����Լ���, arr�Ӹ��ƴ϶� ���͵� ��밡��
//	//begin(vec)..
//
//	/*���� ����*/
//	vector<string> vec = { "orange", "banana", "apple", "lemon" };
//	sort(vec.begin(), vec.end()); //������������ ���� abc��
//
//	sort(begin(arr), end(arr), greater<>()); //�������� 
//	sort(vec.begin(), vec.end(), greater<>()); // ��������
//
//	/*
//		greater<>() �������� ������ ���� ���Լ� ��ü ���ø�����
//		less<>() �������� , ��Ʈ�Լ��� �׷����͸� ���������� �ڵ����� ���������� �߾�������
//	*/
//
//	class AbsCmp
//	{
//	public:
//		inline bool operator()(int a, int b) const
//		{
//			return abs(a) < abs(b);
//		}
//	};
//
//	vector<int> nums = { 10, 2, -3, 5, 7 }; //���밪ũ��� �������������ϰ� ������
//	sort(nums.begin(), nums.end(), abs_cmp); //abs_cmp�Լ��� �������־����
//	sort(nums.begin(), nums.end(), AbsCmp()); //���͸� �̿��� ���밪 ����
//
//
//	sort(nums.begin(), nums.end(), [](int a, int b) {return abs(a) < abs(b); }); //���ٽ�
//
//	/*------------------------------------------------------------------------*/
//
//	vector<Person> v;
//	v.push_back({ "Amelia", 29 });
//	v.push_back({ "Noah", 25 });
//	v.push_back({ "Olivia", 31 });
//	v.push_back({ "Shphia", 40 });
//	v.push_back({ "George", 35 });
//
//	sort(v.begin(), v.end());
//		// ���Ľ� �̸������ټ��������� ���̼����� ���� �츮�� ��������Ƿ� ������ �ؾ��� ��..
//		// ����° ���ڿ��ٰ� �츮�� ���Լ��� ������ ���ų� �ε�ȣ �����ε��� �������־����
//		// sort�Լ� ���� person��ü�� ���ϴ� �ε�ȣ�� �������� �� �ε�ȣ�� �츮�� ��������ǿ����ε��� �ؼ�
//		// ���̼����� �������ڰ� �����س������!
//
//	for (const auto& p : v)
//	{
//		p.print();
//	}
//
//}
//
//bool abs_cmp(const int a, const int b)
//{
//	return abs(a) < abs(b);
//}