#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <Windows.h>
#include<time.h>
using namespace std;
string getTime() {
	time_t now = time(0);
	tm* ltm = localtime(&now);

	int current_month = 1 + ltm->tm_mon;
	int current_day = ltm->tm_mday;
	int current_hour = ltm->tm_hour;
	int current_minute = ltm->tm_min;

	// 获取当前时间字符串
	string currentTime = to_string(current_month) + "/" + to_string(current_day) + " " + to_string(current_hour) + ":" + to_string(current_minute);

	return currentTime;
}

// 检查当前时间是否在指定时间范围内的函数
bool isInTimeRange(int current_hour, int current_minute, int start_hour, int start_minute, int end_hour, int end_minute) {
	return (current_hour > start_hour || (current_hour == start_hour && current_minute >= start_minute)) && (current_hour < end_hour || (current_hour == end_hour && current_minute <= end_minute));
}