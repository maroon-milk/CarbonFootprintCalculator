#include<stdio.h>

int main(){
    
    float ac, newspaper, soap, Electricity, TV, geyser, fridge, laptop, cocacola, solarenergy;   //Domestic related consumption
    float NGP, LPG, diesel, petrol, LPGVEHC, coal;                                               //Resource consumption
    float beef, chicken, egg, fish, mutton, pork, veg, milk, foodwastage, water, cookingoil; //Food consumption
    float motorcycle, aeroplane, bus, train, autorickshaw, car, bicycle, CarbonFootprint;

    printf("\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("* !Welcome to Yash Anand's Carbon Footprint Calculator! *\n");
    printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("Press enter to continue");
    getchar();

    printf("\nThis calculator was created as the pre-existing Carbon Footprint calculators appeared to have a limitation with their criteria in their calculations.\n");
    printf("Additionally, none of these calculators were OpenSource, which means that they would not allow the user to add/remove specific activities to/from the calculator's criteria\n");
    printf("This lack of freedom to modify the criteria as per user's needs, would make the results incomplete and inaccurate.\n");
    printf("This is how the creation of this Carbon Footprint Calculator came into being where we welcome all to make positive modifications to help make it even better.\n");

    printf("\nAre you ready to calculate your Carbon Footprints?\n");
    printf("Press enter to continue");
    getchar();

    printf("\n* * * * * * * * * * * * * * * * * * * * *\n");
    printf("* Round 1: Domestic Energy Consumption! *\n");
    printf("* * * * * * * * * * * * * * * * * * * * *\n");
    printf("Press enter to continue");
    getchar();

    printf("\nQ01. How much AIR CONDITIONER do you use kWh/month?\n");
    scanf("%f", &ac);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", ac * 0.241);
    
    printf("\nQ02. How much in kWh/month is your ELECTRICITY BILL?\n");
    scanf("%f", &Electricity);
    printf("Your C02e Emmision of your consumption is %f Kg/Month\n", Electricity * 0.82);

    printf("\nQ03. How much TV do you use kWh/month?\n");
    scanf("%f", &TV);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", TV * 0.088);

    printf("\nQ04. How much solar energy do you consume from SOLAR PANELS in kWh/Month\n");
    scanf("%f", &solarenergy);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", solarenergy * 0.041);

    printf("\n* * * * * * * * * * * * * * * * *\n");
    printf("* Round 2: Resource Consumption *\n");
    printf("* * * * * * * * * * * * * * * * *\n");
    printf("Press enter to continue");
    getchar();
    
    printf("\nQ05. How much CNG do you consume Kg/month?\n");
    scanf("%f", &NGP);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", NGP * 0.82);

    printf("\nQ06. How much PETROL do you consume Litres/month?\n");
    scanf("%f", &petrol);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", petrol * 2.33);

    printf("\nQ07. How much LPG do you consume Kg/month?\n");
    scanf("%f", &LPG);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", LPG * 1.5);

    printf("\nQ08. How much DIESEL do you consume Litres/month?\n");
    scanf("%f", &diesel);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", diesel * 2.68);

    printf("\nQ09. How much LPG for your vehicle do you consume kg/month?\n");
    scanf("%f", &LPGVEHC);  
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", LPGVEHC * 3.06);

    printf("\nQ10. How much COAL do you consume Kg/Month?\n");
    scanf("%f", &coal);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", coal * 2.5);

    printf("\nQ11. How much WATER do you use as general usage litres/month?\n(This does not include drinking water)\n");
    scanf("%f", &water);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", water * 0.298);
    
    printf("\n* * * * * * * * * * * * * * *\n");
    printf("* Round 3: Food Consumption *\n");
    printf("* * * * * * * * * * * * * * *\n");
    printf("Press enter to continue");
    getchar();

    printf("\nQ12. How much BEEF do you consume Kg/Month?\n");
    scanf("%f", &beef);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", beef * 27);

    printf("\nQ13. How much CHICKEN do you consume Kg/Month?\n");
    scanf("%f", &chicken);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", chicken * 6.9);

    printf("\nQ14. How many EGGS do you consume Kg/Month?\n(1Kg = 20 Eggs)\n");
    scanf("%f", &egg);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", egg * 4.8);

    printf("\nQ15. How much FISH do you consume Kg/Month?\n");
    scanf("%f", &fish);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", fish * 1.34);

    printf("\nQ16. How much MUTTON do you consume Kg/Month?\n");
    scanf("%f", &mutton);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", mutton * 39.2);

    printf("\nQ17. How much PORK do you consume Kg/month?\n");
    scanf("%f", &pork);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", pork * 12.1);

    printf("\nQ18. How much VEGETABLES do you consume kg/Month?\n");
    scanf("%f", &veg);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", veg * 2.0);

    printf("\nQ19. How much MILK do you consume Litres/Month?\n");
    scanf("%f", &milk);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", milk * 0.91);

    printf("\nQ20. How much FOOD do you WASTE kg/Month?\n");
    scanf("%f", &foodwastage);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", foodwastage * 2.5);

    printf("\nQ21. How much COCA-COLA do you consume Lts/Month\n");
    scanf("%f", &cocacola);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", cocacola * 0.17);

    printf("\nQ22. How much COOKING OIL do you consume Lts/month?\n");
    scanf("%f", &cookingoil);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", cookingoil * 3.81);


    printf("\n* * * * * * * * * * * *\n");
    printf("* Round 4: Traveling! *\n");
    printf("* * * * * * * * * * * *\n");
    printf("Press enter to continue");
    getchar();

    printf("\nQ23. How much do you travel by MOTORCYCLE km/month?\n");
    scanf("%f", &motorcycle);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", motorcycle * 0.08);

    printf("\nQ24. How much do you travel by AEROPLANE Km/month?\n");
    scanf("%f", &aeroplane);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", aeroplane * 0.146);

    printf("\nQ25. How much do you travel by BUS Km/month?\n");
    scanf("%f", &bus);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", bus * 0.103);

    printf("\nQ26. How much do you travel by TRAIN Km/month? ");
    scanf("%f", &train);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", train * 0.10);

    printf("\nQ27. How much do you travel by AUTORICKSHAW Km/month?\n");
    scanf("%f", &autorickshaw);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", autorickshaw*0.05);

    printf("\nQ28. How much do you travel by TAXI Km/month?\n");
    scanf("%f", &car);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", car * 0.31);

    printf("\nQ29. How much distance do you travel by BICYCLE in Km/Month?\n");
    scanf("%f", &bicycle);
    printf("The C02e Emmision of your consumption is %f Kg/Month\n", bicycle * 0.0205052);    
    
    CarbonFootprint = ((Electricity*0.82) + (water*0.298) + (ac * 0.241) + (TV * 0.088) + (LPG*1.5) + (cocacola * 0.17) + (solarenergy * 0.41) + (NGP * 0.82) + (petrol * 2.33) + (diesel * 1.5) + (LPGVEHC*3.06) + (coal*2.5) + (beef*27) + (chicken * 6.9) + (egg * 4.8) + (fish * 1.34) + (mutton*39.2) + (pork*12.1) + (veg*2) + (milk*0.91) + (foodwastage*2.5) + (cookingoil * 3.81) + (motorcycle*0.08) + (aeroplane*0.146) + (bus*0.103) + (train*0.10) + (autorickshaw*0.05) + (car*0.31) + (bicycle*0.0205052));

    printf("\nYour carbon footprint is %f kg per month.\n", CarbonFootprint);
    printf("Press ENTER To Compare Your Result With India's Per Capita Carbon Footprint\n");
    getchar();
    printf("For comparison, India's per capita carbon footprint in 2021 was 1900 Kg per YEAR & your carbon footprint per year was %f\n", CarbonFootprint * 12);

    printf("\n\nThank You For Using Yash Anand's Carbon Footprint Calculator!\n");
    printf("Press enter to continue");
    getchar();
    return 0;
}
