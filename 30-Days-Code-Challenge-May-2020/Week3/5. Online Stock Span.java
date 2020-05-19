class StockSpanner {
    
    static int cnt;
    static ArrayList<Integer>arr ;
    
    public StockSpanner() {
        cnt=0;
        arr=new ArrayList<Integer>();
    }
    
    public int next(int price) {
        if(cnt==0){
             ++cnt; arr.add(price); return 1;
        }
           
        else{
            if(price>=arr.get(cnt-1)){
                ++cnt; arr.add(price); return search(price);  
            }else{
                ++cnt; arr.add(price); return 1;
            }
           
        }

    }
    
    public int search(int num){
        
        int c=0;
        
        for(int i=arr.size()-1; i>=0; i--){
            
            if(arr.get(i)<=num) ++c;     
            else  break;     
        }
        
        return c;
    }
}

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner obj = new StockSpanner();
 * int param_1 = obj.next(price);
 */