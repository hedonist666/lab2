// Темы:
// Простое наследование. Виртуальные функции. Абстрактные классы.
// [Битовые поля.]


#include "MyByte.h"
#define	  stop __asm nop

int main(int argc, char* argv[])
{
	//Задание 1.Массив объектов класса.
	{
	//Объявите и проинициализируйте массив ar из объектов
	// типа MyString. 
		//MyString str1[3] = {...};
  
	//Проверка - печать строк-членов класса


	//Замените размер "3" на "5", не изменяя список инициализаторов.


			
	}
	


	//Задание 2.Массив указателей на объекты класса.
	{
	//Объявите и проинициализируйте массив arPtr из трех 
	//указателей на объекты типа MyString.
	
	
	//Печать строк-членов класса

  
	}
	


	//Задание 3.Простое наследование.Аргументы конструктора,
	// передаваемые в базовый класс.

	//Создайте иерархию классов:
	//базовый класс Shape (который описывает любую фигуру)
	//и два производных класса Rect и Circle.
	//Подумайте: какие данные и методы нужно ввести в базовый
	//и производные классы (например, любую фигуру можно сделать
	//цветной => в базовом классе можно ввести переменную, которая
	//будет определять цвет фигуры.
	//Подсказка: для хранения цвета объявите перечисление (RED,GREEN,BLUE...);
	

	
	//В конструкторах производных классов предусмотрите передачу
	//параметра-цвета конструктору базового класса.
	//При создании и уничтожении объекта производного типа определите
	//последовательность вызовов конструкторов и деструкторов базового
	//и производного классов
	



	
//////////////////////////////////////////////////////////////////////
/*
	//Задание 4.Виртуальные функции.
	//4а) Модифицируйте классы Shape,Rect и Circle:
	//добавьте в каждый класс public метод void WhereAmI().
	//Реализация каждой функции должна выводить сообщение 
	//следующего вида "Now I am in class Shape(Rect или Circle)".
	//Выполните приведенный фрагмент, объясните результат.

	//4б) Сделайте метод WhereAmI() виртуальным.
	//Снова выполните приведенный фрагмент, объясните разницу.

	{
		Shape s(...);
		Rect r(...);
		Circle c(...);

	
		//Метод какого класса вызывается в следующих строчках???
		s.WhereAmI();	//	???
		r.WhereAmI();	//	???
		c.WhereAmI();	//	???
		


		Shape* pShape = &s;
		Shape* pRect = &r;
		Shape* pCircle = &c;
    	pShape->WhereAmI();	//	???
		pRect->WhereAmI();	//	???
		pCircle->WhereAmI(); //	???
		


		//Заполните ... согласно комментариям
		Shape& rShape = ...; //псевдоним s
		Shape& rRect = ...; //псевдоним r
		Shape& rCircle = ...; //псевдоним c
    	...WhereAmI();	//вызов посредством rShape	???
		...WhereAmI();	//вызов посредством	rRect	???
		...WhereAmI(); //вызов посредством rCircle	???
		
	}
*/

//////////////////////////////////////////////////////////////////////
/*
	//Задание 5.Виртуальные деструкторы.
	//Модифицируйте классы:
	//a) введите соответствующие
	// деструкторы (без ключевого слова virtual).
	//Реализация каждого деструктора
	//должна выводить сообщение следующего вида
	// "Now I am in Shape's destructor!" или
	// "Now I am in Rect's destructor!"
	//Выполните фрагмент. Объясните результат.

	// b) Добавьте в объявление деструкторов ключевое слово virtual 
	//Выполните фрагмент.Объясните разницу.

	
	//Подумайте: какие конструкторы вызываются в следующей строке?
		//Если в разработанных классов каких-то конструкторов
		//не хватает - реализуйте
		//Если Вы считаете, что в приведенном фрагменте чего-то
		//не хватает - добавьте

		Rect r(<параметры>);
		Shape* ar[]={new Shape(r), new Rect(r), new Circle(r), new Circle() };
		//Вызовите для каждого элемента массива метод WhereAmI()
	

	
*/

/*
	//Задание 6*. В чем заключается отличие 1) и 2)
	{
		Shape* pShapes = new Rect[10];//1)
		Rect* pRects = new Rect[10];//2)

		//Попробуйте вызвать метод WhereAmI() для каждого элемента обоих массивов -
		//в чем заключается проблема???


		//Освободите динамически захваченную память

	}

*/

//////////////////////////////////////////////////////////////////////
/*
	//Задание 7.Виртуальные функции и оператор разрешения области видимости. 

	{
		Rect r(...);
		Shape* p = &r;	
		p->WhereAmI();//...
		
	
		
		//4a Оператор разрешения области видимости.
		//Посредством объекта r и указателя p вызовите виртуальную функцию
		//WhereAmI()класса Shape
		
		
	}
*/

//////////////////////////////////////////////////////////////////////
/*
	//Задание 8.Чисто виртуальные функции. 
	//Введите в базовый класс метод void Inflate(int); Подумайте:
	//можно ли реализовать такой метод для базового класса? => как его нужно объявить.
	//Реализуйте этот метод для производных классов.
	{
		Rect r(...);
		Shape* p = &r;
		p->Inflate(5);
		Circle c(...);
		p = &c;
		p->Inflate(5);
	}
*/


//////////////////////////////////////////////////////////////////////
	//Задание 9. Создайте глобальную функцию, которая будет принимать любое
	//количество указателей на строки, а возвращать объект MyString,
	//в котором строка будет конкатенацией параметров

////////////////////////////////////////////////////////////////////////
	//Задание 10. Объединения (union) C++. Битовые поля.
	//1.
	//Создайте следующие классы для различных представлений значений байта:
	//Bin - для двоичного представления
	//Hex - для шестнадцатерчного представления
	//Oct - для восьмеричного представления.
	//Подсказка 1: - для удобства используйте битовые поля.
	//Подсказка 2: - конструкторов в таких вспомогательных классах быть не должно,
	//так как все они будут членами объединения (union).
	//2.
	//В каждом классе введите метод Show, который должен выводить значение в
	//соответствующем виде
	//3.
	//Посредством объединения MyByte предоставьте пользователю возможность манипулировать
	//одним и тем же значением по-разному:
	//а) выводить: десятичное, шестнадцатеричное, восьмеричное, двоичное значение байта 
	//          а также символ, соответствующий хранимому значению (если есть соответствие);
	//б) выводить отдельные (указанные посредством параметра) шестнадцатеричные,
	//			восьмеричные, двоичные цифры;
	//в) изменять отдельные двоичные, восьмеричные или шестнадцатеричные цифры;

	MyByte byte(0x1f);
	byte.ShowHex();
        std::cout << std::endl;
	byte.ShowBin();
        std::cout << std::endl;
        byte.changeDigitHex(1, 0xa);
        byte.ShowHex();
	//...
	return 0;
}//endmain

