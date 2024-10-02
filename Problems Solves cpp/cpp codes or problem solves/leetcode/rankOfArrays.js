var arrayRankTransform = function(arr) {
    let indexMap = {};
    for (let i = 0; i < arr.length; i++) {
        if (indexMap[arr[i]] === undefined) {
            indexMap[arr[i]] = [i]; 
        } else {
            indexMap[arr[i]].push(i);
        }
    }


    let sortedArr = [...arr];
    for (let i = 0; i < sortedArr.length; i++) {
        for (let j = i + 1; j < sortedArr.length; j++) {
            if (sortedArr[i] > sortedArr[j]) {
                let temp = sortedArr[i];
                sortedArr[i] = sortedArr[j];
                sortedArr[j] = temp;
            }
        }
    }

   
    let rankMap = {}; 
    let rank = 1;  
    for (let i = 0; i < sortedArr.length; i++) {
        if (rankMap[sortedArr[i]] === undefined) {
            rankMap[sortedArr[i]] = rank;  
            rank++;  
        }
    }

    let result = new Array(arr.length); 
    for (let key in indexMap) {
        let indices = indexMap[key];  
        let currentRank = rankMap[key];  
        for (let i = 0; i < indices.length; i++) {
            result[indices[i]] = currentRank; 
        }
    }

    return result;
};


let arr = [37, 12, 28, 9, 100, 56, 80, 5, 12, 12, 37, 5];
let rankedArray = arrayRankTransform(arr);
console.log(rankedArray);
