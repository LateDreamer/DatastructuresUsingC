//
//  NameCard.c
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

void ShowNameCardInfo(NameCard * pcard)
{
    printf("[이름] %s \n", pcard->name);
    printf("[번호] %s \n\n", pcard->phone);
};

int NameCompare(NameCard * pcard, char * name)
{
    return strcmp(pcard->name, name);
};

// 전화번호 정보를 변경
void ChangePhoneNum(NameCard * pcard, char * phone)
{
    strcpy(pcard->phone, phone);
};
