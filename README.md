Задание 2

Реализовать свой аллокатор памяти, который позволит выполнять операцию резервирования памяти. Далее использовать этот аллокатор с контейнером std::map. Аллокатор должен параметризоваться количеством выделяемых за раз элементов. Освобождение конкретного элемента не предполагается - аллокатор должен освобождать всю память самостоятельно. Аллокатор работает с фиксированным количеством элементов. Попытку выделить большее число элементов считать ошибкой. Опционально реализовать расширяемость аллокатора. При попытке выделить число элементов, которое превышает текущее зарезервированное количество, аллокатор расширяет зарезервированную память.

Опционально реализовать поэлементное освобождение.

Цель такого аллокатора – снизить количество операций выделения памяти.

Реализовать свой контейнер, который по аналогии с контейнерами stl параметризуется аллокатором. Контейнер должен иметь две возможности - добавить новый элемент и обойти контейнер в одном направлении. Опционально реализовать совместимость с контейнерами stl – итераторы, вспомогательные методы size, empty и т.д. Цель реализации своего контейнера – попробовать использовать std::allocator, а также свой аллокатор.

Прикладной код должен содержать следующие вызовы:
1. создание экземпляра std::map<int, int>
2. заполнение 10 элементами, где ключ - это число от 0 до 9, а значение - факториал ключа
3. создание экземпляра std::map<int, int> с новым аллокатором, ограниченным 10 элементами
4. заполнение 10 элементами, где ключ - это число от 0 до 9, а значение - факториал ключа
5. вывод на экран всех значений (ключ и значение разделены пробелом) хранящихся в контейнере
6. создание экземпляра своего контейнера для хранения значений типа int
7. заполнение 10 элементами от 0 до 9
8. создание экземпляра своего контейнера для хранения значений типа int с новым аллокатором, ограниченным 10 элементами
9. заполнение 10 элементами от 0 до 9
10. вывод на экран всех значений, хранящихся в контейнере
