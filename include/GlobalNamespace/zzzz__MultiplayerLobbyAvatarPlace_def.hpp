#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLobbyAvatarPlace;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MultiplayerLobbyAvatarPlace__Pool;
}
// Type: ::MultiplayerLobbyAvatarPlace
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4104))
// CS Name: MultiplayerLobbyAvatarPlace
class CORDL_TYPE MultiplayerLobbyAvatarPlace : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Pool = ::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyAvatarPlace__Pool;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MultiplayerLobbyAvatarPlace() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarPlace", modifiers: " const&", def_value: None }]
constexpr MultiplayerLobbyAvatarPlace(MultiplayerLobbyAvatarPlace const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarPlace", modifiers: "&&", def_value: None }]
constexpr MultiplayerLobbyAvatarPlace(MultiplayerLobbyAvatarPlace&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLobbyAvatarPlace(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerLobbyAvatarPlace& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLobbyAvatarPlace& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLobbyAvatarPlace& operator=(MultiplayerLobbyAvatarPlace&& o) noexcept = default;
  constexpr MultiplayerLobbyAvatarPlace& operator=(MultiplayerLobbyAvatarPlace const& o) noexcept = default;
                


// Methods

/// @brief Method SetPositionAndRotation addr 0x20c512c size 0x78 virtual false final false
 void SetPositionAndRotation(::UnityEngine::Vector3 worldPos, ::UnityEngine::Quaternion rotation) ;

// Ctor Parameters []
explicit MultiplayerLobbyAvatarPlace() ;

/// @brief Method .ctor addr 0x20c51a4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4104)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 2717 }), TypeDefinitionIndex(TypeDefinitionIndex(10992))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4103))
// CS Name: MultiplayerLobbyAvatarPlace::Pool
class CORDL_TYPE ____GlobalNamespace__MultiplayerLobbyAvatarPlace__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::MultiplayerLobbyAvatarPlace> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____GlobalNamespace__MultiplayerLobbyAvatarPlace__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerLobbyAvatarPlace__Pool", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerLobbyAvatarPlace__Pool(____GlobalNamespace__MultiplayerLobbyAvatarPlace__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerLobbyAvatarPlace__Pool", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerLobbyAvatarPlace__Pool(____GlobalNamespace__MultiplayerLobbyAvatarPlace__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MultiplayerLobbyAvatarPlace__Pool(void* ptr) noexcept : ::Zenject::MonoMemoryPool_1<::GlobalNamespace::MultiplayerLobbyAvatarPlace>(ptr) {
}


  constexpr ____GlobalNamespace__MultiplayerLobbyAvatarPlace__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerLobbyAvatarPlace__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerLobbyAvatarPlace__Pool& operator=(____GlobalNamespace__MultiplayerLobbyAvatarPlace__Pool&& o) noexcept = default;
  constexpr ____GlobalNamespace__MultiplayerLobbyAvatarPlace__Pool& operator=(____GlobalNamespace__MultiplayerLobbyAvatarPlace__Pool const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MultiplayerLobbyAvatarPlace__Pool() ;

/// @brief Method .ctor addr 0x20c51ac size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyAvatarPlace);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyAvatarPlace, "", "MultiplayerLobbyAvatarPlace");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyAvatarPlace__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyAvatarPlace__Pool, "", "MultiplayerLobbyAvatarPlace/Pool");