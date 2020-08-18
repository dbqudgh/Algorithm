#include <iostream>
#include <stdio.h>
using namespace std;


int main() {
    
    
    //input value 
    int n = 5;
    
    //mainvalue
    int mainValue = 0;
    
    
    //arry
    int arry[n][n];
    
    //start point
    int startC = 0;
    int startR = 0;
    
    //end point
    int endC = n-1;
    int endR = n-1;
    
    
    
    
    
    
    
    //inputValue
    while(startC <= endC && startR <= endR){
        
        
        //top
        for(int i = startR; i <= endR; i++){
            arry[startR][i]  =  ++mainValue;
        } startC++;
        
        //right
        
        for(int i = startC; i <= endC; i++){
            
            arry[i][endC]  =  ++mainValue;
            
        } endR--;
        
        //botom
        
        for(int i = endR; i >= startR; i--){
            
            arry[endC][i]  =  ++mainValue;
            
        } endC--;
        
        
        //left
        
        for(int i = endC; i >=  startC; i--){
            
            arry[i][startR]  =  ++mainValue;
            
        }startR++;
        
    }
    
    
    
    //this check aryy valye
    for(int i = 0; i < n; i++){
        
        for(int j = 0; j < n; j++){
            
            printf("%d ",arry[i][j]);
            
        }
        
        printf("\n");
    }
    
}
