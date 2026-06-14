var findErrorNums = function(nums) {
    let length= nums.length;
    let expectedSum = (length*(length+1))/2;
    let uniqueNums= new Set();
    let duplicateNumber = -1;
    let uniqueNumSummation=0;


    for(let i =0;i<length;i++){
        if(uniqueNums.has(nums[i])){
            duplicateNumber= nums[i]
        }else{
            uniqueNums.add(nums[i]);
            uniqueNumSummation+=nums[i]
        }
    }

    return [duplicateNumber,expectedSum-uniqueNumSummation]
};