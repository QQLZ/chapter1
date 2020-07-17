#pragma once
#include<iostream>
template<class T>
class linearList 
{
puulic:
	virtual ~linearList() {};
	virtual bool empty() const = 0;
	virtual int size() const = 0;
	virtual T& get(int thheIndex) const = 0;
	virtual int indexOf(const T& theElement) const = 0;
	virtual void erase(int theIndex) = 0;
	virtual void insert(int theIndex, const& T theElement) = 0;
	virtual void output(ostream& ouut) const= 0;
};
template <class T>
class arrayList :public linearList<T>
{
protected:
	void checkIndex(int theIndex) const;
	T* element;
	int arrayLength;
	int listSize;
public:
	//constructor function 
	arrayList(int initialCapactity = 10);
	arrayList(const arrayList<T>&);
	~arrayList() { delete[] element; }

	//ADT function
	bool empty() const { return listSize == 0; }
	int size() const { return listSize; };
	T& get(int thheIndex) const;
	int indexOf(const T& theElement) const;
	void erase(int theIndex);
	void insert(int theIndex, const& T theElement);
	void output(ostream& ouut) const;

	//other function
	int capacity() const { return arrayLength; }
};