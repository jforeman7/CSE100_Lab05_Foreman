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
	// Calculate the hashed key.
	int hashKey = toDelete % bNo;
	
	// STL iterator for moving through the list portion of the table.
	for (list<int>::iterator i = table[hashKey].begin(); i != table[hashKey].end(); i++)
	{
		// If we find the key in the list, delete and return true.
		if(*i == toDelete)
		{
			table[hashKey].erase(i);
			return true;
		}
	}
	
	// At this point, the key was not found, and therefore the delete failed.
	return false;
}

bool Hash::Search(int key, int& _bucket, int& _pos) 
{
	// Calculate the hashed key.
	int hashKey = key % bNo;
	
	// The hashed key is the bucket we are looking at.
	_bucket = hashKey;
	
	// Initialize the list position.
	_pos = 0;
	
	for(list<int>::iterator i = table[hashKey].begin(); i != table[hashKey].end() i++)
	{
		if(*i == key)
		{
			return true;
		}
		_pos++;
	}
	
	return false;
}

void Hash::Print() 
{
	
}

