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
        if(root&&(root->left||root->right)) {
            if (root->left &&root->right) {
                root->left->next = root->right;
            }
            Node *node = root->right ? root->right : root->left;
            Node *head = root->next;
            while (head && !(head->left || head->right)) {
                head = head->next;
            }
            node->next = head ? (head->left ? head->left : head->right) : nullptr;
            connect(root->right);//root.next的循环 先建立后 然后前，要不会遗漏
            connect(root->left);
        }
        return root;
    }

};
int main() {
    vector<vector<int> > res;

}


