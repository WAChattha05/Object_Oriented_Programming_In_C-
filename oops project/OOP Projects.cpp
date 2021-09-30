#include <iostream>
using namespace std;

// class declaration
class input{
	
  	public: // Access specifier
        float i;// Attribute (int variable)

	};

	//  Multiple Inheritance of weight class by input class in public mode
    class length : public input{
 	
   		public:// Access specifier
   		   	// functions for LENGTH
       		void mm_m();
       		void m_mm();
       		void cm_m();
       		void m_cm();
       		void cm_km();
       		void km_cm();
       		void m_mile();
       		void mile_m();
       		void km_mile();
       		void mile_km();
       		void feet_m();
       		void m_feet();
       		void inch_m();
       		void m_inch();
       		void yard_m();
       		void m_yard();
      };
      
    // Multiple Inheritance of weight class by input class in public mode
    class weight : public input{
    	public:// Access specifier    		
    		// functions for WEIGHT	
       		void milligm_gm();
       		void gm_milligm();
       		void gm_kg();
       		void kg_gm();
       		void kg_mton();
       		void mton_kg();
       		void pound_kg();
       		void kg_pound();
       		void gm_pound();
       		void pound_gm();
    };

	//  Multiple Inheritance of weight class by input class in public mode
    class vol : public input{    	
   		public:// Access specifier
		   	// functions for VOLUME
       		void mL_L();
       		void L_mL();
       		void mmQ_cmQ();
       		void cmQ_mmQ();
       		void cmQ_mQ ();
       		void mQ_cmQ ();
       		void inchQ_mQ();
       		void mQ_inchQ();
       		void feetQ_mQ();
       		void mQ_feetQ();
       		void mQ_gallon();
       		void gallon_mQ();
       		void L_gallon();
       		void gallon_L();

   };

	// Multiple Inheritance of weight class by input class in public mode 
    class area : public input{
   		public: // Access specifier
   			// functions for AREA
       		void mmSq_cmSq();
       		void cmSq_mmSq();
       		void cmSq_mSq ();
       		void mSq_cmSq ();
       		void mSq_kmSq ();
       		void kmSq_mSq ();
       		void feetSq_mSq();
       		void mSq_feetSq();
       		void yardSq_mSq();
       		void mSq_yardSq();
       		void mileSq_kmSq();
       		void kmSq_mileSq();
       		void acre_kmSq();
       		void kmSq_acre();
       		void acre_hect();
       		void hect_acre();
        };

	// Multiple  Inheritance
    class temp : public input{
 		public:// Access specifier	
 			// functions for TEMPERATURE
       		void cel_f();
       		void f_cel();
       		void cel_k();
       		void k_cel();
       		void f_k();
       		void k_f();

  };
 		
		// Area class functions
    	void area :: mmSq_cmSq(){
        	cout << "\t   squqre mm : " ;
				cin >> i ; 
        	cout << "\t   square cm : " << i * 0.01 << endl ;
        	}
    	void area :: cmSq_mmSq(){
        	cout << "\t   square cm : " ;
				cin >> i ;
        	cout << "\t   square mm : " << i * 100.00 << endl ;
       		}
    	void area :: cmSq_mSq(){
        	cout << "\t   square cm : " ;
				cin >> i ;
        	cout << "\t   square m : " << i * 0.0001 << endl ;
        	}
    	void area :: mSq_cmSq(){
        	cout << "\t   square m : " ; 
				cin >> i ;
        	cout << "\t   square cm : " << i * 10000.00 << endl ;
        	}
    	void area :: mSq_kmSq(){
        	cout << "\t   square m : " ; 
				cin >> i ;
        	cout << "\t   square km : " << i * 0.000001 << endl ;
        	}
    	void area :: kmSq_mSq(){
        	cout << "\t   square km : " ;
				cin >> i ;
        	cout << "\t   square m : " << i * 1000000.00 << endl ;
        	}
    	void area :: feetSq_mSq(){
      		cout << "\t   square feet : " ;
			  	cin >> i ;
      		cout << "\t   square m : " << i * 0.0929 << endl ;
      		}
    	void area :: mSq_feetSq(){
      		cout << "\t   square m : " ;  
			  	cin >> i ;
      		cout << "\t   square feet : " << i * 10.76391 << endl ;
      		}
    	void area :: yardSq_mSq(){
      		cout << "\t   square yard : " ;
			  	cin >> i ;
      		cout << "\t   square m : " << i * 0.83613 << endl ;
      		}
     	void area :: mSq_yardSq(){
        	cout << "\t   square m : " ; 
				cin >> i ;
        	cout << "\t   square yard : " << i * 1.19599 << endl ;
       		}
     	void area :: mileSq_kmSq(){
        	cout << "\t   square mile : " ;
				cin >> i ;
        	cout << "\t   square km : " << i * 2.5899 << endl ;
        	}
     	void area :: kmSq_mileSq(){
         	cout << "\t   square km : " ;
			 	cin >> i ;
          	cout << "\t   square mile : " << i * 0.3861 << endl ;
        	}
     	void area :: acre_hect(){
        	cout << "\t   Acre : " ;
			   cin >> i ;
        	cout << "\t   Hector : " << i * 0.40469 << endl ;
        	}
     	void area :: hect_acre(){
        	cout << "\t   Hector : " ;
				cin >> i ;
        	cout << "\t   Acre : " << i * 2.47105 << endl ;
        	}
      	void area :: acre_kmSq(){
		  	cout << "\t   Acre : " ;
			  	cin >> i ;
         	cout << "\t   Square km : " << i * 0.00405 << endl ;
         	}
      	void area :: kmSq_acre(){
       		cout << "\t   Square km : " ;
			    cin >> i ;
       		cout << "\t   Acre : " << i * 247.10538 << endl ;
      		}
      		
      	// Volume class functions
     	void vol :: mL_L(){
         	cout << "\t   milli litre : " ;
			 	cin >> i ;
         	cout << "\t   Litre : " << i * 0.001 << endl ;
         	}
      	void vol :: L_mL(){
	        cout << "\t   Litre : " ; 
				cin >> i ;
         	cout << "\t   milli Litre : " << i * 1000.00 << endl ;
         	}
     	void vol :: cmQ_mmQ(){
          	cout << "\t   cubic cm : " ; 
			  	cin >> i ;
          	cout << "\t   cubic mm : " << i * 1000.00 << endl ;
          	}
    	void vol :: mmQ_cmQ(){
         	cout << "\t   cubic mm : " ;   
			 	cin >> i ;
         	cout << "\t   cubic cm : " << i * 0.001 << endl ;
         	}
     	void vol :: cmQ_mQ(){
        	cout << "\t   cubic cm : " ;  
				cin >> i ;
        	cout << "\t   cubic meter : " << i * 0.000001 << endl ;
        	}
     	void vol :: mQ_cmQ(){
        	cout << "\t   cubic meter : " ; 
				cin >> i ;
        	cout << "\n   cubic cm : " << i * 1000000.00 << endl ;
        	}
     	void vol :: inchQ_mQ(){
       		cout << "\t   cubic inch : " ;  
			   	cin >> i ;
       		cout << "\t   cubic meter : " << i * 0.00002 << endl ;
       		}
     	void vol :: mQ_inchQ(){
       		cout << "\t   cubic meter : " ; 
			   cin >> i ;
       		cout << "\t   cubic inch : " << i * 61023.74409 << endl ;
       		}
     	void vol :: feetQ_mQ(){
       		cout << "\t   cubic feet : " ; 
			   	cin >> i ;
       		cout << "\t   cubic meter : " << i * 1222.00 << endl ;
      		}
     	void vol :: mQ_feetQ(){
       		cout << "\t   cubic meter : " ;
			   	cin >> i ;
       		cout << "\t   cubic feet : " << i * 123.00 << endl ;
       		}
     	void vol :: mQ_gallon(){
       		cout << "\t   cubic meter : " ;
			   	cin >> i ;
       		cout << "\t   gallon : " << i * 264.17205 << endl ;
       		}
     	void vol :: gallon_mQ(){
       		cout << "\t   Gallon : " ; 
			   	cin >> i ;
       		cout << "\t   cubic meter : " << i * 0.00379 << endl ;
       		}
     	void vol :: L_gallon(){
        	cout << "\t   Litre : " ;
				cin >> i ;
        	cout << "\t   gallon : " << i * 0.21997 << endl ;
       		}
    	void vol :: gallon_L(){
        	cout << "\t   Gallon : " ; 
				cin >> i ;
        	cout << "\t   Litre : " << i * 4.54609 << endl ;
        	}
        		
    	// Weight class functions
    	void weight :: milligm_gm(){
        	cout << "\t   milligramm : " ;
				cin >> i ;
        	cout << "\t   gramm : " << i * 0.001 << endl ;
        	}
    	void weight :: gm_milligm(){
        	cout << "\t   gram : " ; 
				cin >> i ;
        	cout << "\t   milligram : " << i * 1000.00 << endl ;
        	}
    	void weight :: pound_kg(){
       		cout << "\t   pound : " ;  
				cin >> i ; 
       		cout << "\t   kilogram : " << i * 0.45359 << endl ;
       		}
     	void weight :: gm_kg(){ 
		 	cout << "\t   Gram : " ;
			 	cin >> i ;
         	cout << "\t   killogram : " << i * 0.001 << endl ;
         	}
    	void weight :: kg_gm(){
		    cout << "\t   killogram : " ;
				cin >> i ;
        	cout << "\t   Gram : " << i * 1000.00 << endl ;
        	}
    	void weight :: kg_pound(){
      		cout << "\t   kilogram : " ;
			  	cin >> i ;
      		cout << "\t   pound : " << 2.20462 * i << endl ;
      		}
    	void weight :: gm_pound(){
      		cout << "\t   gramm : " ;  
			  	cin >> i ;
      		cout << "\t   pound : " << i * 0.0022 << endl ;
      		}
    	void weight :: pound_gm(){
      		cout << "\t   pound : " ; 
			  	cin >> i ;
      		cout << "\t   gramm : " << i * 453.59237 << endl ;
      		}
    	void weight :: kg_mton(){
      		cout << "\t   kilogramm : " ;
			  	cin >> i ;
      		cout << "\t   matric ton : " << i * 0.001 << endl ;
       		}
    	void weight :: mton_kg(){
     		cout << "\t   metric ton : " ; 
			 	cin >> i ;
     		cout << "\t   kilogramm : " << i * 1000.00 << endl ;
      		}
  
  		// Lenght class functions
    	void length :: mm_m(){
        	cout << "\t   Millimeter : ";
          		cin >> i;
        	cout << "\t   Meter : " << i * 0.001 << endl;
          	}
     	void length :: m_mm(){
         	cout << "\t   meter : ";
         		cin >> i;
         	cout << "\t   millimeter : " << i * 1000.00 << endl;
         	}
     	void length :: cm_m(){
          	cout << "\t   Centimeter : ";
          		cin >> i;
          	cout << "\t   Meter : " << i * 0.01 << endl;
          	}
    	void length :: m_cm(){
         	cout << "\t   meter : " ;
         		cin >> i ;
         	cout << "\t   cm : " << i * 100.00 << endl ;
         	}
    	void length :: m_mile(){
         	cout << "\t   meter : " ;
         		cin >> i ;
         	cout << "\t   mile : " << i * 0.00062 << endl ;
         	}
    	void length :: mile_m(){
        	cout << "\t   mile : " ;
        		cin >> i ;
        	cout << "\t   meter : " << i * 1609.344 << endl ;
        	}
     	void length :: cm_km(){
         	cout << "\t   cm : " ;
         		cin>>i;
         	cout << "\t   km : " << i * 0.00001 << endl ;
			}
    	void length :: km_cm(){
		    cout << "\t   km : " ;
           		cin >> i ;
            cout << "\t   cm : " << i * 100000.00 << endl ;
        	}
    	void length :: feet_m(){
        	cout << "\t   feet : " ;
        		cin >> i ;
        	cout << "\t   meter : " << i * 0.3048 << endl ;
        	}
    	void length :: m_feet(){
        	cout << "\t   meter : " ;
        		cin >> i ;
        	cout << "\t   feet : " << i * 3.28084 << endl ;
        	}
    	void length :: yard_m(){
        	cout << "\t   yard : " ;
        		cin >> i ;
        	cout << "\t   meter : " << i * 0.9144 << endl ;
        	}
    	void length :: m_yard(){
        	cout << "\t   meter : " ;
        		cin >> i ;
        	cout << "\t   yard : " << i * 1.09361 << endl ;
        	}
    	void length :: inch_m(){
        	cout << "\t   inch : " ;
        		cin >> i ;
        	cout << "\t   meter : " << i * 0.0254 << endl ;
        	}
    	void length :: m_inch(){
        	cout << "\t   meter : " ;
        		cin >> i ;
        	cout << "\t   inch : " << i * 39.37008 << endl ;
        	}
    	void length :: km_mile(){
        	cout << "\t   kilometer : " ;
				cin >> i ;
        	cout << "\t   mile : " << i * 0.6213712 << endl ;
        	}
    	void length :: mile_km(){
        	cout << "\t   mile : " ; 
				cin >> i ; 
        	cout << "\t   kilometer : " << i * 1.60934 << endl ;
        	}
 
		// Temperature class functions
    	void temp :: cel_f(){
       		cout << "\t   Celsius : " ;
       			cin >> i ;
        	cout << "\t   Fahrenheit : "  << ((( 9*i )/5) + 32) << endl;
       		}
    	void temp :: f_cel(){
       		cout << "\t   Fahrenheit : " ;
				cin >> i ;
       		cout << "\t   Celsius : " << (( (i-32.00) / 9.00 ) * 5.00) << endl;
        	}
    	void temp :: cel_k(){
        	cout << "\t   celsius : " ;
				cin >> i ;
        	cout << "\t   kelvin : " << i + 273.00 << endl;
        	}
    	void temp :: k_cel(){
        	cout << "\t   kelvin : " ;  
				cin >> i ;
         	cout << "\t   celsius : " << i - 273.00 << endl ;
        	}

		// main function
    int main(){
    	
    	area a;		// Create an object of Area Class
    	vol v;		// Create an object of volume Class
    	weight w;	// Create an object of weight Class
    	length l;	// Create an object of length class
    	temp t;		// Create an object of Temperature Class
    int x,y; 		// Attribute (int variable)
    
    	while(true){		
    	cout << "\n\n\t\t>-----------Waleed Akram ----- 20P-0640 ----- BSCS 2B-----------<" << endl;
        cout << "\n\n\t\t\t\t\tWELCOME TO UNIT CONVERTER CALCULATOR\n" << endl;
        cout << "\n\n\t CONVERSION TYPE" << endl;
        cout << "\n\t  1: Area. " << endl;
		cout << "\t  2: Volume. " << endl;
		cout << "\t  3: Weight. " << endl;
		cout << "\t  4: Length. " << endl;
		cout << "\t  5: Temparature. " << endl;
		cout << "\t  6: Exit. " << endl;
        cout << "\n\n\tPlease choose your Convertion Type for AERA, VOLUME,WEIGHT, LENGHT, TEMPERATURE : " ;
        	cin >> x;
        
        if ( x==1 ){ 
        		// Unit conversion types for Area 
                cout << "\n\n\tChoose your unit convertion for AREA : " << endl ;
                cout << "\t   1: Square mm-Square cm. " << endl;
                cout << "\t   2: square cm-Square mm. " << endl;
                cout << "\t   3: square cm-square m. " << endl;
                cout << "\t   4: Square m-Square cm. " << endl;
                cout << "\t   5: Square m-Square km. " << endl;
                cout << "\t   6: Square km-Square m. " << endl;
                cout << "\t   7: Square feet-Square m. " << endl;
                cout << "\t   8: Square m-Square feet. " << endl;
                cout << "\t   9: Square Yard-Square m. " << endl;
                cout << "\t  10: Square m-Square yard. " << endl;
                cout << "\t  11: Square mile-Square km. " << endl;
                cout << "\t  12: Square km-Square mile. " << endl;
                cout << "\t  13: Acre-Hectare. " << endl;
                cout << "\t  14: Hectare-Acre. " << endl;
                cout << "\t  15: Square km-Acre. " << endl;
                cout << "\t  16: Acre-Square km. " << endl;
                cout << "\t  17: Back to The Main Menu. " << endl;

            while(true){
            	// choices for calling function by object
            	cout<<"\n\n\tPlease Enter Your Choice : ";
              		cin>>y;

                	if ( y==1 ){
						a.mmSq_cmSq();
							}
                		else if ( y==2 ){
							a.cmSq_mmSq();
							}
                		else if ( y==3 ){
							a.cmSq_mSq();
							}
                		else if ( y==4) {
							a.mSq_cmSq();
							}
                		else if ( y==5 ){
							a.mSq_kmSq();
							}
                		else if ( y==6 ){
							a.kmSq_mSq();
							}
                		else if ( y==7 ){
							a.feetSq_mSq();
							}
   		            	else if ( y==8 ){
							a.mSq_feetSq();
							}
    		            else if ( y==9 ){
							a.yardSq_mSq();
							}
                		else if ( y==10 ){
							a.mSq_yardSq();
							}
                		else if ( y==11 ){
							a.mileSq_kmSq();
							}
                		else if ( y==12 ){
							a.kmSq_mileSq();
							}
                		else if ( y==13 ){
							a.acre_hect();
							}
                		else if ( y==14 ){
							a.hect_acre();
							}
                		else if ( y==15 ){
							a.kmSq_acre();
							}
                		else if ( y==16 ){
							a.acre_kmSq();
							}
                		else if ( y==17 ){
								break;
							}
            		}
            }

		else if ( x==2 ){   		
				// Unit conversion types for Volume     
               	cout << "\n\n\tChoose your unit convertion for VOLUME : " << endl ;
               	cout << "\t   1 : ml-Litre. " << endl;
               	cout << "\t   2 : Litre-ml. " << endl;
               	cout << "\t   3 : Cubic mm-Cubic cm. " << endl;
               	cout << "\t   4 : Cubic cm-Cubic mm. " << endl;
               	cout << "\t   5 : Cubic cm-Cubic m. " << endl;
               	cout << "\t   6 : Cubic m-Cubic cm. " << endl;
               	cout << "\t   7 : Cubic Inch-Cubic m. " << endl;
               	cout << "\t   8 : Cubic m-Cubic Inch. " << endl;
               	cout << "\t   9 : Cubic feet-Cubic m. " << endl;
               	cout << "\t  10 : Cubic m-Cubic feet. " << endl;
               	cout << "\t  11 : Cubic m-Gallon. " << endl;
               	cout << "\t  12 : Gallon-Cubic m. " << endl;
               	cout << "\t  13 : Litre-Gallon. " << endl;
               	cout << "\t  14 : Gallon-Litre. " << endl;
               	cout << "\t  15 : Back to The Main Menu. " << endl;

            while(true){             
            	// choices for calling function by object
				cout << "\n\n\tPlease Enter Your Choice = ";
              		cin >> y;

                	if ( y==1 ){
						v.mL_L();
							}
             			else if ( y==2 ){
			 				v.L_mL();
					 		}
             			else if ( y==3 ){
				 			v.mmQ_cmQ();
					 		}
            			else if ( y==4 ){
							v.cmQ_mmQ();
							}
            			else if ( y==5 ){
							v.cmQ_mQ();
							}
            			else if ( y==6 ){
							v.mQ_cmQ();
							}
            			else if ( y==7 ){
							v.inchQ_mQ();
							}
            			else if ( y==8 ){
							v.mQ_inchQ();
							}
            			else if ( y==9 ){
							v.feetQ_mQ();
							}
            			else if ( y==10 ){
							v.mQ_feetQ();
							}
            			else if ( y==11 ){
							v.mQ_gallon();
							}
           				else if ( y==12 ){
				    		v.gallon_mQ();
							}
            			else if ( y==13 ){
							v.L_gallon();
							}
            			else if ( y==14 ){	
							v.gallon_L();
							}
            			else if ( y==15 ){
								break;
							}
           		}
           
           }
        else if ( x==3 ){  
		   		// Unit conversion types for Weight
             	cout << "\n\n\tchoose your unit convertion for WEIGHT : " << endl ;
             	cout << "\t  1: Milligm-Gramm. " << endl;
	            cout << "\t  2: Gramm-milligm. " << endl;
             	cout << "\t  3: Gramm-killogram. " << endl;
             	cout << "\t  4: killoGramm-Gramm. " << endl;
             	cout << "\t  5: pound-killogramm. " << endl;
             	cout << "\t  6: killogramm-pound. " << endl;
             	cout << "\t  7: Gramm-Pound. " << endl;
             	cout << "\t  8: Pound-gramm. " << endl;
             	cout << "\t  9: killogramm-Metric ton. " << endl;
             	cout << "\t 10: Metric ton-Killogramm. " << endl;
            	cout << "\t 11: Back to The Main Menu. " << endl;

           	while(true){
           		// choices for calling function by object
            	cout << "\n\nPlease Enter Your Choice : ";
              		cin >> y;

             		if ( y==1 ){
					 	w.milligm_gm();
						}
             			else if ( y==2 ){
						 	w.gm_milligm();
							}
             			else if ( y==3 ){
						 	w.gm_kg();
							}
             			else if ( y==4 ){
						 	w.kg_gm();
							}
             			else if ( y==5 ){
			 				w.pound_kg();
							}
             			else if ( y==6 ){
			 				w.kg_pound();
							}
             			else if ( y==7 ){
						 	w.gm_pound();
							}
             			else if ( y==8 ){
						 	w.pound_gm();
							}
             			else if ( y==9 ){
						 	w.kg_mton();
							}
             			else if ( y==10 ){
						 	w.mton_kg();
							}
             			else if ( y==11 ){
			 					break;
						 	}
        	}
        }
        
        else if ( x==4 ){		
				// Unit conversion types for Length   
                cout <<"\n\n\t choose your unit convertion for LENGTH : " << endl;
                cout << "\t  1 : mm-m. " << endl;
                cout << "\t  2 : m-mm. " << endl;
                cout << "\t  3 : cm-m. " << endl;
                cout << "\t  4 : m-cm. " << endl;
                cout << "\t  5 : cm_km. " << endl;
                cout << "\t  6 : km-cm. " << endl;
                cout << "\t  7 : m-mile. " << endl;
                cout << "\t  8 : mile-m. " << endl;
                cout << "\t  9 : km-mile. " << endl;
                cout << "\t 10 : mile-km. " << endl;
                cout << "\t 11 : feet-m. " << endl;
                cout << "\t 12 : m-feet. " << endl;
                cout << "\t 13 : inch-m. " << endl;
                cout << "\t 14 : m-inch. " << endl;
                cout << "\t 15 : yard-m. " << endl;
                cout << "\t 16 : m-yard. " << endl;
                cout << "\t 17 : Back to The Main Menu. " << endl;
                
         	while(true){
         		// choices for calling function by object
                cout << "\n\n\t Please Enter Your Choice for : ";
               		cin >> y;
					
                	if ( y==1 ){
				 		l.mm_m(); 
				 		}
                		else if ( y==2 ){
				 			l.m_mm(); 
				 			}
                		else if ( y==3 ){
				 			l.cm_m(); 
				 			}
                		else if ( y==4 ){
				 			l.m_cm();
				  			}
                		else if ( y==5 ){
				 			l.cm_km();
				  			}
               			 else if ( y==6 ){
				 			l.km_cm();
				  			}
                		else if ( y==7 ){
				 			l.m_mile();
				    		}
                		else if ( y==8 ){
				 			l.mile_m();
				    		}
                		else if ( y==9 ){   
				 			l.km_mile(); 
				   			}
                		else if ( y==10 ){
				 			l.mile_km();
				    		}
                		else if ( y==11 ){
				 			l.feet_m(); 
				  			}
                		else if ( y==12 ){
				 			l.m_feet();
				  			}
                 		else if ( y==13 ){
				 			l.inch_m();
				  			}
                		else if ( y==14 ){
				 			l.m_inch();
				 			}
                		else if ( y==15 ){
				 			l.yard_m();
							}
                		else if ( y==16 ){
			    			l.m_yard();
			     			}
              			else if ( y==17 ){
			    				break;
								}
          	 }
           }
           
        else if( x==5 ){ 		
        		// Unit conversion types for Temperature
                cout << "\n\n\t choose your unit convertion for TEMPERATURE : " << endl ;
                cout << "\t  1: Celsius-Fahrenheit. " << endl;
                cout << "\t  2: Fahrenheit-Celsius. " << endl;
                cout << "\t  3: Celsius-Kelvin. " << endl;
                cout << "\t  4: Kelvin-Celcius. " << endl;
                cout << "\t  5: Back to The Main Menu. " << endl;
                
          	while(true){
          		// choices for calling function by object
          		cout << "\n\n\t Please Enter Your Choice : ";
            		cin >> y;

        	        if ( y==1 ){ 
						t.cel_f();
				 		}
        		        else if ( y==2 ){
							t.f_cel();
				 			}
        		        else if ( y==3 ){
						 	t.cel_k();
				 			}
        		        else if ( y==4 ){
							t.k_cel();
				 			}
        		        else if ( y==5 ){
								break;
								}
            	}
            }
            
        else if ( x==6 ){ 
				break;
				}
            }
        } 
