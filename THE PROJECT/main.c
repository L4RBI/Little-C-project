#include <stdio.h>
#include <conio.h>
void permu( int *a , int *b)
{
    int c;
    c=a;a=b;b=a;
}
void selection(int *t, int taille)
{
     int i, mini, j, x;

     for (i = 0; i < taille - 1; i++)
     {
         mini = i;
         for (j = i + 1; j < taille; j++)
              if (t[j] < t[mini])
                  mini = j;
          x = t[i];
          t[i] = t[mini];
          t[mini] = x;
     }
}
void inv( int *t, int N )
{
    int i,z=0,j;
     for(i=N-1;i>=(N/2);i--)
     {
        j=t[z];
        t[z]=t[i];
        t[i]=j;
        z=z+1;
     }
}
 void veriftrie(int *t,int n)
{
     int i=0,b=0,z=0;
     while(b==0 && i<n){if(t[i]<=t[i+1]){i++;}else{b=1;}}
     i=n-1;
     while(z==0 && i<n){if(t[i]>=t[i+1]){i++;}else{z=1;}}
     if(b==0||z==0){printf("The tab is in order.");}else {printf("the tab is Not in order.");}
}
void dab( int *t, int *N)
 {
     int i,j;
     for(i=0;i<*N;i++)if(t[i]==0){for(j=i;j<*N-1;j++){t[j]=t[j+1];}*N=*N-1;i--;}
 }
void som(int *t, int *v, int *d , int n ,int n2)
{
    int i,min,z=0;
    if(n<n2){min=n;z=1;}else{min=n2;z=2;};
    for(i=0;i<min;i++){
    d[i]=t[i]+v[i];}
    if(z==1){for(i=min;i<n2;i++){d[i]=v[i];}}
    if(z==2){for(i=min;i<n;i++){d[i]=t[i];}}
}
void tab(int *t,int n)
 {
     int i;
     for(i=0;i<n;i++)scanf("%d",&t[i]);
     for(i=0;i<n;i++)printf("%d ",t[i]);
 }
