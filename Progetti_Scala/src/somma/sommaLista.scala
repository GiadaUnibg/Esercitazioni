package somma

object sommaLista {
  
  def main(args: Array[String]): Unit = {
    var l = List(1, 2, 4, 9, 5);
    var sum = 0;
    
    for(n <- l){
      sum += n;
    }
    
    println(sum);
      
  }
}