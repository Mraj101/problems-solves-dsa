function twoSum(arr,target){
    let map={}
  
    for(let i=0;i<arr.length;i++){
        let element = target-arr[i]
        if(map.hasOwnProperty(element)){
            return [map[element],i]
        }
        map[arr[i]]=i
    }
}
console.log(twoSum([1,2,4],5),"?")