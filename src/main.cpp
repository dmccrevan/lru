#include "lru.h"
int main()
{
    LRUCache<int> cache = LRUCache<int>(5);
    cache.refer(1);
    cache.display();
    return 0;
}