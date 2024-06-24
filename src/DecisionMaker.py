class DecisionMaker:
    def __init__(self):
        self.strategy_table = {}
        self.init_strategy_table()

    def init_strategy_table(self):
        # Hard totals (excluding pairs)
        self.strategy_table.update({
            "H_21_2": "Stand", "H_21_3": "Stand", "H_21_4": "Stand", "H_21_5": "Stand", "H_21_6": "Stand", 
            "H_21_7": "Stand", "H_21_8": "Stand", "H_21_9": "Stand", "H_21_T": "Stand", "H_21_A": "Stand",
            "H_20_2": "Stand", "H_20_3": "Stand", "H_20_4": "Stand", "H_20_5": "Stand", "H_20_6": "Stand", 
            "H_20_7": "Stand", "H_20_8": "Stand", "H_20_9": "Stand", "H_20_T": "Stand", "H_20_A": "Stand",
            "H_19_2": "Stand", "H_19_3": "Stand", "H_19_4": "Stand", "H_19_5": "Stand", "H_19_6": "Stand", 
            "H_19_7": "Stand", "H_19_8": "Stand", "H_19_9": "Stand", "H_19_T": "Stand", "H_19_A": "Stand",
            "H_18_2": "Stand", "H_18_3": "Stand", "H_18_4": "Stand", "H_18_5": "Stand", "H_18_6": "Stand", 
            "H_18_7": "Stand", "H_18_8": "Stand", "H_18_9": "Stand", "H_18_T": "Stand", "H_18_A": "Stand",
            "H_17_2": "Stand", "H_17_3": "Stand", "H_17_4": "Stand", "H_17_5": "Stand", "H_17_6": "Stand", 
            "H_17_7": "Stand", "H_17_8": "Stand", "H_17_9": "Stand", "H_17_T": "Stand", "H_17_A": "Surrender",
            "H_16_2": "Stand", "H_16_3": "Stand", "H_16_4": "Stand", "H_16_5": "Stand", "H_16_6": "Stand", 
            "H_16_7": "Hit", "H_16_8": "Hit", "H_16_9": "Surrender", "H_16_T": "Surrender", "H_16_A": "Surrender",
            "H_15_2": "Stand", "H_15_3": "Stand", "H_15_4": "Stand", "H_15_5": "Stand", "H_15_6": "Stand", 
            "H_15_7": "Hit", "H_15_8": "Hit", "H_15_9": "Hit", "H_15_T": "Surrender", "H_15_A": "Surrender",
            "H_14_2": "Stand", "H_14_3": "Stand", "H_14_4": "Stand", "H_14_5": "Stand", "H_14_6": "Stand", 
            "H_14_7": "Hit", "H_14_8": "Hit", "H_14_9": "Hit", "H_14_T": "Hit", "H_14_A": "Hit",
            "H_13_2": "Stand", "H_13_3": "Stand", "H_13_4": "Stand", "H_13_5": "Stand", "H_13_6": "Stand", 
            "H_13_7": "Hit", "H_13_8": "Hit", "H_13_9": "Hit", "H_13_T": "Hit", "H_13_A": "Hit",
            "H_12_2": "Hit", "H_12_3": "Hit", "H_12_4": "Stand", "H_12_5": "Stand", "H_12_6": "Stand", 
            "H_12_7": "Hit", "H_12_8": "Hit", "H_12_9": "Hit", "H_12_T": "Hit", "H_12_A": "Hit",
            "H_11_2": "Double", "H_11_3": "Double", "H_11_4": "Double", "H_11_5": "Double", "H_11_6": "Double", 
            "H_11_7": "Double", "H_11_8": "Double", "H_11_9": "Double", "H_11_T": "Double", "H_11_A": "Double",
            "H_T_2": "Double", "H_T_3": "Double", "H_T_4": "Double", "H_T_5": "Double", "H_T_6": "Double", 
            "H_T_7": "Double", "H_T_8": "Double", "H_T_9": "Double", "H_T_T": "Hit", "H_T_A": "Hit",
            "H_9_2": "Hit", "H_9_3": "Double", "H_9_4": "Double", "H_9_5": "Double", "H_9_6": "Double", 
            "H_9_7": "Hit", "H_9_8": "Hit", "H_9_9": "Hit", "H_9_T": "Hit", "H_9_A": "Hit",
            "H_8_2": "Hit", "H_8_3": "Hit", "H_8_4": "Hit", "H_8_5": "Hit", "H_8_6": "Hit", 
            "H_8_7": "Hit", "H_8_8": "Hit", "H_8_9": "Hit", "H_8_T": "Hit", "H_8_A": "Hit",
            "H_7_2": "Hit", "H_7_3": "Hit", "H_7_4": "Hit", "H_7_5": "Hit", "H_7_6": "Hit", 
            "H_7_7": "Hit", "H_7_8": "Hit", "H_7_9": "Hit", "H_7_T": "Hit", "H_7_A": "Hit",
            "H_6_2": "Hit", "H_6_3": "Hit", "H_6_4": "Hit", "H_6_5": "Hit", "H_6_6": "Hit", 
            "H_6_7": "Hit", "H_6_8": "Hit", "H_6_9": "Hit", "H_6_T": "Hit", "H_6_A": "Hit",
            "H_5_2": "Hit", "H_5_3": "Hit", "H_5_4": "Hit", "H_5_5": "Hit", "H_5_6": "Hit", 
            "H_5_7": "Hit", "H_5_8": "Hit", "H_5_9": "Hit", "H_5_T": "Hit", "H_5_A": "Hit",
        })

        # Soft totals
        self.strategy_table.update({
            "S_A9_2": "Stand", "S_A9_3": "Stand", "S_A9_4": "Stand", "S_A9_5": "Stand", "S_A9_6": "Stand", 
            "S_A9_7": "Stand", "S_A9_8": "Stand", "S_A9_9": "Stand", "S_A9_T": "Stand", "S_A9_A": "Stand",
            "S_A8_2": "Stand", "S_A8_3": "Stand", "S_A8_4": "Stand", "S_A8_5": "Stand", "S_A8_6": "Double", 
            "S_A8_7": "Stand", "S_A8_8": "Stand", "S_A8_9": "Stand", "S_A8_T": "Stand", "S_A8_A": "Stand",
            "S_A7_2": "Double", "S_A7_3": "Double", "S_A7_4": "Double", "S_A7_5": "Double", "S_A7_6": "Double", 
            "S_A7_7": "Stand", "S_A7_8": "Stand", "S_A7_9": "Hit", "S_A7_T": "Hit", "S_A7_A": "Hit",
            "S_A6_2": "Hit", "S_A6_3": "Double", "S_A6_4": "Double", "S_A6_5": "Double", "S_A6_6": "Double", 
            "S_A6_7": "Hit", "S_A6_8": "Hit", "S_A6_9": "Hit", "S_A6_T": "Hit", "S_A6_A": "Hit",
            "S_A5_2": "Hit", "S_A5_3": "Double", "S_A5_4": "Double", "S_A5_5": "Double", "S_A5_6": "Double", 
            "S_A5_7": "Hit", "S_A5_8": "Hit", "S_A5_9": "Hit", "S_A5_T": "Hit", "S_A5_A": "Hit",
            "S_A4_2": "Hit", "S_A4_3": "Hit", "S_A4_4": "Double", "S_A4_5": "Double", "S_A4_6": "Double", 
            "S_A4_7": "Hit", "S_A4_8": "Hit", "S_A4_9": "Hit", "S_A4_T": "Hit", "S_A4_A": "Hit",
            "S_A3_2": "Hit", "S_A3_3": "Hit", "S_A3_4": "Hit", "S_A3_5": "Double", "S_A3_6": "Double", 
            "S_A3_7": "Hit", "S_A3_8": "Hit", "S_A3_9": "Hit", "S_A3_T": "Hit", "S_A3_A": "Hit",
            "S_A2_2": "Hit", "S_A2_3": "Hit", "S_A2_4": "Hit", "S_A2_5": "Double", "S_A2_6": "Double", 
            "S_A2_7": "Hit", "S_A2_8": "Hit", "S_A2_9": "Hit", "S_A2_T": "Hit", "S_A2_A": "Hit",
        })

        # Pairs
        self.strategy_table.update({
            "P_AA_2": "Split", "P_AA_3": "Split", "P_AA_4": "Split", "P_AA_5": "Split", "P_AA_6": "Split", 
            "P_AA_7": "Split", "P_AA_8": "Split", "P_AA_9": "Split", "P_AA_T": "Split", "P_AA_A": "Split",
            "P_TT_2": "Stand", "P_TT_3": "Stand", "P_TT_4": "Stand", "P_TT_5": "Stand", "P_TT_6": "Stand", 
            "P_TT_7": "Stand", "P_TT_8": "Stand", "P_TT_9": "Stand", "P_TT_T": "Stand", "P_TT_A": "Stand",
            "P_99_2": "Split", "P_99_3": "Split", "P_99_4": "Split", "P_99_5": "Split", "P_99_6": "Split", 
            "P_99_7": "Stand", "P_99_8": "Split", "P_99_9": "Split", "P_99_T": "Stand", "P_99_A": "Stand",
            "P_88_2": "Split", "P_88_3": "Split", "P_88_4": "Split", "P_88_5": "Split", "P_88_6": "Split", 
            "P_88_7": "Split", "P_88_8": "Split", "P_88_9": "Split", "P_88_T": "Split", "P_88_A": "Split",
            "P_77_2": "Split", "P_77_3": "Split", "P_77_4": "Split", "P_77_5": "Split", "P_77_6": "Split", 
            "P_77_7": "Split", "P_77_8": "Hit", "P_77_9": "Hit", "P_77_T": "Hit", "P_77_A": "Hit",
            "P_66_2": "Split", "P_66_3": "Split", "P_66_4": "Split", "P_66_5": "Split", "P_66_6": "Split", 
            "P_66_7": "Hit", "P_66_8": "Hit", "P_66_9": "Hit", "P_66_T": "Hit", "P_66_A": "Hit",
            "P_55_2": "Double", "P_55_3": "Double", "P_55_4": "Double", "P_55_5": "Double", "P_55_6": "Double", 
            "P_55_7": "Hit", "P_55_8": "Hit", "P_55_9": "Hit", "P_55_T": "Hit", "P_55_A": "Hit",
            "P_44_2": "Hit", "P_44_3": "Hit", "P_44_4": "Hit", "P_44_5": "Split", "P_44_6": "Split", 
            "P_44_7": "Hit", "P_44_8": "Hit", "P_44_9": "Hit", "P_44_T": "Hit", "P_44_A": "Hit",
            "P_33_2": "Split", "P_33_3": "Split", "P_33_4": "Split", "P_33_5": "Split", "P_33_6": "Split", 
            "P_33_7": "Hit", "P_33_8": "Hit", "P_33_9": "Hit", "P_33_T": "Hit", "P_33_A": "Hit",
            "P_22_2": "Split", "P_22_3": "Split", "P_22_4": "Split", "P_22_5": "Split", "P_22_6": "Split", 
            "P_22_7": "Hit", "P_22_8": "Hit", "P_22_9": "Hit", "P_22_T": "Hit", "P_22_A": "Hit",
        })

    def determine_card_total_type(self, hand):
        if len(hand) == 2 and hand[0] == hand[1]:
            return "P"
        elif 'A' in hand:
            total = sum(card if card != 'A' else 1 for card in hand) + 11
            if total <= 21:
                return "S"
        return "H"
    
    def get_hand_value(self, hand):
        if 'A' in hand and self.determine_card_total_type(hand) == "S":
            return sum(card if card != 'A' else 1 for card in hand) + 11
        else:
            return sum(hand)

    def get_decision(self, hand, dealer_value):
        card_total_type = self.determine_card_total_type(hand)
        hand_value = self.get_hand_value(hand)
        key = f"{card_total_type}_{hand_value}_{dealer_value}"
        return self.strategy_table.get(key, "Invalid")