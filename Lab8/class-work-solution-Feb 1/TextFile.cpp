#include "TextFile.h"
void TextFile::addSentence(Sentence s) {
	sentenceList.push_back(s);
}


int TextFile::get_total_words() const
{
	int count = 0;
	for (auto s : sentenceList) {
		count += s.count_words();
	}
	return count;
}
int TextFile::get_total_digits() const
{
	int count = 0;
	for (auto s : sentenceList) {
		count += s.count_digits();
	}
	return count;
}
int TextFile::get_total_alphabets() const
{
	int count = 0;
	for (auto s : sentenceList) {
		count += s.count_alpha();
	}
	return count;
}