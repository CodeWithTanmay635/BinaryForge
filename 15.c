#include<stdio.h>
int main(){
  int age;
  long int pn;
  char add[50];
  char name[50];
  char dish[30];
  char anime[40];
  char movie[20];
  char city[30];
  char fuct[50];
  char goal[60];
  printf("\n\n\n\t\t\t\t\t\t\t\tTANMAY\n");
  
  printf("Enter Your Name :");
  scanf("%s",name);
  printf("\nEnter Your Age :");
  scanf("%d", &age);
  printf("\nEnter your Phone Number :");
  scanf("%ld",&pn);
  printf("\nEnter Your Address :");
  scanf("%s",add);
  printf("\nEnter Your City Name :");
  scanf("%s",city);
  printf("\nWhere Do You Would Like To Live In Future :");
  scanf("%s",fuct);
  printf("\nEnter your Favourite Dish :");
  scanf("%s",dish);
  printf("\nEnter The Name Of Anime Which You Like Most :");
  scanf("%s",anime);
  printf("\nEnter The Name Of Movie Which You Like Most :");
  scanf("%s",movie);
  printf("\nWhats Your Goal What Do You Wnat to Achive :");
  scanf("%s",goal);
  printf("\n\n\n\n\n\n\nSo Your Name Is %s And You Are %d Years Old And This Is Your Phone Number %ld Your Address Is %s And You live In %s A nice city full kind people And your Want To be In %s In Future Thats Great Choice And So You Like %s Dish It's Dilecious You Enjoy Watching Anime And you like %s Anime What An Incredable choice And you Also Watch %s Movie So You Wanna Become %s So you need To work Harder For Achiving It And Best Fo Luck For Your Achiving Your Gola You Are Guy Full Of Fun & joy That Was An great Experience For Having Your Data So Bye\n\n ",name,age,pn,add,city,fuct,dish,anime,movie,goal);

return 0;
}