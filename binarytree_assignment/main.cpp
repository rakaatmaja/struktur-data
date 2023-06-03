#include <iostream>
#include <cstdlib>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    if (!newNode) {
        cout << "Alokasi memori gagal!";
        exit(1);
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node* insertNode(Node* root, int data) {
    if (root == NULL) {
        root = createNode(data);
        return root;
    }
    if (data < root->data) {
        root->left = insertNode(root->left, data);
    }
    else if (data > root->data) {
        root->right = insertNode(root->right, data);
    }
    return root;
}

void preOrderTraversal(Node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

void inOrderTraversal(Node* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}

void postOrderTraversal(Node* root) {
    if (root != NULL) {
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        cout << root->data << " ";
    }
}

int main() {
    int tanggal_lahir = 17;
    int bulan_lahir = 4;
    int tahun_lahir = 2004;
    int angka = 2215101010;
    int hasil_kali = angka * (tanggal_lahir * bulan_lahir * tahun_lahir);

    Node* root = NULL;
    int digit;
    while (hasil_kali > 0) {
        digit = hasil_kali % 10;
        root = insertNode(root, digit);
        hasil_kali /= 10;
    }

    cout << "Pre-order traversal: ";
    preOrderTraversal(root);
    cout << endl;

    cout << "In-order traversal: ";
    inOrderTraversal(root);
    cout << endl;

    cout << "Post-order traversal: ";
    postOrderTraversal(root);
    cout << endl;

    return 0;
}
void inorderToArray(Node* root, int arr[], int& index) {
    if (root != NULL) {
        inorderToArray(root->left, arr, index);
        arr[index++] = root->data;
        inorderToArray(root->right, arr, index);
    }
}
//
//int main() {
//    // ...
//    int arr[10];  // Asumsikan maksimal 10 node dalam pohon
//    int index = 0;
//    inorderToArray(root, arr, index);
//
//    cout << "Array: ";
//    for (int i = 0; i < index; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//    
//    // ...
//    return 0;
//}

