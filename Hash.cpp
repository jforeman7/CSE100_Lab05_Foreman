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
	bNo = _bNo;
	
	for (int i = 0; i < bNo; i++)
	{
		table[bNo] = NULL;
	}
}

// Destructor.
Hash::~Hash() 
{
	
}

void Hash::Insert(int toInsert) 
{
	
}

bool Hash::Delete(int toDelete) 
{
	return true;
}

bool Hash::Search(int key, int& _bucket, int& _pos) 
{
	return true;
}

void Hash::Print() 
{
	
}

