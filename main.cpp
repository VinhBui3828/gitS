#include<iostream>
#include<cmath>
#include<iomanip>


using namespace std;

//1+2+3+4+5+10+9    -exercise
//9-ShortDown not work i really dont know the reason why?
int maxElement(const int * array, size_t n){

      // check the element of array - conditional this is element not 0!

      int  max = array[0];      // max of the array = index[0]

      int index;

      for(size_t i = 1; i < n ; i++){

        if(max < array[i]){
            max = array[i];
          }
      }
      return max;
 }

int minElement(const int * array, size_t n){

  int min = array[0];     //min of the array = index[0] - the first one element

  for(int i = 0; i<n; i++){

    if(min > array[i])
{
        min = array[i];
        

}  }
    return min;


}

//=====================================================================================

int Index_elementmax(int n, int array[]){

      int max = array[0];

      int index;

      for(int i = 0; i < n; i++){
        if(array[i] >= max){
          max = array[i];      // the situation index of max
      index = i;
    }
  }

  //như vậy đến cuối vòng lặp ta sẽ được index là vị trí của phần tử lớn nhất
  return index;
}

//=====================================================================================

int Index_elementmin(int n, int array[]){

      int min = array[0];

      int index;

      for(int i = 0; i < n; i++){
        if(array[i] <= min){
          min = array[i];      // the situation index of max
      index = i;
    }
  }

  //như vậy đến cuối vòng lặp ta sẽ được index là vị trí của phần tử lớn nhất
  return index;
}

//=====================================================================================

void swap(int max, int min){

  int temp;
  temp = max;
  max = min;
  min = temp;

    cout<<"Value of the max(after swap)->min:"<<max<<endl;
    cout<<"Value of the min(after swap)->max:"<<min<<endl;
}


/*                  
        int temp;
        temp = indexA;
        indexA = indexB;
        indexB = temp;*/




//the funtion calculates the number of the element equal to 0(zezo) and display it on the console screens


    int Count_isX(int array[],int n, int x)
{
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		
			if(array[i] == x)
			{
				count+=1;
			
		}
	}
	return count;
}


//=====================================================================================

int Count_lesserY(int array[],int n, int y)
{
	int count_y = 0;
	for(int i = 0; i < n; i++)
	{
		
			if(array[i] < y)
			{
				count_y+=1;
        cout<<setw(22)<<"array["<<i<< "] =" <<setw(2)<<array[i] << endl;
    
		}
	}
	return count_y;
}


//=====================================================================================

float a, b, c;
float D;
float x1, x2;



void Solve_quadrati (float a, float b, float c){  //ax^2+bx+c = 0

  
  if(a ==0 ){

    cout<<"Quadratic has type bx+c = 0"<<endl;

    if(b == 0 && c == 0){
      cout<<"Eqution has a lot of roots"<<endl;

    }
  }
  else{

    
    int D = b*b-4*a*c;
    cout<<"Delta is:"<<D<<endl;
    if(D > 0){

      x1 = (-b-sqrt(D))/(2*a);
      x2 =  (-b+sqrt(D))/(2*a);
      cout<<"Quadratic has 2 roots different"<<setw(10)<<x1<< "  "<<setw(10)<<x2<< " " <<endl;
    }

    if(D == 0){

      x1 = x2 = (-b/(2*a));

      cout<<"Quadratic has the 2 same  roots x1 = x2"<<setw(10)<<x1<<endl;

    }

    if(D < 0){
      cout<<"Quadratic doesnt has any root"<<endl;
    }
  }
} 

//=====================================================================================

void SortUp(int array[], int n){
    int Mid;
    

    for(int i=0;i<4;i++){
        for(int j=0;j<=i;j++){
            if(array[j] > array[i]){
                Mid = array[i];
                array[i] = array[j];
                array[j] = Mid;
            }
            
        }
            
    }
        for( int i = 0; i < n ; i++){
            cout<<setw(22)<<"array["<<i<< "] =" <<setw(2)<<array[i] << endl;

            
            
         }
    
}


//=====================================================================================

void SortDown(int array[], int n){
    

   
    for(int i=6; i>6; i++){
        for(int j=6;j<=i;j++){
            if(array[j] < array[i]){
                int Mid = array[i];
                array[i] = array[j];
                array[j] = Mid;
            }
            
            
        }

    }
       for( int i = 0; i < n ; i++){
            cout<<setw(22)<<"array["<<i<< "] =" <<setw(2)<<array[i] << endl;

            
            
         }
    
    
}


int main(){

     int n;
     int i;
     int x;
     int y;


     float a, b, c;
     float D;
     float x1, x2;
    cout<<"Enter value of a:"<<a<<endl;
    cin>>a;

    cout<<"Enter value of b:"<<b<<endl;
    cin>>b;

    cout<<"Enter value if c:"<<c<<endl;
    cin>>c;


     Solve_quadrati (a, b, c);






     cout<<"Please enter number random size of the arrays:"<<n<<endl;
     cin>>n;

     int array[n];


     cout<<"Array input:\t"<<endl;

     for(int i = 0; i < n; i++){

            cout<<setw(10)<<"i---------"<<setw(2)<<i<<setw(10)<<"array["<<i<<"]=";
            cin>>array[i];

            
     }

      cout<<"Array output:\t"<<endl;

      for( int i = 0; i < n ; i++){
            cout<<setw(22)<<"array["<<i<< "] =" <<setw(2)<<array[i] << endl;

            
            
         }


        cout<<"Enter x:"<<x<<endl;
        cin>>x;
        int count = Count_isX( array, n, x);
        cout<<"Number of times x appears is:"<<count<<endl;

          

//the funtion calculates the number of the element equal to 0(zezo) and display it on the console screens
      
      
      



         // max of the array

        int max = maxElement(array, n);

        cout<< "max :" <<max<<endl;

        
        //main of the value

        int min = minElement(array, n);

        cout<<"min:"<<min<<endl;

        cout<<"the situation of max of the array is:\t"<<Index_elementmax(n,array)<<endl;

        cout<<"the situation of min of the array is:\t"<<Index_elementmin(n,array)<<endl;
        
        

        swap(max, min);


        cout<<"Enter value of y:"<<y<<endl;
        cin>>y;


        
       int count_y = Count_lesserY( array, n, y);
       cout<<setw(10)<<"count_y, numbers of the equal element of the array smaller than y is:"<<setw(2)<< count_y<<endl;
       


      cout<<"The array behind sort up is:"<<endl;
       SortUp(array, n);
       
      cout<<"The array behind sort down is:"<<endl;
      SortDown(array, n);



return 0;

}
        


//18. The program finds the minimum value of the largest elements for each row and displays the array on the screen.





  