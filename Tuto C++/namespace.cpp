
#include <stdio.h>

int		gl_var = 1;
int		f(void){ return 2;}

namespace	Foo
{
	int		gl_var = 3;
	int		f(void) {return 4; }
}

namespace	Bar
{
	int		gl_var = 5;
	int		f(void) { return 6;}
}

namespace	Muf = Bar;

int		main(void)
{
	printf("glob : %d %d\n", gl_var, f());
	printf("Foo : %d %d\n", Foo::gl_var, Foo::f());
	printf("Bar : %d %d\n", Bar::gl_var, Bar::f());
	printf("Muf : %d %d\n", Muf::gl_var, Muf::f());
	printf("::glob : %d %d\n", ::gl_var, ::f());

	return (0);
}