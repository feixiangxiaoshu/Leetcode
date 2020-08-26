class Solution {
public:
	RandomListNode* Clone(RandomListNode* pHead) {
		if (pHead == NULL) return NULL;
		RandomListNode* pnode = pHead;
		while (pnode){//第一步 复制
			RandomListNode* node = new RandomListNode(pnode->label);
			node->next = pnode->next;
			pnode->next = node;
			pnode = node->next;
		}
		//第二步
		pnode = pHead;
		while (pnode) {
			RandomListNode* node = pnode->next;
			if (pnode->random) {
				node->random = pnode->random->next;
			}
			pnode = node->next;
		}
		//拆分
		pnode = pHead;
		RandomListNode* res = pHead->next;
		while (pnode->next) {
			RandomListNode* node = pnode->next;
			pnode->next = node->next;
			pnode = node;

		}
        return res;
	}
};