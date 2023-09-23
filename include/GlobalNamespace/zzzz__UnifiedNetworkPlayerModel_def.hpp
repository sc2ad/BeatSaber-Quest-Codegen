#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
template<typename T>
class INetworkPlayerModelPartyConfig_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class LocalNetworkPlayerModel;
}
namespace GlobalNamespace {
class IUnifiedNetworkPlayerModel;
}
namespace GlobalNamespace {
class GameLiftNetworkPlayerModel;
}
namespace GlobalNamespace {
class INetworkPlayerModel;
}
namespace Zenject {
class IInitializable;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class PlatformNetworkPlayerModel;
}
namespace GlobalNamespace {
class PartyMessageHandler;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class ConnectedPlayerManager;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType;
}
namespace GlobalNamespace {
class GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig;
}
namespace GlobalNamespace {
class GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig;
}
namespace GlobalNamespace {
class GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71;
}
namespace GlobalNamespace {
class UnifiedNetworkPlayerModel;
}
// Type: ::ActiveNetworkPlayerModelType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4604))
// CS Name: UnifiedNetworkPlayerModel::ActiveNetworkPlayerModelType
struct CORDL_TYPE GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType(GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType const&) = default;
                    constexpr GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType(GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType&&) = default;
                    constexpr GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType& operator=(GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType& operator=(GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType_Unwrapped : int32_t {
__GameLift = 0,
__Platform = 1,
__LocalNetwork = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field GameLift offset 0
static GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType const GameLift;

/// @brief Field Platform offset 0
static GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType const Platform;

/// @brief Field LocalNetwork offset 0
static GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType const LocalNetwork;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::JoinMatchmakingPartyConfig
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4605))
// CS Name: UnifiedNetworkPlayerModel::JoinMatchmakingPartyConfig
class CORDL_TYPE GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::UnifiedNetworkPlayerModel>
constexpr operator  GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::UnifiedNetworkPlayerModel>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig(GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig(GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig& operator=(GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig&& o) noexcept = default;
  constexpr GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig& operator=(GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=__get_selectionMask, put=__set_selectionMask))  selectionMask;

constexpr void __set_selectionMask(GlobalNamespace::BeatmapLevelSelectionMask value) ;

constexpr GlobalNamespace::BeatmapLevelSelectionMask __get_selectionMask() const;

 GlobalNamespace::GameplayServerConfiguration __declspec(property(get=__get_configuration, put=__set_configuration))  configuration;

constexpr void __set_configuration(GlobalNamespace::GameplayServerConfiguration value) ;

constexpr GlobalNamespace::GameplayServerConfiguration __get_configuration() const;

 ::StringW __declspec(property(get=__get_secret, put=__set_secret))  secret;

constexpr void __set_secret(::StringW value) ;

constexpr ::StringW __get_secret() const;

 ::StringW __declspec(property(get=__get_code, put=__set_code))  code;

constexpr void __set_code(::StringW value) ;

constexpr ::StringW __get_code() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig() ;

/// @brief Method .ctor addr 0x2214df4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::StartClientPartyConfig
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4606))
// CS Name: UnifiedNetworkPlayerModel::StartClientPartyConfig
class CORDL_TYPE GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::UnifiedNetworkPlayerModel>
constexpr operator  GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::UnifiedNetworkPlayerModel>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig(GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig(GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig& operator=(GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig&& o) noexcept = default;
  constexpr GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig& operator=(GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=__get_selectionMask, put=__set_selectionMask))  selectionMask;

constexpr void __set_selectionMask(GlobalNamespace::BeatmapLevelSelectionMask value) ;

constexpr GlobalNamespace::BeatmapLevelSelectionMask __get_selectionMask() const;

 GlobalNamespace::GameplayServerConfiguration __declspec(property(get=__get_configuration, put=__set_configuration))  configuration;

constexpr void __set_configuration(GlobalNamespace::GameplayServerConfiguration value) ;

constexpr GlobalNamespace::GameplayServerConfiguration __get_configuration() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig() ;

/// @brief Method .ctor addr 0x2214b28 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<get_otherPlayers>d__71
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4607))
// CS Name: UnifiedNetworkPlayerModel::<get_otherPlayers>d__71
class CORDL_TYPE GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>
constexpr operator  System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer>
constexpr operator  System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71(GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71(GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71& operator=(GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71&& o) noexcept = default;
  constexpr GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71& operator=(GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 GlobalNamespace::INetworkPlayer __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(GlobalNamespace::INetworkPlayer value) ;

constexpr GlobalNamespace::INetworkPlayer __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 GlobalNamespace::UnifiedNetworkPlayerModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::UnifiedNetworkPlayerModel value) ;

constexpr GlobalNamespace::UnifiedNetworkPlayerModel __get___4__this() const;

 System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer> value) ;

constexpr System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer> __get___7__wrap1() const;


// Properties

 GlobalNamespace::INetworkPlayer __declspec(property(get=System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current))  System_Collections_Generic_IEnumerator_INetworkPlayer__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71(int32_t __1__state) ;

/// @brief Method .ctor addr 0x22149ac size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2215554 size 0x54 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x22155a8 size 0x6dc virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x2215c84 size 0xb0 virtual false final false
 void __m__Finally1() ;

/// @brief Method <>m__Finally2 addr 0x2215d34 size 0xb0 virtual false final false
 void __m__Finally2() ;

/// @brief Method <>m__Finally3 addr 0x2215de4 size 0xb0 virtual false final false
 void __m__Finally3() ;

/// @brief Method System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current addr 0x2215e94 size 0x8 virtual true final true
 GlobalNamespace::INetworkPlayer System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2215e9c size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2215edc size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator addr 0x2215ee4 size 0xa4 virtual true final true
 System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer> System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2215f88 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::UnifiedNetworkPlayerModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4608))
