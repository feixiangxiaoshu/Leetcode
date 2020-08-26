//
// Created by Administrator on 2020/5/27.
//

链接：https://www.nowcoder.com/questionTerminal/6ab1d9a29e88450685099d45c9e31e46?f=discussion
来源：牛客网

class Solution {
public:
    ListNode* FindFirstCommonNode(ListNode* pHead1, ListNode* pHead2) {
        /*
         假定 List1长度: a+n  List2 长度:b+n, 且 a<b
         那么 p1 会先到链表尾部, 这时p2 走到 a+n位置,将p1换成List2头部
         接着p2 再走b+n-(n+a) =b-a 步到链表尾部,这时p1也走到List2的b-a位置，还差a步就到可能的第一个公共节点。
         将p2 换成 List1头部，p2走a步也到可能的第一个公共节点。如果恰好p1==p2,那么p1就是第一个公共节点。  或者p1和p2一起走n步到达列表尾部，二者没有公共节点，退出循环。 同理a>=b.
         时间复杂度O(n+a+b)

        */
        ListNode* p1 = pHead1;
        ListNode* p2 = pHead2;
        while(p1 != p2) {
            if(p1 != NULL) p1 = p1->next;
            if(p2 != NULL) p2 = p2->next;
            if(p1 != p2) {
                if(p1 == NULL) p1 = pHead2;
                if(p2 == NULL) p2 = pHead1;
            }
        }
        return p1;

    }

};