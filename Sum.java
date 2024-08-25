import java.util.*;
class Sum{
public static void main (String[] args){


int a,sum=0;

System.out.println("enter numbers_ enter -1 to break");
Scanner sc = new Scanner(System.in);
while(true){
a = sc.nextInt();
if(a==-1)
break;
sum=sum+a;
}//while
System.out.println("sum="+sum);
}}