// CS Name: UnifiedNetworkPlayerModel
class CORDL_TYPE UnifiedNetworkPlayerModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _get_otherPlayers_d__71 = GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71;

using StartClientPartyConfig = GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig;

using JoinMatchmakingPartyConfig = GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig;

using ActiveNetworkPlayerModelType = GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType;

/// @brief Convert operator to GlobalNamespace::IUnifiedNetworkPlayerModel
constexpr operator  GlobalNamespace::IUnifiedNetworkPlayerModel() const noexcept;

/// @brief Convert operator to GlobalNamespace::INetworkPlayerModel
constexpr operator  GlobalNamespace::INetworkPlayerModel() const noexcept;

/// @brief Convert operator to Zenject::IInitializable
constexpr operator  Zenject::IInitializable() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnifiedNetworkPlayerModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnifiedNetworkPlayerModel", modifiers: " const&", def_value: None }]
constexpr UnifiedNetworkPlayerModel(UnifiedNetworkPlayerModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnifiedNetworkPlayerModel", modifiers: "&&", def_value: None }]
constexpr UnifiedNetworkPlayerModel(UnifiedNetworkPlayerModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnifiedNetworkPlayerModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnifiedNetworkPlayerModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnifiedNetworkPlayerModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnifiedNetworkPlayerModel& operator=(UnifiedNetworkPlayerModel&& o) noexcept = default;
  constexpr UnifiedNetworkPlayerModel& operator=(UnifiedNetworkPlayerModel const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GameLiftNetworkPlayerModel __declspec(property(get=__get__gameLiftNetworkPlayerModel, put=__set__gameLiftNetworkPlayerModel))  _gameLiftNetworkPlayerModel;

constexpr void __set__gameLiftNetworkPlayerModel(GlobalNamespace::GameLiftNetworkPlayerModel value) ;

constexpr GlobalNamespace::GameLiftNetworkPlayerModel __get__gameLiftNetworkPlayerModel() const;

 GlobalNamespace::PlatformNetworkPlayerModel __declspec(property(get=__get__platformNetworkPlayerModel, put=__set__platformNetworkPlayerModel))  _platformNetworkPlayerModel;

constexpr void __set__platformNetworkPlayerModel(GlobalNamespace::PlatformNetworkPlayerModel value) ;

constexpr GlobalNamespace::PlatformNetworkPlayerModel __get__platformNetworkPlayerModel() const;

 GlobalNamespace::LocalNetworkPlayerModel __declspec(property(get=__get__localNetworkPlayerModel, put=__set__localNetworkPlayerModel))  _localNetworkPlayerModel;

constexpr void __set__localNetworkPlayerModel(GlobalNamespace::LocalNetworkPlayerModel value) ;

constexpr GlobalNamespace::LocalNetworkPlayerModel __get__localNetworkPlayerModel() const;

 System::Action_1<GlobalNamespace::INetworkPlayerModel> __declspec(property(get=__get_connectedPlayerManagerCreatedEvent, put=__set_connectedPlayerManagerCreatedEvent))  connectedPlayerManagerCreatedEvent;

constexpr void __set_connectedPlayerManagerCreatedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value) ;

constexpr System::Action_1<GlobalNamespace::INetworkPlayerModel> __get_connectedPlayerManagerCreatedEvent() const;

 System::Action_1<GlobalNamespace::INetworkPlayerModel> __declspec(property(get=__get_connectedPlayerManagerDestroyedEvent, put=__set_connectedPlayerManagerDestroyedEvent))  connectedPlayerManagerDestroyedEvent;

constexpr void __set_connectedPlayerManagerDestroyedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value) ;

constexpr System::Action_1<GlobalNamespace::INetworkPlayerModel> __get_connectedPlayerManagerDestroyedEvent() const;

 System::Action_1<int32_t> __declspec(property(get=__get_partySizeChangedEvent, put=__set_partySizeChangedEvent))  partySizeChangedEvent;

constexpr void __set_partySizeChangedEvent(System::Action_1<int32_t> value) ;

constexpr System::Action_1<int32_t> __get_partySizeChangedEvent() const;

 System::Action __declspec(property(get=__get_partyRefreshingEvent, put=__set_partyRefreshingEvent))  partyRefreshingEvent;

constexpr void __set_partyRefreshingEvent(System::Action value) ;

constexpr System::Action __get_partyRefreshingEvent() const;

 System::Action_1<GlobalNamespace::INetworkPlayerModel> __declspec(property(get=__get_partyChangedEvent, put=__set_partyChangedEvent))  partyChangedEvent;

constexpr void __set_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value) ;

