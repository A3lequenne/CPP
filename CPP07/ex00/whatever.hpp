#pragma once

template< typename T > // defines, T is a template

const T	&max(const T &x ,const T &y) // more const, more better
{
	return (x >= y ? x : y);
}

template< typename U > // defines, U is a template

const U	&min(const U &x ,const U &y) // more const, more better
{
	return (x <= y ? x : y);
}

template< typename V >

void swap(V &x, V &y)
{
	V temp = x;
	x = y;
	y = temp;
}