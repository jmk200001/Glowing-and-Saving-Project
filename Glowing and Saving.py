#!/usr/bin/env python
# coding: utf-8

# In[37]:


# Saving and Glowing Backend
# Authors: Lan Bui and Jenna Krueger
def Cleansing():
   print("\n\n\nPlease choose the product you would like a cheaper version of: \n\n")
   print("Number   Product                                      Cost\n")
   print("-----------------------------------------------------------\n\n")
   print("1:       Bioderma Micellar Water                       $15\n\n")
   print("2:       Biologique Recherche's p50 1970               $95\n\n")
   print("3:       Drunk Elephant T.L.C. Sukari Baby Facial      $80\n\n")
   print("4:       First Aid Beauty's Facial Radiance Pads       $36\n\n")
   print("5:       Tatcha Rice Polish Foaming Enzyme Powder      $65\n\n")
   print("6:       Farmacy's Green Clean Cleansing Balm          $34\n\n")
   print("7:       Drunk Elephant Beste No. 9 Jelly Cleanser     $32\n\n")
   print("8:       Bobbi Brown Soothing Cleansing Oil            $50\n\n")
   value = input("Product Number? ")
    
   if (value == '1'):
      print("\n\nEXPENSIVE PRODUCT: Bioderma Micellar Water for $15\n")
      print("------------------------------------------------------\n")
      print("CHEAPER DUPE: Garnier Micellar Cleanse Water for $7\n")
   elif (value == '2'):
      print("\n\nEXPENSIVE PRODUCT: Biologique Recherche's p50 1970 for $95\n")
      print("--------------------------------------------------------------\n")
      print("CHEAPER DUPE: Tarte's Knockout Tingle Treatment Toner for $39\n")
   elif (value == '3'):
      print("\n\nEXPENSIVE PRODUCT: Drunk Elephant T.L.C. Sukari Baby Facial for $80\n")
      print("-----------------------------------------------------------------------\n")
      print("CHEAPER DUPE: The Ordinary's AHA 30% Peeling Solution for $7.20\n")
   elif (value == '4'):
      print("\n\nEXPENSIVE PRODUCT: First Aid Beauty's Facial Radiance Pads for $36\n")
      print("----------------------------------------------------------------------\n")
      print("CHEAPER DUPE: Nip and Fab Glycolic Fix Night Pads Extreme for $22.95\n")
   elif (value == '5'):
      print("\n\nEXPENSIVE PRODUCT: Tatcha Rice Polish Foaming Enzyme Powder for $65\n")
      print("-----------------------------------------------------------------------\n")
      print("CHEAPER DUPE: Tosowoong's Enzyme Powder Wash for $10\n")
   elif (value == '6'):
      print("\n\nEXPENSIVE PRODUCT: Farmacy's Green Clean Cleansing Balm for $34\n")
      print("-------------------------------------------------------------------\n")
      print("CHEAPER DUPE: Banila Co's Clean It Zero Cleansing Balm for $27\n")
   elif (value == '7'):
      print("\n\nEXPENSIVE PRODUCT: Drunk Elephant Beste No. 9 Jelly Cleanser for $32\n")
      print("------------------------------------------------------------------------\n")
      print("CHEAPER DUPE: CeraVe Foaming Facial Cleanser for $14\n")
   elif (value == '8'):
      print("\n\nEXPENSIVE PRODUCT: Bobbi Brown Soothing Cleansing Oil for $50\n")
      print("-----------------------------------------------------------------\n")
      print("CHEAPER DUPE: The Face Shop Rice Water Bright Light Cleansing Oil for $13\n")
   else:
      print("The value you input was not recognized by our systems. Please rerun the program and try again.\n")
     
