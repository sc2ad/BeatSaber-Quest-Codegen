#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class INodePoseSyncStateManager;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalInactiveClient;
}
// Type: ::MultiplayerLocalInactiveClient
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5259))
// CS Name: MultiplayerLocalInactiveClient
class CORDL_TYPE MultiplayerLocalInactiveClient : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MultiplayerLocalInactiveClient() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactiveClient", modifiers: " const&", def_value: None }]
constexpr MultiplayerLocalInactiveClient(MultiplayerLocalInactiveClient const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactiveClient", modifiers: "&&", def_value: None }]
constexpr MultiplayerLocalInactiveClient(MultiplayerLocalInactiveClient&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLocalInactiveClient(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerLocalInactiveClient& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLocalInactiveClient& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLocalInactiveClient& operator=(MultiplayerLocalInactiveClient&& o) noexcept = default;
  constexpr MultiplayerLocalInactiveClient& operator=(MultiplayerLocalInactiveClient const& o) noexcept = default;
                


// Fields

 GlobalNamespace::PlayerTransforms __declspec(property(get=__get__playerTransforms, put=__set__playerTransforms))  _playerTransforms;

constexpr void __set__playerTransforms(GlobalNamespace::PlayerTransforms value) ;

constexpr GlobalNamespace::PlayerTransforms __get__playerTransforms() const;

 GlobalNamespace::INodePoseSyncStateManager __declspec(property(get=__get__nodePoseSyncStateManager, put=__set__nodePoseSyncStateManager))  _nodePoseSyncStateManager;

constexpr void __set__nodePoseSyncStateManager(GlobalNamespace::INodePoseSyncStateManager value) ;

constexpr GlobalNamespace::INodePoseSyncStateManager __get__nodePoseSyncStateManager() const;


// Methods

/// @brief Method LateUpdate addr 0x20e81b8 size 0x348 virtual false final false
 void LateUpdate() ;

static GlobalNamespace::MultiplayerLocalInactiveClient New_ctor() ;

/// @brief Method .ctor addr 0x20e8500 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerLocalInactiveClient);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalInactiveClient, "", "MultiplayerLocalInactiveClient");
