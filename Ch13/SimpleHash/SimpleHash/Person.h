//
//  Person.h
//  SimpleHash
//
//  Created by JIN YOUNG PARK on 2020/02/14.
//  Copyright © 2020 JIN YOUNG PARK. All rights reserved.
//

#ifndef Person_h
#define Person_h

#define STR_LEN   50

typedef struct _person
{
    int ssn;              // 주민번호
    char name[STR_LEN];   // 이름
    char addr[STR_LEN];   // 주소
}Person;

int GetSSN(Person * p);
void ShowPerInfo(Person * p);
Person * MakePersonData(int ssn, char * name, char * addr);

#endif /* Person_h */
