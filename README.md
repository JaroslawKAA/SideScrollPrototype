# SideScrollPrototype
Unreal Engine 5.4

--- Opis ---

Projekt to prototyp gry side scroll. Wykorzystano projekt startowy ThirdPersonPlayer oraz animacje Mixamo.
![image](https://github.com/user-attachments/assets/7bfb6f59-c2c9-4aad-b7e8-74336b77a556)

--- Uruchomienie ---

1. Zainstaluje plugin Low Entry - Extended Standard Library w edytorze Unreal Engine
2. Otwórz scenę SideScrollPrototype/Content/ThirdPerson/Maps/ThirdPersonMap.level
3. Wciśnij przycisk Play

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
