#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void *thread1(void *ptr){
    pthread_t tid;
    tid = pthread_self();
    printf("calling thread1 function with thread id:%lu\n",tid);
    usleep(1000000);
}
void *thread2(void *ptr){
    pthread_t tid;
    tid = pthread_self();
    printf("calling thread2 function with thread id:%lu\n",tid);
    usleep(2000000);
}
void *thread3(void *ptr){
    pthread_t tid;
    tid = pthread_self();
    printf("calling thread3 function with thread id:%lu\n",tid);
    usleep(3000000);
}
void *thread4(void *ptr){
    pthread_t tid;
    tid = pthread_self();
    printf("calling thread4 function with thread id:%lu\n",tid);
    usleep(4000000);
}
void *thread5(void *ptr){
    pthread_t tid;
    tid = pthread_self();
    printf("calling thread5 function with thread id:%lu\n",tid);
    usleep(5000000);
}
int main()
{
    pthread_t thread_id[5];
    printf("calling main function\n");
    pthread_create(&thread_id[0],NULL,thread1,NULL);
    //pthread_join(thread_id[0],NULL);
    pthread_create(&thread_id[1],NULL,thread2,NULL);
    //pthread_join(thread_id[1],NULL);
    pthread_create(&thread_id[2],NULL,thread3,NULL);
    //pthread_join(thread_id[2],NULL);
    pthread_create(&thread_id[3],NULL,thread4,NULL);
    //pthread_join(thread_id[3],NULL);
    pthread_create(&thread_id[4],NULL,thread5,NULL);
    //pthread_join(thread_id[4],NULL);

    printf("Finished and exiting main function with thread id:%ld\n",pthread_self());

}