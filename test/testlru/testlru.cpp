#include "lru.h"
#include "gtest/gtest.h"
TEST(LruTest, InitializationTest)
{
	LRUCache<int> cache = LRUCache<int>(5);
	ASSERT_EQ(cache.top(), 0);
}

TEST(LruTest, SimpleInsertion)
{
	LRUCache<int> cache = LRUCache<int>(5);
	cache.refer(1);
	ASSERT_EQ(cache.top(), 1);
}

TEST(LruTest, MultipleInsertion)
{
	LRUCache<int> cache = LRUCache<int>(5);
	cache.refer(1);
	cache.refer(2);
	cache.refer(3);
	cache.refer(4);
	ASSERT_EQ(cache.top(), 4);
}