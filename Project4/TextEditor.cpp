
#include "TextEditor.h"


TextEditor::TextEditor()
{
	n = 1;
	TheFile.open("Text.txt", ios::in);
	if (TheFile.is_open())
	{
		while (!TheFile.eof())
		{
			getline(TheFile, text);
			TextMap[n] = text;
			n++;
		}
		TheFile.close();
	}
	else
		cout << "No Such File!" << endl;
	deleteLast();
}

string TextEditor::show()
{
	text = "";
	for (itr = TextMap.begin(); itr != TextMap.end(); itr++)
	{
		if (itr->first == 0)
			continue;
		else
			text = text + to_string(itr->first) + ". " + itr->second + "\n";
	}
	return text;
}

void TextEditor::update(int num, string t)
{
	TextMap.insert_or_assign(num, t);
	printOnFile();
}


void TextEditor::deleteAt(int num)
{
	// switching numbers
	for (int i = num; i < TextMap.size(); i++)
	{
		TextMap.insert_or_assign(i, TextMap[i + 1]);
	}
	deleteLastWithChanges();
}

string TextEditor::Getline(int num)
{
	return TextMap[num];
}

void TextEditor::insertAt(int num, string t)
{
	TextMap[num] = t;
	//writing to the file
	printOnFile();
}

void TextEditor::addLine(string t)
{
	TextMap.insert({ TextMap.size() + 1, t });
	printOnFile();
}

int TextEditor::GetSize()
{
	if (TextMap.begin()->first == 0)
		return TextMap.size() - 1;
	else
		return TextMap.size();
}

void TextEditor::deleteLast()
{
	deleteAt(GetSize());
}

void TextEditor::deleteLastWithChanges()
{
	TextMap.erase(TextMap.size());
	printOnFile();
}
bool TextEditor::fileEmpty()
{
	if (TextMap.begin()->second.length() == 0)
		return true;
	else
		return false;
}

void TextEditor::printOnFile()
{
	TheFile.open("Text.txt", ios::out);
	for (auto v : TextMap)
	{
		TheFile << v.second << endl;
	}
	TheFile.close();
}

void TextEditor::deleteFirst()
{
	deleteAt(1);
}
string TextEditor::FindAll(string word)
{
	int i = 0;
	vector<string> T;
	vector<string> V;
	vector<string> W;

	split(word, &T);
	lowerCase(&T);

	bool flag = false;
	for (auto v : TextMap)
	{
		split(v.second, &V);
		lowerCase(&V);

		for (auto v1 : T)
		{
			for (auto v2 : V)
			{
				if (v1.compare(v2) == 0)
				{
					flag = false;
					break;
				}
				else
					flag = true;
			}
			if (flag == false)
			{
				W.push_back(to_string(v.first) + ". " + v.second);
			}
		}
		V.clear();
	}
	T.clear();
	if (W.empty())
		text = "Not Found!";
	else
	{
		text = "";
		for (auto w : W)
		{
			text = text + w + "\n";
		}
	}
	W.clear();
	return text;
}



void TextEditor::FindAndReplace(string old_word, string new_word)
{
	int i = 1;
	vector<string> T;
	for (auto m : TextMap)
	{
		if (m.second.length() == 0)
			continue;
		else
			T.push_back(m.second);
	}
	lowerCase(&T);
	TextMap.clear();
	for (auto t : T)
	{
		TextMap[i] = t;
		i++;
	}
	for (auto& c : old_word)
		c = tolower(c);

	for (int i = 0; i < TextMap.size(); i++)
	{
		int pos = 0;
		int olen = old_word.length();
		int nlen = new_word.length();
		while ((pos = TextMap[i].find(old_word, pos)) != -1)
		{
			TextMap[i].replace(pos, olen, new_word);
			pos += nlen;
		}
	}
	printOnFile();
}

void TextEditor::split(string str, vector<string>* v)
{
	istringstream ss(str);
	string word;

	while (ss >> word)
	{
		(*v).push_back(word);
	}
}

void TextEditor::addFirstLine(string t)
{
	TextMap[1] = t;
	TheFile.open("Text.txt", ios::out);
	TheFile << TextMap[1] << "\n";
	TheFile.close();
}

void TextEditor::Move(int num)
{
	int i = GetSize();
	for (auto t : TextMap)
	{
		if (i == (num - 1))
			break;
		TextMap[i + 1] = TextMap[i];
		i--;
	}
}

void TextEditor::ClearFile()
{
	TextMap.clear();
	printOnFile();
}

void TextEditor::lowerCase(vector<string>* u)
{
	for (int i = 0; i < (*u).size(); i++)
	{
		for (auto& c : (*u)[i])
		{
			c = tolower(c);
		}
	}
}
