document.addEventListener('DOMContentLoaded', () => {
    const countButton = document.getElementById('countButton');

    countButton.addEventListener('click', () => {
        const inputArray = document.getElementById('inputArray').value.split(',').map(item => item.trim());
        const queryArray = document.getElementById('queryArray').value.split(',').map(item => item.trim());

        function countOccurrences(input, query) {
            return query.map(q => input.filter(item => item === q).length);
        }

        const resultOccurrences = countOccurrences(inputArray, queryArray).join(', ');
        document.getElementById('resultOccurrences').textContent = resultOccurrences;
    });
});
