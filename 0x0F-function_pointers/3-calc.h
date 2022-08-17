#ifndef CALC
#define CALC

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * op_add - adds two numbers
 *
 * @a: num1
 * @b: num2
 *
 * Return: a + b
 */
int op_add(int a, int b);
/**
 * op_sub - subtracts two numbers
 *
 * @a: num1
 * @b: num2
 *
 * Return: a - b
 */
int op_sub(int a, int b);
/**
 * op_mul - multiplies two numbers
 *
 * @a: num1
 * @b: num2
 *
 * Return: a * b
 */
int op_mul(int a, int b);
/**
 * op_div - divides two numbers
 *
 * @a: num1
 * @b: num2
 *
 * Return: a / b, or error if b = 0
 */
int op_div(int a, int b);

