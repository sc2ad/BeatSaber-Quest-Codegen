#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
class MultiplayerActivePlayersTimeOffsetAverage;
}
namespace GlobalNamespace {
class IMultiplayerSpectatingSpot;
}
namespace GlobalNamespace {
class IMultiplayerObservable;
}
namespace GlobalNamespace {
class MultiplayerSpectatingSpotManager;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerEnvironmentSpectatingSpot;
}
// Type: ::MultiplayerEnvironmentSpectatingSpot
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5350))
// CS Name: MultiplayerEnvironmentSpectatingSpot
class CORDL_TYPE MultiplayerEnvironmentSpectatingSpot : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IMultiplayerSpectatingSpot
constexpr operator  ::GlobalNamespace::IMultiplayerSpectatingSpot() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MultiplayerEnvironmentSpectatingSpot() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerEnvironmentSpectatingSpot", modifiers: " const&", def_value: None }]
constexpr MultiplayerEnvironmentSpectatingSpot(MultiplayerEnvironmentSpectatingSpot const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerEnvironmentSpectatingSpot", modifiers: "&&", def_value: None }]
constexpr MultiplayerEnvironmentSpectatingSpot(MultiplayerEnvironmentSpectatingSpot&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerEnvironmentSpectatingSpot(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerEnvironmentSpectatingSpot& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerEnvironmentSpectatingSpot& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerEnvironmentSpectatingSpot& operator=(MultiplayerEnvironmentSpectatingSpot&& o) noexcept = default;
  constexpr MultiplayerEnvironmentSpectatingSpot& operator=(MultiplayerEnvironmentSpectatingSpot const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__preferredSpectatingSpot, put=__set__preferredSpectatingSpot))  _preferredSpectatingSpot;

constexpr void __set__preferredSpectatingSpot(bool value) ;

constexpr bool __get__preferredSpectatingSpot() const;

 bool __declspec(property(get=__get__displaySpotNumber, put=__set__displaySpotNumber))  _displaySpotNumber;

constexpr void __set__displaySpotNumber(bool value) ;

constexpr bool __get__displaySpotNumber() const;

 int32_t __declspec(property(get=__get__spotNumber, put=__set__spotNumber))  _spotNumber;

constexpr void __set__spotNumber(int32_t value) ;

constexpr int32_t __get__spotNumber() const;

 ::GlobalNamespace::MultiplayerSpectatingSpotManager __declspec(property(get=__get__spectatingSpotManager, put=__set__spectatingSpotManager))  _spectatingSpotManager;

constexpr void __set__spectatingSpotManager(::GlobalNamespace::MultiplayerSpectatingSpotManager value) ;

constexpr ::GlobalNamespace::MultiplayerSpectatingSpotManager __get__spectatingSpotManager() const;

 ::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage __declspec(property(get=__get__activePlayersTimeOffsetAverage, put=__set__activePlayersTimeOffsetAverage))  _activePlayersTimeOffsetAverage;

constexpr void __set__activePlayersTimeOffsetAverage(::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage value) ;

constexpr ::GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage __get__activePlayersTimeOffsetAverage() const;

 ::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot> __declspec(property(get=__get_hasBeenRemovedEvent, put=__set_hasBeenRemovedEvent))  hasBeenRemovedEvent;

constexpr void __set_hasBeenRemovedEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot> value) ;

constexpr ::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot> __get_hasBeenRemovedEvent() const;


// Properties

 ::GlobalNamespace::IMultiplayerObservable __declspec(property(get=get_observable))  observable;

 ::StringW __declspec(property(get=get_spotName))  spotName;

 bool __declspec(property(get=get_isMain))  isMain;


// Methods

/// @brief Method add_hasBeenRemovedEvent addr 0x2105fb8 size 0xb0 virtual true final true
 void add_hasBeenRemovedEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot> value) ;

/// @brief Method remove_hasBeenRemovedEvent addr 0x2106068 size 0xb0 virtual true final true
 void remove_hasBeenRemovedEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot> value) ;

/// @brief Method get_observable addr 0x2106118 size 0x8 virtual true final true
 ::GlobalNamespace::IMultiplayerObservable get_observable() ;

/// @brief Method get_spotName addr 0x2106120 size 0xbc virtual true final true
 ::StringW get_spotName() ;

/// @brief Method get_isMain addr 0x21061dc size 0x8 virtual true final true
 bool get_isMain() ;

/// @brief Method Start addr 0x21061e4 size 0x1c virtual false final false
 void Start() ;

/// @brief Method OnDisable addr 0x2106200 size 0x20 virtual false final false
 void OnDisable() ;

/// @brief Method SetIsObserved addr 0x2106220 size 0x4 virtual true final true
 void SetIsObserved(bool isObserved) ;

// Ctor Parameters []
explicit MultiplayerEnvironmentSpectatingSpot() ;

/// @brief Method .ctor addr 0x2106224 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method IMultiplayerSpectatingSpot.get_transform addr 0x210622c size 0x8 virtual true final true
 ::UnityEngine::Transform IMultiplayerSpectatingSpot_get_transform() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerEnvironmentSpectatingSpot);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerEnvironmentSpectatingSpot, "", "MultiplayerEnvironmentSpectatingSpot");
