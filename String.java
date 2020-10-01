/*
Problem link : https://www.hackerearth.com/practice/algorithms/string-algorithm/string-searching/practice-problems/algorithm/string-4-d1093b86/description/
*/


import java.util.*;
 
class TestClass {
    public static void main(String args[] ) throws Exception {
       Scanner s=new Scanner(System.in);
       int t=s.nextInt();
       
           String a=s.next();
           int []a1=new int[26];
           for(int i=0;i<a.length();i++)
           {
               int in=a.charAt(i)-'a';
               a1[in]++;
           }
           int max=-1;
           int in=0;
           for(int i=0;i<26;i++)
           {
               if(a1[i]>max)
               {
                in=i;
              max=a1[i];
               }
 
           }
           int sa=in+97;
           int c=0;
           for(int i=0;i<a.length();i++)
           {
            if(a.charAt(i)!=(char)(sa))
            c++;
           }
           System.out.println(c); 
    }
}