constexpr System::Action_1<GlobalNamespace::INetworkPlayerModel> __get_partyChangedEvent() const;

 System::Action_1<GlobalNamespace::INetworkPlayer> __declspec(property(get=__get_joinRequestedEvent, put=__set_joinRequestedEvent))  joinRequestedEvent;

constexpr void __set_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value) ;

constexpr System::Action_1<GlobalNamespace::INetworkPlayer> __get_joinRequestedEvent() const;

 System::Action_1<GlobalNamespace::INetworkPlayer> __declspec(property(get=__get_inviteRequestedEvent, put=__set_inviteRequestedEvent))  inviteRequestedEvent;

constexpr void __set_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value) ;

constexpr System::Action_1<GlobalNamespace::INetworkPlayer> __get_inviteRequestedEvent() const;

 GlobalNamespace::PartyMessageHandler __declspec(property(get=__get__partyMessageHandler, put=__set__partyMessageHandler))  _partyMessageHandler;

constexpr void __set__partyMessageHandler(GlobalNamespace::PartyMessageHandler value) ;

constexpr GlobalNamespace::PartyMessageHandler __get__partyMessageHandler() const;

 GlobalNamespace::PartyMessageHandler __declspec(property(get=__get__friendPartyMessageHandler, put=__set__friendPartyMessageHandler))  _friendPartyMessageHandler;

constexpr void __set__friendPartyMessageHandler(GlobalNamespace::PartyMessageHandler value) ;

