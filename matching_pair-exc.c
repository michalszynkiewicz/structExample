#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int n;
    char c[500];
} node;

node nodes[100000];

int comparator(const void* o1, const void* o2) {
    node* n1=(node*) o1;
    node* n2=(node*) o2;
    return n1->n-n2->n;
}

void findMatch(unsigned int size, int S);

int main() {
    unsigned int i, n;
    int S;

    scanf("%u %u", &n, &S);
    for (i = 0; i < n; ++i) {
        scanf("%d %s", &nodes[i].n, nodes[i].c);
    }

    qsort(nodes,n,sizeof(node),comparator);

    findMatch(n, S);

    return 0;
}

void findMatch(unsigned int size, int S) {
    int sum, front = 0, end = size - 1;
    while (1) {
        if (front == end) {
            printf("Not found");
            return;
        }
        sum = nodes[front].n + nodes[end].n;
        if (sum == S) {
            break;
        } else if (sum > S) {
            end --;
        } else {
            front ++;
        }
    }
    printf("found match: %s, %s\n", nodes[front].c, nodes[end].c);
}
