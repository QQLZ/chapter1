#include"Header.h"


template<class T>
void arrayList<T>::checkIndex(int theIndex) const
{
	if (theIndex < 0 || theIndex >= listSize)
	{
		ostringstream s;
		s << "index=" << theIndex << "size=" << listSize;
		throw illegalIndex(s.str());
	}
}

template<class T>
arrayList<T>::arrayList(int initialCapactity)
{
	if (initialCapactity < 1) {
		ostringstream s;
		s << "Initial capacity = " << initialCapactity << " Must be >0";
		throw  illeagleParameterValue(s.str());
	}
	arrayLength = initialCapactity;
	element = new T[arrayList];
	listSize = 0;
}

template<class T>
arrayList<T>::arrayList(const arrayList<T>& theList)
{
	arrayLength = theList.arrayLength;
	listSize = theList.listSize;
	element = new T[arrayLength];
	copy(theList.element, theList.element + listSize, element);
}
