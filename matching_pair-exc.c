#include <stdio.h>
#include <stdlib.h>

... struct {
...
} ...;

... nodes[100000];

int comparator(... o1, ... o2) {
...
}

void findMatch(unsigned int size, int S);

int main() {
    unsigned int i, n;
    int S;

    scanf("%u %u", &n, &S);
    for (i = 0; i < n; ++i) {
        scanf("%d %s", &nodes[i]..., nodes[i]...);
    }

    // posortuj tablicę nodes rosnąco

    findMatch(n, S);

    return 0;
}

void findMatch(unsigned int size, int S) {
    int front = 0, end = size - 1;
    while (1) {
        if (front == end) {
            printf("Not found");
            return;
        }
        sum = nodes[front]... + nodes[end]...;
        if (sum == S) {
            break;
        } else if (sum > S) {
            end --;
        } else {
            front ++;
        }
    }
    printf("found match: %s, %s\n", nodes[front].name, nodes[end].name);
}
