package main

/*
extern void hello(int n, char *s, char *fish);
*/
import "C"

func main() {
	C.hello(C.int(20), C.CString("C-World"), C.CString("🐟"))
}
