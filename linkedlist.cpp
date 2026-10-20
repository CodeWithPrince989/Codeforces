##include<bits / stdc++.h> using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val).next(nullptr) {}
};

void printList(Node *head)
{
    Node *curr = head;
    while (curr != nullptr)
    {
        cout << curr->data << "->";
        curr = curr->next;
    }

    cout << "X" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    if(n==0){
        printList(nullptr);
        return 0;
    }

    Node* head = nullptr;
    Node* tail = nullptr;

        for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        }

        printList(head);

    return 0;
}