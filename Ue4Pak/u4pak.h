#pragma once
//u4pak.dll
//wangyusheng.cn

#ifndef U4PAK_H
#define U4PAK_H
using namespace std;
//#define DLLOPTION _declspec(dllexport)
#ifdef DLLEXPORT
#define DLLOPTION _declspec(dllexport)
//表明标有此宏定义的函数和类是dll文件的导出函数和类，是dll文件的对外接口
#else
#define DLLOPTION _declspec(dllimport)      
//表明标有此宏定义的函数和类的定义在dll文件中
#endif
/*
函数名：upak_chack
返回值：调用dll成功返回1
*/
extern DLLOPTION int upak_check();
/*
函数名：upak
参数：	SourceFilePath	{UnrealPak.exe所在路径/当其处于进程所在路径时可为空string ：“”}
		DirectionPath	{pak的存放路径}
		FileName		{需要打包的文件夹名/需要和UnrealPak.exe在同一路径下}
		PakName			{Pak文件名，如	NoEditor.pak}
*/
extern DLLOPTION void upak(string SourceFilePath, string DirectionPath, string FileName, string PakName);

#endif // !U4PAK_H

/*
UFUNCTION(BlueprintCallable, Category = "PAK")
void LoadPakComplete();
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PAK")
UObject*  TheLoadObject;
*/