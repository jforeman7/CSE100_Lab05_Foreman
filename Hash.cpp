// Jeff Foreman
// CSE 100 04L
// Created on 3 Oct 2017

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "Hash.h"

using namespace std;

// Constructor.
Hash::Hash(int _bNo) 
{
	// Initialize the maximum amount of buckets.
	this->bNo = _bNo;
	
	// Resize the table to reflect the maximum amount of buckets.
	table.resize(_bNo);
}

// Destructor.
Hash::~Hash() 
{
	
}

// Function to insert keys into the hash table.
void Hash::Insert(int toInsert) 
{
	// Calculate the hashed key: h(k) = k % m
	// Where k is the key (toInsert) and m is the size of the chained table (bNo).
	int hashKey = toInsert % bNo;
	
	// Insert into the table.
	table[hashKey].push_front(toInsert);
}

// Function to delete keys in the hash table.
// It must first find the key, then delete it.
// If it doesn't find the key, then it returns false.
bool Hash::Delete(int toDelete) 
{
	// Calculate the hashd key.
	int hashKey = toDelete % bNo;
	
	// Iterator for moving through the vector portion of the table.
	int i = 0;
	
	// STL iterator for moving through the list portion of the table.
	for (list<int>::iterator j = table[hashKey].begin(); j != table[hashKey].end(); j++)
	{
		if(*j == toDelete)
		{
			table[hashKey].erase(j);
			return true;
		}
	}
	return false;
}

bool Hash::Search(int key, int& _bucket, int& _pos) 
{
	return true;
}

void Hash::Print() 
{
	
}

