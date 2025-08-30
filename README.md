# 🕹️ The Battle for Zhion (TBFZ)

![Banner de The Battle for Zhion](docs/images/banner_zhion.png)

**The Battle for Zhion** es un **FPS / Battle Royale** que forma parte de la **suite de juegos de Reality of Madness**. Está siendo desarrollado por **Inside Dark Studio** con **Unreal Engine 5** y está pensado para ejecutarse en PC (y, a futuro, web) con integración Web3 en **Internet Computer (ICP)**.

- Sitio del estudio: https://insidedarkstudio.com
- Sitio del universo ROM: https://realityofmadness.com
- Docs ROM: https://docs.realityofmadness.com
- Discord: https://discord.gg/byYXnpyp

---

## 🚀 Estado del proyecto
- 🟢 MVP jugable (Deathmatch)
- 🔧 HUD y UX en iteración
- 🔗 Integración inicial con ICP (login/identidad y lectura de assets)
- 🔜 Próximamente: **Battle Royale**, progresión, canje de NFTs y localización multilenguaje

---

## 🎮 Características clave
- Shooter en **primera persona** con base **Lyra** y gameplay modular
- Modos previstos: **Deathmatch**, **Battle Royale** y **PvE de eventos**
- Inventario y selección de **personajes favoritos**, persistencia de perfil
- **HUD** para Frontend/Backend bridge (login, selección de personaje, estado de red)
- Integración con canisters para **NFTs / Tokens** (lectura/escritura prevista)
- Pipelines de **build** para Windows y exportables

---

## 🧱 Estructura de carpetas (UE5)
```
/Config/                         # Ajustes del proyecto y builds
/Content/                        # Assets y mapas
  /Characters/                   # Personajes (mallas, animaciones, data assets)
  /Environments/                 # Escenarios (SkyTown, CyberPunkKyiv, Village, Cave_Ruins, etc.)
  /Weapons/                      # Armas (rifles, melee, VFX, sonidos)
  /UI/                           # Widgets, HUD, fuentes e iconos
  /VFX/                          # Paquetes de efectos (BlinkAndDashVFX, Realistic_Starter_VFX_Pack_Vol2, etc.)
  /IDS_ASSETS/                   # Recursos propios del estudio
  /Sequences/                    # Secuencias y renders
  /Audio/                        # Sonidos y música
  /Feedback/                     # Notificaciones y mensajes de gameplay
  /Heart/                        # Core del proyecto (mapas y protos principales)
/Plugins/                        # Plugins del proyecto
/Source/                         # Código C++ (si aplica)
/docs/                           # Documentación y material de comunicación
TheBattleForZion.uproject        # Proyecto UE5
```
> Nota: La lista resume y normaliza nombres vistos en el repo para que cualquier colaborador identifique los paquetes más importantes.

---

## 🔌 Plugins y paquetes usados (activar/instalar)
**Plugins UE (Lyra & Modular Gameplay)**
- `AsyncMixin`, `CommonGame`, `CommonLoadingScreen`, `CommonUser`
- `GameFeatures`, `GameSettings`, `GameSubtitles`
- `GameplayMessageRouter`, `ModularGameplayActors`
- `LyraExampleContent`, `LyraExtTool`, `PocketWorlds`
- `UIExtension`

**Packs/Assets de Marketplace (contenido)**
- `UltraDynamicSky` (cielo / clima)
- `BlinkAndDashVFX`, `ContextEffects`, `GameplayCueNotifies`
- `Realistic_Starter_VFX_Pack_Vol2`, `MegaMagicVFXBundle`
- Escenarios/props: `CyberPunkKyiv`, `Sci_Fi_Valley_Village`, `Cave_Ruins`, `BrutalistLevelKit`, `Village`, `SoulCave`

> Si algún paquete no está disponible en tu máquina, puedes reemplazarlo por placeholders estándar de UE5 para desarrollo.

---

## 🧰 Requisitos y stack
- **Motor:** Unreal Engine **5.3+** (desarrollado y probado en 5.6 en el estudio)
- **Lenguajes:** C++ + **Blueprints**
- **Netcode:** Replicación nativa UE + lógica de emparejamiento/estados propia
- **Web3:** Canisters en ICP (login, perfiles, inventario)
- **CI/CD:** Scripts de empaquetado y MoviePipeline para renders (si aplica)

---

## ⚙️ Cómo compilar y ejecutar
1) Clona el repositorio
```bash
git clone <REPO_URL>
```
2) Abre `TheBattleForZion.uproject` con UE5 (5.6 recomendado).
3) Si usas C++: genera archivos y compila (Windows)
```bash
./GenerateProjectFiles.bat
./Build.bat
```
4) Ejecuta en el editor (**PIE**) o empaqueta: **File → Package Project → Windows**.

---

## 🌐 Integración ICP (resumen)
- **Login/Identidad:** bridge hacia canisters para autenticar al jugador
- **Perfiles y favoritos:** lectura/escritura de `CharactersData` y estado de perfil
- **Assets Web3:** lectura de **NFTs/Tokens** del jugador (interoperabilidad planificada)
- **Pruebas locales:** `dfx start` + mocks de identidad durante desarrollo

> La integración completa se documenta en `docs/icp_integration.md` (WIP).

---

## 🧪 Testing
- **Multiplayer local (PIE)** con varias ventanas/instancias
- Validación de HUD y estados de red
- QA rápido de animaciones/combate (melee & firearms)
- Pruebas Web3 en entorno local (mock) y staging (cuando esté disponible)

---

## 👥 Equipo
- **Mariano Stoll** — Director General
- **Francisco Rappazzini** — CTO
- **Francisca Nicole Morales Calquín** — COO
- **Lautaro Padró** — Game Designer
- **Lucía Mamut** — Game Art

---

## 🗺️ Roadmap (Q3–Q4 2025)
- Optimización de **netcode** para 60+ jugadores
- Modo **Battle Royale** (zonas, círculos, respawn y loot)
- Canje/uso de **NFTs** en inventario (cosméticos y pases)
- Localización: **ES / EN / PT**
- Mejoras de animaciones y blending

---

## 📫 Canales de comunicación
- **Issues** y tareas: tablero del repo (GitHub Projects)
- **Soporte técnico:** canal de #dev-support en **Discord**
- **Prensa/negocios:** contacto vía web

---

## 📄 Licencia
Proyecto propiedad de **Inside Dark Studio**.  
Prohibida su distribución o uso comercial sin autorización expresa.
