#pragma once
#include <iostream>

template <typename T>
class LRUCache
{
	private:
		T *cache;
		int size;
		int find(T val);
		void shift(int index);

	public:
		LRUCache<T>(int _size);
		~LRUCache<T>();
		void refer(T val);
		T top();
		void display();
};
	template <typename T>
LRUCache<T>::LRUCache(int _size)
{
	size = _size;
	cache = new T[_size];
}
	template <typename T>
LRUCache<T>::~LRUCache()
{
	delete[] cache;
}
/**
 * Search the cache for the given value in a linear fashion
 *
 * @param val The value to search for
 *
 * @returns the index if it was found, -1 if not
 */
	template <typename T>
int LRUCache<T>::find(T val)
{
	for (unsigned int i = 0; i < size; i++)
	{
		if (val == cache[i])
		{
			return i;
		}
	}
	return -1;
}
/**
 * Shifts the values in the cache over up until the given index
 *
 * @param index The index to shift up to
 *
 */
	template <typename T>
void LRUCache<T>::shift(int index)
{
	for (unsigned int i = index; i > 0; i--)
	{
		cache[i] = cache[i - 1];
	}
}
/**
 * Inserts the given value into the cache
 *
 * @param val The value to insert
 *
 */
	template <typename T>
void LRUCache<T>::refer(T val)
{
	int index = find(val);
	// If not present in cache
	if (index == -1)
	{
		shift(size - 1);
		cache[0] = val;
	}
	else // Present in cache, shift up to that index
	{
		T tmp_swap = cache[index];
		shift(index);
		cache[0] = tmp_swap;
	}
}
/**
 * Prints out the contents of the cache to STDOUT
 */
	template <typename T>
void LRUCache<T>::display()
{
	for (unsigned int i = 0; i < size; i++)
	{
		std::cout << cache[i] << ", ";
	}
}
/**
 * Returns the top of the cache
 *
 * @returns The value at the beginning of the cache
 */
	template <typename T>
T LRUCache<T>::top()
{
	return cache[0];
}
