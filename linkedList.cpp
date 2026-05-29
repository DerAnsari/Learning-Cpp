#include <iostream>

struct node {
  int data;
  node *next;
};

void pustFront(node *&head, int data) { head = new node{data, head}; }

void deleteAll(node *head) {
  node *cur = head;
  while (cur != nullptr) {
    node *n = cur->next;
    delete cur;
    cur = n;
  }
}

int main() {
  node *first = nullptr;
  pustFront(first, 5);
  pustFront(first, 12);
  pustFront(first, 7);
  pustFront(first, 7);

  for (node *cur = first; cur != nullptr; cur = cur->next) {
    std::cout << cur->data << "";
  }
  std::cout << "\n";
}
