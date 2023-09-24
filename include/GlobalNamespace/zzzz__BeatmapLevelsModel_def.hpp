#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class BeatmapLevelPackCollectionSO;
}
namespace GlobalNamespace {
class AdditionalContentModel;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33;
}
namespace GlobalNamespace {
class BeatmapLevelDataLoader;
}
namespace GlobalNamespace {
class IBeatmapLevelPackCollection;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapLevelLoader;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class BeatmapLevelPackCollectionContainerSO;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class IBeatmapDataAssetFileModel;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39;
}
namespace GlobalNamespace {
class AudioClipAsyncLoader;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapLevelsModel____c;
}
namespace GlobalNamespace {
template<typename K,typename V>
class HMCache_2;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult;
}
namespace GlobalNamespace {
struct LevelDataAssetDownloadUpdate;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapLevelsModel__InitData;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState;
}
namespace UnityEngine {
class AudioClip;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult;
}
namespace GlobalNamespace {
struct GlobalNamespace__AdditionalContentModel__EntitlementStatus;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapLevelsModel__InitData;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapLevelsModel____c;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4377))
// CS Name: BeatmapLevelsModel::InitData
class CORDL_TYPE GlobalNamespace__BeatmapLevelsModel__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__BeatmapLevelsModel__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapLevelsModel__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelsModel__InitData(GlobalNamespace__BeatmapLevelsModel__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapLevelsModel__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelsModel__InitData(GlobalNamespace__BeatmapLevelsModel__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelsModel__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BeatmapLevelsModel__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapLevelsModel__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapLevelsModel__InitData& operator=(GlobalNamespace__BeatmapLevelsModel__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__BeatmapLevelsModel__InitData& operator=(GlobalNamespace__BeatmapLevelsModel__InitData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_maxCachedBeatmapLevels, put=__set_maxCachedBeatmapLevels))  maxCachedBeatmapLevels;

constexpr void __set_maxCachedBeatmapLevels(int32_t value) ;

constexpr int32_t __get_maxCachedBeatmapLevels() const;


// Methods

static GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__InitData New_ctor(int32_t maxCachedBeatmapLevels) ;

/// @brief Method .ctor addr 0x21e6c30 size 0x28 virtual false final false
 void _ctor(int32_t maxCachedBeatmapLevels) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GetBeatmapLevelResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4378))
// CS Name: BeatmapLevelsModel::GetBeatmapLevelResult
struct CORDL_TYPE GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "isError", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "beatmapLevel", ty: "GlobalNamespace::IBeatmapLevel", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult(bool isError, GlobalNamespace::IBeatmapLevel beatmapLevel) noexcept;


                    constexpr GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult(GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult const&) = default;
                    constexpr GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult(GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult&&) = default;
                    constexpr GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult& operator=(GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult& operator=(GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_isError, put=__set_isError))  isError;

constexpr void __set_isError(bool value) ;

constexpr bool __get_isError() const;

 GlobalNamespace::IBeatmapLevel __declspec(property(get=__get_beatmapLevel, put=__set_beatmapLevel))  beatmapLevel;

constexpr void __set_beatmapLevel(GlobalNamespace::IBeatmapLevel value) ;

constexpr GlobalNamespace::IBeatmapLevel __get_beatmapLevel() const;


// Methods

/// @brief Method .ctor addr 0x21e6c58 size 0x10 virtual false final false
 void _ctor(bool isError, GlobalNamespace::IBeatmapLevel beatmapLevel) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DownloadingState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4379))
