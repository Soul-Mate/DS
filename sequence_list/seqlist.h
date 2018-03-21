//
// Created by xyc on 18-3-21.
//

#ifndef DS_SEQLIST_H
#define DS_SEQLIST_H

#ifndef LIST_LEN
#define LIST_LEN 20
#endif

typedef char * DataType;

typedef struct _SeqListNode {
    DataType data[LIST_LEN];
    int len;
}SeqListNode;

typedef SeqListNode *SeqList;

void InitSeqList(SeqList);
#endif //DS_SEQLIST_H
