class basicCalculator{
    constructor(prevValue, currValue){
        this.prevValue = prevValue
        this.currValue = currValue
        this.allClearFunction()
    }

    allClearFunction(){
        this.currentValue = ' '
        this.previousValue = ' '
        this.operand = undefined

    }

    deleteFunction(){
        this.currentValue = this.currentValue.toString().slice(0, -1)
        
    }

    appendNumber(number){
        if(number === '.' && this.currentValue.includes('.'))
        {
            return
        }

        this.currentValue = this.currentValue.toString() + number.toString()
        
    }

    selectOperand(operand){
        if(this.currentValue === ' ')
        {
            return
        }
        if(this.currentValue !== ' ')
        {
            this.evaluation()
        }

        this.operand = operand
        this.previousValue = this.currentValue
        this.currentValue = ' ' 

    }

    evaluation(){
        let calculation
        const previous = parseFloat(this.previousValue)
        const current =  parseFloat(this.currentValue)
        
        if(isNaN(previous) || isNaN(current))
        {
            return
        }

        switch(this.operand){
            case '+':
                calculation = previous + current
                break 
            
            case '-':
                calculation = previous - current
                break 
            
            case 'x':
                calculation = previous * current
                break    
            
            case '/':
                calculation = previous / current
                break    
            
            default:
                return    
        }

        this.currentValue = calculation
        this.previousValue = ' '
        this.operand = undefined
        
    }

    refreshDisplay(){
        
        this.currValue.innerText = this.currentValue

        if(this.operand!= null)
        {
            this.prevValue.innerText = 
                `${this.previousValue} ${this.operand}`
        }
        else
        {
            this.prevValue.innerText = ' '
        }
        

    }
}

const digitButtons = document.querySelectorAll('[data-digits]')
const operandButtons = document.querySelectorAll('[data-operands]')
const allClearButton = document.querySelector('[data-allClear]')
const deleteButton = document.querySelector('[data-delete]')
const resultButton = document.querySelector('[data-theResult]')
const prevValue = document.querySelector('[data-previous-value]')
const currValue = document.querySelector('[data-current-value]')

const operations = new basicCalculator(prevValue, currValue)

digitButtons.forEach(button => {
    button.addEventListener('click', () => {
        operations.appendNumber(button.innerText)
        operations.refreshDisplay()
    })
})

operandButtons.forEach(button => {
    button.addEventListener('click', () => {
        operations.selectOperand(button.innerText)
        operations.refreshDisplay()
    })
})

resultButton.addEventListener('click', button => {
    operations.evaluation()
    operations.refreshDisplay()
})

allClearButton.addEventListener('click', button => {
    operations.allClearFunction()
    operations.refreshDisplay()
})

deleteButton.addEventListener('click', button => {
    operations.deleteFunction()
    operations.refreshDisplay()
})