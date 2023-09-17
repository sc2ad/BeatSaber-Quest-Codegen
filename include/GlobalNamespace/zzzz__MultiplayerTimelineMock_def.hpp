#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerTimelineMock;
}
// Type: ::MultiplayerTimelineMock
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6053))
// CS Name: MultiplayerTimelineMock
class CORDL_TYPE MultiplayerTimelineMock : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~MultiplayerTimelineMock() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerTimelineMock", modifiers: " const&", def_value: None }]
constexpr MultiplayerTimelineMock(MultiplayerTimelineMock const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerTimelineMock", modifiers: "&&", def_value: None }]
constexpr MultiplayerTimelineMock(MultiplayerTimelineMock&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerTimelineMock(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerTimelineMock& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerTimelineMock& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerTimelineMock& operator=(MultiplayerTimelineMock&& o) noexcept = default;
  constexpr MultiplayerTimelineMock& operator=(MultiplayerTimelineMock const& o) noexcept = default;
                


// Fields

 ::ArrayW<::UnityEngine::GameObject> __declspec(property(get=__get__connectedPlayerIntroAnimators, put=__set__connectedPlayerIntroAnimators))  _connectedPlayerIntroAnimators;

constexpr void __set__connectedPlayerIntroAnimators(::ArrayW<::UnityEngine::GameObject> value) ;

constexpr ::ArrayW<::UnityEngine::GameObject> __get__connectedPlayerIntroAnimators() const;

 ::ArrayW<::UnityEngine::GameObject> __declspec(property(get=__get__connectedPlayerScoreRingItems, put=__set__connectedPlayerScoreRingItems))  _connectedPlayerScoreRingItems;

constexpr void __set__connectedPlayerScoreRingItems(::ArrayW<::UnityEngine::GameObject> value) ;

constexpr ::ArrayW<::UnityEngine::GameObject> __get__connectedPlayerScoreRingItems() const;

 ::ArrayW<::UnityEngine::GameObject> __declspec(property(get=__get__connectedPlayerOutroAnimators, put=__set__connectedPlayerOutroAnimators))  _connectedPlayerOutroAnimators;

constexpr void __set__connectedPlayerOutroAnimators(::ArrayW<::UnityEngine::GameObject> value) ;

constexpr ::ArrayW<::UnityEngine::GameObject> __get__connectedPlayerOutroAnimators() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__localPlayerIntroAnimator, put=__set__localPlayerIntroAnimator))  _localPlayerIntroAnimator;

constexpr void __set__localPlayerIntroAnimator(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__localPlayerIntroAnimator() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__localPlayerScoreRingItem, put=__set__localPlayerScoreRingItem))  _localPlayerScoreRingItem;

constexpr void __set__localPlayerScoreRingItem(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__localPlayerScoreRingItem() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__localPlayerOutroAnimator, put=__set__localPlayerOutroAnimator))  _localPlayerOutroAnimator;

constexpr void __set__localPlayerOutroAnimator(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__localPlayerOutroAnimator() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__connectedDuelIntroAnimator, put=__set__connectedDuelIntroAnimator))  _connectedDuelIntroAnimator;

constexpr void __set__connectedDuelIntroAnimator(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__connectedDuelIntroAnimator() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__connectedDuelOutroAnimator, put=__set__connectedDuelOutroAnimator))  _connectedDuelOutroAnimator;

constexpr void __set__connectedDuelOutroAnimator(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__connectedDuelOutroAnimator() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__localDuelIntroAnimator, put=__set__localDuelIntroAnimator))  _localDuelIntroAnimator;

constexpr void __set__localDuelIntroAnimator(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__localDuelIntroAnimator() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__localDuelOutroAnimator, put=__set__localDuelOutroAnimator))  _localDuelOutroAnimator;

constexpr void __set__localDuelOutroAnimator(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__localDuelOutroAnimator() const;

 ::ArrayW<::UnityEngine::GameObject> __declspec(property(get=__get__resultAvatars, put=__set__resultAvatars))  _resultAvatars;

constexpr void __set__resultAvatars(::ArrayW<::UnityEngine::GameObject> value) ;

constexpr ::ArrayW<::UnityEngine::GameObject> __get__resultAvatars() const;

 ::ArrayW<::UnityEngine::GameObject> __declspec(property(get=__get__badgeTimelines, put=__set__badgeTimelines))  _badgeTimelines;

constexpr void __set__badgeTimelines(::ArrayW<::UnityEngine::GameObject> value) ;

constexpr ::ArrayW<::UnityEngine::GameObject> __get__badgeTimelines() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__resultsMocks, put=__set__resultsMocks))  _resultsMocks;

constexpr void __set__resultsMocks(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__resultsMocks() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__ringsGroup, put=__set__ringsGroup))  _ringsGroup;

constexpr void __set__ringsGroup(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__ringsGroup() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__playersGroup, put=__set__playersGroup))  _playersGroup;

