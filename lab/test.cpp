#include <iostream>
#include <memory>
#include <vector>
#include <cstddef>

class	Square
{
	public:
		int height;
		int width;
		Square(int height, int width) {this->height = height; this->width = width;}
		friend std::ostream& operator<<(std::ostream& out, const Square& sqr) {out <<  "Heigit: " << sqr.height << " Width: " << sqr.width << std::endl; return (out);}
	private:
		int hello;
		int hello2;
};
		
class	Rect: public Square
{
	public:
		Rect(int height, int width, int depth):Square(height, width) {this->depth = depth;}
		friend std::ostream& operator<<(std::ostream& ost, const Rect& rect) {ost <<  "Depth: " << rect.width<< std::endl; return (ost);}
	private:
		int depth;
		int	data;
};

int main() {
	Rect rect(15, 20, 25);
	std::cout << rect << std::endl;
	std::cout << "Size: " << sizeof(rect) << std::endl;
	std::cout << offsetof(Square, height) << std::endl;
	std::cout << offsetof(Square, width) << std::endl;
	std::cout << offsetof(Rect, height) << std::endl;
	std::cout << offsetof(Rect, width) << std::endl;

    return 0;
}

