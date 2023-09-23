#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace GlobalNamespace {
class MultiplayerScoreProvider;
}
namespace GlobalNamespace {
class MultiplayerController;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerController__State;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerScoreProvider__RankedPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLeadPlayerProvider;
}
// Type: ::MultiplayerLeadPlayerProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5315))
// CS Name: MultiplayerLeadPlayerProvider
class CORDL_TYPE MultiplayerLeadPlayerProvider : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MultiplayerLeadPlayerProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLeadPlayerProvider", modifiers: " const&", def_value: None }]
constexpr MultiplayerLeadPlayerProvider(MultiplayerLeadPlayerProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLeadPlayerProvider", modifiers: "&&", def_value: None }]
constexpr MultiplayerLeadPlayerProvider(MultiplayerLeadPlayerProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLeadPlayerProvider(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerLeadPlayerProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLeadPlayerProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLeadPlayerProvider& operator=(MultiplayerLeadPlayerProvider&& o) noexcept = default;
  constexpr MultiplayerLeadPlayerProvider& operator=(MultiplayerLeadPlayerProvider const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__timeToGainFirstLead, put=__set__timeToGainFirstLead))  _timeToGainFirstLead;

constexpr void __set__timeToGainFirstLead(float_t value) ;

constexpr float_t __get__timeToGainFirstLead() const;

 float_t __declspec(property(get=__get__timeToLooseLead, put=__set__timeToLooseLead))  _timeToLooseLead;

constexpr void __set__timeToLooseLead(float_t value) ;

constexpr float_t __get__timeToLooseLead() const;

 GlobalNamespace::MultiplayerScoreProvider __declspec(property(get=__get__scoreProvider, put=__set__scoreProvider))  _scoreProvider;

constexpr void __set__scoreProvider(GlobalNamespace::MultiplayerScoreProvider value) ;

constexpr GlobalNamespace::MultiplayerScoreProvider __get__scoreProvider() const;

 GlobalNamespace::MultiplayerController __declspec(property(get=__get__multiplayerController, put=__set__multiplayerController))  _multiplayerController;

constexpr void __set__multiplayerController(GlobalNamespace::MultiplayerController value) ;

constexpr GlobalNamespace::MultiplayerController __get__multiplayerController() const;

 System::Action_1<::StringW> __declspec(property(get=__get_newLeaderWasSelectedEvent, put=__set_newLeaderWasSelectedEvent))  newLeaderWasSelectedEvent;

constexpr void __set_newLeaderWasSelectedEvent(System::Action_1<::StringW> value) ;

constexpr System::Action_1<::StringW> __get_newLeaderWasSelectedEvent() const;

 float_t __declspec(property(get=__get__currentLeadingPlayerStartTime, put=__set__currentLeadingPlayerStartTime))  _currentLeadingPlayerStartTime;

constexpr void __set__currentLeadingPlayerStartTime(float_t value) ;

constexpr float_t __get__currentLeadingPlayerStartTime() const;

 GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer __declspec(property(get=__get__currentlyDisplayedUser, put=__set__currentlyDisplayedUser))  _currentlyDisplayedUser;

constexpr void __set__currentlyDisplayedUser(GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer value) ;

constexpr GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer __get__currentlyDisplayedUser() const;

 GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer __declspec(property(get=__get__currentlyLeadingUser, put=__set__currentlyLeadingUser))  _currentlyLeadingUser;

constexpr void __set__currentlyLeadingUser(GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer value) ;

constexpr GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer __get__currentlyLeadingUser() const;


// Methods

/// @brief Method add_newLeaderWasSelectedEvent addr 0x20f78e4 size 0xb0 virtual false final false
 void add_newLeaderWasSelectedEvent(System::Action_1<::StringW> value) ;

/// @brief Method remove_newLeaderWasSelectedEvent addr 0x20f7834 size 0xb0 virtual false final false
 void remove_newLeaderWasSelectedEvent(System::Action_1<::StringW> value) ;

/// @brief Method Start addr 0x20fa8ec size 0xb0 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20fa9ac size 0x164 virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x20fab10 size 0x98 virtual false final false
 void Update() ;

/// @brief Method StopProviding addr 0x20faba8 size 0x9c virtual false final false
 void StopProviding() ;

/// @brief Method StartProviding addr 0x20fac44 size 0xa0 virtual false final false
 void StartProviding() ;

/// @brief Method HandleStateChanged addr 0x20fa99c size 0x10 virtual false final false
 void HandleStateChanged(GlobalNamespace::GlobalNamespace__MultiplayerController__State state) ;

/// @brief Method HandleFirstPlayerDidChange addr 0x20face4 size 0xf4 virtual false final false
 void HandleFirstPlayerDidChange(GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer firstPlayer) ;

// Ctor Parameters []
explicit MultiplayerLeadPlayerProvider() ;

/// @brief Method .ctor addr 0x20fadd8 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerLeadPlayerProvider);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLeadPlayerProvider, "", "MultiplayerLeadPlayerProvider");
