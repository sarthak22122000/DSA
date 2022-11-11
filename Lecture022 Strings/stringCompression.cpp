int compress(vector<char>& chars) {
        int i=0;
        int ansIndex=0;
        int n= chars.size();
        
        while(i<n)
        {
            int j=i+1;
            while(j<n && chars[i]==chars[j])
            {
                j++;
            }
            
            //Yha kb aaoge
            //1. ya toh poora array traverse krdia h
            //2. Ya toh new charcter mil gya h
            
            //old char store krlo
            chars[ansIndex++]=chars[i];
            
            int count=j-i;
            
            if(count>1){
                //converting counting into single digit and saving it in answer
                string cnt= to_string(count);
                for(char ch : cnt){
                    chars[ansIndex++]= ch;
                }
            }
            i=j;
        }
        return ansIndex;
    }
