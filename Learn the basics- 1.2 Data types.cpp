/*Geek is learning a new programming language. As data type forms the most fundamental part of a language, Geek is learning them with focus and needs your help.
Given a data type, help Geek in finding the size of it in byte.*/

//solution
class Solution {
  public:
    int dataTypeSize(string str) {
        // your code here
        if(str=="Character")
            return 1;
        if(str=="Integer")
            return 4;
        if(str=="Float")
            return 4;
        if(str=="Long")
            return 8;
        if(str=="Double")
            return 8;
    }
};