// CS Name: BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState
struct CORDL_TYPE GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState(int32_t value__) noexcept;


                    constexpr GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState(GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState const&) = default;
                    constexpr GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState(GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState&&) = default;
                    constexpr GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState& operator=(GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState& operator=(GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState_Unwrapped : int32_t {
__PreparingToDownload = 0,
__Downloading = 1,
__Completed = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field PreparingToDownload offset 0
static GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState const PreparingToDownload;

/// @brief Field Downloading offset 0
static GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState const Downloading;

/// @brief Field Completed offset 0
static GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState const Completed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LevelDownloadingUpdate
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4380))
// CS Name: BeatmapLevelsModel::LevelDownloadingUpdate
struct CORDL_TYPE GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using DownloadingState = GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState;

// Ctor Parameters [CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "bytesTotal", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "bytesTransferred", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "downloadingState", ty: "GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate(::StringW levelID, uint32_t bytesTotal, uint32_t bytesTransferred, GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState downloadingState) noexcept;


                    constexpr GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate(GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate const&) = default;
                    constexpr GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate(GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate&&) = default;
                    constexpr GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate& operator=(GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate& operator=(GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_levelID, put=__set_levelID))  levelID;

constexpr void __set_levelID(::StringW value) ;

constexpr ::StringW __get_levelID() const;

 uint32_t __declspec(property(get=__get_bytesTotal, put=__set_bytesTotal))  bytesTotal;

constexpr void __set_bytesTotal(uint32_t value) ;

constexpr uint32_t __get_bytesTotal() const;

 uint32_t __declspec(property(get=__get_bytesTransferred, put=__set_bytesTransferred))  bytesTransferred;

constexpr void __set_bytesTransferred(uint32_t value) ;

constexpr uint32_t __get_bytesTransferred() const;

 GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState __declspec(property(get=__get_downloadingState, put=__set_downloadingState))  downloadingState;

constexpr void __set_downloadingState(GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState value) ;

constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState __get_downloadingState() const;


// Methods

/// @brief Method .ctor addr 0x21e6a0c size 0x10 virtual false final false
 void _ctor(::StringW levelID, uint32_t bytesTotal, uint32_t bytesTransferred, GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState downloadingState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<ReloadCustomLevelPackCollectionAsync>d__33
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4381))
// CS Name: BeatmapLevelsModel::<ReloadCustomLevelPackCollectionAsync>d__33
struct CORDL_TYPE GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelPackCollection>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelPackCollection>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelPackCollection> __t__builder, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelPackCollection> __u__1) noexcept;


                    constexpr GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33(GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33 const&) = default;
                    constexpr GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33(GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33&&) = default;
                    constexpr GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33& operator=(GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33& operator=(GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelPackCollection> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelPackCollection> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevelPackCollection> __get___t__builder() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelPackCollection> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelPackCollection> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelPackCollection> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21e6c68 size 0x20c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21e6e74 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass36_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4382))
// CS Name: BeatmapLevelsModel::<>c__DisplayClass36_0
class CORDL_TYPE GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0(GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0(GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0& operator=(GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0&& o) noexcept = default;
  constexpr GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0& operator=(GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0 const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_levelId, put=__set_levelId))  levelId;

constexpr void __set_levelId(::StringW value) ;

constexpr ::StringW __get_levelId() const;


// Methods

static GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0 New_ctor() ;

/// @brief Method .ctor addr 0x21e66b4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetLevelPreviewForLevelId>b__1 addr 0x21e6ecc size 0xac virtual false final false
 bool _GetLevelPreviewForLevelId_b__1(GlobalNamespace::IPreviewBeatmapLevel beatmapLevel) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4383))
