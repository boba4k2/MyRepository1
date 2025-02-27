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
//   /*... реализация ... */
// public:
//   CircularBuffer();
//   ~CircularBuffer();
//   CircularBuffer(const CircularBuffer & cb);

//   //Конструирует буфер заданной ёмкости.
//   explicit CircularBuffer(int capacity);
//   //Конструирует буфер заданной ёмкости, целиком заполняет его элементом elem.
//   CircularBuffer(int capacity, const value_type & elem);

//   //Доступ по индексу. Не проверяют правильность индекса.
//   value_type & operator[](int i);
//   const value_type & operator[](int i);

//   //Доступ по индексу. Методы бросают исключение в случае неверного индекса.
//   value_type & at(int i);
//   const value_type & at(int i) const;

//   value_type & front(); //Ссылка на первый элемент.
//   value_type & back();  //Ссылка на последний элемент.
//   const value_type & front();
//   const value_type & back();

//   //Линеаризация - сдвинуть кольцевой буфер так, что его первый элемент
//   //переместится в начало аллоцированной памяти. Возвращает указатель 
//   //на первый элемент.
//   value_type * linearize();
//   //Проверяет, является ли буфер линеаризованным.
//   bool is_linearized();
//   //Сдвигает буфер так, что по нулевому индексу окажется элемент 
//   //с индексом new_begin.
//   void rotate(int new_begin);
//   //Количество элементов, хранящихся в буфере.
//   int size();
//   bool empty();
//   //true, если size() == capacity().
//   bool full();
//   //Количество свободных ячеек в буфере.
//   int reserve();
//   //ёмкость буфера
//   int capacity();

//   //Устанавливает новую емкость. Если емкость больше текущей, просто расширяем память. Если меньше, очищаем массив.	
//   void set_capacity(int new_capacity);
//   //Изменяет размер буфера.
//   //В случае расширения, новые элементы заполняются элементом item.
//   void resize(int new_size, const value_type & item = value_type());
//   //Оператор присваивания.
//   CircularBuffer & operator=(const CircularBuffer & cb);
//   //Обменивает содержимое буфера с буфером cb.
//   void swap(CircularBuffer & cb);

//   //Добавляет элемент в конец буфера. 
//   //Если текущий размер буфера равен его ёмкости, то переписывается
//   //первый элемент буфера (т.е., буфер закольцован). 
//   void push_back(const value_type & item = value_type());
//   //Добавляет новый элемент перед первым элементом буфера. 
//   //Аналогично push_back, может переписать последний элемент буфера.
//   void push_front(const value_type & item = value_type());
//   //удаляет последний элемент буфера.
//   void pop_back();
//   //удаляет первый элемент буфера.
//   void pop_front();

//   //Вставляет элемент item по индексу pos. Ёмкость буфера остается неизменной.
//   void insert(int pos, const value_type & item = value_type());
//   //Удаляет элементы из буфера в интервале [first, last).
//   void erase(int first, int last);
//   //Очищает буфер.
//   void clear();
// };

// bool operator==(const CircularBuffer & a, const CircularBuffer & b);
// bool operator!=(const CircularBuffer & a, const CircularBuffer & b);
