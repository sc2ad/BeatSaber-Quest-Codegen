#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class LobbyPlayerData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct System__Collections__Generic__Dictionary_2__Enumerator;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class ILobbyPlayerData;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class IMenuRpcManager;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace GlobalNamespace {
class ILobbyPlayersDataModel;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class LobbyPlayerPermissionsModel;
}
namespace GlobalNamespace {
class BeatmapIdentifierNetSerializable;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IReadOnlyDictionary_2;
}
namespace GlobalNamespace {
class PlayersLobbyPermissionConfigurationNetSerializable;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class AdditionalContentModel;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmap;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace GlobalNamespace {
struct GlobalNamespace__AdditionalContentModel__EntitlementStatus;
}
namespace GlobalNamespace {
struct SongPackMask;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__LobbyPlayersDataModel___GetEnumerator_d__60;
}
namespace GlobalNamespace {
class GlobalNamespace__LobbyPlayersDataModel____c;
}
namespace GlobalNamespace {
class LobbyPlayersDataModel;
}
namespace GlobalNamespace {
struct GlobalNamespace__LobbyPlayersDataModel___SetOwnedSongPacks_d__43;
}
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4515))
// CS Name: LobbyPlayersDataModel::<>c
class CORDL_TYPE GlobalNamespace__LobbyPlayersDataModel____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__LobbyPlayersDataModel____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LobbyPlayersDataModel____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LobbyPlayersDataModel____c(GlobalNamespace__LobbyPlayersDataModel____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LobbyPlayersDataModel____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LobbyPlayersDataModel____c(GlobalNamespace__LobbyPlayersDataModel____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LobbyPlayersDataModel____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__LobbyPlayersDataModel____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LobbyPlayersDataModel____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LobbyPlayersDataModel____c& operator=(GlobalNamespace__LobbyPlayersDataModel____c&& o) noexcept = default;
  constexpr GlobalNamespace__LobbyPlayersDataModel____c& operator=(GlobalNamespace__LobbyPlayersDataModel____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__LobbyPlayersDataModel____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__LobbyPlayersDataModel____c value) ;

static GlobalNamespace::GlobalNamespace__LobbyPlayersDataModel____c __get___9() ;

static System::Func_2<GlobalNamespace::IBeatmapLevelPack,::StringW> __declspec(property(get=__get___9__43_0, put=__set___9__43_0))  __9__43_0;

static void __set___9__43_0(System::Func_2<GlobalNamespace::IBeatmapLevelPack,::StringW> value) ;

static System::Func_2<GlobalNamespace::IBeatmapLevelPack,::StringW> __get___9__43_0() ;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__LobbyPlayersDataModel____c() ;

/// @brief Method .ctor addr 0x21fcc50 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SetOwnedSongPacks>b__43_0 addr 0x21fcc58 size 0x9c virtual false final false
 ::StringW _SetOwnedSongPacks_b__43_0(GlobalNamespace::IBeatmapLevelPack pack) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<SetOwnedSongPacks>d__43
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4516))
// CS Name: LobbyPlayersDataModel::<SetOwnedSongPacks>d__43
struct CORDL_TYPE GlobalNamespace__LobbyPlayersDataModel___SetOwnedSongPacks_d__43 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::LobbyPlayersDataModel", modifiers: "", def_value: None }, CppParam { name: "_songPackMask_5__2", ty: "GlobalNamespace::SongPackMask", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty: "::ArrayW<GlobalNamespace::IBeatmapLevelPack>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_dlcSongPack_5__5", ty: "GlobalNamespace::IBeatmapLevelPack", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__LobbyPlayersDataModel___SetOwnedSongPacks_d__43(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::LobbyPlayersDataModel __4__this, GlobalNamespace::SongPackMask _songPackMask_5__2, ::ArrayW<GlobalNamespace::IBeatmapLevelPack> __7__wrap2, int32_t __7__wrap3, GlobalNamespace::IBeatmapLevelPack _dlcSongPack_5__5, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __u__1) noexcept;


                    constexpr GlobalNamespace__LobbyPlayersDataModel___SetOwnedSongPacks_d__43(GlobalNamespace__LobbyPlayersDataModel___SetOwnedSongPacks_d__43 const&) = default;
                    constexpr GlobalNamespace__LobbyPlayersDataModel___SetOwnedSongPacks_d__43(GlobalNamespace__LobbyPlayersDataModel___SetOwnedSongPacks_d__43&&) = default;
                    constexpr GlobalNamespace__LobbyPlayersDataModel___SetOwnedSongPacks_d__43& operator=(GlobalNamespace__LobbyPlayersDataModel___SetOwnedSongPacks_d__43 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__LobbyPlayersDataModel___SetOwnedSongPacks_d__43& operator=(GlobalNamespace__LobbyPlayersDataModel___SetOwnedSongPacks_d__43&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x60};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LobbyPlayersDataModel___SetOwnedSongPacks_d__43(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncVoidMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder __get___t__builder() const;

 GlobalNamespace::LobbyPlayersDataModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::LobbyPlayersDataModel value) ;

constexpr GlobalNamespace::LobbyPlayersDataModel __get___4__this() const;

 GlobalNamespace::SongPackMask __declspec(property(get=__get__songPackMask_5__2, put=__set__songPackMask_5__2))  _songPackMask_5__2;

constexpr void __set__songPackMask_5__2(GlobalNamespace::SongPackMask value) ;

constexpr GlobalNamespace::SongPackMask __get__songPackMask_5__2() const;

 ::ArrayW<GlobalNamespace::IBeatmapLevelPack> __declspec(property(get=__get___7__wrap2, put=__set___7__wrap2))  __7__wrap2;

constexpr void __set___7__wrap2(::ArrayW<GlobalNamespace::IBeatmapLevelPack> value) ;

constexpr ::ArrayW<GlobalNamespace::IBeatmapLevelPack> __get___7__wrap2() const;

 int32_t __declspec(property(get=__get___7__wrap3, put=__set___7__wrap3))  __7__wrap3;

constexpr void __set___7__wrap3(int32_t value) ;

constexpr int32_t __get___7__wrap3() const;

 GlobalNamespace::IBeatmapLevelPack __declspec(property(get=__get__dlcSongPack_5__5, put=__set__dlcSongPack_5__5))  _dlcSongPack_5__5;

constexpr void __set__dlcSongPack_5__5(GlobalNamespace::IBeatmapLevelPack value) ;

constexpr GlobalNamespace::IBeatmapLevelPack __get__dlcSongPack_5__5() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21fccf4 size 0x68c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21fd380 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetEnumerator>d__60
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4517))
// CS Name: LobbyPlayersDataModel::<GetEnumerator>d__60
class CORDL_TYPE GlobalNamespace__LobbyPlayersDataModel___GetEnumerator_d__60 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::ILobbyPlayerData>>
constexpr operator  System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::ILobbyPlayerData>>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~GlobalNamespace__LobbyPlayersDataModel___GetEnumerator_d__60() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LobbyPlayersDataModel___GetEnumerator_d__60", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LobbyPlayersDataModel___GetEnumerator_d__60(GlobalNamespace__LobbyPlayersDataModel___GetEnumerator_d__60 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LobbyPlayersDataModel___GetEnumerator_d__60", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LobbyPlayersDataModel___GetEnumerator_d__60(GlobalNamespace__LobbyPlayersDataModel___GetEnumerator_d__60&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LobbyPlayersDataModel___GetEnumerator_d__60(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__LobbyPlayersDataModel___GetEnumerator_d__60& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LobbyPlayersDataModel___GetEnumerator_d__60& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LobbyPlayersDataModel___GetEnumerator_d__60& operator=(GlobalNamespace__LobbyPlayersDataModel___GetEnumerator_d__60&& o) noexcept = default;
  constexpr GlobalNamespace__LobbyPlayersDataModel___GetEnumerator_d__60& operator=(GlobalNamespace__LobbyPlayersDataModel___GetEnumerator_d__60 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::ILobbyPlayerData> __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::ILobbyPlayerData> value) ;

constexpr System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::ILobbyPlayerData> __get___2__current() const;

 GlobalNamespace::LobbyPlayersDataModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::LobbyPlayersDataModel value) ;

constexpr GlobalNamespace::LobbyPlayersDataModel __get___4__this() const;

 System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,GlobalNamespace::LobbyPlayerData> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,GlobalNamespace::LobbyPlayerData> value) ;

