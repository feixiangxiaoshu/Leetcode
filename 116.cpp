#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include<queue>
#include<stack>
#include<map>
#include<math.h>
#include <unordered_set>
#include <unordered_map>
#include <set>
#include <cstring>
#include <sstream>
using namespace std;



#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include<queue>
#include<stack>
#include<map>
#include<math.h>
#include <unordered_set>
#include <unordered_map>
#include <set>
#include <cstring>
#include <sstream>
#include <list>
using namespace std;


class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)
            return NULL;
        if(root->left){
            root->left->next=root->right;
            if(root->next){
                root->right->next=root->next->left;
            }
        }
        connect(root->left);
        connect(root->right);
        return root;
    }
};
int main() {
    Solution s;
    Node *p1=new Node(1);
    Node* p2=new Node(2);
    Node *p3=new Node(3);
    Node *p4=new Node(4);
    Node *p5=new Node(5);
    Node *p6=new Node(6);
    Node *p7=new Node(7);
    p1->left=p2;p1->right=p3;
    p2->left=p4;p2->right=p5;
    p3->left=p6;p3->right=p7;


}


