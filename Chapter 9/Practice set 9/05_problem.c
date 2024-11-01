#include <stdio.h>

struct date{
    int dd;
    int mm;
    int yyyy;
};

int compare(struct date D1, struct date D2){
    if((D1.yyyy == D2.yyyy) && (D1.mm == D2.mm) && (D1.dd == D2.dd)){
        return 0;
    }
    if(D1.yyyy > D2.yyyy){
        return 1;
    }
    else if(D1.yyyy < D2.yyyy){
        return -1;
    }
    else if(D1.mm > D2.mm){
        return 1;
    }
    else if(D1.mm < D2.mm){
        return -1;
    }
    else if(D1.dd > D2.dd){
        return 1;
    }
    else if(D1.dd > D2.dd){
        return -1;
    }

}

int main(){
    
    struct date D1 = {23, 6, 2005};
    struct date D2 = {26, 8, 2006};

    printf("%d", compare(D1, D2));

    return 0;
}