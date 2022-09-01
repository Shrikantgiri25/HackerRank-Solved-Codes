#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
 
 int leng(SinglyLinkedListNode * head)
 {
    int count=0;
    while(head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
 }
 //Time Complexity is big O(m+n)
 //We are using length function  and traversing the list to the equidistant place then checking common nodes in it.
 //Space Complexity Big O(1)
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    int a = leng(head1);
    int b = leng(head2);
    int d = abs(a - b);
    int i,j;
    if(a<b)
    {
        for(i=0;i<d;i++)
        {
            head2=head2->next;
        }
    }
    else 
    {
        for(i=0;i<d;i++)
        {
            head1=head1->next;
        }
    }
    while(head1 != NULL && head2 != NULL)
    {
        if(head1 == head2)
        return head1->data;
        
        head1=head1->next;
        head2=head2->next;
    }
    return 0;
}

int main()