void tab2(int *t,int n)
 {
     int i;
     for(i=0;i<n;i++)printf("%d ",t[i]);
 }

 main()
 {
   int prog,prog2,A,B,re;
   printf(" HELLO,");
   printf("Welcome to our little project, a project where i placed a bunch of\nprograms we did our selves that you will be able to Use and execute as u wish.\n");
   printf("But First !! What color would You like to have !!\nThe list of colors : \n [0] the classic colors B&W.\n [1]The blue font and White back ground. \n [2]The green font and Black background.\n [3]the red font and grey Background  \n [4]The green font and grey Background . \n");
   do{printf("Your choice:"); do{scanf("%d",&A);}while(A<0 || A>4);
   switch(A)
   {
      case 0: break;
      case 1:{system("COLOR F9");break;}
      case 2:{system("COLOR 2");break;}
      case 3:{system("COLOR 7C");break;}
      case 4:{system("COLOR F3");break;}
   }
   printf("If You did not like the color and You want to change It press 1 If Not Press 0 : ");scanf("%d",&B);}while(B==1);
   system("cls");
  do{printf("The list of choices:\n");
   printf(" [1]tabs  \n [2]matrices  \n");
   printf("With which one of the above you would Like to work with: ");do{scanf("%d",&prog);}while(prog!=1 && prog!=2);
   switch(prog)
   {
       case 1:
       {
           printf(" [1]the sum of two tabs. \n [2]search for a value in a tab. \n [3]the inversion of a table. \n [4]Deliting the Zeors from a tab.  \n [5]Cheking if a tab is in order.\n [6] re-ordering a tab. \n");
           printf("please enter the number of the program you would like to execute : ");do{scanf("%d",&prog2);}while(prog2<1 || prog2>6);
           switch(prog2)
           {
           case 1:
           {
               int t[100],t1[100],t2[100],n,max,n1,i;
               printf("\n");system("cls");printf("\n");
               printf("you choosed The [%d] program. \n",prog2);
               do{printf("pleas enter the size u would like to have: ");scanf("%d",&n);}while(n>100 || n<=0);
               printf("\nenter the Information you would like to save in the first tab:\n");
               tab(t,n);
               do{printf("\npleas enter the size you would like to have In the second tab: ");scanf("%d",&n1);}while(n1>100 || n1<=0);
               printf("\nenter the Information you would like to save in the second tab:\n");
               tab(t1,n1);
               system("cls");printf("\n");
               printf("The first tab: ");tab2(t,n);printf("\n");
               printf("The second tab: ");tab2(t1,n1);
               printf("\nthe som of the two tabs:\n");
               som(t,t1,t2,n,n1);
               if(n>n1){max=n;}else{max=n1;}
               tab2(t2,max);
               printf("\n\n");break;}
           case 2:
           {
               system("cls");
               int t[100],n,var,i,z=0;
               printf("you choosed The [%d] program.\n",prog2);
               do{printf("pleas enter the size you would like to have:\n");scanf("%d",&n);}while(n>100 || n<=0);
               printf("enter the Information in the tab plz:\n");
               tab(t,n);system("cls");printf("\n");printf("\nthe tab u saved: ");tab2(t,n);printf("\n");
               printf("which information you would Like to look For:\n");scanf("%d",&var);
                for(i=0;i<n;i++){
               if(t[i]==var){if(z==0){printf("the information is saved in:\n");z=z+1;}printf("case: %d\n",i+1);}}
               if(z==0)printf("the information was not saved.\n");printf("\n");
               break;}
           case 3:
            {
               system("cls");
               printf("you choosed The [%d] program. \n",prog2);
               int t[100],i,n;
               do{printf("pleas enter the size you would like to have:\n");scanf("%d",&n);}while(n>100 || n<=0);
               printf("Enter the information you would like to save: ");
               tab(t,n);printf("\n");system("cls");printf("\nthe tab you saved: ");tab2(t,n);
               inv(t,n);printf("\n");
               printf("\nthe finalt stage of the tab:");
               tab2(t,n);printf("\n");break;}
           case 4:
            {
                system("cls");
                printf("you choosed The [%d] program. \n",prog2);
                int t[100],i,n;
                do{printf("pleas enter the The size you would like to have:\n");scanf("%d",&n);}while(n>100 || n<=0);
                printf("\nenter the Information you would like to save in the tab:\n");
                tab(t,n);printf("\n");printf("\n");system("cls");tab2(t,n);
                dab(t,&n);printf("\n");
                printf("\nThe final stage of the tab: ");
                tab2(t,n);printf("\n");break;}
            case 5:
            {
                system("cls");
                printf("you choosed The [%d] program. \n",prog2);
                int t[100],i,n;
                do{printf("pleas enter the size ypu would like to have:\n");scanf("%d",&n);}while(n>100 || n<=0);
                printf("\nenter the Information you would like to save in the tab:\n");
                tab(t,n);printf("\n");system("cls");tab2(t,n);
                veriftrie(t,n);printf("\n");
                break;}
            case 6:
             {
                 int t[100],i,j,n;
                 do{printf("pleas enter the size you would like to have:\n");scanf("%d",&n);}while(n>100 || n<=0);
                 printf("\nenter the Information you would like to save in the tab:\n");
                 tab(t,n);system("cls");printf("\nThe Tab: ");tab2(t,n);printf("\n");
                 selection(t,n);
                 printf("the final state of the tab: ");printf("\n");
                 tab2(t,n);break;}}break;}
             case 2:
                {
                     system("cls");
                     printf(" [1]The product of two matrices. \n [2]Max And Min in a matrice. \n [3]Switching Columns in a matrice .");
                     do{scanf("%d",&prog2);}while(prog2<1 || prog2>3);
                     switch(prog2){
                     case 1:{
                     printf("you choosed The [%d] program. \n",prog2);
                     int A[50][50];
                     int B[50][50];
                     int C[50][50];
                     int N, M, P;
                     int I, J, K;
                     printf("****matriceA****");
                     do{printf("The Nomber Of rows: ");
                     scanf("%d", &N );}while(N<=0 || N>=50);
                     do{printf("The Numberof columns: ");
                     scanf("%d", &M );}while(M<=0 || M>=50);
                     for (I=0; I<N; I++)
                     for (J=0; J<M; J++){
                      printf("Element[%d][%d]: ",I,J);
                      scanf("%d", &A[I][J]);}
                      printf("*** Matrice B ***\n");
                      printf("the Nomber of rows %d\n",M);
                      do{printf("Nombre de columns: ");
                      scanf("%d", &P );}while(P<=0 || P>=50);
                      for (I=0; I<M; I++)
                      for (J=0; J<P; J++){
                       printf("Element[%d][%d] : ",I,J);
                       scanf("%d", &B[I][J]);}system("cls");
                       printf("Matrice A :\n");
                       for (I=0; I<N; I++){
                       for (J=0; J<M; J++)
                       {printf("%7d", A[I][J]);}
                       printf("\n");}
                       printf("Matrice B :\n");
                       for (I=0; I<M; I++){
                       for (J=0; J<P; J++)
                       {printf("%7d", B[I][J]);}
                       printf("\n");
                       }
                       for (I=0; I<N; I++)
                       for (J=0; J<P; J++)
                       {
                        C[I][J]=0;
                        for (K=0; K<M; K++)
                        C[I][J]= C[I][J] + A[I][K]*B[K][J];}
                        printf("The Product AxB:\n");
                        for (I=0; I<N; I++){
                        for (J=0; J<P; J++)
                         printf("%7d", C[I][J]);
                         printf("\n");}break;}
                   case 2:
                    {
                    system("cls");
                    printf("you choosed The [%d] program. \n",prog2);
                    int moh[100][100],i,j=0,M,N,max,min;
                    printf("donner le nombre de ligne : ");scanf("%d",&N);printf("donner le nombre de cologne : ");scanf("%d",&M);
                    for(i=0;i<N;i++)
                    {
                    printf("la ligne %d : \n",i+1);
                    for(j=0;j<M;j++)
                    {scanf("%d",&moh[i][j]);}}
                    printf("\n");
                    for(i=0;i<N;i++){
                    for(j=0;j<M;j++){
                    printf("%d ",moh[i][j]);
                    }printf("\n");}
                    max=moh[0][0];min=max;
                    for(i=0;i<N;i++)
                    {for(j=0;j<M;j++){
                    if(moh[i][j]>max)max=moh[i][j];
                    if(moh[i][j]<min)min=moh[i][j];}}
                    printf("le max : %d \n",max);
                    printf("le min : %d \n",min);
                    break;}
                   case 3:
                    {
                    system("cls");
                    printf("you choosed The [%d] program. \n",prog2);
                    int moh[100][100],i,j=0,M,N,max,min,a,L1,L2,d;
                    printf("The Number of rows: ");scanf("%d",&N);printf("The number of column: ");scanf("%d",&M);
                    for(i=0;i<N;i++){
                    for(j=0;j<M;j++){
                    printf("[%d][%d]:",i,j);
                    scanf("%d",&moh[i][j]);
                    printf("\n");}}system("cls");
                    printf("\n");
                    for(i=0;i<N;i++)
                    {for(j=0;j<M;j++){
                    printf("%d ",moh[i][j]);}
                    printf("\n");}
                    do {printf("Which columns you would Like to switch: \n");scanf("%d",&L1);scanf("%d",&L2);
                    if(L1-1<M && L2-1<M){
                    for(i=0;i<N;i++){
                    a=moh[i][L1-1];
                    moh[i][L1-1]=moh[i][L2-1];
                    moh[i][L2-1]=a;}}
                    else{ printf("erreur . \n");}
                    printf("The new matrice: \n");
                    for(i=0;i<N;i++){
                    for(j=0;j<M;j++){
                    printf("%d ",moh[i][j]);}
                    printf("\n");}
                    printf("If You want to re switch other columns enter 1: ");scanf("%d",&d);
                    }while(d==1);
                    printf("\n");
                    for(i=0;i<N;i++){
                    for(j=0;j<M;j++){
                    printf("%d ",moh[i][j]);}
                    printf("\n");}break;}

                }break;}}
   printf("\n");
   printf("If U want to Re-Execute The Program enter 1 If Not enter 0:");scanf("%d",&re);}while(re==1);

    }
