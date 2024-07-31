document.addEventListener('DOMContentLoaded', () => {
    const calculateButton = document.getElementById('calculateButton');

    calculateButton.addEventListener('click', () => {
        const matrixInput = document.getElementById('matrixInput').value;
        const matrix = matrixInput.split(';').map(row => row.split(',').map(Number));

        function diagonalDifference(matrix) {
            let primaryDiagonal = 0;
            let secondaryDiagonal = 0;

            for (let i = 0; i < matrix.length; i++) {
                primaryDiagonal += matrix[i][i];
                secondaryDiagonal += matrix[i][matrix.length - 1 - i];
            }

            return Math.abs(primaryDiagonal - secondaryDiagonal);
        }

        const resultDifference = diagonalDifference(matrix);
        document.getElementById('resultDifference').textContent = resultDifference;
    });
});
