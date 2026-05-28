function generateMatrix(N) {
    let matrix = Array.from({ length: N }, () => Array(N).fill(0)); //Populate the matrix with 0s initially.
    
    let x = Math.floor(N / 2), y = Math.floor(N / 2); //Start at center, esp if N is odd.
    if (N % 2 === 0) {
        x = N / 2 - 1;
        y = N / 2 - 1;
    }
    
    matrix[x][y] = 1;  //Starting the matrix with 1 at the center
    let num = 2;
    
    let directions = [
        [0, 1],  //to right
        [1, 0],  //downwards
        [0, -1], //to left
        [-1, 0]  //upwards
    ];
    
    let dirIdx = 0;  //Starting with the right side as the question asked.
    let steps = 1;
    
    while (num <= N * N) {
        for (let i = 0; i < 2; i++) { //Repeating for dimensional combinations (right & downwards), (left & upwards)
            for (let j = 0; j < steps; j++) {
                let [dx, dy] = directions[dirIdx];
                x += dx;
                y += dy;
                if (x >= 0 && x < N && y >= 0 && y < N) {
                    matrix[x][y] = num++;
                }
            }
            dirIdx = (dirIdx + 1) % 4;  //Changing directions with each iterations
        }
        steps++;
    }
    
    return matrix;
}

function calculateDiagonalSums(matrix) { //Function to calculate the sums of the two diagonals
    let N = matrix.length;
    let primaryDiagonalSum = 0; 
    let secondaryDiagonalSum = 0;

    for (let i = 0; i < N; i++) { 
        primaryDiagonalSum += matrix[i][i];
        secondaryDiagonalSum += matrix[i][N - 1 - i];
    }

    return { primaryDiagonalSum, secondaryDiagonalSum };
}

function printResults(N) {
    console.log(`Matrix for N = ${N}:`);
    let spiralMatrix = generateMatrix(N);

    for (let row of spiralMatrix) {
        console.log(row); //Prints the results for Part 1 (the matrix itself)
    }

    let { primaryDiagonalSum, secondaryDiagonalSum } = calculateDiagonalSums(spiralMatrix); //Prints Part 2 results
    console.log(`Primary diagonal sum: ${primaryDiagonalSum}`);
    console.log(`Secondary diagonal sum: ${secondaryDiagonalSum}`);
    console.log();
}

let N = 9;  //Set values for N as desired
printResults(N);