constexpr GlobalNamespace::PartyMessageHandler __get__friendPartyMessageHandler() const;

 GlobalNamespace::PartyMessageHandler __declspec(property(get=__get__localNetworkPartyMessageHandler, put=__set__localNetworkPartyMessageHandler))  _localNetworkPartyMessageHandler;

constexpr void __set__localNetworkPartyMessageHandler(GlobalNamespace::PartyMessageHandler value) ;

constexpr GlobalNamespace::PartyMessageHandler __get__localNetworkPartyMessageHandler() const;

 GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType __declspec(property(get=__get__activeNetworkPlayerModelType, put=__set__activeNetworkPlayerModelType))  _activeNetworkPlayerModelType;

constexpr void __set__activeNetworkPlayerModelType(GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType value) ;

constexpr GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType __get__activeNetworkPlayerModelType() const;


// Properties

 GlobalNamespace::INetworkPlayerModel __declspec(property(get=get_activeNetworkPlayerModel))  activeNetworkPlayerModel;

 GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType __declspec(property(get=get_activeNetworkPlayerModelType))  activeNetworkPlayerModelType;

 bool __declspec(property(get=get_localPlayerIsPartyOwner))  localPlayerIsPartyOwner;

 bool __declspec(property(get=get_hasNetworkingFailed))  hasNetworkingFailed;

 int32_t __declspec(property(get=get_currentPartySize))  currentPartySize;

 GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=get_selectionMask))  selectionMask;

 GlobalNamespace::GameplayServerConfiguration __declspec(property(get=get_configuration))  configuration;

 ::StringW __declspec(property(get=get_secret))  secret;

 ::StringW __declspec(property(get=get_code))  code;

 GlobalNamespace::ConnectedPlayerManager __declspec(property(get=get_connectedPlayerManager))  connectedPlayerManager;

 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> __declspec(property(get=get_publicServers))  publicServers;

 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> __declspec(property(get=get_friends))  friends;

 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> __declspec(property(get=get_localNetworkPlayers))  localNetworkPlayers;

 bool __declspec(property(get=get_discoveryEnabled, put=set_discoveryEnabled))  discoveryEnabled;

 bool __declspec(property(get=get_enableFriends, put=set_enableFriends))  enableFriends;

 bool __declspec(property(get=get_enableLocalNetwork, put=set_enableLocalNetwork))  enableLocalNetwork;

 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> __declspec(property(get=get_partyPlayers))  partyPlayers;

 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> __declspec(property(get=get_otherPlayers))  otherPlayers;


// Methods

/// @brief Method add_connectedPlayerManagerCreatedEvent addr 0x22126e4 size 0xb0 virtual true final true
 void add_connectedPlayerManagerCreatedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value) ;

/// @brief Method remove_connectedPlayerManagerCreatedEvent addr 0x2212794 size 0xb0 virtual true final true
 void remove_connectedPlayerManagerCreatedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value) ;

/// @brief Method add_connectedPlayerManagerDestroyedEvent addr 0x2212844 size 0xb0 virtual true final true
 void add_connectedPlayerManagerDestroyedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value) ;

/// @brief Method remove_connectedPlayerManagerDestroyedEvent addr 0x22128f4 size 0xb0 virtual true final true
 void remove_connectedPlayerManagerDestroyedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value) ;

/// @brief Method add_partySizeChangedEvent addr 0x22129a4 size 0xb0 virtual true final true
 void add_partySizeChangedEvent(System::Action_1<int32_t> value) ;

/// @brief Method remove_partySizeChangedEvent addr 0x2212a54 size 0xb0 virtual true final true
 void remove_partySizeChangedEvent(System::Action_1<int32_t> value) ;

/// @brief Method add_partyRefreshingEvent addr 0x2212b04 size 0x9c virtual true final true
 void add_partyRefreshingEvent(System::Action value) ;

/// @brief Method remove_partyRefreshingEvent addr 0x2212ba0 size 0x9c virtual true final true
 void remove_partyRefreshingEvent(System::Action value) ;

