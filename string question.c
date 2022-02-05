string condition:

             string is a group of character terminated with a null character \0;                                                                                        


syntax:
              { char  string_name[size] }
   
             here sting name is any name of yours.  size is used to " length of string".

            eg :  char a[20];

initilisation string:
          
         we have different ways of initialising string

        eg:   char str[]="string";

                char str[50] =" aditya"

                char str[7] = {'A','d','i','t','y','a','\0'}


      eg programme:

       #include<stdio.h>
      int main()
     {
         char str1[]="aditya";

        char str2[7] = "aditya";

       printf("%s\n",str1);
   
    }


                            reading string:

   scanf can be used to read a string from keyboard

  syntax:
          scanf("%s",string name);

      eg:
                  #include<stdio.h>
      int main()
     {
         char str[20];

        printf("enter the string?");

        scanf("%s",str);

       printf("you entered %s",s);
      
      return 0;

     }
     
     execution:

             enter the string?aditya
             you entered aditya


                                    reading a string using gets(),fgets()

gets() to read string with spaces :
           
                 syntax:

                  gets(string name):

            eg: 
                       #include<stdio.h>
                        int main()
                       {
                          char str[20]
                           printf("enter the string?");
                          gets(str);
                           printf("you entered %s",str);
                          return 0;
                        }
  fgets()




string operations:

             all the string operations are included in standard header file #include<string.h>

 1.   string length : strlen()  
                        find out the length of the string
  syntax:
              { strlen(string_name); }                                                                                                                                                                                        
      eg:
             #include<stdio.h>
            #include<string.h>
           int main()
          {
                 char a[20];
                int n;
                printf("enter string:");
                gets(a); 
               n=strlen(a);
               printf("length is : %d",n);
              return 0;
          }

     output:
               enter string:   college
               length is:7


 2.     string copy : strcpy()
        
    it copy the contents of source string to destination string
    syntax: 
         { strcpy(destination,source); }
         strcpy(b,a)
    eg:
        
          #include<stdio.h>
            #include<string.h>
           int main()
          {
                     char a[10],b[20];
                   printf("enter string");
                  gets(a);
                   strcpy(b,a);
                   printf("%s",b);
                 return 0;
         }
      output:
                    enter string: aditya
                    aditya

 3.  string reverse  :   strrev()
            this s
         synax:
              { strrev(string_name) }
        eg:
       
          #include<stdio.h>
            #include<string.h>
           int main()
          {
                     char a[10];
                   printf("enter string");
                  gets(a);
                   strrev(a);
                   printf("%s",a);
                 return 0;
         }
      output:
                    enter string: aditya
                    aytida

4. string lower : strlwr()
      syntax:
                      { strlwr(string_name); }
             eg:
                 
          #include<stdio.h>
            #include<string.h>
           int main()
          {
                     char a[10];
                   printf("enter string");
                  gets(a);
                   strlwr(a);
                   printf("%s",a);
                 return 0;
         }
      output:
                    enter string: ADITYA
                    aditya
5.string comparasion: strcmp()
            it compares first string with second string and if returns 0 both strings are same.
syntax:
            { strcmp(first_string,second_string); }
     eg:
           
                   #include<stdio.h>
            #include<string.h>
           int main()
          {
                     char a[10],b[10];
                    int n;
                   printf("enter string 1 :");
                  gets(a);
                   printf("enter string 2:");
                 n=strcmp(a,b);
                 if(n==0)
                   printf("same");
                else if
                  printf("not same");
                return 0;
         }
      output:
                    enter string1: aditya
                    enter string 2:aditya
                    same
                    


6.string concatination; strcat()

i concatinates are joines with are first string with second string.
syntax:
           { strcat(first_string,second_string); }
   eg:
               
         
                   #include<stdio.h>
            #include<string.h>
           int main()
          {
                     char a[10],b[10];
                   printf("enter string 1 :");
                  gets(a);
                  printf("enter string 2:");
                strcat(a,b);
               printf("%s",a);
                return 0;
         }
      output:
                    enter string1:aditya
                    enter string 2:college
                     aditya 
                    


