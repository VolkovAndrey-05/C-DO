#include <stdio.h>
#include <stdlib.h>

// 1 list
typedef struct SNode {
    int data;
    struct SNode *next;
}SNode;

typedef struct SList {
    SNode *head;
    SNode *tail;
    int size;
}SList;

void init_slist(SList *list) {
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
}

void s_add(SList *list, int value) {
    SNode *new_node = (SNode*)malloc(sizeof(SNode));
    new_node->data = value;
    new_node->next = list->head;
    list->head = new_node;
    if (list->tail == NULL) {
        list->tail = new_node;
}
    list->size++;
}

void s_del(SList *list, int value) {
    if (list->head == NULL) return;
    if (list->head->data == value) {
        SNode *temp = list->head;
        list->head = list->head->next;
        if (list->head == NULL) {
            list->tail = NULL;
}
        free(temp);
        list->size--;
        return;
}
    SNode *current = list->head;
    while (current->next != NULL && current->next->data != value) {
        current = current->next;
}
    if (current->next != NULL) {
        SNode *temp = current->next;
        current->next = temp->next;
        if (temp == list->tail) {
            list->tail = current;
}
        free(temp);
        list->size--;
}
}

void travers(SList *list) {
    if (list->head == NULL) {
        printf("List is null\n");
        return;
}
    SNode *current = list->head;
    int count = 0;
    while (current != NULL) {
        printf("%d data = %d\n", count++, current->data);
        current = current->next;
}
    printf("Size: %d\n", list->size);
}

// 2 list
typedef struct DNode {
    int data;
    struct DNode *prev;
    struct DNode *next;
} DNode;

typedef struct DList {
    DNode *head;
    DNode *tail;
    int size;
} DList;

void init_dlist(DList *list) {
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
}

void d_add(DList *list, int value) {
    DNode *new_node = (DNode*)malloc(sizeof(DNode));
    new_node->data = value;
    new_node->prev = NULL;
    new_node->next = list->head;
    if (list->head != NULL) {
        list->head->prev = new_node;
    }
    list->head = new_node;
    if (list->tail == NULL) {
        list->tail = new_node;
    }
    list->size++;
}

void d_del(DList *list, int value) {
    if (list->head == NULL) return;
    DNode *current = list->head;
    while (current != NULL && current->data != value) {
        current = current->next;
    }
    if (current == NULL) return;
    if (current->prev != NULL) {
        current->prev->next = current->next;
    } else {
        list->head = current->next;
    }
    if (current->next != NULL) {
        current->next->prev = current->prev;
    } else {
        list->tail = current->prev;
    }
    free(current);
    list->size--;
}

void d_forward(DList *list) {
    if (list->head == NULL) {
        printf("List is null\n");
        return;
    }
    DNode *current = list->head;
    int count = 0;
    while (current != NULL) {
        printf("%d data = %d\n", count++, current->data);
        current = current->next;
    }
    printf("  Size: %d\n", list->size);
}

void d_backward(DList *list) {
    if (list->tail == NULL) {
        printf("  List is null\n");
        return;
    }
    DNode *current = list->tail;
    int count = 0;
    while (current != NULL) {
        printf("%d data = %d\n", count++, current->data);
        current = current->prev;
    }
    printf("Size: %d\n", list->size);
}

int main(void) {
    	SList slist;
    	init_slist(&slist);
    	s_add(&slist, 10);
    	s_add(&slist, 20);
    	s_add(&slist, 30);
    	s_add(&slist, 40);
    	travers(&slist);
    	printf("\nDelete 20:\n");
    	s_del(&slist, 20);
    	travers(&slist);
	DList dlist;
	init_dlist(&dlist);
    	d_add(&dlist, 10);
    	d_add(&dlist, 20);
    	d_add(&dlist, 30);
    	d_add(&dlist, 40);
    	printf("Forward output:\n");
    	d_forward(&dlist);
    	printf("Backward output:\n");
    	d_backward(&dlist);
    	printf("\nDelete 20:\n");
    	d_del(&dlist, 20);
    	printf("Forward output:\n");
    	d_forward(&dlist);
    	return 0;
}
