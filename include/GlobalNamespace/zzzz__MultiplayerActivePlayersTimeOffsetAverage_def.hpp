#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace GlobalNamespace {
class IMultiplayerObservable;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerActivePlayersTimeOffsetAverage;
}
// Type: ::MultiplayerActivePlayersTimeOffsetAverage
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5289))
// CS Name: MultiplayerActivePlayersTimeOffsetAverage
class CORDL_TYPE MultiplayerActivePlayersTimeOffsetAverage : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IMultiplayerObservable
constexpr operator  GlobalNamespace::IMultiplayerObservable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MultiplayerActivePlayersTimeOffsetAverage() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerActivePlayersTimeOffsetAverage", modifiers: " const&", def_value: None }]
constexpr MultiplayerActivePlayersTimeOffsetAverage(MultiplayerActivePlayersTimeOffsetAverage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerActivePlayersTimeOffsetAverage", modifiers: "&&", def_value: None }]
constexpr MultiplayerActivePlayersTimeOffsetAverage(MultiplayerActivePlayersTimeOffsetAverage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerActivePlayersTimeOffsetAverage(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MultiplayerActivePlayersTimeOffsetAverage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerActivePlayersTimeOffsetAverage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerActivePlayersTimeOffsetAverage& operator=(MultiplayerActivePlayersTimeOffsetAverage&& o) noexcept = default;
  constexpr MultiplayerActivePlayersTimeOffsetAverage& operator=(MultiplayerActivePlayersTimeOffsetAverage const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 float_t __declspec(property(get=__get__lastReturnedOffsetSyncTime, put=__set__lastReturnedOffsetSyncTime))  _lastReturnedOffsetSyncTime;

constexpr void __set__lastReturnedOffsetSyncTime(float_t value) ;

constexpr float_t __get__lastReturnedOffsetSyncTime() const;

 float_t __declspec(property(get=__get__timeOfLastValidReturnedTime, put=__set__timeOfLastValidReturnedTime))  _timeOfLastValidReturnedTime;

constexpr void __set__timeOfLastValidReturnedTime(float_t value) ;

constexpr float_t __get__timeOfLastValidReturnedTime() const;


// Properties

 float_t __declspec(property(get=get_offsetSyncTime))  offsetSyncTime;

 bool __declspec(property(get=get_isFailed))  isFailed;


// Methods

/// @brief Method get_offsetSyncTime addr 0x20efc00 size 0x214 virtual true final true
 float_t get_offsetSyncTime() ;

/// @brief Method get_isFailed addr 0x20efe14 size 0x148 virtual true final true
 bool get_isFailed() ;

static GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage New_ctor() ;

/// @brief Method .ctor addr 0x20eff5c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage, "", "MultiplayerActivePlayersTimeOffsetAverage");
