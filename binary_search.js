function binarySearch(numbers, target) {
    let left = 0;
    let right = numbers.length - 1;

    while (left <= right) {
        let middle = Math.floor((left + right) / 2);

        if (numbers[middle] === target) {
            return middle;
        } else if (numbers[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return -1;
}

const numbers = [10, 20, 30, 40, 50, 60, 70];

console.log("Index:", binarySearch(numbers, 40));
console.log("Index:", binarySearch(numbers, 25));