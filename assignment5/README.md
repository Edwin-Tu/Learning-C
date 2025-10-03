# 📘 C 課程練習檔案說明

## assignment5.c
**主題：** 秒數轉換成時、分、秒  
**內容：**  
- 宣告變數 `seconds`，由使用者輸入總秒數  
- 使用整數除法 `(int)(seconds/3600)` 計算小時數  
- 使用 `(int)((seconds-(hours*3600))/60)` 計算分鐘數  
- 使用 `remaining_seconds = seconds - (hours*3600) - (mins*60)` 計算剩餘秒數  
- 輸出轉換結果