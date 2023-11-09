#include <iostream>

using namespace std;

int fillBuckets(int *buckets, int sizeBuckets, int *t, int sizeT) {
    for (int i = 0; i < sizeT; i++) {
        if (t[i] <= sizeBuckets) {
            buckets[t[i]]++;
        }
}
}
int printBuckets(int *buckets, int sizeBuckets) {
    for (int i = 0; i < sizeBuckets; i++) {
        cout << i << ":" << buckets[i]<< endl;
    }
}

int main()
{
    int t[10] = {2, 1, 8, 3, 7, 10, 1, 9, 2, 3};
    int sizeT = sizeof(t) / sizeof(t[0]);
    int sizeBuckets = 11;
    int buckets[10] = {0,0,0,0,0,0,0,0,0,0};
    fillBuckets(buckets, sizeBuckets, t, sizeT);
    printBuckets(buckets, sizeBuckets);
    return 0;
}
