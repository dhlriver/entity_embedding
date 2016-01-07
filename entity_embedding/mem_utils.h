#ifndef MEM_UTILS_H_
#define MEM_UTILS_H_

namespace MemUtils
{
	template <class T>
	static void Release(T **&arr, int len)
	{
		for (int i = 0; i < len; ++i)
			delete[] arr[i];
		delete[] arr;
		arr = 0;
	}
}

#endif
