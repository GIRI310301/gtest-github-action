// int networkAlerter(float celcius);
// void alertInCelcius(float farenheit);

extern int alertFailureCount = 0;
void alertInCelcius(float farenheit,int(*networkAleter)(float celcius));
