/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        // code here
        unordered_map<Node*,bool>visited;
        
        Node* curr=head;
        Node* prev=nullptr;
        
        while(curr!=nullptr){
            if(visited[curr]){
                prev->next=nullptr;
                return;
            }
            
            visited[curr]=true;
            prev=curr;
            curr=curr->next;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna