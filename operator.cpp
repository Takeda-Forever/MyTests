#include "data.h"
//Windows Windows::operator+(Windows& obj)
//{
//	return Windows(id + obj.id);
//}
//
//Windows Windows::operator+(Linux& obj)
//{
//	return Windows(id + obj.get_id());
//}
//
//Windows::operator Linux()
//{
//	return Linux(id);
//}
//
//Windows::operator int()
//{
//	return id;
//}
//
//void* Windows::operator new(std::size_t sz)
//{
//		std::printf("1) new(size_t), size = %zu\n", sz);
//		if (sz == 0)
//			++sz; // avoid std::malloc(0) which may return nullptr on success
//
//		if (void* ptr = std::malloc(sz))
//			return ptr;
//
//		throw std::bad_alloc{}; // required by [new.delete.single]/3
//
//}
//
//void* Windows::operator new[](std::size_t sz)
//{
//		std::printf("2) new[](size_t), size = %zu\n", sz);
//		if (sz == 0)
//			++sz; // avoid std::malloc(0) which may return nullptr on success
//
//		if (void* ptr = std::malloc(sz))
//			return ptr;
//
//		throw std::bad_alloc{}; // required by [new.delete.single]/3
//}
//
//void Windows::operator delete(void* ptr) noexcept
//{
//	std::puts("3) delete(void*)");
//	std::free(ptr);
//}
//
//void Windows::operator delete(void* ptr, std::size_t size) noexcept
//{
//	std::printf("4) delete(void*, size_t), size = %zu\n", size);
//	std::free(ptr);
//}
//
//void Windows::operator delete[](void* ptr) noexcept
//{
//	std::puts("5) delete[](void* ptr)");
//	std::free(ptr);
//}
//
//void Windows::operator delete[](void* ptr, std::size_t size) noexcept
//{
//	std::printf("6) delete[](void*, size_t), size = %zu\n", size);
//	std::free(ptr);
//}
//
//Linux Linux::operator+(Windows& obj)
//{
//	return Linux(id + obj.get_id());
//}
//
//Linux::operator int()
//{
//	return id;
//}
//
//Linux Linux::operator+(Linux& obj)
//{
//	return Linux(id + obj.id);
//}
//
//Linux::operator Windows()
//{
//	return Windows(id);
//}