constexpr void __set__playersGroup(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__playersGroup() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__duelGroup, put=__set__duelGroup))  _duelGroup;

constexpr void __set__duelGroup(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__duelGroup() const;


// Properties

 ::ArrayW<::UnityEngine::GameObject> __declspec(property(get=get_connectedPlayerIntroAnimators))  connectedPlayerIntroAnimators;

 ::ArrayW<::UnityEngine::GameObject> __declspec(property(get=get_connectedPlayerScoreRings))  connectedPlayerScoreRings;

 ::ArrayW<::UnityEngine::GameObject> __declspec(property(get=get_connectedPlayerOutroAnimators))  connectedPlayerOutroAnimators;

 ::UnityEngine::GameObject __declspec(property(get=get_localPlayerIntroAnimator))  localPlayerIntroAnimator;

 ::UnityEngine::GameObject __declspec(property(get=get_localPlayerScoreRingItem))  localPlayerScoreRingItem;

 ::UnityEngine::GameObject __declspec(property(get=get_localPlayerOutroAnimator))  localPlayerOutroAnimator;

 ::UnityEngine::GameObject __declspec(property(get=get_connectedDuelIntroAnimator))  connectedDuelIntroAnimator;

 ::UnityEngine::GameObject __declspec(property(get=get_connectedDuelOutroAnimator))  connectedDuelOutroAnimator;

 ::UnityEngine::GameObject __declspec(property(get=get_localDuelIntroAnimator))  localDuelIntroAnimator;

 ::UnityEngine::GameObject __declspec(property(get=get_localDuelOutroAnimator))  localDuelOutroAnimator;

 ::ArrayW<::UnityEngine::GameObject> __declspec(property(get=get_resultAvatars))  resultAvatars;

 ::ArrayW<::UnityEngine::GameObject> __declspec(property(get=get_badgeTimelines))  badgeTimelines;

 ::UnityEngine::GameObject __declspec(property(get=get_resultsMocks))  resultsMocks;


// Methods

/// @brief Method get_connectedPlayerIntroAnimators addr 0x21b0f6c size 0x8 virtual false final false
 ::ArrayW<::UnityEngine::GameObject> get_connectedPlayerIntroAnimators() ;

/// @brief Method get_connectedPlayerScoreRings addr 0x21b0f74 size 0x8 virtual false final false
 ::ArrayW<::UnityEngine::GameObject> get_connectedPlayerScoreRings() ;

/// @brief Method get_connectedPlayerOutroAnimators addr 0x21b0f7c size 0x8 virtual false final false
 ::ArrayW<::UnityEngine::GameObject> get_connectedPlayerOutroAnimators() ;

/// @brief Method get_localPlayerIntroAnimator addr 0x21b0f84 size 0x8 virtual false final false
 ::UnityEngine::GameObject get_localPlayerIntroAnimator() ;

/// @brief Method get_localPlayerScoreRingItem addr 0x21b0f8c size 0x8 virtual false final false
 ::UnityEngine::GameObject get_localPlayerScoreRingItem() ;

/// @brief Method get_localPlayerOutroAnimator addr 0x21b0f94 size 0x8 virtual false final false
 ::UnityEngine::GameObject get_localPlayerOutroAnimator() ;

/// @brief Method get_connectedDuelIntroAnimator addr 0x21b0f9c size 0x8 virtual false final false
 ::UnityEngine::GameObject get_connectedDuelIntroAnimator() ;

/// @brief Method get_connectedDuelOutroAnimator addr 0x21b0fa4 size 0x8 virtual false final false
 ::UnityEngine::GameObject get_connectedDuelOutroAnimator() ;

/// @brief Method get_localDuelIntroAnimator addr 0x21b0fac size 0x8 virtual false final false
 ::UnityEngine::GameObject get_localDuelIntroAnimator() ;

/// @brief Method get_localDuelOutroAnimator addr 0x21b0fb4 size 0x8 virtual false final false
 ::UnityEngine::GameObject get_localDuelOutroAnimator() ;

/// @brief Method get_resultAvatars addr 0x21b0fbc size 0x8 virtual false final false
 ::ArrayW<::UnityEngine::GameObject> get_resultAvatars() ;

/// @brief Method get_badgeTimelines addr 0x21b0fc4 size 0x8 virtual false final false
 ::ArrayW<::UnityEngine::GameObject> get_badgeTimelines() ;

/// @brief Method get_resultsMocks addr 0x21b0fcc size 0x8 virtual false final false
 ::UnityEngine::GameObject get_resultsMocks() ;

/// @brief Method HandleActivations addr 0x21b0fd4 size 0x60 virtual false final false
 void HandleActivations(bool isDuel) ;

// Ctor Parameters []
explicit MultiplayerTimelineMock() ;

/// @brief Method .ctor addr 0x21b1034 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerTimelineMock);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerTimelineMock, "", "MultiplayerTimelineMock");
