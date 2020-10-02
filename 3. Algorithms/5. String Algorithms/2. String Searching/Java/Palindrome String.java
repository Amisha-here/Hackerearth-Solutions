/* Problem link: https://www.hackerearth.com/practice/algorithms/string-algorithm/string-searching/practice-problems/algorithm/palindrome-string-22/description/  
*/

import java.util.*;
 
public class TestClass {
    static boolean isPalindrome(String a)
    {
        int i=0,j=a.length()-1;
        while(i<a.length() && j>=0)
        {
            if(a.charAt(i)==a.charAt(j))
            {
           i++;
           j--;
            }
            else 
            return false;
        }
        return true;
    }
    public static void main(String args[] ) throws Exception {
       Scanner s=new Scanner(System.in);
       String a=s.next();
       if(isPalindrome(a))
       System.out.println("Palindrome");
       else
        System.out.println("Not Palindrome");
 
    }
}
