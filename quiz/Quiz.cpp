#include "Classes.h"

Quiz::Quiz(const string& username) : username(username), score(0) {}

void Quiz::addQuestion(Question question) {
	questions.push_back(question);
}

void Quiz::displayQuestion(const int& index) {
	cout << "Вопрос " << index + 1 << "/" << questions.size() << endl;
	cout << questions[index].text << endl;
	for (int i = 0; i < questions[index].answers.size(); ++i) {
		cout << i + 1 << ") " << questions[index].answers[i] << endl;
	}
}

int Quiz::getUserAnswer() {
	int userAnswer;
	cout << "Введите ваш ответ(1-3): ";
	cin >> userAnswer;

	while (userAnswer < 1 || userAnswer > 3) {
		cout << "Invalid answer! Please enter a 1-3: ";
		cin >> userAnswer;
	}
	return userAnswer;
}

bool Quiz::checkAnswer(const int& index, const int& userAnswer) {
	return userAnswer == questions[index].correct_id;
}

void Quiz::runQuiz() {
	for (int i = 0; i < questions.size(); ++i) {
		displayQuestion(i);
		int userAnswer = getUserAnswer();
		if (checkAnswer(i, userAnswer)) {
			cout << "Правильно!" << endl;
			score++;
			Sleep(1000);
			system("cls");
		}
		else {
			cout << "Неправильно!";
			Sleep(1000);
			system("cls");
		}
		cout << "\n" << username << ", ваши очки: " << score << "/" << questions.size() << endl;
	}
}