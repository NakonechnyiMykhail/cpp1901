#include <iostream>


char* dec_to_bin(char* s, int n){
   unsigned int u = (unsigned int)n;
   char* t = s;

   do {
       *s++ = (char)((u & 1) + '0');
   } while((u >>= 1) != 0);
   *s-- = '\0';

   char c;
   for(char* p = t; p < s; ++p, --s){
       c  = *p;
       *p = *s;
       *s = c;
   }
   return t;
}


int main(void){
    char buf[(sizeof(int) << 3) + 1];

    std::cout << dec_to_bin(buf,  2) << std::endl;
    std::cout << dec_to_bin(buf, 5) << std::endl;
    return 0;
}