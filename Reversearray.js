function Reversearr() {

    let arr = [10, 20, 30, 40, 50];

    // ❌ Mistake in original: i = arr.length se shuru kiya tha
    // Last valid index = arr.length - 1
    // ❌ Mistake: loop condition galat thi, i>=0 hona chahiye
    for (let i = arr.length - 1; i >= 0; i--) {
        console.log(arr[i]); // print reverse order
    }
}

Reversearr();
