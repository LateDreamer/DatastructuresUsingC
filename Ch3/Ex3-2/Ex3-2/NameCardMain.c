//
//  main.c
//  Ex3-2
//
//  Created by JIN YOUNG PARK on 2020/01/02.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "NameCard.h"

NameCard * MakeNameCard(char * name, char * phone)
{
    NameCard * card;
    card = (NameCard*)malloc(sizeof(NameCard));
    strcpy(card->name, name);
    strcpy(card->phone, phone);
    return card;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