// CS Name: BeatmapLevelsModel::<>c
class CORDL_TYPE GlobalNamespace__BeatmapLevelsModel____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__BeatmapLevelsModel____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapLevelsModel____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelsModel____c(GlobalNamespace__BeatmapLevelsModel____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapLevelsModel____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelsModel____c(GlobalNamespace__BeatmapLevelsModel____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelsModel____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BeatmapLevelsModel____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapLevelsModel____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapLevelsModel____c& operator=(GlobalNamespace__BeatmapLevelsModel____c&& o) noexcept = default;
  constexpr GlobalNamespace__BeatmapLevelsModel____c& operator=(GlobalNamespace__BeatmapLevelsModel____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c value) ;

static GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c __get___9() ;

static System::Func_2<GlobalNamespace::IBeatmapLevelPack,System::Collections::Generic::IEnumerable_1<GlobalNamespace::IPreviewBeatmapLevel>> __declspec(property(get=__get___9__36_0, put=__set___9__36_0))  __9__36_0;

static void __set___9__36_0(System::Func_2<GlobalNamespace::IBeatmapLevelPack,System::Collections::Generic::IEnumerable_1<GlobalNamespace::IPreviewBeatmapLevel>> value) ;

static System::Func_2<GlobalNamespace::IBeatmapLevelPack,System::Collections::Generic::IEnumerable_1<GlobalNamespace::IPreviewBeatmapLevel>> __get___9__36_0() ;


// Methods

static GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c New_ctor() ;

/// @brief Method .ctor addr 0x21e6fdc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetLevelPreviewForLevelId>b__36_0 addr 0x21e6fe4 size 0x114 virtual false final false
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::IPreviewBeatmapLevel> _GetLevelPreviewForLevelId_b__36_0(GlobalNamespace::IBeatmapLevelPack beatmapLevelPack) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetBeatmapLevelAsync>d__39
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4384))
// CS Name: BeatmapLevelsModel::<GetBeatmapLevelAsync>d__39
struct CORDL_TYPE GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::BeatmapLevelsModel", modifiers: "", def_value: None }, CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "_beatmapLevel_5__2", ty: "GlobalNamespace::IBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "_loadLevelResult_5__3", ty: "GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> __t__builder, GlobalNamespace::BeatmapLevelsModel __4__this, ::StringW levelID, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __u__1, GlobalNamespace::IBeatmapLevel _beatmapLevel_5__2, GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult _loadLevelResult_5__3, System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> __u__2, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> __u__3) noexcept;


                    constexpr GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39(GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39 const&) = default;
                    constexpr GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39(GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39&&) = default;
                    constexpr GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39& operator=(GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39& operator=(GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x68};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> __get___t__builder() const;

 GlobalNamespace::BeatmapLevelsModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::BeatmapLevelsModel value) ;

constexpr GlobalNamespace::BeatmapLevelsModel __get___4__this() const;

 ::StringW __declspec(property(get=__get_levelID, put=__set_levelID))  levelID;

constexpr void __set_levelID(::StringW value) ;

constexpr ::StringW __get_levelID() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __get___u__1() const;

 GlobalNamespace::IBeatmapLevel __declspec(property(get=__get__beatmapLevel_5__2, put=__set__beatmapLevel_5__2))  _beatmapLevel_5__2;

constexpr void __set__beatmapLevel_5__2(GlobalNamespace::IBeatmapLevel value) ;

constexpr GlobalNamespace::IBeatmapLevel __get__beatmapLevel_5__2() const;

 GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult __declspec(property(get=__get__loadLevelResult_5__3, put=__set__loadLevelResult_5__3))  _loadLevelResult_5__3;

constexpr void __set__loadLevelResult_5__3(GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult value) ;

constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult __get__loadLevelResult_5__3() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> __get___u__2() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> __declspec(property(get=__get___u__3, put=__set___u__3))  __u__3;

