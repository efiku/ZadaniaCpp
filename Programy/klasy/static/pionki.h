
class pionki
{
      int KONR;
      static int policz;
 public:      
      pionki::pionki(int kolor){
           KONR = kolor;        
           ++policz;
           
           if(policz <= 5 ){
                     std::cout << "PIONKOW: " << policz << " (m)\n";
           }
           else if( policz >= 6 and policz <= 10){
                     std::cout << "PIONKOW: " << policz << " (s)\n";
           }
           else if ( policz >= 11 ){
                     std::cout << "PIONKOW: " << policz << " (d)\n";
           }
      }
      
      
void      pionki::pokaz(){
                      std::cout << "KOLOR: " << KONR << "\n";
      }
      
       
};