/// @brief Method add_partyChangedEvent addr 0x2212c3c size 0xb0 virtual true final true
 void add_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value) ;

/// @brief Method remove_partyChangedEvent addr 0x2212cec size 0xb0 virtual true final true
 void remove_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value) ;

/// @brief Method add_joinRequestedEvent addr 0x2212d9c size 0xb0 virtual true final true
 void add_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value) ;

/// @brief Method remove_joinRequestedEvent addr 0x2212e4c size 0xb0 virtual true final true
 void remove_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value) ;

/// @brief Method add_inviteRequestedEvent addr 0x2212efc size 0xb0 virtual true final true
 void add_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value) ;

/// @brief Method remove_inviteRequestedEvent addr 0x2212fac size 0xb0 virtual true final true
 void remove_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value) ;

/// @brief Method get_activeNetworkPlayerModel addr 0x221305c size 0x3c virtual false final false
 GlobalNamespace::INetworkPlayerModel get_activeNetworkPlayerModel() ;

/// @brief Method get_activeNetworkPlayerModelType addr 0x2213098 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType get_activeNetworkPlayerModelType() ;

/// @brief Method get_localPlayerIsPartyOwner addr 0x22130a0 size 0xdc virtual true final true
 bool get_localPlayerIsPartyOwner() ;

/// @brief Method get_hasNetworkingFailed addr 0x221317c size 0xdc virtual true final true
 bool get_hasNetworkingFailed() ;

/// @brief Method get_currentPartySize addr 0x2213258 size 0xd0 virtual true final true
 int32_t get_currentPartySize() ;

/// @brief Method get_selectionMask addr 0x2213328 size 0xf4 virtual true final true
 GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask() ;

/// @brief Method get_configuration addr 0x221341c size 0xf4 virtual true final true
 GlobalNamespace::GameplayServerConfiguration get_configuration() ;

/// @brief Method get_secret addr 0x2213510 size 0x24 virtual true final true
 ::StringW get_secret() ;

/// @brief Method get_code addr 0x2213534 size 0x24 virtual true final true
 ::StringW get_code() ;

/// @brief Method get_connectedPlayerManager addr 0x2213558 size 0xd0 virtual true final true
 GlobalNamespace::ConnectedPlayerManager get_connectedPlayerManager() ;

/// @brief Method get_publicServers addr 0x2213628 size 0x48 virtual true final true
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> get_publicServers() ;

/// @brief Method get_friends addr 0x2213670 size 0x24 virtual false final false
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> get_friends() ;

/// @brief Method get_localNetworkPlayers addr 0x2213694 size 0x1c virtual true final true
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> get_localNetworkPlayers() ;

/// @brief Method get_discoveryEnabled addr 0x22136b0 size 0xcc virtual true final true
 bool get_discoveryEnabled() ;

/// @brief Method set_discoveryEnabled addr 0x221377c size 0xd8 virtual true final true
 void set_discoveryEnabled(bool value) ;

/// @brief Method get_enableFriends addr 0x2213854 size 0x24 virtual false final false
 bool get_enableFriends() ;

/// @brief Method set_enableFriends addr 0x2213878 size 0x34 virtual false final false
 void set_enableFriends(bool value) ;

/// @brief Method get_enableLocalNetwork addr 0x2213c64 size 0x24 virtual true final true
 bool get_enableLocalNetwork() ;

/// @brief Method set_enableLocalNetwork addr 0x2213c88 size 0x34 virtual true final true
 void set_enableLocalNetwork(bool value) ;

/// @brief Method Initialize addr 0x2213cbc size 0x5d4 virtual true final true
 void Initialize() ;

/// @brief Method Dispose addr 0x2214290 size 0x5d4 virtual true final true
 void Dispose() ;

/// @brief Method get_partyPlayers addr 0x2214864 size 0xd0 virtual true final true
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> get_partyPlayers() ;

