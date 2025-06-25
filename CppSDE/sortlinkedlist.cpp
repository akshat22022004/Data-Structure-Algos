#include<bits/
#include<vector>
using namespace std;

class Node {
    public:
    int data ;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

Node* solve(vector<int>& ans) {
    if(ans.empty()) {
        return NULL;
    }
    Node* head = new Node(ans[0]);
    Node* temp = head;
    for(int i = 1; i < ans.size(); i++) {
        temp->next = new Node(ans[i]);
        temp = temp->next;
    }
    return head;
}

Node* sortlist(Node* head) {
    vector<int> ans;
    Node* temp = head;
    while(temp != NULL) {
        ans.push_back(temp->data); 
        temp = temp->next;
    }
    // Sort the vector if needed
    sort(ans.begin(), ans.end());
    return solve(ans);
}

void print(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    vector<int> input;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        input.push_back(x);
    }
    Node* head = solve(input);
    head = sortlist(head);
    cout << "Sorted linked list: ";
    print(head);

    return 0;
}
