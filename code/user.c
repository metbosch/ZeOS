#include <libc.h>

char buff[24];

int pid;

void feina() {
    write(1,"olaaaaaaaa",10);
    exit();
}

int __attribute__ ((__section__(".text.main")))
  main(void)
{
    /* Next line, tries to move value 0 to CR3 register. This register is a privileged one, and so it will raise an exception */
     /* __asm__ __volatile__ ("mov %0, %%cr3"::"r" (0) ); */   
    runjp();
    //char pila[4096];
    //clone(feina,&pila[4096]);
    while(1) {
	      //char buffer[10];
	      //itoa(getpid(), buffer);
	      //write(1, buffer, 10);
    }
}
