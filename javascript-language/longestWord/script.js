document.addEventListener('DOMContentLoaded', () => {
    const findButton = document.getElementById('findButton');

    findButton.addEventListener('click', () => {
        const sentence = document.getElementById('userSentence').value;
        const words = sentence.split(' ');
        let longest = words[0];
        for (const word of words) {
            if (word.length > longest.length) {
                longest = word;
            }
        }
        document.getElementById('resultWord').textContent = `${longest}: ${longest.length} characters`;
    });
});