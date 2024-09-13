#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int value_greather_than_10 = 0;
    struct ListNode *nodeResult = (struct ListNode *) malloc(sizeof(struct ListNode));
    nodeResult->next = NULL;
    nodeResult->val = 0;

    struct ListNode *curernt_node = nodeResult;

    if (l1->val + l2->val >= 10) {
        nodeResult->val = (l1->val + l2->val) % 10;
        value_greather_than_10 = 1;
    } else {
        nodeResult->val = l1->val + l2->val;
    }
    l1 = (l1 != NULL) ? l1->next : NULL;
    l2 = (l2 != NULL) ? l2->next : NULL;
    while (l1 != NULL || l2 != NULL) {
        struct ListNode *next_node = (struct ListNode *) malloc(sizeof(struct ListNode));

        int x = (l1 != NULL) ? l1->val : 0;
        int y = (l2 != NULL) ? l2->val : 0;
        if (x + y + value_greather_than_10 < 10) {
            next_node->val = x + y + value_greather_than_10;
            value_greather_than_10 = 0;
            l1 = (l1 != NULL) ? l1->next : NULL;
            l2 = (l2 != NULL) ? l2->next : NULL;
        } else {
            next_node->val = (x + y + value_greather_than_10) % 10;
            value_greather_than_10 = 1;
            l1 = (l1 != NULL) ? l1->next : NULL;
            l2 = (l2 != NULL) ? l2->next : NULL;
        }
        curernt_node->next = next_node;
        curernt_node = next_node;
    }

    if (value_greather_than_10 == 1) {
        struct ListNode *next_node = (struct ListNode *) malloc(sizeof(struct ListNode));
        next_node->val = value_greather_than_10;
        next_node->next = NULL;
        curernt_node->next = next_node;
    } else {
        curernt_node->next = NULL;
    }
}
