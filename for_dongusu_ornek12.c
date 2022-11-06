#include <stdio.h>
// İngiliz Alfabesi 26 Harftir
// Alfabeyi düz ve tersten yazdır

int main() 

{
 
 char harf; // ASCII tablosunda A: 65  Z: 90  a: 97  z:122
 
 for(harf = 'A' ; harf <= 'Z' ; harf++)
 {
  printf("%c ",harf);
 }
// A B C D E F G H I J K L M N O P Q R S T U V W X Y Z 
  printf("\n");
  
  
 for(harf = 'Z' ; harf >= 'A' ; harf--)
 {
  printf("%c ",harf);  
 }
// Z Y X W V U T S R Q P O N M L K J I H G F E D C B A  
  printf("\n");
  
 
 for(harf = 'a' ; harf <= 'z' ; harf++)
 {
  printf("%c ",harf);  
 } 
 // a b c d e f g h i j k l m n o p q r s t u v w x y z  
  printf("\n");
  
    
 for(harf = 'z' ; harf >= 'a' ; harf--)
 {
  printf("%c ",harf);    
 }
 // z y x w v u t s r q p o n m l k j i h g f e d c b a   
 
  return 0;

}