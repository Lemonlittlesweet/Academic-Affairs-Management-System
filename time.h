#include <string> 
#include<iostream>
#include<windows.h>
#include <sstream>
using namespace std;
#ifndef _TIME_H
#define _TIME_H
extern string getTime();
extern bool isInTimeRange(int current_hour, int current_minute, int start_hour, int start_minute, int end_hour, int end_minute);
#endif