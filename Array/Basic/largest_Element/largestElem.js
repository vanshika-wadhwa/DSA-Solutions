largest(arr) {
    // code here
    let temp=arr[0]
    for(let i=1;i<arr.length;i++){
        if(arr[i]>temp){
            temp=arr[i];
        }
    }
    return temp
}