/*
	u4pak.cpp
	www.wangyusheng.cn
	E-mail:00000000@wangyusheng.cn
*/
#define DLLEXPORT
#include <string>
#include "u4pak.h"
#include <iostream>
#include <stdio.h>

using namespace std;

int upak_check()
{
	return 1;
}

void upak(string SourceFilePath, string DirectionPath, string FileName, string PakName)
{
	/*UnrealPak.exe路径*/
	if (SourceFilePath != "")
	{
		string setPath = "cd " + SourceFilePath;
		system("setPath");
	}
	/*目的地址*/
	if (DirectionPath != "")
	{
		FileName = DirectionPath + FileName;
	}
	/*Pak读写*/
	string order = "UnrealPak.exe ";
	order = order + PakName + " -create=";
	order = order + FileName + " -order=CookerOpenOrder.log -UTF8Output -encrypt -compress";
	cout << order.c_str() << endl;
	system(order.c_str());
}