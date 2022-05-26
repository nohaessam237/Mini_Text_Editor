



#pragma once
#include <fstream>
#include <iomanip>
#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <istream>
#include <sstream>
#include <assert.h>
#include <algorithm>

using namespace std;
 public class TextEditor
	{
	
		// Temporary

		int n = 0;
		string text, temp1, temp2;

		fstream TheFile;
		unordered_map<int, string> TextMap;
		unordered_map<int, string>::iterator itr;
		vector<string> vect;
	public:

		string show();
		void addLine(string t);
		void insertAt(int num, string t);
		string Getline(int num);
		void deleteAt(int num);
		void update(int num, string text);
		int GetSize();
		void deleteLast();
		void deleteFirst();
		bool fileEmpty();
		void deleteLastWithChanges();
		void printOnFile();
		string FindAll(string word);
		void FindAndReplace(string old_word, string new_word);
		void lowerCase(vector<string>* u);
		void split(string str, vector<string>* v);
		void addFirstLine(string t);
		void Move(int num);
		void ClearFile();
		TextEditor();


	};




