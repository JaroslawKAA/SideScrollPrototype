# SideScrollPrototype

--- Mechaniki ---

1. Gracz:
  - Ruch w dwóch wymiarach
  - Kontrola równoległa do kamery
  - Maszyna Stanów - LocomotionState, AttackState, DodgeState

2. Mechanika kamery - BP_CameraManager:
  - Ruch po krzywej (spline)
  - Punkt zainteresowania kamery (Camera LookAt Point)
  - Maszyna stanów z jednym stanem OnSplineCameraState

3. AI Przeciwnika - BP_Enemy, BP_AIController_Enemy:
   - Zachowanie przeciwnika oparte na Behavior Tree
   - Przeciwnik posiada stan domyślny RoamAround dopóki nie zauważy gracza
   - Po zauważeniu gracza przeciwnik atakuje gracza
   - Skuteczny atak obniża punkty zycia gracza i odtwarza dźwięk
   - Przeciwnik znajduje AttackTarget sprawdzając czy widoczny objekt implementuje odpowiedni interfejs

4. UI - BP_HUD:
   - Pasek życia i wytrzymałości
   - Paski aktualizują się gdy gracz dozna obrażeń, porusza się lub skutecznie atakuje
   - Licznik żyć - po wyczerpaniu życia gracza licznik się zmniejsza, a pasek zdrowia się odnawia
  
5. Tryb gry - BP_GameMode:
   -  Maszyna stanów z domyślnym stanem TPPGameState
   -  TPPGameState tworzy HUD na OnEnter
  
6. Sterowanie - IMC_Default:
   - Move - WSAD/LeftStick
   - Jump - Space/TopButton
   - Left attack - LeftArrow/LeftShoulder
   - Right attack - RightArrow/RightShoulder
   - Strong left attack - Shift+LeftArrow/LeftTrigger
   - Strong right attack - Shift+RightArrow/RightTrigger
