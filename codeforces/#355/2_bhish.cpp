while(ptr < n){
	    while(ptr < n && (sum + arr[ptr] <= h)){
		sum += arr[ptr++];
	    }
	    
	    if(ptr < n){
		long ct = (sum + arr[ptr] - h + k - 1) / k;
		time += ct;		
		sum = sum - (k * ct);
		sum = Math.max(0,sum);
	    }
	    else{
		time += (sum + k - 1) / k;
	    }
	}
	out.print(time);