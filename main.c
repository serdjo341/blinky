#define LED_PIN GPIO_PIN_5
#define LED_PIN GPIO_PIN_5
#define DEBOUNCE_MS 20
int main(void)
{
  while(1){
      LED_Toggle(LED_PIN);
      Delay_ms(DEBOUNCE_MS);
  }
  return 0;
}