/// @brief Method get_otherPlayers addr 0x2214934 size 0x78 virtual true final true
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> get_otherPlayers() ;

/// @brief Method SetServerFilter addr 0x22149e0 size 0x148 virtual true final true
 void SetServerFilter(GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration) ;

/// @brief Method RefreshAlternateDiscoveryModels addr 0x22138ac size 0x3b8 virtual false final false
 void RefreshAlternateDiscoveryModels() ;

/// @brief Method HandlePlayersChanged addr 0x2214b30 size 0x68 virtual false final false
 void HandlePlayersChanged() ;

/// @brief Method HandleInviteRequested addr 0x2214b98 size 0x1c virtual false final false
 void HandleInviteRequested(GlobalNamespace::INetworkPlayer player) ;

/// @brief Method HandleJoinRequested addr 0x2214bb4 size 0x1c virtual false final false
 void HandleJoinRequested(GlobalNamespace::INetworkPlayer player) ;

/// @brief Method HandlePartyChanged addr 0x2214bd0 size 0x20 virtual false final false
 void HandlePartyChanged(GlobalNamespace::INetworkPlayerModel playerModel) ;

/// @brief Method HandlePartySizeChanged addr 0x2214bf0 size 0x34 virtual false final false
 void HandlePartySizeChanged(int32_t size) ;

/// @brief Method HandlePartyRefreshing addr 0x2214c24 size 0x1c virtual false final false
 void HandlePartyRefreshing() ;

/// @brief Method HandleLocalPlayerConnected addr 0x2214c40 size 0x64 virtual false final false
 void HandleLocalPlayerConnected(GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method HandleFriendConnected addr 0x2214ca4 size 0x64 virtual false final false
 void HandleFriendConnected(GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method HandleLocalPlayerConnectToMasterServer addr 0x2214d08 size 0xec virtual false final false
 void HandleLocalPlayerConnectToMasterServer(::StringW secret) ;

/// @brief Method HandleFriendConnectToMasterServer addr 0x2214dfc size 0xec virtual false final false
 void HandleFriendConnectToMasterServer(::StringW secret) ;

/// @brief Method HandleConnectedPlayerManagerCreated addr 0x2214ee8 size 0x438 virtual false final false
 void HandleConnectedPlayerManagerCreated(GlobalNamespace::INetworkPlayerModel networkPlayerModel) ;

/// @brief Method HandleConnectedPlayerManagerDestroyed addr 0x2215320 size 0xd0 virtual false final false
 void HandleConnectedPlayerManagerDestroyed(GlobalNamespace::INetworkPlayerModel networkPlayerModel) ;

/// @brief Method ResetMasterServerReachability addr 0x22153f0 size 0x50 virtual true final true
 void ResetMasterServerReachability() ;

/// @brief Method CreatePartyConnection addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 bool CreatePartyConnection(GlobalNamespace::INetworkPlayerModelPartyConfig_1<T> partyConfig) ;

/// @brief Method DestroyPartyConnection addr 0x2215440 size 0xd0 virtual true final true
 void DestroyPartyConnection() ;

/// @brief Method SetActiveNetworkPlayerModelType addr 0x2215510 size 0x3c virtual true final true
 void SetActiveNetworkPlayerModelType(GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType activeNetworkPlayerModelType) ;

// Ctor Parameters []
explicit UnifiedNetworkPlayerModel() ;

/// @brief Method .ctor addr 0x221554c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType, "", "UnifiedNetworkPlayerModel/ActiveNetworkPlayerModelType");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig, "", "UnifiedNetworkPlayerModel/JoinMatchmakingPartyConfig");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel__StartClientPartyConfig, "", "UnifiedNetworkPlayerModel/StartClientPartyConfig");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__UnifiedNetworkPlayerModel___get_otherPlayers_d__71, "", "UnifiedNetworkPlayerModel/<get_otherPlayers>d__71");
NEED_NO_BOX(GlobalNamespace::UnifiedNetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnifiedNetworkPlayerModel, "", "UnifiedNetworkPlayerModel");
