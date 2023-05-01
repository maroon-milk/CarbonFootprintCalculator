#include <stdio.h>

int main(){
    int FamMem, start;
    float ac, Electricity, TV, internet, solarenergy;                                            //Domestic electricity related consumption
    float NGP, LPG, diesel, petrol, LPGVEHC, coal;                                               //Resource consumption
    float beef, chicken, egg, fish, mutton, pork, veg, milk, foodwastage, ro, water, cookingoil; //Food consumption
    float motorcycle, aeroplane, bus, train, autorickshaw, car, bicycle;
    float sharing, CarbonFootprint, score;

    printf("\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("* !Welcome to Yash Anand's Carbon Footprint Calculator! *\n");
    printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("Press any number to continue.\n");
    scanf("%d", &start);

    printf("\nThis calcutor was created because the pre-existing sites & calculators appeared to have a limitation with their criterias for calculating carbon footprints.\n\n");
    printf("Additionally, none of these calculators were OpenSource, which means that they would not allow the user to add/remove specific activities to/from the calculator's criterias\n\n");
    printf("This lack of freedom to modify the criterias as per user's needs, would make the results incomplete and inaccurate.\n\n");
    printf("Finally, this is how the creation of YACFC came into being - which is an Indian based Carbon Footprint Calculator that welcomes all to make modifications to help make it even better.\n\n");

    printf("\nSo - are you ready to learn about your CO2/KG emissions? If so, Please press any number to start!\n");
    scanf("%d", &start);

    printf("\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("* Round 1: Domestic Energy Consumption! Press Any Number To start *\n");
    printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");

    printf("\nQ1. Do you have access to Solar Energy?\nPress 1 for Yes & 0 for No.\n");
    scanf("%f", &solarenergy);

    printf("\nQ2. How much AIR CONDITIONER do you use kWh/month?\n");
    scanf("%f", &ac);
    printf("The C02 Emmision of your consumption is %f Kg/Month\n", ac * 0.936);
    
    printf("\nQ3. How much ELECTRICITY do you use kWh/month?\n");
    scanf("%f", &Electricity);
    printf("The C02 Emmision of your consumption is %f Kg/Month\n", Electricity * 0.82);

    printf("\nQ4. How much TV do you use hour/month?\n");
    scanf("%f", &TV);
    printf("The C02 Emmision of your consumption is %f Kg/Month\n", TV * 0.244);

    printf("\nQ5. In order to find your digital footprints, tell your internet usage in hour/month\n");
    scanf("%f", &internet);
    printf("The C02 Emmision of your consumption is %f Kg/Month\n", internet * 0.006);

    printf("\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("* Round 2: Resource Consumption! Press Any Number To start! *\n");
    printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    scanf("%d", &start);
    
    printf("\nQ6. How much gas/CNG do you consume from your Natural Gas Pipeline kWh/month?\n");
    scanf("%f", &NGP);
    printf("The C02 Emmision of your consumption is %f Kg/Month\n", NGP * 0.2);

    printf("\nQ7. How much LPG do you consume kg/month?\n");
    scanf("%f", &LPG);
    printf("The C02 Emmision of your consumption is %f Kg/Month\n", LPG * 1.5);

    printf("\nQ8. How much LPG for your vehicle do you consume kg/month?\n");
    scanf("%f", &LPGVEHC);  
    printf("The C02 Emmision of your consumption is %f Kg/Month\n", LPGVEHC * 3.06);

    printf("\nQ9. How much Petrol do you consume litres/month?\n");
    scanf("%f", &petrol);
    printf("The C02 Emmision of your consumption is %f Kg/Month\n", petrol * 2.33);

    printf("\nQ10. How much Diesel do you consume litres/month?\n");
    scanf("%f", &diesel);
    printf("The C02 Emmision of your consumption is %f Kg/Month\n", diesel * 2.68);

    printf("\nQ11. How much coal do you consume tonne/month?\n");
    scanf("%f", &coal);
    printf("The C02 Emmision of your consumption is %f Kg/Month\n", coal * 2750);

    printf("\nQ12. How much water do you use as general usage litres/month?\n(This does not include drinking water)\n");
    scanf("%f", &water);
    printf("The C02 Emmision of your consumption is %f Kg/Month\n", water * 0.011);
    
    printf("\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("* Round 3: Food Consumption! Press Any Number To start! *\n");
    printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    scanf("%d", &start);

    printf("\nQ13. How much beef do you consume kg/month?\n");
    scanf("%f", &beef);
    printf("The C02 Emmision of your consumption is %f Kg/Month\n", beef * 27);

    printf("\nQ14. How much chicken do you consume kg/month?\n");
    scanf("%f", &chicken);
    printf("The C02 Emmision of your consumption is %f Kg/Month\n", chicken * 6.9);

    printf("\nQ15. How many eggs do you consume kg/month?\n(1kg = 20 Eggs)");
    scanf("%f", &egg);
    printf("The C02 Emmision of your consumption is %f Kg/Month\n", egg * 0.9);

    printf("\nQ16. How much fish do you consume kg/month?\n");
    scanf("%f", &fish);
    printf("The C02 Emmision of your consumption is %f Kg/Month\n", fish * 3.3);

    printf("\nQ17. How much mutton do you consume kg/month?\n");
    scanf("%f", &mutton);
    printf("The C02 Emmision of your consumption is %f Kg/Month\n", mutton * 39.2);

    printf("\nQ18. How much pork do you consume kg/month?\n");
    scanf("%f", &pork);
    printf("The C02 Emmision of your consumption is %f Kg/Month\n", pork * 7.6);

    printf("\nQ19. How much vegetables do you consume kg/month?\n");
    scanf("%f", &veg);
    printf("The C02 Emmision of your consumption is %f Kg/Month\n", veg * 0.5);

    printf("\nQ20. How much milk do you consume kg/month?\n");
    scanf("%f", &milk);
    printf("The C02 Emmision of your consumption is %f Kg/Month\n", milk * 0.91);

    printf("\nQ21. How much food do you waste kg/month?\n");
    scanf("%f", &foodwastage);
    printf("The C02 Emmision of your consumption is %f Kg/Month\n", foodwastage * 0.61);

    printf("\nQ22. How much water do you consume from your RO litres/month?\n");
    scanf("%f", &ro);
    printf("The C02 Emmision of your consumption is %f Kg/Month\n", ro * 0.72);

    printf("\nQ23. How much cooking oil do you consume litres/month?\n");
    scanf("%f", &cookingoil);
    printf("The C02 Emmision of your consumption is %f Kg/Month\n", cookingoil * 3.02);

    printf("\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("* Round 4: Traveling! Press Any Number To start! *\n");
    printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    scanf("%d", &start);

    printf("\nQ24. How much do you travel by motorcycle km/month?\n");
    scanf("%f", &motorcycle);
    printf("The C02 Emmision of your consumption is %f Kg/Month\n", motorcycle * 0.08);

    printf("\nQ25. How much do you travel by aeroplane km/month?\n");
    scanf("%f", &aeroplane);
    printf("The C02 Emmision of your consumption is %f Kg/Month\n", aeroplane * 0.184);

    printf("\nQ26. How much do you travel by bus km/month?\n");
    scanf("%f", &bus);
    printf("The C02 Emmision of your consumption is %f Kg/Month\n", bus * 0.09);

    printf("\nQ27. How much do you travel by train km/month?\n");
    scanf("%f", &train);
    printf("The C02 Emmision of your consumption is %f Kg/Month\n", train * 0.04);

    printf("\nQ28. How much do you travel by autorickshaw km/month?\n");
    scanf("%f", &autorickshaw);
    printf("The C02 Emmision of your consumption is %f Kg/Month\n", autorickshaw*0.04);

    printf("\nQ29. How much do you travel by car km/month?\n");
    scanf("%f", &car);
    printf("The C02 Emmision of your consumption is %f Kg/Month\n", car * 0.15);

    printf("\nQ30. Do you use bicycle from travelling in a month?\nPress 1 for Yes & 0 for No.\n");
    scanf("%f", &bicycle);
    printf("The C02 Emmision of your consumption is %f Kg/Month\n", bicycle * 0.125);

    CarbonFootprint = ((ac * 0.936) + (Electricity * 0.82) + (TV * 0.00048) + (internet * 0.0006) + (solarenergy * 0) + (NGP * 0.2) + (petrol * 2.33) + (LPG * 1.5) + (diesel * 2.68) + (LPGVEHC*3.06) + (coal*2750) + (beef*27) + (chicken * 6.9) + (egg * 0.9) + fish * 3.3 + (mutton*39.2) + (pork*7.6) + (veg*0.5) + (milk*0.91) + (foodwastage*0.61) + (ro*0.72) + (water*0.011) + (cookingoil * 3.02) + (motorcycle*0.08) + (aeroplane*0.184) + (bus*0.09) + (train*0.04) + (autorickshaw*0.04) + (car*0.15) + (bicycle*0.125));

    printf("\nYour carbon footprint is %f kg per month.\n", CarbonFootprint);
    printf("Press Any Number To Compare Your Result With India's Per Capita Carbon Footprint\n");
    printf("for comparison, India's per capita carbon footprint in 2021 was 1900 Kg/month\n");

    printf("\n\nThank You For Using Yash Anand's Carbon Footprint Calculator!\n\nPress Any Number To Exit: ");
    scanf("%d", &start);
    return 0;
}
