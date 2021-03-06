// #include <iostream>
// #include <algorithm>

// using namespace std;

/*
	트리 : 계층적인 구조를 나타내는 자료구조

	보통 뿌리(root)가 위에, 나뭇가지 (branch)와 잎(leaf)이 아래로 자라는 형태로 표현
	
	ex) 조직도, 파일폴더 , 교과과정 수강트리


			---트리 용어---

	#	루트 : 맨위 위치
	#	부모(상사) - 자식(사원) 
	#	리프 : 트리의 맨 아래쪽 위치 (자식노드가 없는 아이들)
	#	내부노드 : 리프가아닌 노드 (자식이 하나라도 있을경우)
	#	형제 : 부모가 같은 노드들
	#	조상 - 후손  : 리프의 조상(부모들, 부모의 부모), 후손은 자신의 자식들, 자식의자식들
	#	차수 (degree) : 자기자신의 자식개수(차수) 
	#	레벨 (level) : 루트에서 얼만큼 떨어져있는지  루트위치는 레벨 0 -> 그아래층 1 -> 2 ...
	#	높이 (height) : 루트노트부터 리프노드까지 거리의 값 레벨 0,1,2..층
	#	서브트리 (부분트리) : 특정노드을 기준하여 해당 자식들만 해당하는 트리 


	*이진트리
	모든 노드가 최대 두개의 자식을 갖는 트리
	- 모든 노드의 차수가 2 이하인 트리
	- 모든 노드가 2개의 서브트리를 가지고 있는 트리

	각각의 자식 노드는 부모의 왼쪽자식 또는 오른쪽 자식으로 지정됨

						A부모
					B		C		C		B -> 다른트리로 인식됨
					왼		오		

	* 정 이진트리
	모든 노드가 0개 또는 2개 자식노드를 갖는 이진트리 
	(리프노드를 제외한 노드들은 모두 자식이 2개임)

	*포화 이진트리
	트리의 모든레벨에서 노드감 ㅗ두 채워져 있는 트리
	높이가 h이면 노드개수가 2h - 1 로계산가능

	*완전 이진트리 
	마지막 레벨(리프들)을 제외한 모든 레벨에는 노드가 완전히 채워져 있고,
	마지막 레벨에는 노드가 왼쪽부터 채워져 있는 이진트리

	*균형 이진트리 (좀더효율적)
	모든 노드의 서브 트리 간의 높이 차이가 1 이하

	*편향 트리	(좀더 비효율적)
	리프노드를 제외한 모든 노드가 하나의 자식 노드만 갖는 트리


	**이진트리 구현 방법
	
		-	배열 : 완전 이진트리인 경우, 배열을 이용하여 효율적으로 표현 가능 -> 힙에서 설명
		-	연결리스트 : 저장할 데이터와 왼쪽 자식과 오른쪽 자식 노드를 가리키는 포인터 2개를 갖는 구조체 사용

		- 노드 구현 코드						*리스트 구현시 형태
	struct Node													data부모
	{													left자식		right자식
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
//} //메모리 릭 발생 

//->다음장에 계속