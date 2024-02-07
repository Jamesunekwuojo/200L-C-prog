// strings - sequence (collection) of characters  and are always terminated with a null character(\0)
//char c[] ""
// char c[] = "abcd"
// char c[5] = {'a','b', 'c', 'd', 0}
// For string u have to declare and assign it immediately
// scanf - to accept string variables - format specifier forstring is  %s
//  for string we do not put the amberscent symbol that's & when using scanf


#include <stdio.h>
int main (){
	char name[20];
	printf("Enter full name ");
    Fget ()
	scanf("%s", name);
	
}
// get function - suffers from array bound  checking which makeis t suffers from  buffer overflow
//f get function alternative for scanf only for strings 