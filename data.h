#pragma once
#include "lib.h"
enum color :int { red, blue, green, black, yellow, def = -1 };
void SystemColor(color);

//#define HostName		"localhost"
//#define Username	"root"
//#define Password	""
//#define SqlCatalog	"test"
//#define SqlTable	"Users"
#define Port		50001


//class Linux;
//class Windows
//{
//protected:
//	string name = "Windows";
//	int id = NULL;
//public:
//	Windows(int);				
//	string get_name();
//	int get_id();
//	Windows operator + (Windows&);
//	Windows operator + (Linux&);
//	operator Linux();
//	operator int();
//	void* operator new (std::size_t sz);
//	void* operator new[](std::size_t sz);
//	void operator delete(void* ptr) noexcept;
//	void operator delete(void* ptr, std::size_t size) noexcept;
//	void operator delete[](void* ptr) noexcept;
//	void operator delete[](void* ptr, std::size_t size) noexcept;
//};
//
//class Linux
//{
//protected:
//	string name = "Linux";
//	int id{};
//public:
//	string get_name();
//	int get_id();
//	Linux(int);
//	Linux operator + (Linux&);
//	Linux operator + (Windows&);
//	operator int();
//	operator Windows();
//};



//void TcpServer(unsigned short port);
//void TcpClient(unsigned short port);
//void runTcpServer(unsigned short port);
//void runTcpClient(unsigned short port);
//void runUdpServer(unsigned short port);
//void runUdpClient(unsigned short port);