#pragma once

#include <string>

typedef char value_type;

void my_print(std::string& str);

class CircularBuffer {
    std::size_t n;
    value_type * buffer = new value_type[n];
    public:
};






// class CircularBuffer {
//   value_type * buffer;
//   /*... ���������� ... */
// public:
//   CircularBuffer();
//   ~CircularBuffer();
//   CircularBuffer(const CircularBuffer & cb);

//   //������������ ����� �������� �������.
//   explicit CircularBuffer(int capacity);
//   //������������ ����� �������� �������, ������� ��������� ��� ��������� elem.
//   CircularBuffer(int capacity, const value_type & elem);

//   //������ �� �������. �� ��������� ������������ �������.
//   value_type & operator[](int i);
//   const value_type & operator[](int i);

//   //������ �� �������. ������ ������� ���������� � ������ ��������� �������.
//   value_type & at(int i);
//   const value_type & at(int i) const;

//   value_type & front(); //������ �� ������ �������.
//   value_type & back();  //������ �� ��������� �������.
//   const value_type & front();
//   const value_type & back();

//   //������������ - �������� ��������� ����� ���, ��� ��� ������ �������
//   //������������ � ������ �������������� ������. ���������� ��������� 
//   //�� ������ �������.
//   value_type * linearize();
//   //���������, �������� �� ����� ���������������.
//   bool is_linearized();
//   //�������� ����� ���, ��� �� �������� ������� �������� ������� 
//   //� �������� new_begin.
//   void rotate(int new_begin);
//   //���������� ���������, ���������� � ������.
//   int size();
//   bool empty();
//   //true, ���� size() == capacity().
//   bool full();
//   //���������� ��������� ����� � ������.
//   int reserve();
//   //������� ������
//   int capacity();

//   //������������� ����� �������. ���� ������� ������ �������, ������ ��������� ������. ���� ������, ������� ������.	
//   void set_capacity(int new_capacity);
//   //�������� ������ ������.
//   //� ������ ����������, ����� �������� ����������� ��������� item.
//   void resize(int new_size, const value_type & item = value_type());
//   //�������� ������������.
//   CircularBuffer & operator=(const CircularBuffer & cb);
//   //���������� ���������� ������ � ������� cb.
//   void swap(CircularBuffer & cb);

//   //��������� ������� � ����� ������. 
//   //���� ������� ������ ������ ����� ��� �������, �� ��������������
//   //������ ������� ������ (�.�., ����� �����������). 
//   void push_back(const value_type & item = value_type());
//   //��������� ����� ������� ����� ������ ��������� ������. 
//   //���������� push_back, ����� ���������� ��������� ������� ������.
//   void push_front(const value_type & item = value_type());
//   //������� ��������� ������� ������.
//   void pop_back();
//   //������� ������ ������� ������.
//   void pop_front();

//   //��������� ������� item �� ������� pos. ������� ������ �������� ����������.
//   void insert(int pos, const value_type & item = value_type());
//   //������� �������� �� ������ � ��������� [first, last).
//   void erase(int first, int last);
//   //������� �����.
//   void clear();
// };

// bool operator==(const CircularBuffer & a, const CircularBuffer & b);
// bool operator!=(const CircularBuffer & a, const CircularBuffer & b);
