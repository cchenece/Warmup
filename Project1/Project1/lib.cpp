#pragma once

#include "lib.h"

namespace GpuUtil
{

void Polygon::set_values(int a, int b)
{
	width = a; height = b;
}

/************************/
Rectangle::Rectangle(int id)
	:
	m_id(id) {}

Rectangle::~Rectangle() {};

int Rectangle::area()
{
	return width * height;
}

/******************************/
Triangle::Triangle(int id)
	:
	m_id(id) {}

Triangle::~Triangle() {};

int Triangle::area()
{
	return width * height / 2;
}

}