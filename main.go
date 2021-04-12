package main

/*
extern void hello(char *s, char *fish);
*/
import "C"

func main() {
	C.hello(C.CString("C-World"), C.CString("🐟"))
}
