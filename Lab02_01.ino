// Lab02_1
// 使用for迴圈的跑馬燈程式
//
// 每個 LED 正極接到 Pin 0 - 7, 負極接地
const byte startPin = 0;
const byte endPin = 7;
void setup() {
    // 將每個 Pin 設定成輸出
    for (byte i = startPin; i<= endPin; i++) {
        pinMode(i, OUTPUT);
    }
}
void loop()
{
    byte i,j;
    byte lightPin = startPin;
    // 所有 LED OFF
    for (i=startPin; i<= endPin; i++) {
        digitalWrite(i,LOW);
    }
    
 /////////////////////////////////////////////////////////////////////////////
 
    lightPin = endPin;
    for(i=endPin; i>=startPin; i--){        //　由左往右           
 
            // 點亮 LED
       digitalWrite(lightPin, HIGH);
        delay (100);
       digitalWrite(lightPin, LOW);
        delay (100);
   
        if (lightPin > startPin) {               // 設定要點亮的 LED 位置
            lightPin --;   // 如果點亮的腳位編號小於結束腳位,則腳位編號+1
           
        } else {                             // 否則從頭開始
            break;
        }
      	
    
    }
  	
 
///////////////////////////////////////////////////////////////////////////  
 
    lightPin = startPin;
    for(i=startPin; i<=endPin; i++){        //　由右往左                  
 
            // 點亮 LED
       digitalWrite(lightPin, HIGH);
        delay (100);
       digitalWrite(lightPin, LOW);
        delay (100);
   
        if (lightPin < endPin) {               // 設定要點亮的 LED 位置
            lightPin ++;   // 如果點亮的腳位編號小於結束腳位,則腳位編號+1
           
        } else {                             // 否則從頭開始
            break;
        }
    
    }    
  
  
    
}

