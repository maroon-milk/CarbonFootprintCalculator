#include<stdio.h>

int main(){
    
    float a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, z1, z2, z3;
    float ac, Electricity, TV, cocacola, solarenergy;   
    float CNG, LPG, diesel, petrol, LPGVEHC, coal;                                              
    float beef, chicken, egg, fish, mutton, pork, veg, milk, foodwastage, water, cookingoil;
    float motorcycle, aeroplane, bus, train, autorickshaw, car, bicycle, CarbonFootprint;

    printf("\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("* !Welcome to Yash Anand's Carbon Footprint Calculator! *\n");
    printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("Press enter to continue");
    getchar();

    printf("\nThis calculator was created as the pre-existing Carbon Footprint calculators\nappeared to havea limitation with their criteria in their calculations.\n");
    printf("Additionally, none of these calculators were OpenSource, which means that they would not allow\nthe user to add/remove specific activities to/from the calculator's criteria\n");
    printf("This lack of freedom to modify the criteria as per user's needs, would make the results incomplete and inaccurate.\n");
    printf("This is how the creation of this Carbon Footprint Calculator came into being where we\nwelcome all to make positive modifications to help make it even better.\n");

    printf("\nLet's find your Carbon Footprint!\n");
    printf("Press enter to continue");
    getchar();

    printf("\n* * * * * * * * * * * * * * * * * * * * *\n");
    printf("* Round 1: Domestic Energy Consumption! *\n");
    printf("* * * * * * * * * * * * * * * * * * * * *\n");
    printf("Press enter to continue\n");
    getchar();

    printf("\nQ01. How much AIR CONDITIONER do you use kWh/month?\n(As a general rule, an AC of 1 ton uses 1 kWh, 2 ton uses 2 kWh, 3 ton uses 3 kWh of electricity per hour.\n");
    scanf("%f", &ac);
    printf("\nHow many people engaged in this activity with you?\n");
    scanf("%f", &a);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", ac * 0.241 / a);
    
    printf("\nQ02. How much in kWh/month is your ELECTRICITY consumption?\n");
    scanf("%f", &Electricity);
    printf("\nHow many people engaged in this activity with you?\n");
    scanf("%f", &b);
    printf("Your C02e Emmision of your consumption is %f Kg/Month\n", Electricity * 0.72 / b);

    printf("\nQ03. How much TV do you use kWh/month?\n(Most TVs use 0.08 to 0.4 kWh/Hour\n");
    scanf("%f", &TV);
    printf("\nHow many people engaged in this activity with you?\n");
    scanf("%f", &c);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", TV * 0.088 / c);

    printf("\nQ04. How much solar energy do you consume from SOLAR PANELS in kWh/Month\n");
    scanf("%f", &solarenergy);
    printf("\nHow many people engaged in this activity with you?\n");
    scanf("%f", &d);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", solarenergy * 0.041 / d);

    printf("\n* * * * * * * * * * * * * * * * *\n");
    printf("* Round 2: Resource Consumption *\n");
    printf("* * * * * * * * * * * * * * * * *\n");
    printf("Press enter to continue\n");
    getchar();
    
    printf("\nQ05. How much CNG do you consume Kg/month?\n");
    scanf("%f", &CNG);
    printf("\nHow many people engaged in this activity with you?\n");
    scanf("%f", &e);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", CNG * 0.144 / e);

    printf("\nQ06. How much PETROL do you consume Litres/month?\n");
    scanf("%f", &petrol);
    printf("\nHow many people engaged in this activity with you?\n");
    scanf("%f", &f);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", petrol * 2.297 / f);

    printf("\nQ07. How much LPG do you consume Kg/month?\n");
    scanf("%f", &LPG);
    printf("\nHow many people engaged in this activity with you?\n");
    scanf("%f", &g);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", LPG * 3.0 / g);

    printf("\nQ08. How much DIESEL do you consume Litres/month?\n");
    scanf("%f", &diesel);
    printf("\nHow many people engaged in this activity with you?\n");
    scanf("%f", &h);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", diesel * 2.6 / h);

    printf("\nQ09. How much LPG for your vehicle do you consume kg/month?\n");
    scanf("%f", &LPGVEHC);  
    printf("\nHow many people engaged in this activity with you?\n");
    scanf("%f", &i);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", LPGVEHC * 3.06 / i);

    printf("\nQ10. How much COAL do you consume Kg/Month?\n");
    scanf("%f", &coal);
    printf("\nHow many people engaged in this activity with you?\n");
    scanf("%f", &j);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", coal * 2.42 / j);

    printf("\nQ11. How much WATER do you use as general usage litres/month?\n(This includes drinking water)\n");
    scanf("%f", &water);
    printf("\nHow many people engaged in this activity with you?\n");
    scanf("%f", &k);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", water * 0.000298 / k);
    
    printf("\n* * * * * * * * * * * * * * *\n");
    printf("* Round 3: Food Consumption *\n");
    printf("* * * * * * * * * * * * * * *\n");
    printf("Press enter to continue\n");
    getchar();

    printf("\nQ12. How much BEEF do you consume Kg/Month?\n");
    scanf("%f", &beef);
    printf("\nHow many people engaged in this activity with you?\n");
    scanf("%f", &l);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", beef * 27 / l);

    printf("\nQ13. How much CHICKEN do you consume Kg/Month?\n");
    scanf("%f", &chicken);
    printf("\nHow many people engaged in this activity with you?\n");
    scanf("%f", &m);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", chicken * 9.87 / n);

    printf("\nQ14. How many EGGS do you consume Kg/Month?\n(1 eggs = 0.055Kg)\n");
    scanf("%f", &egg);
    printf("\nHow many people engaged in this activity with you?\n");
    scanf("%f", &o);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", egg * 4.8 / o);

    printf("\nQ15. How much FISH do you consume Kg/Month?\n");
    scanf("%f", &fish);
    printf("\nHow many people engaged in this activity with you?\n");
    scanf("%f", &p);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", fish * 1.34 / p);

    printf("\nQ16. How much MUTTON do you consume Kg/Month?\n");
    scanf("%f", &mutton);
    printf("\nHow many people engaged in this activity with you?\n");
    scanf("%f", &q);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", mutton * 39.72 / q);

    printf("\nQ17. How much PORK do you consume Kg/month?\n");
    scanf("%f", &pork);
    printf("\nHow many people engaged in this activity with you?\n");
    scanf("%f", &r);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", pork * 12.1 / r);

    printf("\nQ18. How much VEGETABLES do you consume kg/Month?\n");
    scanf("%f", &veg);
    printf("\nHow many people engaged in this activity with you?\n");
    scanf("%f", &s);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", veg * 2.0 / s);

    printf("\nQ19. How much MILK do you consume Litres/Month?\n");
    scanf("%f", &milk);
    printf("\nHow many people engaged in this activity with you?\n");
    scanf("%f", &t);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", milk * 3.2 / t);

    printf("\nQ20. How much FOOD do you WASTE kg/Month?\n");
    scanf("%f", &foodwastage);
    printf("\nHow many people engaged in this activity with you?\n");
    scanf("%f", &u);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", foodwastage * 2.5 / u);

    printf("\nQ21. How much COCA-COLA do you consume Litres/Month\n");
    scanf("%f", &cocacola);
    printf("\nHow many people engaged in this activity with you?\n");
    scanf("%f", &v);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", cocacola * 0.51 / v);

    printf("\nQ22. How much COOKING OIL do you consume Litres/Month?\n");
    scanf("%f", &cookingoil);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", cookingoil * 3.81);


    printf("\n* * * * * * * * * * * *\n");
    printf("* Round 4: Traveling! *\n");
    printf("* * * * * * * * * * * *\n");
    printf("Press enter to continue\n");
    getchar();

    printf("\nQ23. How much do you travel by MOTORCYCLE km/Month?\n");
    scanf("%f", &motorcycle);
    printf("\nHow many people engaged in this activity with you?\n");
    scanf("%f", &w);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", motorcycle * 0.113 / w);

    printf("\nQ24. How much do you travel by AEROPLANE Km/Month?\n");
    scanf("%f", &aeroplane);
    printf("\nHow many people engaged in this activity with you?\n");
    scanf("%f", &x);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", aeroplane * 0.146 / x);

    printf("\nQ25. How much do you travel by BUS Km/Month?\n");
    scanf("%f", &bus);
    printf("\nHow many people engaged in this activity with you?\n");
    scanf("%f", &y);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", bus * 0.103 / y);

    printf("\nQ26. How much do you travel by TRAIN Km/Month?\n");
    scanf("%f", &train);
    printf("\nHow many people engaged in this activity with you?\n");
    scanf("%f", &z);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", train * 0.37 / z);

    printf("\nQ27. How much do you travel by AUTORICKSHAW Km/Month?\n");
    scanf("%f", &autorickshaw);
    printf("\nHow many people engaged in this activity with you?\n");
    scanf("%f", &z1);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", autorickshaw * 0.05 / z1);

    printf("\nQ28. How much do you travel by CAR Km/Month?\n");
    scanf("%f", &car);
    printf("\nHow many people engaged in this activity with you?\n");
    scanf("%f", &z2);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", car * 0.111 / z2);

    printf("\nQ29. How much distance do you travel by BICYCLE in Km/Month?\n");
    scanf("%f", &bicycle);
    printf("\nHow many people engaged in this activity with you?\n");
    scanf("%f", &z3);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", bicycle * 0.021 / z3);    
    
    CarbonFootprint = ((Electricity*0.72) + (water*0.000298) + (ac * 0.241) + (TV * 0.088) + (LPG*3.0) + (cocacola * 0.51) + (solarenergy * 0.041) + (CNG * 0.144) + (petrol * 2.297) + (diesel * 2.6) + (LPGVEHC*3.06) + (coal*2.52) + (beef*27) + (chicken * 9.87) + (egg * 4.8) + (fish * 1.34) + (mutton*39.72) + (pork*12.1) + (veg*2) + (milk*0.91) + (foodwastage*2.5) + (cookingoil * 3.81) + (motorcycle*0.113) + (aeroplane*0.146) + (bus*0.103) + (train*0.37) + (autorickshaw*0.05) + (car*0.111) + (bicycle*0.021));

    printf("\nYour carbon footprint is %f Kg per Month.\n", CarbonFootprint);
    printf("Press ENTER To Compare Your Result With India's Per Capita Carbon Footprint\n");
    getchar();
    printf("For comparison, India's per capita carbon footprint in 2021 was 1900 Kg per YEAR & your carbon footprint per year was %f\n", CarbonFootprint * 12);

    printf("\n\nThank You For Using Yash Anand's Carbon Footprint Calculator!\n");
    printf("Press enter to continue");
    getchar();
    return 0;
}
