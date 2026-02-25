#include<iostream>
#include<ctime>
#include<cstdlib>

int main(){
    int i,j;
    //设置种子
    srand((unsigned)time(NULL));
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            //生成随机数
            std::cout<<rand()%100<<" ";
        }
        std::cout<<std::endl;
    }

}