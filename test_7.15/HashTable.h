#pragma once

enum State
{
	EMPTY,
	EXIST,
	DELETE
};

template<class K, class V>
struct HashData
{
	pair<K, V> _data;
	State _state = EMPTY; // ���
};

template<class K, class V>
class HashTable
{

private:
	vector<HashData> _tables;
};
