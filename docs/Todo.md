- Core logic:
    - Implement a way to initialize shoes of multiple decks. (DONE)
    - Implement a way to re-initialize and shuffle shoe when enough have been dealt. (DONE)
    - Implement value calculation (including with aces). (DONE)

- Clear unused code
- Implement classifyHand in DecisionMaker (DONE)
- Implement getBestStrat basic strategy in DecisionMaker (DONE)
- Implement getBestStrat deviations in DecisionMaker (DONE)
- Implement insurance?
- Implement betting recomendations

- In DecisionMaker::getBestStrat(), runningCount may need to be used rather than trueCount, don't think so though
    - Also currently assuming that the 18 deviations don't seem to occur on soft hands