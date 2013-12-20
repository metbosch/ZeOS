/*
 * sys.c - Syscalls implementation
 */
#include <devices.h>

#include <utils.h>

#include <io.h>

#include <mm.h>

#include <capsaleres.h>

#include <mm_address.h>

#include <errno.h>

#include <sched.h>

#define LECTURA 0
#define ESCRIPTURA 1

int check_fd(int fd, int permissions)
{
  if (fd!=1) return -9; /*EBADF*/
  if (permissions!=ESCRIPTURA) return -13; /*EACCES*/
  return 0;
}

int sys_ni_syscall()
{
	return -38; /*ENOSYS*/
}

int sys_getpid()
{
	return current()->PID;
}

int sys_fork()
{
  int PID=-1;

  // creates the child process
  
  return PID;
}

void sys_exit()
{  
}


int sys_write(int fd, char * buffer, int size) {
/*    fd: file descriptor. In this delivery it must always be 1.
      buffer: pointer to the bytes.
      size: number of bytes.
      return ’ Negative number in case of error (specifying the kind of error) and
      the number of bytes written if OK.*/
      // Checks the parametres
      int check = check_fd(fd, ESCRIPTURA);
      if(check != 0) return check;
      if (buffer == NULL) return -EFAULT;
      if (size < 0) return -EINVAL;


      // MIRAR TEMA DE COPIAR DE UNA MEMORIA A UNA ALTRA
      if(fd == 1) return sys_write_console(buffer, size);
      return -ENODEV;

}


int sys_gettime() {
      return zeos_ticks;
}