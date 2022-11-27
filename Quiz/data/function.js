const answer = [3,2,2,1,3,3,1,2,1,1];
var Wscore;
var Lscore;

function checkAnswer(q,a)
{
   if(answer[q] == a+1)
   {
        document.getElementById(q).innerHTML = "CORRECT";
        Wscore+=1;
   }else{
        document.getElementById(q).innerHTML = "INCORRECT";
        Lscore+=1;
   }
}
