#include<iostream>

using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    // ListNode(int x):val(x),next(NULL){}
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

void reverseList(ListNode **head) {
    ListNode *temp, *ptr = *head, *prev = NULL;
    while (ptr) {
        temp = ptr->next;
        ptr->next = prev;
        prev = ptr;
        ptr = temp;
    }
    *head = prev;
}

int isPalndrome(ListNode *head) {
    if (head == NULL || head->next == NULL) {
        return 1;
    }
    ListNode *ptr1 = head, *ptr2 = head, *mid = NULL;
    while (ptr2) {
        ptr2 = ptr2->next;
        if (ptr2)
            ptr2 = ptr2->next;
        if (ptr2)
            ptr1 = ptr1->next;
    }
    mid = ptr1->next;
    reverseList(&mid->next);
    ptr1 = head;
    ptr2 = mid->next;
    while (ptr2) {
        if (ptr1->val != ptr2->val)
            return 0;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return 1;
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
    int arr[] = {1, 2, 3};
    printList(createListFromArray(arr, 3));
    cout << endl << "Result 1: " << isPalndrome(createListFromArray(arr, 3)) << endl;
    int arr3[] = {1, 2, 3, 4, 5, 6};
    cout << "Result 3: " << isPalndrome(createListFromArray(arr3, 5)) << endl;

}




