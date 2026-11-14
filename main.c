#define LED_PIN GPIO_PIN_5

int main(void)
{
  while(1){
      LED_Toggle(LED_PIN);
  }
  return 0;
}