constexpr System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,GlobalNamespace::LobbyPlayerData> __get___7__wrap1() const;


// Properties

 System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::ILobbyPlayerData> __declspec(property(get=System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String,ILobbyPlayerData___get_Current))  System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String,ILobbyPlayerData___Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__LobbyPlayersDataModel___GetEnumerator_d__60(int32_t __1__state) ;

/// @brief Method .ctor addr 0x21fc900 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x21fd38c size 0x1c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x21fd3a8 size 0x1e4 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x21fd58c size 0x50 virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,ILobbyPlayerData>>.get_Current addr 0x21fd5dc size 0xc virtual true final true
 System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::ILobbyPlayerData> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String,ILobbyPlayerData___get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x21fd5e8 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x21fd628 size 0x5c virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LobbyPlayersDataModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4518))
// CS Name: LobbyPlayersDataModel
class CORDL_TYPE LobbyPlayersDataModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetEnumerator_d__60 = GlobalNamespace::GlobalNamespace__LobbyPlayersDataModel___GetEnumerator_d__60;

using _SetOwnedSongPacks_d__43 = GlobalNamespace::GlobalNamespace__LobbyPlayersDataModel___SetOwnedSongPacks_d__43;

using __c = GlobalNamespace::GlobalNamespace__LobbyPlayersDataModel____c;

