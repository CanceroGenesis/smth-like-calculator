#include "stdio.h"
#include "iostream"
#include "ctime"
#include "conio.h"
#include "math.h"
using namespace std;
struct part
{
	int num;//числитель
	int den;//знаменатель
	//int c;
	int _signed; // знак: 1 == '+', -1 == '-'
};
part Sum(part a, part b)
{
	part sum = { 0,0,true };
	if (a.den == b.den)
	{
		sum.den = a.den;
		sum.num = a._signed * a.num + b._signed * b.num;
		if (sum.num >= 0)
		{
			sum._signed = 1;
		}
		else
		{
			sum.num = -1;
			sum._signed = -1;
		}
	}
	else
	{
		sum.den = a.den * b.den;
		a.num *= b.den;
		b.num *= a.den;
		sum.num = a._signed * a.num + b._signed * b.num;
		if (sum.num >= 0)
		{
			sum._signed = 1;
		}
		else
		{
			sum.num = -1;
			sum._signed = -1;
		}
	}
	return sum;
}
part Sub(part a, part b)
{
	part sub = { 0,0,true };
	if (a.den == b.den)
	{
		sub.den = a.den;
		sub.num = a._signed * a.num - b._signed * b.num;
		if (sub.num >= 0)
		{
			sub._signed = 1;
		}
		else
		{
			sub.num = -1;
			sub._signed = -1;
		}
	}
	else
	{
		sub.den = a.den * b.den;
		a.num *= b.den;
		b.num *= a.den;
		sub.num = a._signed * a.num - b._signed * b.num;
		if (sub.num >= 0)
		{
			sub._signed = 1;
		}
		else
		{
			sub.num = -1;
			sub._signed = -1;
		}
	}
	return sub;
}
part Mult(part a, part b)
{
	part Mult = { 0,0,true };
	if (a.den == b.den)
	{
		Mult.den = a.den;
		Mult.num = (a._signed * a.num) * (b._signed * b.num);
		if (Mult.num >= 0)
		{
			Mult._signed = 1;
		}
		else
		{
			Mult.num = -1;
			Mult._signed = -1;
		}
	}
	else
	{
		Mult.den = a.den * b.den;
		a.num *= b.den;
		b.num *= a.den;
		Mult.num = (a._signed * a.num) * (b._signed * b.num);
		if (Mult.num >= 0)
		{
			Mult._signed = 1;
		}
		else
		{
			Mult.num = -1;
			Mult._signed = -1;
		}
	}
	return Mult;
}
void main()
{
	part res = { 0,0,1 };
	part res1 = { 0,0,1 };
	part res2 = { 0,0,1 };
	part a = { 3,4,1 };
	part b = { 1,4,1 };
	res = Sum(a, b);
	if (res._signed = 1)
	{
		cout << res.num << '/' << res.den;
	}
	else
	{
		cout << '-' << res.num << '/' << res.den;
	}
	cout << endl;
	res1 = Sub(a, b);
	if (res1._signed = 1)
	{
		cout << res1.num << '/' << res1.den;
	}
	else
	{
		cout << '-' << res1.num << '/' << res1.den;
	}
	cout << endl;
	if (res2._signed = 1)
	{
		cout << res2.num << '/' << res2.den;
	}
	else
	{
		cout << '-' << res2.num << '/' << res2.den;
	}
	_getch();
	return;
}