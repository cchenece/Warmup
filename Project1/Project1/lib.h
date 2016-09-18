#pragma once

// derived classes

//using namespace std;

namespace GpuUtil
{
	class Polygon {
	protected:
		int width, height;
	public:
		void set_values(int a, int b);

	};

	class Rectangle : public Polygon {
	public:
		Rectangle(int id);
		~Rectangle();
		int area();
	private:
		int m_id;
	};

	class Triangle : public Polygon {
	public:
		Triangle(int id);
		~Triangle();
		int area();
	private:
		int m_id;
	};

} //GpuUtil