def Moisturizing():
    print("\n\n\nPlease choose the product you would like a cheaper version of: \n\n")
    print("Number   Product                                                       Cost\n")
    print("---------------------------------------------------------------------------\n\n")
    print("1:       Smashbox Photo Finish Oil Primer                               $42\n\n")
    print("2:       Drunk Elephant Virgin Marula Luxury Face Oil                   $72\n\n")
    print("3:       Mario Badescu Facial Spray with Aloe Herbs and Rosewater       $12\n\n")
    print("4:       Tatcha Water Cream                                             $68\n\n")
    print("5:       Dr. Jart's Tiger Grass Serum                                   $49\n\n")
    print("6:       Ole Henriksen's Truth Serum                                    $50\n\n")
    print("7:       SkinMedica TNS Essential Serum                                $265\n\n")
    print("8:       Sk-II Facial Treatment Essence                                $235\n\n")
    print("9:       La Mer's Creme de la Mer                                      $345\n\n")
    print("10:      Sunday Riley ICE Ceramide Moisturizing Creme                   $65\n\n")
    print("11:      Kiehl's Midnight Recovery Concentrate                          $52\n\n")
    value = input("Product Number? ")
    
    if (value == '1'):
      print("\n\nEXPENSIVE PRODUCT: Smashbox Photo Finish Oil Primer for $42\n")
      print("---------------------------------------------------------------\n")
      print("CHEAPER DUPE: Nyx's Hydra Touch Oil Primer for $14\n\n")
    elif (value == '2'):
      print("\n\nEXPENSIVE PRODUCT: Drunk Elephant Virgin Marula Luxury Face Oil for $72\n")
      print("---------------------------------------------------------------------------\n")
      print("CHEAPER DUPE: InstaNatural's Organic Marula Oil for $15\n\n")
    elif (value == '3'):
      print("\n\nEXPENSIVE PRODUCT: Mario Badescu Facial Spray with Aloe Herbs and Rosewater for $12\n")
      print("---------------------------------------------------------------------------------------\n")
      print("CHEAPER DUPE: Garnier's SkinActive Soothing Facial Mist for $8\n\n")
    elif (value == '4'):
      print("\n\nEXPENSIVE PRODUCT: Tatcha Water Cream for $68\n")
      print("--------------------------------------------------\n")
      print("CHEAPER DUPES: Neutrogena's Hydro Boost Gel Cream for $18\n")
      print("CHEAPER DUPES: MAKEP:REM's Hydrate Me Micro Tension Cream for $30\n\n")
    elif (value == '5'):
      print("\n\nEXPENSIVE PRODUCT: Dr. Jart's Tiger Grass Serum for $49\n")
      print("-----------------------------------------------------------\n")
      print("CHEAPER DUPE: Purito's Centella Green Level Buffect Serum for $17.25\n\n")
    elif (value == '6'):
      print("\n\nEXPENSIVE PRODUCT: Ole Henriksen's Truth Serum for $50\n")
      print("----------------------------------------------------------\n")
      print("CHEAPER DUPE: LilyAna Naturals' Vitamin C Serum for $24\n\n")
    elif (value == '7'):
      print("\n\nEXPENSIVE PRODUCT: SkinMedica TNS Essential Serum for $265\n")
      print("--------------------------------------------------------------\n")
      print("CHEAPER DUPE: Eve Hansen Hydrating Hyaluronic Acid Serum for $22.98\n\n")
    elif (value == '8'):
      print("\n\nEXPENSIVE PRODUCT: Sk-II Facial Treatment Essence for $235\n")
      print("--------------------------------------------------------------\n")
      print("CHEAPER DUPE: Secret Key's Starting Treatment Essence for $18\n\n")
    elif (value == '9'):
      print("\n\nEXPENSIVE PRODUCT: La Mer's Creme de la Mer for $345\n")
      print("---------------------------------------------------------\n\n")
      print("CHEAPER DUPE: Nivea Creme for $7.30\n")
    elif (value == '10'):
      print("\n\nEXPENSIVE PRODUCT: Sunday Riley ICE Ceramide Moisturizing Creme for $65\n")
      print("---------------------------------------------------------------------------\n")
      print("CHEAPER DUPE: CeraVe Moisturizing Cream for $16\n\n")
    elif (value == '11'):
      print("\n\nEXPENSIVE PRODUCT: Kiehl's Midnight Recovery Concentrate for $52\n")
      print("--------------------------------------------------------------------\n")
      print("CHEAPER DUPE: Radha Beauty Rosehip Oil for $20\n\n")
    else:
      print("The value you input was not recognized by our systems. Please rerun the program and try again.\n")

def Miscellaneous():
    print("\n\n\nPlease choose the product you would like a cheaper version of: \n\n")
    print("Number   Product                                       Cost\n")
    print("-----------------------------------------------------------\n\n")
    print("1:       Peter Thomas Roth Pumpkin Enzyme Mask          $60\n\n")
    print("2:       Glam Glow's Supermud Mask                      $25\n\n")
    print("3:       Sunday Riley's Good Genes                      $85\n\n")
    print("4:       Clairsonic                                     $90\n\n")
    print("5:       Lareige's Lip Sleeping Mask                    $22\n\n")
    value = input("Product Number? ")
    
    if (value == '1'):
      print("\n\nEXPENSIVE PRODUCT: Peter Thomas Roth Pumpkin Enzyme Mask for $60\n")
      print("--------------------------------------------------------------------\n")
      print("CHEAPER DUPE: Andalou Natural's Pumpkin Honey Glycolic Mask for $12.79\n\n")
    elif (value == '2'):
      print("\n\nEXPENSIVE PRODUCT: Glam Glow's Supermud Mask for $25\n")
      print("--------------------------------------------------------\n")
      print("CHEAPER DUPE: Derma E's Purifying 2-in-1 Charcoal Mask for $19.50\n\n")
    elif (value == '3'):
      print("\n\nEXPENSIVE PRODUCT: Sunday Riley's Good Genes for $85\n")
      print("--------------------------------------------------------\n")
      print("CHEAPER DUPE: The Ordinary's Lactic Acid for $6.80\n\n")
    elif (value == '4'):
      print("\n\nEXPENSIVE PRODUCT: Clairsonic for $90\n")
      print("-----------------------------------------\n")
      print("CHEAPER DUPE: Olay ProX for $25.12\n\n")
    elif (value == '5'):
      print("\n\nEXPENSIVE PRODUCT: Lareige's Lip Sleeping Mask for $22\n")
      print("----------------------------------------------------------\n")
      print("CHEAPER DUPE: Care:Nel Lip Mask for $12\n\n")
    else:
      print("The value you input was not recognized by our systems. Please rerun the program and try again.\n")
    
    
print("Please pick from one of the Categories: \n")
print("1:                            Cleansing\n")
print("2:                         Moisturizing\n")
print("3:                        Miscellaneous\n\n")
holdValue = input("Please enter the number for the category you want: ")

while holdValue < '1' or holdValue > '3':
    print("The answer you have provided is out of range. Please try again\n\n")
    print("Please pick from one of the Categories: \n")
    print("1:                            Cleansing\n")
    print("2:                         Moisturizing\n")
    print("3:                        Miscellaneous\n\n")
    holdValue = input("Please enter the number for the category you want: ")
                                    
            
if (holdValue == '1'):
        Cleansing()
elif (holdValue == '2'):   
        Moisturizing()
elif (holdValue == '3'):
        Miscellaneous()
else:
        print("ERROR\a Something has gone wrong. Please exit program!!\n\n")


# In[ ]:




