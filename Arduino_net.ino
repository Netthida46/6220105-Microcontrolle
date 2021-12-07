String weekDay = "Sunday";
String message = "";
void setup()
{
  Serial.begin(115200);
}

void loop()
{
  if (weekDay == "Monday")
  {
    message = "เรียนวิชาภาษาอังกฤษและ​เครื่องรับโทรทัศน์​ระบบดิจิทัล";
  }
  else if (weekDay == "Tuesday")
  {
    message = "เรียนวิชาไมโครคอนโทรลเลอร์";
  }
  else if (weekDay == "Wednesday")
  {
    message = "โครงาน";
  } else if (weekDay == "Thursday")
  {
    message = "โทรคมนาคมเบื้องต้น​และ​โครงงาน";
  }
  else if (weekDay == "friday")
  {
    message = "พื้นฐานอิเล็กทรอนิกส์อัฉริ​ยะ";
  }
  else
  {
    message = "วันหยุดเสาร์-อาทิตย์";
  }
  Serial.println(message);
  delay(2000);
}
