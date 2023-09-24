#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace GlobalNamespace {
class IMultiplayerObservable;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerObservable;
}
// Type: ::MultiplayerConnectedPlayerObservable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5296))
// CS Name: MultiplayerConnectedPlayerObservable
class CORDL_TYPE MultiplayerConnectedPlayerObservable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IMultiplayerObservable
constexpr operator  GlobalNamespace::IMultiplayerObservable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MultiplayerConnectedPlayerObservable() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerObservable", modifiers: " const&", def_value: None }]
constexpr MultiplayerConnectedPlayerObservable(MultiplayerConnectedPlayerObservable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerObservable", modifiers: "&&", def_value: None }]
constexpr MultiplayerConnectedPlayerObservable(MultiplayerConnectedPlayerObservable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerConnectedPlayerObservable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MultiplayerConnectedPlayerObservable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerObservable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerObservable& operator=(MultiplayerConnectedPlayerObservable&& o) noexcept = default;
  constexpr MultiplayerConnectedPlayerObservable& operator=(MultiplayerConnectedPlayerObservable const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IConnectedPlayer __declspec(property(get=__get__connectedPlayer, put=__set__connectedPlayer))  _connectedPlayer;

constexpr void __set__connectedPlayer(GlobalNamespace::IConnectedPlayer value) ;

constexpr GlobalNamespace::IConnectedPlayer __get__connectedPlayer() const;


// Properties

 float_t __declspec(property(get=get_offsetSyncTime))  offsetSyncTime;

 bool __declspec(property(get=get_isFailed))  isFailed;


// Methods

static GlobalNamespace::MultiplayerConnectedPlayerObservable New_ctor(GlobalNamespace::IConnectedPlayer connectedPlayer) ;

/// @brief Method .ctor addr 0x20f1690 size 0x28 virtual false final false
 void _ctor(GlobalNamespace::IConnectedPlayer connectedPlayer) ;

/// @brief Method get_offsetSyncTime addr 0x20f16b8 size 0xa4 virtual true final true
 float_t get_offsetSyncTime() ;

/// @brief Method get_isFailed addr 0x20f175c size 0xc virtual true final true
 bool get_isFailed() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerConnectedPlayerObservable);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerObservable, "", "MultiplayerConnectedPlayerObservable");
