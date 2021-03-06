#include <iostream>
#include <cstdlib>
int main(){

std::cout << "MAGIC 8-BALL:\n";
srand(time(NULL));
int answer = std::rand() % 10;
std::cout << answer ;

if(answer == 0){
  std::cout << " It is certain\n";

}
else if(answer == 1){
  std::cout << " nope\n";
}
else if(answer == 2){
  std::cout << "of course\n";
}
else if(answer == 3){
  std::cout << "yup\n";
}
else if(answer == 4){
  std::cout<< "never\n";
}
else{
  std::cout << " Very doubtful\n";

}


}