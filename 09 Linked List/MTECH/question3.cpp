#include <bits/stdc++.h>
using namespace std;

struct Node {
    char symbol;
    int frequency;
    Node* left;
    Node* right;
    Node(char s, int f) : symbol(s), frequency(f), left(nullptr), right(nullptr) {}
};
struct Compare {
    bool operator()(Node* l, Node* r) {
        return l->frequency > r->frequency;
    }
};

void generateCodes(Node* root, const string& code, unordered_map<char, string>& huffmanCodes) {
    if (!root) return;

    if (!root->left && !root->right) {
        huffmanCodes[root->symbol] = code;
        cout << root->symbol << ": " << code << endl;
    }
    generateCodes(root->left, code + "0", huffmanCodes);
    generateCodes(root->right, code + "1", huffmanCodes);
}
void huffmanEncoding(const vector<pair<char, int>>& symbols) {
    priority_queue<Node*, vector<Node*>, Compare> minHeap;

    for (const auto& symbol : symbols) {
        minHeap.push(new Node(symbol.first, symbol.second));
    }

    while (minHeap.size() > 1) {
        Node* left = minHeap.top(); minHeap.pop();
        Node* right = minHeap.top(); minHeap.pop();
        Node* newNode = new Node('\0', left->frequency + right->frequency);
        newNode->left = left;
        newNode->right = right;

        minHeap.push(newNode);
    }
    Node* root = minHeap.top();
    unordered_map<char, string> huffmanCodes;
    cout << "Huffman Codes:" << endl;
    generateCodes(root, "", huffmanCodes);
    function<void(Node*)> freeTree = [&](Node* node) {
        if (!node) return;
        freeTree(node->left);
        freeTree(node->right);
        delete node;
    };
    freeTree(root);
}

int main() {
    vector<pair<char, int>> symbols = {
        {'Q', 3},
        {'p', 23},
        {'T', 30},
        {'a', 12},
        {'d', 18}
    };

    // Build the Huffman tree and generate codes
    huffmanEncoding(symbols);

    return 0;
}
