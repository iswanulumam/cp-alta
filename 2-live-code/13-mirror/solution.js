function askMirror(keyword) {
	keyword = keyword.split('')
	mirrorChars = "HIMOTUVWX"

	
	if(keyword.length % 2 != 0) {
		let mirrorIdx = Math.floor(keyword.length / 2)
		let wall = keyword[mirrorIdx]

		if(mirrorChars.indexOf(wall) > -1) {
			let splicedKeyword = keyword.splice(mirrorIdx, 1)
			return checkMirror(keyword)
		} else {
			return 'KAKICA'
		}
	} else {
		return checkMirror(keyword)
	}

}

function checkMirror(keyword) {
	let mirrorIdx = keyword.length / 2

	//first part 
	let start = 0
	let end = Math.floor(mirrorIdx)
	let firstPart = keyword.slice(start, end).join('')

	// second part 
	let start2 = Math.ceil(mirrorIdx)
	let end2 = keyword.length-1
	let secondPart = ''
	for(let i=end2; i>=start2;i--) {
		secondPart += keyword[i]
	}

	if(firstPart == secondPart) {
		return 'YOU'
	}
	return 'KAKICA'

}

var keyword = "SNOWIWONS"
console.log(`Hi ${keyword}, Who's the fairest of them all?`, askMirror(keyword))  //YOU

keyword = "SNOWAWONS"
console.log(`Hi ${keyword}, Who's the fairest of them all?`, askMirror(keyword))  //KAKICA

keyword = "WHITEXETIHW"
console.log(`Hi ${keyword}, Who's the fairest of them all?`, askMirror(keyword))  //YOU

keyword = "WHITEAETIHW"
console.log(`Hi ${keyword}, Who's the fairest of them all?`, askMirror(keyword))  //KAKICA

keyword = "PRINCEWPRINCE"
console.log(`Hi ${keyword}, Who's the fairest of them all?`, askMirror(keyword))  //KAKICA

keyword = "PRINCEECNIRP"
console.log(`Hi ${keyword}, Who's the fairest of them all?`, askMirror(keyword))  //YOU