constexpr void __set___u__3(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> __get___u__3() const;


// Methods

/// @brief Method MoveNext addr 0x21e70f8 size 0x6b0 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21e77a8 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapLevelsModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4385))
// CS Name: BeatmapLevelsModel
class CORDL_TYPE BeatmapLevelsModel : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _GetBeatmapLevelAsync_d__39 = GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39;

using __c = GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c;

using __c__DisplayClass36_0 = GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0;

using _ReloadCustomLevelPackCollectionAsync_d__33 = GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33;

using LevelDownloadingUpdate = GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate;

using GetBeatmapLevelResult = GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult;

using InitData = GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~BeatmapLevelsModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsModel", modifiers: " const&", def_value: None }]
constexpr BeatmapLevelsModel(BeatmapLevelsModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsModel", modifiers: "&&", def_value: None }]
constexpr BeatmapLevelsModel(BeatmapLevelsModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapLevelsModel(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BeatmapLevelsModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapLevelsModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapLevelsModel& operator=(BeatmapLevelsModel&& o) noexcept = default;
  constexpr BeatmapLevelsModel& operator=(BeatmapLevelsModel const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BeatmapLevelPackCollectionContainerSO __declspec(property(get=__get__dlcLevelPackCollectionContainer, put=__set__dlcLevelPackCollectionContainer))  _dlcLevelPackCollectionContainer;

constexpr void __set__dlcLevelPackCollectionContainer(GlobalNamespace::BeatmapLevelPackCollectionContainerSO value) ;

constexpr GlobalNamespace::BeatmapLevelPackCollectionContainerSO __get__dlcLevelPackCollectionContainer() const;

 GlobalNamespace::BeatmapLevelPackCollectionSO __declspec(property(get=__get__ostAndExtrasPackCollection, put=__set__ostAndExtrasPackCollection))  _ostAndExtrasPackCollection;

constexpr void __set__ostAndExtrasPackCollection(GlobalNamespace::BeatmapLevelPackCollectionSO value) ;

constexpr GlobalNamespace::BeatmapLevelPackCollectionSO __get__ostAndExtrasPackCollection() const;

 int32_t __declspec(property(get=__get__maxCachedBeatmapLevels, put=__set__maxCachedBeatmapLevels))  _maxCachedBeatmapLevels;

constexpr void __set__maxCachedBeatmapLevels(int32_t value) ;

constexpr int32_t __get__maxCachedBeatmapLevels() const;

 GlobalNamespace::AdditionalContentModel __declspec(property(get=__get__additionalContentModel, put=__set__additionalContentModel))  _additionalContentModel;

constexpr void __set__additionalContentModel(GlobalNamespace::AdditionalContentModel value) ;

constexpr GlobalNamespace::AdditionalContentModel __get__additionalContentModel() const;

 GlobalNamespace::IBeatmapDataAssetFileModel __declspec(property(get=__get__beatmapDataAssetFileModel, put=__set__beatmapDataAssetFileModel))  _beatmapDataAssetFileModel;

constexpr void __set__beatmapDataAssetFileModel(GlobalNamespace::IBeatmapDataAssetFileModel value) ;

constexpr GlobalNamespace::IBeatmapDataAssetFileModel __get__beatmapDataAssetFileModel() const;

 GlobalNamespace::AudioClipAsyncLoader __declspec(property(get=__get__audioClipAsyncLoader, put=__set__audioClipAsyncLoader))  _audioClipAsyncLoader;

constexpr void __set__audioClipAsyncLoader(GlobalNamespace::AudioClipAsyncLoader value) ;

constexpr GlobalNamespace::AudioClipAsyncLoader __get__audioClipAsyncLoader() const;

 GlobalNamespace::BeatmapLevelDataLoader __declspec(property(get=__get__beatmapLevelDataLoader, put=__set__beatmapLevelDataLoader))  _beatmapLevelDataLoader;

constexpr void __set__beatmapLevelDataLoader(GlobalNamespace::BeatmapLevelDataLoader value) ;

constexpr GlobalNamespace::BeatmapLevelDataLoader __get__beatmapLevelDataLoader() const;

 System::Action_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate> __declspec(property(get=__get_levelDownloadingUpdateEvent, put=__set_levelDownloadingUpdateEvent))  levelDownloadingUpdateEvent;

constexpr void __set_levelDownloadingUpdateEvent(System::Action_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate> value) ;

constexpr System::Action_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate> __get_levelDownloadingUpdateEvent() const;

 GlobalNamespace::IBeatmapLevelPackCollection __declspec(property(get=__get__allLoadedBeatmapLevelPackCollection, put=__set__allLoadedBeatmapLevelPackCollection))  _allLoadedBeatmapLevelPackCollection;

constexpr void __set__allLoadedBeatmapLevelPackCollection(GlobalNamespace::IBeatmapLevelPackCollection value) ;

constexpr GlobalNamespace::IBeatmapLevelPackCollection __get__allLoadedBeatmapLevelPackCollection() const;

 GlobalNamespace::IBeatmapLevelPackCollection __declspec(property(get=__get__allLoadedBeatmapLevelWithoutCustomLevelPackCollection, put=__set__allLoadedBeatmapLevelWithoutCustomLevelPackCollection))  _allLoadedBeatmapLevelWithoutCustomLevelPackCollection;

constexpr void __set__allLoadedBeatmapLevelWithoutCustomLevelPackCollection(GlobalNamespace::IBeatmapLevelPackCollection value) ;

constexpr GlobalNamespace::IBeatmapLevelPackCollection __get__allLoadedBeatmapLevelWithoutCustomLevelPackCollection() const;

 GlobalNamespace::IBeatmapLevelPackCollection __declspec(property(get=__get__customLevelPackCollection, put=__set__customLevelPackCollection))  _customLevelPackCollection;

constexpr void __set__customLevelPackCollection(GlobalNamespace::IBeatmapLevelPackCollection value) ;

constexpr GlobalNamespace::IBeatmapLevelPackCollection __get__customLevelPackCollection() const;

 GlobalNamespace::HMCache_2<::StringW,GlobalNamespace::IBeatmapLevel> __declspec(property(get=__get__loadedBeatmapLevels, put=__set__loadedBeatmapLevels))  _loadedBeatmapLevels;

constexpr void __set__loadedBeatmapLevels(GlobalNamespace::HMCache_2<::StringW,GlobalNamespace::IBeatmapLevel> value) ;

constexpr GlobalNamespace::HMCache_2<::StringW,GlobalNamespace::IBeatmapLevel> __get__loadedBeatmapLevels() const;

 System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::IPreviewBeatmapLevel> __declspec(property(get=__get__loadedPreviewBeatmapLevels, put=__set__loadedPreviewBeatmapLevels))  _loadedPreviewBeatmapLevels;

constexpr void __set__loadedPreviewBeatmapLevels(System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::IPreviewBeatmapLevel> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::IPreviewBeatmapLevel> __get__loadedPreviewBeatmapLevels() const;

 GlobalNamespace::BeatmapLevelLoader __declspec(property(get=__get__beatmapLevelLoader, put=__set__beatmapLevelLoader))  _beatmapLevelLoader;

constexpr void __set__beatmapLevelLoader(GlobalNamespace::BeatmapLevelLoader value) ;

constexpr GlobalNamespace::BeatmapLevelLoader __get__beatmapLevelLoader() const;


// Properties

 GlobalNamespace::BeatmapLevelPackCollectionSO __declspec(property(get=get_ostAndExtrasPackCollection))  ostAndExtrasPackCollection;

 GlobalNamespace::IBeatmapLevelPackCollection __declspec(property(get=get_dlcBeatmapLevelPackCollection))  dlcBeatmapLevelPackCollection;

 GlobalNamespace::IBeatmapLevelPackCollection __declspec(property(get=get_allLoadedBeatmapLevelPackCollection))  allLoadedBeatmapLevelPackCollection;

 GlobalNamespace::IBeatmapLevelPackCollection __declspec(property(get=get_allLoadedBeatmapLevelWithoutCustomLevelPackCollection))  allLoadedBeatmapLevelWithoutCustomLevelPackCollection;

 GlobalNamespace::IBeatmapLevelPackCollection __declspec(property(get=get_customLevelPackCollection))  customLevelPackCollection;


// Methods

/// @brief Method add_levelDownloadingUpdateEvent addr 0x21e5418 size 0xb0 virtual false final false
 void add_levelDownloadingUpdateEvent(System::Action_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate> value) ;

/// @brief Method remove_levelDownloadingUpdateEvent addr 0x21e54c8 size 0xb0 virtual false final false
 void remove_levelDownloadingUpdateEvent(System::Action_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate> value) ;

/// @brief Method get_ostAndExtrasPackCollection addr 0x21e5578 size 0x8 virtual false final false
 GlobalNamespace::BeatmapLevelPackCollectionSO get_ostAndExtrasPackCollection() ;

/// @brief Method get_dlcBeatmapLevelPackCollection addr 0x21e5580 size 0x1c virtual false final false
 GlobalNamespace::IBeatmapLevelPackCollection get_dlcBeatmapLevelPackCollection() ;

/// @brief Method get_allLoadedBeatmapLevelPackCollection addr 0x21e559c size 0x8 virtual false final false
 GlobalNamespace::IBeatmapLevelPackCollection get_allLoadedBeatmapLevelPackCollection() ;

/// @brief Method get_allLoadedBeatmapLevelWithoutCustomLevelPackCollection addr 0x21e55a4 size 0x8 virtual false final false
 GlobalNamespace::IBeatmapLevelPackCollection get_allLoadedBeatmapLevelWithoutCustomLevelPackCollection() ;

/// @brief Method get_customLevelPackCollection addr 0x21e55ac size 0x8 virtual false final false
 GlobalNamespace::IBeatmapLevelPackCollection get_customLevelPackCollection() ;

/// @brief Method Init addr 0x21e55b4 size 0x148 virtual false final false
 void Init(GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__InitData initData) ;

/// @brief Method Start addr 0x21e5c60 size 0xec virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x21e5d4c size 0x16c virtual false final false
 void OnDestroy() ;

/// @brief Method ClearLoadedBeatmapLevelsCaches addr 0x21e5eb8 size 0x50 virtual false final false
 void ClearLoadedBeatmapLevelsCaches() ;

/// @brief Method ReloadCustomLevelPackCollectionAsync addr 0x21e5f08 size 0xe4 virtual false final false
 System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapLevelPackCollection> ReloadCustomLevelPackCollectionAsync(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method GetLevelPackForLevelId addr 0x21e5fec size 0x554 virtual false final false
 GlobalNamespace::IBeatmapLevelPack GetLevelPackForLevelId(::StringW levelId) ;

/// @brief Method GetLevelPack addr 0x21e6540 size 0x174 virtual false final false
 GlobalNamespace::IBeatmapLevelPack GetLevelPack(::StringW levePacklId) ;

/// @brief Method GetLevelPreviewForLevelId addr 0x21e278c size 0x220 virtual false final false
 GlobalNamespace::IPreviewBeatmapLevel GetLevelPreviewForLevelId(::StringW levelId) ;

/// @brief Method IsBeatmapLevelLoaded addr 0x21e66bc size 0xdc virtual false final false
 bool IsBeatmapLevelLoaded(::StringW levelId) ;

/// @brief Method GetBeatmapLevelIfLoaded addr 0x21e6798 size 0x110 virtual false final false
 GlobalNamespace::IBeatmapLevel GetBeatmapLevelIfLoaded(::StringW levelId) ;

/// @brief Method GetBeatmapLevelAsync addr 0x21e68a8 size 0x114 virtual false final false
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> GetBeatmapLevelAsync(::StringW levelID, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method HandleLevelDataAssetDownloadUpdate addr 0x21e69bc size 0x50 virtual false final false
 void HandleLevelDataAssetDownloadUpdate(GlobalNamespace::LevelDataAssetDownloadUpdate update) ;

/// @brief Method HandleItemWillBeRemovedFromCache addr 0x21e6a1c size 0x1c virtual false final false
 void HandleItemWillBeRemovedFromCache(GlobalNamespace::IBeatmapLevel beatmapLevel) ;

/// @brief Method UpdateLoadedPreviewLevels addr 0x21e56fc size 0x564 virtual false final false
 void UpdateLoadedPreviewLevels() ;

/// @brief Method UpdateAllLoadedBeatmapLevelPacks addr 0x21e6a38 size 0x174 virtual false final false
 void UpdateAllLoadedBeatmapLevelPacks() ;

static GlobalNamespace::BeatmapLevelsModel New_ctor() ;

/// @brief Method .ctor addr 0x21e6bac size 0x84 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate__DownloadingState, "", "BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState");
NEED_NO_BOX(GlobalNamespace::BeatmapLevelsModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelsModel, "", "BeatmapLevelsModel");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__InitData, "", "BeatmapLevelsModel/InitData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c, "", "BeatmapLevelsModel/<>c");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapLevelsModel____c__DisplayClass36_0, "", "BeatmapLevelsModel/<>c__DisplayClass36_0");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult, "", "BeatmapLevelsModel/GetBeatmapLevelResult");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate, "", "BeatmapLevelsModel/LevelDownloadingUpdate");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___GetBeatmapLevelAsync_d__39, "", "BeatmapLevelsModel/<GetBeatmapLevelAsync>d__39");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapLevelsModel___ReloadCustomLevelPackCollectionAsync_d__33, "", "BeatmapLevelsModel/<ReloadCustomLevelPackCollectionAsync>d__33");
