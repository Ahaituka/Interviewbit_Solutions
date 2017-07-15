#include<iostream>

using namespace std;
struct ListNode {
    int val;
    ListNode *next;

    // ListNode(int x ) : val(x) , next(NULL) {}
};

void printList(ListNode *L) {

    while (L) {
        cout << L->val;
        L = L->next;
    }
}

ListNode *creatieListFromArray(int arr[], int n) {
    ListNode *head = new ListNode;
    ListNode *ptr = head;
    for (int i = 0; i < n; i++) {
        ptr->val = arr[i];
        ptr->next = (i == n - 1 ? NULL : new ListNode);
        ptr = ptr->next;
    }
    return head;
}


ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    if (!l1)
        return l2;
    if (!l2)
        return l1;
    int sum = (l1->val + l2->val);
    l1 = l1->next;
    l2 = l2->next;
    int carry = sum / 10;
    ListNode *l3 = new ListNode;
    l3->val = sum % 10;
    l3->next = NULL;
    ListNode *tail = l3;

    while (l1 || l2 || carry) {
        int valsum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
        sum = (valsum) + carry;
        carry = sum / 10;
        ListNode *t = new ListNode;
        t->val = sum % 10;
        t->next = NULL;
        tail->next = t;
        tail = tail->next;
        if (l1)
            l1 = l1->next;
        if (l2)
            l2 = l2->next;
    }
    return l3;


}


ListNode *createListFromArray(int arr[], int n) {
    ListNode *head = new ListNode;
    ListNode *ptr = head;
    for (int i = 0; i < n; ++i) {
        ptr->val = arr[i];
        if (i == n - 1)
            ptr->next = NULL;
        else {
            ptr->next = new ListNode;
            ptr = ptr->next;
        }
    }
    return head;
}

int main() {
    int arr[] = {3, 4, 2};
    auto x = createListFromArray(arr, 3);
    int arr3[] = {4, 6, 5};
    auto y = createListFromArray(arr3, 3);
    // auto x = addTwoNumbers(x,y);
    printList(addTwoNumbers(x, y));


}




