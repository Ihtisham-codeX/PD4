#include<iostream>
#include<string>
using namespace std;
void menu();
void aggregate(float inter, float matric, float ecat);
void comparison(string name1,int ecat1,  string name2, int ecat2 );

 main()
{        // displaying menu

         menu();
         cout<<""<<endl;

         // data for student 1
         
         float inter1,matric1,ecat1;
         string name1;
         cout<<"Enter Name Of Stduent1:"; 
         cin>> name1 ;
         cout<<"Enter Marks In Inter Part 1 Of Stduent1:";
         cin>> inter1;
         cout<<"Enter Marks In Matric Of Stduent1:";
         cin>> matric1;
         cout<<"Enter Marks In Ecat Of Stduent1:";
         cin>> ecat1;
         cout<<"For   " << name1 ;
         cout<<"" << endl;
         aggregate(inter1, matric1, ecat1);
         
         // data for student 2 
           cout<<"  "<<endl;

         float inter2,matric2,ecat2,aggregate2;
         string name2;
         cout<<"Enter Name Of Stduent2:"; 
         cin>> name2 ;
         cout<<"Enter Marks In Inter Part 1 Of Stduent2:";
         cin>> inter2;
         cout<<"Enter Marks In Matric Of Stduent2:";
         cin>> matric2;
         cout<<"Enter Marks In Ecat Of Stduent2:";
         cin>> ecat2;
         cout<<"For     " << name2 ;
         cout<<"  "<<endl;
         aggregate(inter2, matric2, ecat2);
         

        // now doing comparison on the bases os ecat marks
          cout<<"  "<<endl;

         comparison(name1,ecat1,  name2,  ecat2  );

          
          


}
void menu()
{  
        cout<<" #    # ##    # ##### #        # ###### ####.  ##### ##### ####### #     #      .###. ####.  ##   ##  ##### ##### ##### # ##### ##    #    "<<endl;
        cout<<" #    # # #   #   #    #      #  #      #    # #       #      #     #   #       #   # #    # # # # #    #   #     #     # #   # # #   #    "<<endl;
        cout<<" #    # #  #  #   #     #    #   ####   ###### #####   #      #      ###        ##### #    # #  ## #    #   ##### ##### # #   # #  #  #    "<<endl;
        cout<<" #    # #   # #   #      #  #    #      #  #       #   #      #       #         #   # #    # #     #    #       #     # # #   # #   # #    "<<endl;
        cout<<" ###### #    ## #####     ##     ###### #   #  ##### #####    #       #         #   # ####.  #     #  ##### ##### ##### # ##### #    ##    "<<endl;
        cout<<"                                                                                                                                           "<<endl;        
        cout<<"                                                                                                                                           "<<endl;    
        cout<<"                                                                                                                                           "<<endl;    
        cout<<"     ##    ##  .###. ##    #  .###. #####   ######  ##   ## ###### ##    # ########      ##### #     # #####  ####### ###### ##   ##       "<<endl;
        cout<<"     # #  # #  #   # # #   #  #   # #       #       # # # # #      # #   #    #          #      #   #  #         #    #      # # # #       "<<endl;
        cout<<"     #  ##  #  ##### #  #  #  ##### #  ###  ####    #  ## # ####   #  #  #    #          #####   ###   #####     #    ####   # ##  #       "<<endl;
        cout<<"     #      #  #   # #   # #  #   # #    #  #       #     # #      #   # #    #              #    #        #     #    #      #     #       "<<endl;
        cout<<"     #      #  #   # #    ##  #   # ######  ######  #     # ###### #    ##    #          #####    #    #####     #    ###### #     #       "<<endl;
 
}
 
void aggregate(float inter, float matric, float ecat)
{
         float i,m,e,aggregate;
         i=((inter/560)*40);
         m=((matric/1100)*10);
         e=((ecat/400)*50);
         aggregate= i + m + e;
         cout<< "The aggregate is"<< aggregate;
         
}
void comparison(string name1,int ecat1,  string name2, int ecat2  )
{
        if(ecat1 > ecat2)  
         {  cout<<"  "<<endl;

         cout<<"\t ROLL NO.        NAME     ECAT   "<<endl;
         cout<<"\t ROLL NO. 1"<< " \t "<< name1 << " \t "<< ecat1 ;
         cout<<"  "<<endl;
         cout<<"\t ROLL NO. 2"<< " \t "<< name2 << " \t "<< ecat2 ; 
         }
         if(ecat2 > ecat1)  
         {
         cout<<"\t ROLL NO.        NAME     ECAT   "<<endl;
         cout<<"\t ROLL NO. 1"<< " \t "<< name2 << " \t "<< ecat2 ;
         cout<<"  "<<endl;
         cout<<"\t ROLL NO. 2"<< " \t "<< name1 << " \t "<< ecat1 ;
         }
         if(ecat1==ecat2)
         {
         cout<<"Both are having same marks";
         }
    
}










