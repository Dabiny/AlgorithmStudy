//#include <algorithm>
//#include <vector>
//#include <iostream>
//
//using namespace std;

/*
	����Ž��(binary search)
	���ĵ� �迭�� ���� �˻� �ܰ躰�� �˻� ������ ������ �ٿ����鼭 �����͸� Ž���ϴ� ���

	�̹� ������ �Ǿ��־��� ������ !

	ex)
	1	2	3	5	7	10	13	15	18	23	25	27	28	30	33

	find(23)

	1	2	3	5	7	10	13	15	18	23	25	27	28	30	33
	^							^							^
	lower = 0					middle (lower+upper)/2		upper= 14

	-������ ���� middle���� find���� ����
	- 23�� 15���� ũ�� ������ �̵���� ���۱��� Ž�������� �ٿ��� 
	- middle��ġ�� lower��ġ�� �Űܼ� lower = middle �� �ǰ� �����

	�ٿ��� �������� middle�� ���ؼ� ( (lower+upper)/2 �ڸ� ) ���ε�(23)���� �̵�(27)���� ��
	�̵�� ���۴� 27 ~33�̱⶧���� ã�����ϴ� 23�� ���� ������

	�˻����� ���ٿ��ְ� ���ٿ���... 

	middle���� 23�̸� Ʈ��

	* �ð����⵵ : O(log n)
	
	* ����: �˻��ӵ��� ����, ����� ����
	* ����: �̹� ���ĵǾ��ִ� �����Ϳ��� ���밡��



	*std::binary_search() �Լ�

	template <class ForwardIt, class T>
	bool binary_search(ForwardIt first, ForwardIt last, const T& value);

	template <class ForwardIt, class T, class Compare>
	bool binary_search(ForwardIt first, ForwardIt last, const T& value, Compare comp);

	���ĵ� �����̳ʿ��� first,last���� �ȿ� value���� �ִ��� �˻�
	�ּ� first last ���� �ȿ����� ������ �Ǿ� �־�� ������
	�⺻������ < �����ڸ� �̿��Ͽ� ���� ���ϰ� ���Լ� comp�� �����Ҽ��� ����
	<algorithm>�� ���ǵǾ�����

*/

//bool binary_search(int data[], int n, int target)
//{
//	int lower = 0;
//	int upper = n - 1;
//
//	if (data[lower] > target || data[upper] < target)
//	{
//		return false;
//	} //����ó�� ���ֱ� �߰����� Ÿ�ٰ��� ��ȯ�Ҽ� ���⿡ 
//
//	while (lower <= upper)
//	{
//		int mid = (lower + upper) / 2;
//
//		if (data[mid] == target)
//			return true;
//
//		else if (data[mid] < target)		//�̵尪�� Ÿ�ٺ��� ������ lower ~ mid ����
//			lower = mid + 1;				
//
//		else								//�׷��� ������ lower ~ upper ����
//			upper = mid - 1;
//	}
//
//	return false;
//}
//
//int main()
//{
//	int data[] = { 1,2,3,4,5,6,7,8,10,15,18,23,25,27,29,30,33 };
//	int target = 23; //ã������ �ϴ� ��
//
//	
//	bool res2 = binary_search(data, std::size(data), target); //�����س��� �Լ�
//	bool res3 = std::binary_search(std::begin(data), std::end(data), target); //���̺귯�� �Լ�
//
//	std::cout << res2 << std::endl; //ã���� Ʈ���ȯ 1
//	std::cout << res3 << std::endl;	
//}