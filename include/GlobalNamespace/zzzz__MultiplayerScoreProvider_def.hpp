#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class MultiplayerSyncState_3;
}
namespace GlobalNamespace {
struct StandardScoreSyncState;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__StandardScoreSyncState__Score;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerScoreProvider____c;
}
namespace GlobalNamespace {
class IScoreSyncStateManager;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerScoreProvider__RankedPlayer;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerScoreProvider____c__DisplayClass18_0;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerScoreProvider__RankedPlayer;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerScoreProvider____c;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerScoreProvider____c__DisplayClass18_0;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider;
}
// Type: ::RankedPlayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5338))
// CS Name: MultiplayerScoreProvider::RankedPlayer
class CORDL_TYPE GlobalNamespace__MultiplayerScoreProvider__RankedPlayer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IComparable_1<GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer>
constexpr operator  System::IComparable_1<GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__MultiplayerScoreProvider__RankedPlayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerScoreProvider__RankedPlayer", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerScoreProvider__RankedPlayer(GlobalNamespace__MultiplayerScoreProvider__RankedPlayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerScoreProvider__RankedPlayer", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerScoreProvider__RankedPlayer(GlobalNamespace__MultiplayerScoreProvider__RankedPlayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerScoreProvider__RankedPlayer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MultiplayerScoreProvider__RankedPlayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerScoreProvider__RankedPlayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerScoreProvider__RankedPlayer& operator=(GlobalNamespace__MultiplayerScoreProvider__RankedPlayer&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerScoreProvider__RankedPlayer& operator=(GlobalNamespace__MultiplayerScoreProvider__RankedPlayer const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score,int32_t> __declspec(property(get=__get__multiplayerSyncState, put=__set__multiplayerSyncState))  _multiplayerSyncState;

constexpr void __set__multiplayerSyncState(GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score,int32_t> value) ;

constexpr GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score,int32_t> __get__multiplayerSyncState() const;

 GlobalNamespace::MultiplayerScoreProvider __declspec(property(get=__get__scoreSyncManager, put=__set__scoreSyncManager))  _scoreSyncManager;

constexpr void __set__scoreSyncManager(GlobalNamespace::MultiplayerScoreProvider value) ;

constexpr GlobalNamespace::MultiplayerScoreProvider __get__scoreSyncManager() const;


// Properties

 float_t __declspec(property(get=get_offsetSyncTime))  offsetSyncTime;

 float_t __declspec(property(get=get_lastScoreTime))  lastScoreTime;

 int32_t __declspec(property(get=get_score))  score;

 bool __declspec(property(get=get_isConnected))  isConnected;

 bool __declspec(property(get=get_isActiveOrFinished))  isActiveOrFinished;

 bool __declspec(property(get=get_isFailed))  isFailed;

 bool __declspec(property(get=get_wasActiveAtLevelStart))  wasActiveAtLevelStart;

 bool __declspec(property(get=get_isMe))  isMe;

 ::StringW __declspec(property(get=get_userId))  userId;

 ::StringW __declspec(property(get=get_userName))  userName;


// Methods

/// @brief Method get_offsetSyncTime addr 0x21022b8 size 0xb8 virtual false final false
 float_t get_offsetSyncTime() ;

/// @brief Method get_lastScoreTime addr 0x2102584 size 0x50 virtual false final false
 float_t get_lastScoreTime() ;

/// @brief Method get_score addr 0x2101970 size 0x30 virtual false final false
 int32_t get_score() ;

/// @brief Method get_isConnected addr 0x21021ac size 0xb8 virtual false final false
 bool get_isConnected() ;

/// @brief Method get_isActiveOrFinished addr 0x21025d4 size 0x28 virtual false final false
 bool get_isActiveOrFinished() ;

/// @brief Method get_isFailed addr 0x21025fc size 0x28 virtual false final false
 bool get_isFailed() ;

/// @brief Method get_wasActiveAtLevelStart addr 0x2102264 size 0x28 virtual false final false
 bool get_wasActiveAtLevelStart() ;

/// @brief Method get_isMe addr 0x2102624 size 0xb4 virtual false final false
 bool get_isMe() ;

/// @brief Method get_userId addr 0x21026d8 size 0xb8 virtual false final false
 ::StringW get_userId() ;

/// @brief Method get_userName addr 0x2102790 size 0xb8 virtual false final false
 ::StringW get_userName() ;

static GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer New_ctor(GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score,int32_t> multiplayerSyncState, GlobalNamespace::MultiplayerScoreProvider scoreSyncManager) ;

/// @brief Method .ctor addr 0x210228c size 0x2c virtual false final false
 void _ctor(GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score,int32_t> multiplayerSyncState, GlobalNamespace::MultiplayerScoreProvider scoreSyncManager) ;

/// @brief Method CompareTo addr 0x2102848 size 0x88 virtual true final true
 int32_t CompareTo(GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5339))
// CS Name: MultiplayerScoreProvider::<>c
class CORDL_TYPE GlobalNamespace__MultiplayerScoreProvider____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__MultiplayerScoreProvider____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerScoreProvider____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerScoreProvider____c(GlobalNamespace__MultiplayerScoreProvider____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerScoreProvider____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerScoreProvider____c(GlobalNamespace__MultiplayerScoreProvider____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerScoreProvider____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MultiplayerScoreProvider____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerScoreProvider____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerScoreProvider____c& operator=(GlobalNamespace__MultiplayerScoreProvider____c&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerScoreProvider____c& operator=(GlobalNamespace__MultiplayerScoreProvider____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider____c value) ;

static GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider____c __get___9() ;

static System::Func_2<GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer,bool> __declspec(property(get=__get___9__16_0, put=__set___9__16_0))  __9__16_0;

static void __set___9__16_0(System::Func_2<GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer,bool> value) ;

static System::Func_2<GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer,bool> __get___9__16_0() ;


// Methods

static GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider____c New_ctor() ;

/// @brief Method .ctor addr 0x2102934 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Update>b__16_0 addr 0x210293c size 0x24 virtual false final false
 bool _Update_b__16_0(GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer p) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass18_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5340))
// CS Name: MultiplayerScoreProvider::<>c__DisplayClass18_0
class CORDL_TYPE GlobalNamespace__MultiplayerScoreProvider____c__DisplayClass18_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__MultiplayerScoreProvider____c__DisplayClass18_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerScoreProvider____c__DisplayClass18_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerScoreProvider____c__DisplayClass18_0(GlobalNamespace__MultiplayerScoreProvider____c__DisplayClass18_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerScoreProvider____c__DisplayClass18_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerScoreProvider____c__DisplayClass18_0(GlobalNamespace__MultiplayerScoreProvider____c__DisplayClass18_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerScoreProvider____c__DisplayClass18_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MultiplayerScoreProvider____c__DisplayClass18_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerScoreProvider____c__DisplayClass18_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerScoreProvider____c__DisplayClass18_0& operator=(GlobalNamespace__MultiplayerScoreProvider____c__DisplayClass18_0&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerScoreProvider____c__DisplayClass18_0& operator=(GlobalNamespace__MultiplayerScoreProvider____c__DisplayClass18_0 const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_userId, put=__set_userId))  userId;

constexpr void __set_userId(::StringW value) ;

constexpr ::StringW __get_userId() const;


// Methods

static GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider____c__DisplayClass18_0 New_ctor() ;

/// @brief Method .ctor addr 0x21024bc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetPositionOfPlayer>b__0 addr 0x2102960 size 0x28 virtual false final false
 bool _GetPositionOfPlayer_b__0(GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer p) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerScoreProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5341))
// CS Name: MultiplayerScoreProvider
class CORDL_TYPE MultiplayerScoreProvider : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass18_0 = GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider____c__DisplayClass18_0;

using __c = GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider____c;

using RankedPlayer = GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~MultiplayerScoreProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreProvider", modifiers: " const&", def_value: None }]
constexpr MultiplayerScoreProvider(MultiplayerScoreProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreProvider", modifiers: "&&", def_value: None }]
constexpr MultiplayerScoreProvider(MultiplayerScoreProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerScoreProvider(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerScoreProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerScoreProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerScoreProvider& operator=(MultiplayerScoreProvider&& o) noexcept = default;
  constexpr MultiplayerScoreProvider& operator=(MultiplayerScoreProvider const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IScoreSyncStateManager __declspec(property(get=__get__scoreSyncStateManager, put=__set__scoreSyncStateManager))  _scoreSyncStateManager;

constexpr void __set__scoreSyncStateManager(GlobalNamespace::IScoreSyncStateManager value) ;

constexpr GlobalNamespace::IScoreSyncStateManager __get__scoreSyncStateManager() const;

 GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer __declspec(property(get=__get__firstPlayer_k__BackingField, put=__set__firstPlayer_k__BackingField))  _firstPlayer_k__BackingField;

constexpr void __set__firstPlayer_k__BackingField(GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer value) ;

constexpr GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer __get__firstPlayer_k__BackingField() const;

 System::Action_1<GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer> __declspec(property(get=__get_firstPlayerDidChangeEvent, put=__set_firstPlayerDidChangeEvent))  firstPlayerDidChangeEvent;

constexpr void __set_firstPlayerDidChangeEvent(System::Action_1<GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer> value) ;

constexpr System::Action_1<GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer> __get_firstPlayerDidChangeEvent() const;

 float_t __declspec(property(get=__get__sharedOffsetSyncTime, put=__set__sharedOffsetSyncTime))  _sharedOffsetSyncTime;

constexpr void __set__sharedOffsetSyncTime(float_t value) ;

constexpr float_t __get__sharedOffsetSyncTime() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer> __declspec(property(get=__get__rankedPlayers, put=__set__rankedPlayers))  _rankedPlayers;

constexpr void __set__rankedPlayers(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer> __get__rankedPlayers() const;

 System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer> __declspec(property(get=__get__players, put=__set__players))  _players;

constexpr void __set__players(System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer> __get__players() const;


// Properties

 bool __declspec(property(get=get_scoresAvailable))  scoresAvailable;

 GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer __declspec(property(get=get_firstPlayer, put=set_firstPlayer))  firstPlayer;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer> __declspec(property(get=get_rankedPlayers))  rankedPlayers;


// Methods

/// @brief Method get_scoresAvailable addr 0x2101950 size 0x20 virtual false final false
 bool get_scoresAvailable() ;

/// @brief Method get_firstPlayer addr 0x21019a0 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer get_firstPlayer() ;

/// @brief Method set_firstPlayer addr 0x21019a8 size 0x8 virtual false final false
 void set_firstPlayer(GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer value) ;

/// @brief Method add_firstPlayerDidChangeEvent addr 0x21019b0 size 0xb0 virtual false final false
 void add_firstPlayerDidChangeEvent(System::Action_1<GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer> value) ;

/// @brief Method remove_firstPlayerDidChangeEvent addr 0x2101a60 size 0xb0 virtual false final false
 void remove_firstPlayerDidChangeEvent(System::Action_1<GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer> value) ;

/// @brief Method get_rankedPlayers addr 0x2101b10 size 0x8 virtual false final false
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer> get_rankedPlayers() ;

/// @brief Method Update addr 0x2101b18 size 0x694 virtual false final false
 void Update() ;

/// @brief Method TryGetScore addr 0x2102370 size 0x68 virtual false final false
 bool TryGetScore(::StringW userId, ByRef<GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer> data) ;

/// @brief Method GetPositionOfPlayer addr 0x21023d8 size 0xe4 virtual false final false
 int32_t GetPositionOfPlayer(::StringW userId) ;

static GlobalNamespace::MultiplayerScoreProvider New_ctor() ;

/// @brief Method .ctor addr 0x21024c4 size 0xc0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer, "", "MultiplayerScoreProvider/RankedPlayer");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider____c, "", "MultiplayerScoreProvider/<>c");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider____c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider____c__DisplayClass18_0, "", "MultiplayerScoreProvider/<>c__DisplayClass18_0");
NEED_NO_BOX(GlobalNamespace::MultiplayerScoreProvider);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerScoreProvider, "", "MultiplayerScoreProvider");
