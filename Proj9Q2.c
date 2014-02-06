int main(){

  int month, days;
	
  printf("Enter a number 1 to 12 for a month: ");

  scanf("%i", &month);


  if(month==1|| month==3 || month==7 || month==12 || month==10)
    days = 31;

  else if(month ==2) 
    days = 28;

   else if(month==8)
    days = 29;

  else if(month==4 || month==5 ||month==6 || month==9 || month==11)
    days = 30;

  else
  printf("Wrong month number %i\n", month); 
    exit(0);
    
    
  printf("There are %i days in month %i\n", days, month);
  

  system("Pause");
}
