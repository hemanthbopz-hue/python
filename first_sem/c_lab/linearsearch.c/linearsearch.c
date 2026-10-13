// C Program to demonstrate Linear search
//Implemented using array and functions

#include<stdio.h>
#include<stdbool.h>

int linear_search(int [],int,int);   //function prototype for linear_search()
bool validate_size(int);                //'validate_sie() funtion prototype'
int read_size();                        //read_size() function prototype

int main(){
    bool isValid=true;
    int size,key;
    // loop to iterate untill valid array size is received
    do{
        size=read_size();
        if(validate_size(size)){
            break;
        }
        printf("Please enter valid array size..");

    }while (isValid);
    // Array initialization
    int numbers[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d array element:", i+1);
        scanf("%d",&numbers[i]);
    }
    // to receive search element from KB
    printf("Enter the search element");
    scanf("%d",&key);
    //calling linear_search()
    int position=linear_search(numbers,key,size);
    if(position==-1){
        printf("%d is not found",key);
    }else{
        printf("%d Found at %d",key,position);
    }

}
bool validate_size(int arraySize){
    if(arraySize<=1){
        return false;
    }
    return true;
}

int read_size(){
    int size;
    printf("Enter the array size:");
    scanf("%d",&size);
    return size;
}

//method to implement linear search
//trverse each array position to check whether it has 'searkey' or not
//returns array index of matched array element if found; -1 otherwise
int linear_search(int myarray[],int searchkey,int arraysize){
    
}