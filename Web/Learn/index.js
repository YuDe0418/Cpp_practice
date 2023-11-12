

document.getElementById("myButton").onclick = function()
{
    const myCheckBox = document.getElementById("myCheckBox");
    const visaBtn = document.getElementById("visaBtn");
    const MasterCardBtn = document.getElementById("mastercardBtn");
    const paypalBtn = document.getElementById("paypalBtn");
    
    if(myCheckBox.checked)
    {
        console.log("你已訂閱");
    }
    else
    {
        console.log("你還沒訂閱");
    }

    if(visaBtn.checked)
    {
        console.log("你正在使用 Visa 付款")
    }
    else if(MasterCardBtn.checked)
    {
        console.log("你正在使用 Master Card 付款")
    }
    else if(paypalBtn.checked)
    {
        console.log("你正在使用 Pay Pal 付款")
    }
    else
    {
        console.log("你需要選擇一種付款方式!")
    }
}