/// @brief Convert operator to GlobalNamespace::ILobbyPlayersDataModel
constexpr operator  GlobalNamespace::ILobbyPlayersDataModel() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyDictionary_2<::StringW,GlobalNamespace::ILobbyPlayerData>
constexpr operator  System::Collections::Generic::IReadOnlyDictionary_2<::StringW,GlobalNamespace::ILobbyPlayerData>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::ILobbyPlayerData>>
constexpr operator  System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::ILobbyPlayerData>>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::ILobbyPlayerData>>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::ILobbyPlayerData>>() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~LobbyPlayersDataModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "LobbyPlayersDataModel", modifiers: " const&", def_value: None }]
constexpr LobbyPlayersDataModel(LobbyPlayersDataModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LobbyPlayersDataModel", modifiers: "&&", def_value: None }]
constexpr LobbyPlayersDataModel(LobbyPlayersDataModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LobbyPlayersDataModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LobbyPlayersDataModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LobbyPlayersDataModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LobbyPlayersDataModel& operator=(LobbyPlayersDataModel&& o) noexcept = default;
  constexpr LobbyPlayersDataModel& operator=(LobbyPlayersDataModel const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IMenuRpcManager __declspec(property(get=__get__menuRpcManager, put=__set__menuRpcManager))  _menuRpcManager;

constexpr void __set__menuRpcManager(GlobalNamespace::IMenuRpcManager value) ;

constexpr GlobalNamespace::IMenuRpcManager __get__menuRpcManager() const;

 GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 GlobalNamespace::BeatmapLevelsModel __declspec(property(get=__get__beatmapLevelsModel, put=__set__beatmapLevelsModel))  _beatmapLevelsModel;

constexpr void __set__beatmapLevelsModel(GlobalNamespace::BeatmapLevelsModel value) ;

constexpr GlobalNamespace::BeatmapLevelsModel __get__beatmapLevelsModel() const;

 GlobalNamespace::BeatmapCharacteristicCollection __declspec(property(get=__get__beatmapCharacteristicCollection, put=__set__beatmapCharacteristicCollection))  _beatmapCharacteristicCollection;

constexpr void __set__beatmapCharacteristicCollection(GlobalNamespace::BeatmapCharacteristicCollection value) ;

constexpr GlobalNamespace::BeatmapCharacteristicCollection __get__beatmapCharacteristicCollection() const;

 GlobalNamespace::AdditionalContentModel __declspec(property(get=__get__additionalContentModel, put=__set__additionalContentModel))  _additionalContentModel;

constexpr void __set__additionalContentModel(GlobalNamespace::AdditionalContentModel value) ;

constexpr GlobalNamespace::AdditionalContentModel __get__additionalContentModel() const;

 GlobalNamespace::LobbyPlayerPermissionsModel __declspec(property(get=__get__lobbyPlayerPermissionsModel, put=__set__lobbyPlayerPermissionsModel))  _lobbyPlayerPermissionsModel;

constexpr void __set__lobbyPlayerPermissionsModel(GlobalNamespace::LobbyPlayerPermissionsModel value) ;

constexpr GlobalNamespace::LobbyPlayerPermissionsModel __get__lobbyPlayerPermissionsModel() const;

 GlobalNamespace::LobbyPlayerData __declspec(property(get=__get__emptyLobbyPlayerData, put=__set__emptyLobbyPlayerData))  _emptyLobbyPlayerData;

constexpr void __set__emptyLobbyPlayerData(GlobalNamespace::LobbyPlayerData value) ;

constexpr GlobalNamespace::LobbyPlayerData __get__emptyLobbyPlayerData() const;

 System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::LobbyPlayerData> __declspec(property(get=__get__playersData, put=__set__playersData))  _playersData;

constexpr void __set__playersData(System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::LobbyPlayerData> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::LobbyPlayerData> __get__playersData() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get__cancellationTokenSource, put=__set__cancellationTokenSource))  _cancellationTokenSource;

constexpr void __set__cancellationTokenSource(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get__cancellationTokenSource() const;

 ::StringW __declspec(property(get=__get__partyOwnerId_k__BackingField, put=__set__partyOwnerId_k__BackingField))  _partyOwnerId_k__BackingField;

constexpr void __set__partyOwnerId_k__BackingField(::StringW value) ;

constexpr ::StringW __get__partyOwnerId_k__BackingField() const;

 System::Action_1<::StringW> __declspec(property(get=__get_didChangeEvent, put=__set_didChangeEvent))  didChangeEvent;

constexpr void __set_didChangeEvent(System::Action_1<::StringW> value) ;

constexpr System::Action_1<::StringW> __get_didChangeEvent() const;


// Properties

 ::StringW __declspec(property(get=get_localUserId))  localUserId;

 ::StringW __declspec(property(get=get_partyOwnerId, put=set_partyOwnerId))  partyOwnerId;

 GlobalNamespace::ILobbyPlayerData __declspec(property(get=get_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;

 System::Collections::Generic::IEnumerable_1<::StringW> __declspec(property(get=get_Keys))  Keys;

 System::Collections::Generic::IEnumerable_1<GlobalNamespace::ILobbyPlayerData> __declspec(property(get=get_Values))  Values;


// Methods

/// @brief Method get_localUserId addr 0x21f9100 size 0x140 virtual true final true
 ::StringW get_localUserId() ;

/// @brief Method get_partyOwnerId addr 0x21f9240 size 0x8 virtual true final true
 ::StringW get_partyOwnerId() ;

/// @brief Method set_partyOwnerId addr 0x21f9248 size 0x8 virtual false final false
 void set_partyOwnerId(::StringW value) ;

/// @brief Method add_didChangeEvent addr 0x21f9250 size 0xb0 virtual true final true
 void add_didChangeEvent(System::Action_1<::StringW> value) ;

/// @brief Method remove_didChangeEvent addr 0x21f9300 size 0xb0 virtual true final true
 void remove_didChangeEvent(System::Action_1<::StringW> value) ;

/// @brief Method get_Item addr 0x21f93b0 size 0x80 virtual true final true
 GlobalNamespace::ILobbyPlayerData get_Item(::StringW userId) ;

/// @brief Method GetOrCreateLobbyPlayerDataModel addr 0x21f9430 size 0xdc virtual false final false
 GlobalNamespace::LobbyPlayerData GetOrCreateLobbyPlayerDataModel(::StringW userId, ByRef<bool> alreadyExists) ;

/// @brief Method SetPlayerBeatmapLevel addr 0x21f950c size 0x84 virtual false final false
 void SetPlayerBeatmapLevel(::StringW userId, GlobalNamespace::PreviewDifficultyBeatmap beatmapLevel) ;

/// @brief Method SetPlayerGameplayModifiers addr 0x21f95ac size 0x7c virtual false final false
 void SetPlayerGameplayModifiers(::StringW userId, GlobalNamespace::GameplayModifiers modifiers) ;

/// @brief Method SetPlayerIsActive addr 0x21f9628 size 0x8c virtual false final false
 void SetPlayerIsActive(::StringW userId, bool isActive, bool notifyChange) ;

/// @brief Method SetPlayerIsReady addr 0x21f96b4 size 0x8c virtual false final false
 void SetPlayerIsReady(::StringW userId, bool isReady, bool notifyChange) ;

/// @brief Method SetPlayerIsInLobby addr 0x21f9740 size 0x8c virtual false final false
 void SetPlayerIsInLobby(::StringW userId, bool isInLobby, bool notifyChange) ;

/// @brief Method SetPlayerIsPartyOwner addr 0x21f97cc size 0x94 virtual false final false
 void SetPlayerIsPartyOwner(::StringW userId, bool isPartyOwner, bool notifyChange) ;

/// @brief Method SetLocalPlayerBeatmapLevel addr 0x21f9860 size 0x154 virtual true final true
 void SetLocalPlayerBeatmapLevel(GlobalNamespace::PreviewDifficultyBeatmap beatmapLevel) ;

/// @brief Method ClearLocalPlayerBeatmapLevel addr 0x21f99b4 size 0xbc virtual true final true
 void ClearLocalPlayerBeatmapLevel() ;

/// @brief Method SetLocalPlayerGameplayModifiers addr 0x21f9a70 size 0x11c virtual true final true
 void SetLocalPlayerGameplayModifiers(GlobalNamespace::GameplayModifiers modifiers) ;

/// @brief Method ClearLocalPlayerGameplayModifiers addr 0x21f9b8c size 0xbc virtual true final true
 void ClearLocalPlayerGameplayModifiers() ;

/// @brief Method SetLocalPlayerIsActive addr 0x21f9c48 size 0xc virtual true final true
 void SetLocalPlayerIsActive(bool isActive) ;

/// @brief Method SetLocalPlayerIsActive addr 0x21f9c54 size 0xf4 virtual false final false
 void SetLocalPlayerIsActive(bool isActive, bool notifyChange) ;

/// @brief Method SetLocalPlayerIsReady addr 0x21f9d48 size 0xc virtual true final true
 void SetLocalPlayerIsReady(bool isReady) ;

/// @brief Method SetLocalPlayerIsReady addr 0x21f9d54 size 0xd8 virtual false final false
 void SetLocalPlayerIsReady(bool isReady, bool notifyChange) ;

/// @brief Method SetLocalPlayerIsInLobby addr 0x21f9e2c size 0xc virtual true final true
 void SetLocalPlayerIsInLobby(bool isInLobby) ;

/// @brief Method SetLocalPlayerIsInLobby addr 0x21f9e38 size 0xd8 virtual false final false
 void SetLocalPlayerIsInLobby(bool isInLobby, bool notifyChange) ;

/// @brief Method RequestKickPlayer addr 0x21f9f10 size 0xc8 virtual true final true
 void RequestKickPlayer(::StringW userId) ;

/// @brief Method ClearData addr 0x21f9fd8 size 0x80 virtual true final true
 void ClearData() ;

/// @brief Method ClearRecommendations addr 0x21fa058 size 0x158 virtual true final true
 void ClearRecommendations() ;

/// @brief Method Activate addr 0x21fa1b0 size 0x106c virtual true final true
 void Activate() ;

/// @brief Method Deactivate addr 0x21fb2b0 size 0xa18 virtual true final true
 void Deactivate() ;

/// @brief Method Dispose addr 0x21fbcc8 size 0x4 virtual true final true
 void Dispose() ;

/// @brief Method SetOwnedSongPacks addr 0x21fb21c size 0x94 virtual false final false
 void SetOwnedSongPacks() ;

/// @brief Method HandleMenuRpcManagerGetRecommendedBeatmap addr 0x21fbccc size 0x198 virtual false final false
 void HandleMenuRpcManagerGetRecommendedBeatmap(::StringW userId) ;

/// @brief Method HandleMenuRpcManagerGetRecommendedGameplayModifiers addr 0x21fbe64 size 0x194 virtual false final false
 void HandleMenuRpcManagerGetRecommendedGameplayModifiers(::StringW userId) ;

/// @brief Method HandleMenuRpcManagerGetIsInLobby addr 0x21fbff8 size 0x138 virtual false final false
 void HandleMenuRpcManagerGetIsInLobby(::StringW userId) ;

/// @brief Method HandleMenuRpcManagerGetIsReady addr 0x21fc130 size 0x138 virtual false final false
 void HandleMenuRpcManagerGetIsReady(::StringW userId) ;

/// @brief Method HandleMenuRpcManagerRecommendBeatmap addr 0x21fc268 size 0x40 virtual false final false
 void HandleMenuRpcManagerRecommendBeatmap(::StringW userId, GlobalNamespace::BeatmapIdentifierNetSerializable beatmapId) ;

/// @brief Method HandleMenuRpcManagerRecommendGameplayModifiers addr 0x21fc2a8 size 0x4 virtual false final false
 void HandleMenuRpcManagerRecommendGameplayModifiers(::StringW userId, GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method HandleMenuRpcManagerClearRecommendedGameplayModifiers addr 0x21fc2ac size 0x8 virtual false final false
 void HandleMenuRpcManagerClearRecommendedGameplayModifiers(::StringW userId) ;

/// @brief Method HandleMenuRpcManagerClearBeatmap addr 0x21fc2b4 size 0x8 virtual false final false
 void HandleMenuRpcManagerClearBeatmap(::StringW userId) ;

/// @brief Method HandleMenuRpcManagerSetIsReady addr 0x21fc2bc size 0xc virtual false final false
 void HandleMenuRpcManagerSetIsReady(::StringW userId, bool isReady) ;

/// @brief Method HandleMenuRpcManagerSetIsInLobby addr 0x21fc2c8 size 0xc virtual false final false
 void HandleMenuRpcManagerSetIsInLobby(::StringW userId, bool isInLobby) ;

/// @brief Method HandleMultiplayerSessionManagerPlayerStateChanged addr 0x21fc2d4 size 0xc8 virtual false final false
 void HandleMultiplayerSessionManagerPlayerStateChanged(GlobalNamespace::IConnectedPlayer connectedPlayer) ;

/// @brief Method HandleMultiplayerSessionManagerPlayerConnected addr 0x21fc39c size 0x238 virtual false final false
 void HandleMultiplayerSessionManagerPlayerConnected(GlobalNamespace::IConnectedPlayer connectedPlayer) ;

/// @brief Method HandleMultiplayerSessionManagerPlayerDisconnected addr 0x21fc5d4 size 0x160 virtual false final false
 void HandleMultiplayerSessionManagerPlayerDisconnected(GlobalNamespace::IConnectedPlayer connectedPlayer) ;

/// @brief Method NotifyModelChange addr 0x21f9590 size 0x1c virtual false final false
 void NotifyModelChange(::StringW userId) ;

/// @brief Method HandleMenuRpcManagerGetOwnedSongPacks addr 0x21fc734 size 0x4 virtual false final false
 void HandleMenuRpcManagerGetOwnedSongPacks(::StringW userId) ;

/// @brief Method HandleMenuRpcManagerSetPlayersPermissionConfiguration addr 0x21fc738 size 0x160 virtual false final false
 void HandleMenuRpcManagerSetPlayersPermissionConfiguration(::StringW userId, GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable playersLobbyPermissionConfiguration) ;

/// @brief Method GetEnumerator addr 0x21fc898 size 0x68 virtual true final true
 System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,GlobalNamespace::ILobbyPlayerData>> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x21fc928 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method get_Count addr 0x21fc92c size 0x50 virtual true final true
 int32_t get_Count() ;

/// @brief Method ContainsKey addr 0x21fc97c size 0x58 virtual true final true
 bool ContainsKey(::StringW key) ;

/// @brief Method TryGetValue addr 0x21fc9d4 size 0x7c virtual true final true
 bool TryGetValue(::StringW key, ByRef<GlobalNamespace::ILobbyPlayerData> value) ;

/// @brief Method get_Keys addr 0x21fca50 size 0x50 virtual true final true
 System::Collections::Generic::IEnumerable_1<::StringW> get_Keys() ;

/// @brief Method get_Values addr 0x21fcaa0 size 0x50 virtual true final true
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::ILobbyPlayerData> get_Values() ;

// Ctor Parameters []
explicit LobbyPlayersDataModel() ;

/// @brief Method .ctor addr 0x21fcaf0 size 0xfc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LobbyPlayersDataModel___GetEnumerator_d__60);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LobbyPlayersDataModel___GetEnumerator_d__60, "", "LobbyPlayersDataModel/<GetEnumerator>d__60");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LobbyPlayersDataModel____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LobbyPlayersDataModel____c, "", "LobbyPlayersDataModel/<>c");
NEED_NO_BOX(GlobalNamespace::LobbyPlayersDataModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LobbyPlayersDataModel, "", "LobbyPlayersDataModel");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LobbyPlayersDataModel___SetOwnedSongPacks_d__43, "", "LobbyPlayersDataModel/<SetOwnedSongPacks>d__43");
