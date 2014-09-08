#include "LoggerManager.h"
#include <stdio.h>
#include <windows.h>
#include <iostream>
void LoggerManager::PrintString(std::string _string,int _colors){
    HANDLE hstdout=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hstdout,_colors);
    std::cout<<_string<<std::endl;
    SetConsoleTextAttribute(hstdout,0x0f);
}
