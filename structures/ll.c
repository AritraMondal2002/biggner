#include<stdio.h>
void add();
void add(int data, node head){
    node new = {data, NULL};
    head = new;
}
typedef struct n{
    int data;
    struct n *next;
}node;
typedef struct list{
    node head;
    int size;

}list;
void main() {
    node n1;
    n1.data = 5;
    printf("%d", n1.data);

}