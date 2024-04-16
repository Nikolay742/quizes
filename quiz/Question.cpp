#include "Classes.h"

Question::Question(const string& text, const vector<string>& answers, const int& correct_id)
	: text(text), answers(answers), correct_id(correct_id) {}

