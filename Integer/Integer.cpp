#include "Integer.h"

Integer Integer::add(Integer integer)
{
	Integer newIntegerSum;
	newIntegerSum.num1 = integer.num1 + integer.num2;

	return newIntegerSum;
}

Integer Integer::sub(Integer integer)
{
	Integer newIntegerSub;
	newIntegerSub.num1 = integer.num1 - integer.num2;

	return newIntegerSub;
}

Integer Integer::mul(Integer integer)
{
	Integer newIntegerMul;
	newIntegerMul.num1 = integer.num1 * integer.num2;

	return newIntegerMul;
}

Integer Integer::div(Integer integer)
{
	Integer newIntegerDiv;
	newIntegerDiv.num1 = integer.num1 / integer.num2;

	return newIntegerDiv;
}

Integer Integer::mod(Integer integer)
{
	Integer newIntegerMod;
	newIntegerMod.num1 = integer.num1 % integer.num2;

	return newIntegerMod;
}