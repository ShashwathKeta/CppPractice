// ProgressCheck.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int num = 1;
int score1, score2, score3, score4, score5;

double calcScore();
void getJudgeData();
int findLowest();
int findHighest();

int main()
{
	getJudgeData();
	getJudgeData();
	getJudgeData();
	getJudgeData();
	getJudgeData();

	cout << "The Judges ruling on this is: " << calcScore() << "\n";

    return 0;
}

void getJudgeData() {
	if (num == 1) {
		cout << "Enter a judges data: ";
		cin >> score1;
	}
	else if (num == 2) {
		cout << "Enter a judges data: ";
		cin >> score2;
	}
	else if (num == 3) {
		cout << "Enter a judges data: ";
		cin >> score3;
	}
	else if (num == 4) {
		cout << "Enter a judges data: ";
		cin >> score5;
	}
	else if (num == 5) {
		cout << "Enter a judges data: ";
		cin >> score5;
	}
	num++;
}
int findLowest() {
	if (score1 < score2&&score1 < score3&&score1 < score4&&score1 < score5) {
		return score1;
	}
	else if (score2 < score1&&score2 < score3&&score2 < score4&&score2 < score5) {
		return score2;
	}
	else if (score3 < score2&&score3 < score1&&score3 < score4&&score3 < score5) {
		return score3;
	}
	else if (score4 < score2&&score4 < score3&&score4 < score1&&score4 < score5) {
		return score4;
	}
	else if (score5 < score2&&score5 < score3&&score5 < score4&&score5 < score5) {
		return score5;
	}
}

int findHighest() {
	if (score1 > score2&&score1 > score3&&score1 > score4&&score1 > score5) {
		return score1;
	}
	else if (score2 > score1&&score2 > score3&&score2 > score4&&score2 > score5) {
		return score2;
	}
	else if (score3 > score2&&score3 > score1&&score3 > score4&&score3 > score5) {
		return score3;
	}
	else if (score4 > score2&&score4 > score3&&score4 > score1&&score4 > score5) {
		return score4;
	}
	else if (score5 > score2&&score5 > score3&&score5 > score4&&score5 > score5) {
		return score5;
	}
}

double calcScore() {
	if (findLowest() == score1) {
		score1 = 0;
	}
	else if (findLowest() == score2) {
		score2 = 0;
	}
	else if (findLowest() == score3) {
		score3 = 0;
	}
	else if (findLowest() == score4) {
		score4 = 0;
	}
	else if (findLowest() == score5) {
		score5 = 0;
	}

	return ((double)(score1 + score2 + score3 + score4 + score5) / 3);
}