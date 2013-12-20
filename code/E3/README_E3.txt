SEMAPHORES

Test[0]: SEM_INIT(invalid semaphores id: negative & out of range id) :sem_init
Test[1]: SEM_INIT(an already initialized semaphore) : sem_init,sem_destroy
Test[2]: SEM_DESTROY(invalid semaphore id: negative & out of range id) : sem_destroy
Test[3]: SEM_DESTROY(an uninitialized semaphore) : sem_destroy
Test[4]: SEM_DESTROY(not owner) : fork, sem_init, sem_destroy, nice, exit
Test[5]: EXIT DESTROY OWNED SEMS : fork, exit, sem_init, sem_signal, sem_wait
Test[6]: EXIT DO NOT DESTROY NOT OWNED SEMS : fork, exit, sem_init, sem_signal
Test[7]: SEM_SIGNAL(invalid semaphore id: negative & out of range id) : sem_signal
Test[8]: SEM_SIGNAL(not initialized semaphore) : sem_signal
Test[9]: TEST SEMAPHORE REUSE : sem_init,sem_destroy
Test[10]: SEM_WAIT(invalid semaphore id: negative & out of range id) : sem_wait, fork, getpid
Test[11]: SEM_WAIT(not initialized semaphore) : sem_wait
Test[12]: SEM_SIGNAL(destroyed semaphore) : sem_signal,sem_init,sem_wait, sem_destroy, getpid, fork, exit
Test[13]: SEM_WAIT RETURN VALUE ON SUCCESS : sem_signal,sem_init,sem_wait, sem_destroy, getpid, fork, exit
Test[14]: SEM_DESTROY(busy semaphore) : sem_wait, sem_signal, sem_init, sem_destroy,nice
Test[15]: SEM_DESTROY(busy semaphore):unblock sem_wait : fork, sem_wait, sem_signal, sem_init, sem_destroy,nice
Test[16]: SYNCHRONIZING SEVERAL PROCESSES : sem_signal,sem_init,sem_wait, sem_destroy, fork, exit

CLONE
Test[0]: clone(invalid function address) 
Test[1]: clone(invalid stack address) : exit
Test[2]: clone(OK) : exit
Test[3]: clone()shares memory : exit, sem_init, sem_wait, sem_signal, sem_destroy
Test[4]: fork()does not share memory : fork, exit, sem_init, sem_wait, sem_signal, sem_destroy
Test[5]: clone many threads (single) : exit, sem_init, sem_wait, sem_signal, sem_destroy
Test[6]: clone maximum threads  : exit, sem_init, sem_wait, sem_signal, sem_destroy
Test[7]: clone many threads (maximum)  : exit, sem_init, sem_wait, sem_signal, sem_destroy
Test[8]: fork after clone  : exit, fork, sem_init, sem_wait, sem_signal, sem_destroy
Test[9]: fork inside clone  : exit, fork, sem_init, sem_wait, sem_signal, sem_destroy

