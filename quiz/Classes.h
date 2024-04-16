#pragma once
#include <iostream>
#include <vector>
#include <Windows.h>
using namespace std;

class Question {
private:
	string text;
	vector<string> answers;
	int correct_id;
public:
	friend class Quiz;
	Question(const string& text, const vector<string>& answers, const int& correct_id);
};

class Quiz {
private:
	vector<Question> questions;
	string username;
	int score;
public:
	Quiz(const string& username);
	void addQuestion(Question question);
	void displayQuestion(const int& index);
	int getUserAnswer();
	bool checkAnswer(const int& index, const int& userAnswer);
	void runQuiz();

};