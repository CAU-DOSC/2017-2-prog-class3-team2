# README file for TEAM[3,2]:

This text file describes brief but precise and complete specification of project including:
- function descriptions: name, input/output parameters
- declaration of important data and data types to be included in user header file
- your team's brief ideas of implementations

- - -
Your description start form next line and do not delete lines upto this point.

-Function descriptions:
* LINK createNODE(int num) function --> a function that create Nodes.
* LINK appendNODE(LINK head, LINK cur) function --> a function that append Nodes.
* void printNODE(LINK head) function --> a function that prints Node values.
* void reverseprintNODE(LINK head, LINK nestnode, int num) function --> a function that prints Node values in reverse.
* MidValueprint(LINK head, LINk curnod, int numofNODE) function --> a function that prints mid located Node value.

-Declaration of important data and data types:
 Data types:
* struct node {int value , struct NODE *next};
* typedef node NODE
* typedef NODE* LINK
 Data:
* LINK head: NODE pointer that point to head of linked list
* LINK curnode: NODE pointer that point to current node
* char str[11]: string to input numbers
* int numofNODE: integer value counting #of NODE

-Ideas of implementations:

-Ownership:
Linked_List_Head.h -paxcho1(조중현),celi1004(박진영)
Linked_List_Lib.c - SeongYunKim(김성윤),kangyb1014(강영빈),paxcho1(조중현),celi1004(박진영)
Linked_List_main.c -kangyb1014(강영빈),SeongYunKim(김성윤),paxcho1(조중현),celi1004(박진영)
README.txt -paxcho1(조중현),SeongYunKim(김성윤)
