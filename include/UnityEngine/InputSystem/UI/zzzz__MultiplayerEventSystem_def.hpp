#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
namespace {
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
class MultiplayerEventSystem;
}
// Type: UnityEngine.InputSystem.UI::MultiplayerEventSystem
namespace UnityEngine::InputSystem::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13130))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6460))
// CS Name: UnityEngine.InputSystem.UI.MultiplayerEventSystem
class CORDL_TYPE MultiplayerEventSystem : public ::UnityEngine::EventSystems::EventSystem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~MultiplayerEventSystem() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerEventSystem", modifiers: " const&", def_value: None }]
constexpr MultiplayerEventSystem(MultiplayerEventSystem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerEventSystem", modifiers: "&&", def_value: None }]
constexpr MultiplayerEventSystem(MultiplayerEventSystem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerEventSystem(void* ptr) noexcept : ::UnityEngine::EventSystems::EventSystem(ptr) {
}


  constexpr MultiplayerEventSystem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerEventSystem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerEventSystem& operator=(MultiplayerEventSystem&& o) noexcept = default;
  constexpr MultiplayerEventSystem& operator=(MultiplayerEventSystem const& o) noexcept = default;
                


// Fields

 ::UnityEngine::GameObject __declspec(property(get=__get_m_PlayerRoot, put=__set_m_PlayerRoot))  m_PlayerRoot;

constexpr void __set_m_PlayerRoot(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_m_PlayerRoot() const;


// Properties

 ::UnityEngine::GameObject __declspec(property(get=get_playerRoot, put=set_playerRoot))  playerRoot;


// Methods

/// @brief Method get_playerRoot addr 0x2942ba0 size 0x8 virtual false final false
 ::UnityEngine::GameObject get_playerRoot() ;

/// @brief Method set_playerRoot addr 0x2942ba8 size 0x8 virtual false final false
 void set_playerRoot(::UnityEngine::GameObject value) ;

/// @brief Method OnEnable addr 0x2942c74 size 0x1c virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2942c90 size 0x8 virtual true final false
 void OnDisable() ;

/// @brief Method InitializePlayerRoot addr 0x2942bb0 size 0xc4 virtual false final false
 void InitializePlayerRoot() ;

/// @brief Method Update addr 0x2942c98 size 0x108 virtual true final false
 void Update() ;

// Ctor Parameters []
explicit MultiplayerEventSystem() ;

/// @brief Method .ctor addr 0x2942da0 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::UI
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::UI::MultiplayerEventSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::MultiplayerEventSystem, "UnityEngine.InputSystem.UI", "MultiplayerEventSystem");
