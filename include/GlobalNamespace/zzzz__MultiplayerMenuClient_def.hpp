#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class MenuPlayerController;
}
namespace GlobalNamespace {
class INodePoseSyncStateManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerMenuClient;
}
// Type: ::MultiplayerMenuClient
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5671))
// CS Name: MultiplayerMenuClient
class CORDL_TYPE MultiplayerMenuClient : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MultiplayerMenuClient() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerMenuClient", modifiers: " const&", def_value: None }]
constexpr MultiplayerMenuClient(MultiplayerMenuClient const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerMenuClient", modifiers: "&&", def_value: None }]
constexpr MultiplayerMenuClient(MultiplayerMenuClient&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerMenuClient(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerMenuClient& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerMenuClient& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerMenuClient& operator=(MultiplayerMenuClient&& o) noexcept = default;
  constexpr MultiplayerMenuClient& operator=(MultiplayerMenuClient const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MenuPlayerController __declspec(property(get=__get__menuPlayerController, put=__set__menuPlayerController))  _menuPlayerController;

constexpr void __set__menuPlayerController(GlobalNamespace::MenuPlayerController value) ;

constexpr GlobalNamespace::MenuPlayerController __get__menuPlayerController() const;

 GlobalNamespace::INodePoseSyncStateManager __declspec(property(get=__get__nodePoseSyncStateManager, put=__set__nodePoseSyncStateManager))  _nodePoseSyncStateManager;

constexpr void __set__nodePoseSyncStateManager(GlobalNamespace::INodePoseSyncStateManager value) ;

constexpr GlobalNamespace::INodePoseSyncStateManager __get__nodePoseSyncStateManager() const;


// Methods

/// @brief Method LateUpdate addr 0x214f990 size 0x378 virtual false final false
 void LateUpdate() ;

static GlobalNamespace::MultiplayerMenuClient New_ctor() ;

/// @brief Method .ctor addr 0x214fd08 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerMenuClient);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerMenuClient, "", "MultiplayerMenuClient");
