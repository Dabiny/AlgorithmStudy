///*
//* unordered_set�����̳� (�������������� ���� set)
//	
//	template<class Key(������Ÿ��), class Hash(�ؽ��Լ�) = std::hash<Key>,
//			 class KeyEqual = std::equal_to<Key>,
//			 class Allocator = std::allocator<Key>>
//	class unordered_set;
//
//	keyŸ���� Ű ���� �����ϴ� �������� ���� �����̳�
//	������ ����, ����, Ž���� O(1) �ð� ���⵵�� ����
//	���� �ߺ��Ǵ� �����͸� unordered_set ������ �����Ϸ��� std::unordered_multiset���
//	����� ���� Ÿ���� ������ ���, �ؽ� �Լ� Hash�� �񱳸� ���� KeyEqual�� �����ؾ� ��.
//	<unordered_set>�� ���� �Ǿ� ����
//	�ֿ� �Լ� ������ std::set�� ���� ������.
//
//	set -> ����Ž��Ʈ���� �̿���
//	unordered_set -> �ؽ��� �̿���
//
//
//	unordered_map �����̳�
//		
//		template<class key, class T,
//				 class Hash = std::hash<Key>,
//				 class KeyEqual = std::equal_to<Key>,
//				 class Allocator = std::allocator<std::pair<const Key, T>>>
//		class unordered_map;
//
//	KeyŸ���� Ű(key)�� TŸ���� ��(value)�� ��(pair)�� �����ϴ� �������� ���� �����̳�
//	������ ����, ����, Ž���� O(1) �ð� ���⵵�� �����ؾ���
//	���� �ߺ��Ǵ� �����͸� unordered_map ������ �����Ϸ��� std::unordered_multimap ���
//	����� ���� Ÿ���� ������ ���, �ؽ��Լ� Hash�� �񱳸� ���� KeyEqual�� �����ؾ���
//	<unordered_map>�� ���ǵǾ�����
//	�ֿ� �Լ� ������ std::map�� ���� ������.
//
//*/

//#include <iostream>
//#include <string>
//#include <vector>
//#include<unordered_set>
//#include<unordered_map>
//
//using namespace std;
//
//int main()
//{
//	// car -> radio -> orange -> ear -> radio
//	// radio�� ����Ǿ��ִ��������� �ߺ�üũ�ϴ� ����
//
//	unordered_set<string> words; //�����ձ� ���� 
//	words.insert("car"); 
//	words.insert("radio");
//	words.insert("orange");
//	words.insert("ear");
//	
//	
//	string word = "radio";
//
//	if (words.find(word) != words.end())
//	{
//		cout << word << " is used!" << endl;
//	}
//	else
//	{
//		cout << word << " is not used" << endl;
//	}
//
//	//�ߺ��Ǵ� ���� ã�������� unordered_set�� Ȱ���� �� ����
//	vector<int> numbers{ 1, 5, 3, 1, 5, 7, 4, 5, 6, 3, 2, 7, 3, 6, 2 };
//	unordered_set<int> num_set(numbers.begin(), numbers.end()); // �����ڷ� ���ڰ� ����
//
//	cout << "# of numbers: " << num_set.size() << endl;
//
//	unordered_map<string, int> fruits;
//	//���ĵ��� ���� ���·� ��Ÿ��
//	fruits.insert({ "apple", 1000 });
//	fruits.insert({ "banana", 1500 });
//	fruits["orange"] = 3000;
//	fruits["grape"] = 4000;
//	fruits["lemon"] = 5000;
//
//	fruits["apples"] = 2000;
//	fruits.erase("grape");
//}

