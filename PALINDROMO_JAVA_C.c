bool palindromo(char p[], int i, int j)
 {
    int t = strlen(p)-1;
    if(i < t  && j > 0 )
    {
        if( p[i] == p[j]) {
          palindromo(p, i+1, j-1);
          return true;
          
        }
        else{
          return false;
        }
    }
 }

//JAVA

bool palindromo(char p[], int i, int j)
 {
    bool resposta = true;
    int t = strlen(p)-1;
    if(i < t  && j > 0 )
    {
        if( p[i] == p[j]) {
          resposta = palindromo(p, i+1, j-1);
          
        }
        else{
          resposta = false;
        }
    }
    return resposta;
 }
