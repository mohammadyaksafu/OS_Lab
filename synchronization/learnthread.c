#include<stdio.h>
#include<pthread.h>

#define NUM_LOOP 50000000
long long sum =0;

pthread_mutex_t mutex=PTHREAD_MUTEX_INITIALIZER;

void *counting_function(void *arg){

    int offset=*(int*)arg;

    for(int i=0;i<NUM_LOOP;i++){
        pthread_mutex_lock(&mutex);
        sum+=offset;
        pthread_mutex_unlock(&mutex);

    }
    pthread_exit(NULL);
}

int main(void ){
   // counting_function(1); 
    
    pthread_t id1;

    int offcet1=1;
    pthread_create(&id1,NULL, counting_function,&offcet1);
   

    pthread_t id2;

    int offcet2=-1;
    pthread_create(&id2,NULL, counting_function,&offcet2);
     pthread_join(id1,NULL);
    pthread_join(id2,NULL);

   // counting_function(-1);

    printf("Sum =%lld\n",sum);

    return 0;
}