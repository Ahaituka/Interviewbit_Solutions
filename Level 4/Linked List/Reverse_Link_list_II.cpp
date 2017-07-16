//#include<iostream>
//
//using namespace std;
//struct ListNode
//{
//    int val;
//    ListNode *next;
//    // ListNode(int x ) : val(x) , next(NULL) {}
//};
//
//void printList(ListNode *L)
//{
//    while (L)
//    {
//        cout << L->val;
//        L = L->next;
//    }
//}
//
//
//void reverseList(ListNode **A,ListNode **B)
//{
//    ListNode *next ,*prev=NULL ,*curr;
//    curr = *A;
//
//    while (curr!=*B)
//    {
//        next = curr->next;
//        curr->next = prev;
//        prev = curr;
//        curr= next;
//    }
//    *A = prev ;
//
//
//}
//
//ListNode *creatieListFromArray(int arr[], int n) {
//    ListNode *head = new ListNode;
//    ListNode *ptr = head;
//    for (int i = 0; i < n; i++) {
//        ptr->val = arr[i];
//        ptr->next = (i == n - 1 ? NULL : new ListNode);
//        ptr = ptr->next;
//    }
//    return head;
//}
//
//
//ListNode *createListFromArray(int arr[], int n)
//{
//    ListNode *head = new ListNode;
//    ListNode *ptr = head;
//    for (int i = 0; i < n; ++i) {
//        ptr->val = arr[i];
//        if (i == n - 1)
//            ptr->next = NULL;
//        else {
//            ptr->next = new ListNode;
//            ptr = ptr->next;
//        }
//    }
//    return head;
//}
//
//
//ListNode* reverseBetween(ListNode* head, int m, int n)
//{
//
//    ListNode* newHead = new ListNode();
//    newHead->val = 1 ;
//    newHead->next = head;
//    ListNode* prev = newHead;
//    for(auto i = 0 ; i < m-1 ; i++){
//        prev = prev->next;
//    }
//    ListNode* const reversedPrev = prev;
//    //position m
//    prev = prev->next;
//    ListNode* cur = prev->next;
//    for(auto i = m ; i < n ; i++){
//        prev->next = cur->next;
//        cur->next = reversedPrev->next;
//        reversedPrev->next = cur;
//        cur = prev->next;
//    }
//    return newHead->next;
//}
//
//
//
//
//}
//
//
//int main() {
//    //int arr[] = {3, 4, 2};
//    //auto x = createListFromArray(arr, 3);
////    int arr3[] = {1, 2, 3,4,5};
////    auto y = createListFromArray(arr3, 5);
////    // auto x = addTwoNumbers(x,y);
////    printList(reverseBetween(y,2,4));
//
//
//
//}
//
//
//
//

