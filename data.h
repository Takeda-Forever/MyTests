#pragma once
#include "lib.h"
enum color :int { red, blue, green, black, yellow, def = -1 };
void SystemColor(color);

//#define HostName		"localhost"
//#define Username	"root"
//#define Password	""
//#define SqlCatalog	"test"
//#define SqlTable	"Users"
//#define Port		50001


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


//template <typename... Types>
//class Tuple;
//
//template <>
//class Tuple<> {
//public:
//    void get_all_head() const {}
//};
//
//template <typename Head, typename... Tail>
//class Tuple<Head, Tail...> : public Tuple<Tail...> {
//public:
//    Tuple(Head head, Tail... tail) : Tuple<Tail...>(tail...), head_(head) {}
//
//    Head head() const { return head_; }
//
//    void get_all_head() const {
//        cout << head_ << " ";
//        Tuple<Tail...>::get_all_head();
//    }
//
//private:
//    Head head_;
//};

template<typename Type>
class Base
{
public:
    void interface()
    {
        static_cast<Type*>(this)->impl();
    }
    void impl()
    {
        std::cout << "Base class implementation" << std::endl;
    }
};

class Derived : public Base<Derived>
{
public:
    void impl()
    {
        std::cout << "Derived class implementation" << std::endl;
    }
};


//void TcpServer(unsigned short port);
//void TcpClient(unsigned short port);
//void runTcpServer(unsigned short port);
//void runTcpClient(unsigned short port);
//void runUdpServer(unsigned short port);
//void runUdpClient(unsigned short port);
