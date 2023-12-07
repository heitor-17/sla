#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <limits.h>
#include <stdbool.h>

typedef struct Cell {
    void *data;
    struct Cell *next;
} Cell;

typedef struct {
    Cell *first;
    Cell *last;
    int size;
    int dataTypeSizeInBytes;
} LinkedList;

bool            LinkedList_Init         (LinkedList *list, int dataTypeSizeInBytes);
bool            LinkedList_IsEmpty      (const LinkedList *list);
int             LinkedList_GetSize      (const LinkedList *list);
void*           LinkedList_Get          (const LinkedList *list, int pos);
void*           LinkedList_GetFirst     (const LinkedList *list);
void*           LinkedList_GetLast      (const LinkedList *list);
bool            LinkedList_GetCopyOf    (const LinkedList *list, int pos, void *backup);
bool            LinkedList_Insert       (LinkedList *list, void *data, int pos);
bool            LinkedList_PushFront    (LinkedList *list, void *data);
bool            LinkedList_PushBack     (LinkedList *list, void *data);
bool            LinkedList_PopFront     (LinkedList *list, void *backup);
bool            LinkedList_PopBack      (LinkedList *list, void *backup);
bool            LinkedList_Remove       (LinkedList *list, int pos, void *backup);
bool            LinkedList_Swap         (LinkedList *list, int pos1, int pos2);
void            LinkedList_Clear        (LinkedList *list);
void            LinkedList_Copy         (LinkedList *dest, LinkedList *orig);
LinkedList*     LinkedList_Duplicate    (const LinkedList *list);
LinkedList*     LinkedList_BubbleSort   (LinkedList *list, int (*canSwap) (void *data1, void *data2));
LinkedList* 	LinkedList_QuickSort	(LinkedList *list, int beg, int end, int (*compare)(void *data1, void *data2));

#endif // LINKEDLIST_H
