#pragma once
#include <vector>
#include "Sentence.h"

class TextFile
{
public:
	void addSentence(Sentence s);
	int get_total_words() const;
	int get_total_digits() const;
	int get_total_alphabets() const;
private:
	vector<Sentence> sentenceList;
};

