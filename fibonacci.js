function fibMaster(){
      
    let memo = new Map();
    return function fib(n){
      
         if(memo.has(n)){

             return memo.get(n);
         }

        else{

            if(n<2){
               
                return n;
            }
           memo.set(n,fib(n-1)+fib(n-2));
           return memo.get(n);
        }
    }
}
let fibonacci = fibMaster();
console.log(fibonacci(20))