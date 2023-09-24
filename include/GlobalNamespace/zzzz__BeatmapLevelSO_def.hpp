#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class IAssetSongPreviewAudioClipProvider;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace GlobalNamespace {
class IAssetSongAudioClipProvider;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16;
}
namespace GlobalNamespace {
class IBeatmapDataBasicInfo;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class BeatmapDataSO;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68;
}
// Type: ::DifficultyBeatmapSet
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4386))
// CS Name: BeatmapLevelSO::DifficultyBeatmapSet
class CORDL_TYPE GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IDifficultyBeatmapSet
constexpr operator  GlobalNamespace::IDifficultyBeatmapSet() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet(GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet(GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet& operator=(GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet&& o) noexcept = default;
  constexpr GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet& operator=(GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=__get__beatmapCharacteristic, put=__set__beatmapCharacteristic))  _beatmapCharacteristic;

constexpr void __set__beatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO value) ;

constexpr GlobalNamespace::BeatmapCharacteristicSO __get__beatmapCharacteristic() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap> __declspec(property(get=__get__difficultyBeatmaps, put=__set__difficultyBeatmaps))  _difficultyBeatmaps;

constexpr void __set__difficultyBeatmaps(::ArrayW<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap> __get__difficultyBeatmaps() const;


// Properties

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=get_beatmapCharacteristic))  beatmapCharacteristic;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap> __declspec(property(get=get_difficultyBeatmaps))  difficultyBeatmaps;


// Methods

/// @brief Method get_beatmapCharacteristic addr 0x21e85a8 size 0x8 virtual true final true
 GlobalNamespace::BeatmapCharacteristicSO get_beatmapCharacteristic() ;

/// @brief Method get_difficultyBeatmaps addr 0x21e85b0 size 0x8 virtual true final true
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap> get_difficultyBeatmaps() ;

static GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet New_ctor(GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, ::ArrayW<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap> difficultyBeatmaps) ;

/// @brief Method .ctor addr 0x21e85b8 size 0x2c virtual false final false
 void _ctor(GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, ::ArrayW<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap> difficultyBeatmaps) ;

/// @brief Method SetParentLevel addr 0x21e7a20 size 0x44 virtual false final false
 void SetParentLevel(GlobalNamespace::IBeatmapLevel level) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetBeatmapDataBasicInfoAsync>d__16
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4387))
// CS Name: BeatmapLevelSO::DifficultyBeatmap::<GetBeatmapDataBasicInfoAsync>d__16
struct CORDL_TYPE GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapDataBasicInfo>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapDataBasicInfo>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapDataBasicInfo> __t__builder, GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapDataBasicInfo> __u__1) noexcept;


                    constexpr GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16(GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16 const&) = default;
                    constexpr GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16(GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16&&) = default;
                    constexpr GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16& operator=(GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16& operator=(GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapDataBasicInfo> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapDataBasicInfo> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapDataBasicInfo> __get___t__builder() const;

 GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap value) ;

constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapDataBasicInfo> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapDataBasicInfo> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapDataBasicInfo> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21e8874 size 0x1ec virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21e8a60 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetBeatmapDataAsync>d__17
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4388))
// CS Name: BeatmapLevelSO::DifficultyBeatmap::<GetBeatmapDataAsync>d__17
struct CORDL_TYPE GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap", modifiers: "", def_value: None }, CppParam { name: "environmentInfo", ty: "GlobalNamespace::EnvironmentInfoSO", modifiers: "", def_value: None }, CppParam { name: "playerSpecificSettings", ty: "GlobalNamespace::PlayerSpecificSettings", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData> __t__builder, GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap __4__this, GlobalNamespace::EnvironmentInfoSO environmentInfo, GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> __u__1) noexcept;


                    constexpr GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17(GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17 const&) = default;
                    constexpr GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17(GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17&&) = default;
                    constexpr GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17& operator=(GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17& operator=(GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData> __get___t__builder() const;

 GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap value) ;

constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap __get___4__this() const;

 GlobalNamespace::EnvironmentInfoSO __declspec(property(get=__get_environmentInfo, put=__set_environmentInfo))  environmentInfo;

constexpr void __set_environmentInfo(GlobalNamespace::EnvironmentInfoSO value) ;

constexpr GlobalNamespace::EnvironmentInfoSO __get_environmentInfo() const;

 GlobalNamespace::PlayerSpecificSettings __declspec(property(get=__get_playerSpecificSettings, put=__set_playerSpecificSettings))  playerSpecificSettings;

constexpr void __set_playerSpecificSettings(GlobalNamespace::PlayerSpecificSettings value) ;

constexpr GlobalNamespace::PlayerSpecificSettings __get_playerSpecificSettings() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21e8ab8 size 0x2e0 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21e8d98 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DifficultyBeatmap
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4389))
// CS Name: BeatmapLevelSO::DifficultyBeatmap
class CORDL_TYPE GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetBeatmapDataAsync_d__17 = GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17;

using _GetBeatmapDataBasicInfoAsync_d__16 = GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16;

/// @brief Convert operator to GlobalNamespace::IDifficultyBeatmap
constexpr operator  GlobalNamespace::IDifficultyBeatmap() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap(GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap(GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap& operator=(GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap&& o) noexcept = default;
  constexpr GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap& operator=(GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BeatmapDifficulty __declspec(property(get=__get__difficulty, put=__set__difficulty))  _difficulty;

constexpr void __set__difficulty(GlobalNamespace::BeatmapDifficulty value) ;

constexpr GlobalNamespace::BeatmapDifficulty __get__difficulty() const;

 int32_t __declspec(property(get=__get__difficultyRank, put=__set__difficultyRank))  _difficultyRank;

constexpr void __set__difficultyRank(int32_t value) ;

constexpr int32_t __get__difficultyRank() const;

 float_t __declspec(property(get=__get__noteJumpMovementSpeed, put=__set__noteJumpMovementSpeed))  _noteJumpMovementSpeed;

constexpr void __set__noteJumpMovementSpeed(float_t value) ;

constexpr float_t __get__noteJumpMovementSpeed() const;

 float_t __declspec(property(get=__get__noteJumpStartBeatOffset, put=__set__noteJumpStartBeatOffset))  _noteJumpStartBeatOffset;

constexpr void __set__noteJumpStartBeatOffset(float_t value) ;

constexpr float_t __get__noteJumpStartBeatOffset() const;

 int32_t __declspec(property(get=__get__environmentNameIdx, put=__set__environmentNameIdx))  _environmentNameIdx;

constexpr void __set__environmentNameIdx(int32_t value) ;

constexpr int32_t __get__environmentNameIdx() const;

 GlobalNamespace::BeatmapDataSO __declspec(property(get=__get__beatmapData, put=__set__beatmapData))  _beatmapData;

constexpr void __set__beatmapData(GlobalNamespace::BeatmapDataSO value) ;

constexpr GlobalNamespace::BeatmapDataSO __get__beatmapData() const;

 GlobalNamespace::IBeatmapLevel __declspec(property(get=__get__parentLevel, put=__set__parentLevel))  _parentLevel;

constexpr void __set__parentLevel(GlobalNamespace::IBeatmapLevel value) ;

constexpr GlobalNamespace::IBeatmapLevel __get__parentLevel() const;

 GlobalNamespace::IDifficultyBeatmapSet __declspec(property(get=__get__parentDifficultyBeatmapSet, put=__set__parentDifficultyBeatmapSet))  _parentDifficultyBeatmapSet;

constexpr void __set__parentDifficultyBeatmapSet(GlobalNamespace::IDifficultyBeatmapSet value) ;

constexpr GlobalNamespace::IDifficultyBeatmapSet __get__parentDifficultyBeatmapSet() const;


// Properties

 GlobalNamespace::BeatmapDifficulty __declspec(property(get=get_difficulty))  difficulty;

 int32_t __declspec(property(get=get_difficultyRank))  difficultyRank;

 float_t __declspec(property(get=get_noteJumpMovementSpeed))  noteJumpMovementSpeed;

 float_t __declspec(property(get=get_noteJumpStartBeatOffset))  noteJumpStartBeatOffset;

 int32_t __declspec(property(get=get_environmentNameIdx))  environmentNameIdx;

 GlobalNamespace::IBeatmapLevel __declspec(property(get=get_level))  level;

 GlobalNamespace::IDifficultyBeatmapSet __declspec(property(get=get_parentDifficultyBeatmapSet))  parentDifficultyBeatmapSet;


// Methods

/// @brief Method get_difficulty addr 0x21e85e4 size 0x8 virtual true final true
 GlobalNamespace::BeatmapDifficulty get_difficulty() ;

/// @brief Method get_difficultyRank addr 0x21e85ec size 0x8 virtual true final true
 int32_t get_difficultyRank() ;

/// @brief Method get_noteJumpMovementSpeed addr 0x21e85f4 size 0x8 virtual true final true
 float_t get_noteJumpMovementSpeed() ;

/// @brief Method get_noteJumpStartBeatOffset addr 0x21e85fc size 0x8 virtual true final true
 float_t get_noteJumpStartBeatOffset() ;

/// @brief Method get_environmentNameIdx addr 0x21e8604 size 0x8 virtual true final true
 int32_t get_environmentNameIdx() ;

/// @brief Method GetBeatmapDataBasicInfoAsync addr 0x21e860c size 0xf0 virtual true final true
 System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapDataBasicInfo> GetBeatmapDataBasicInfoAsync() ;

/// @brief Method GetBeatmapDataAsync addr 0x21e86fc size 0x104 virtual true final true
 System::Threading::Tasks::Task_1<GlobalNamespace::IReadonlyBeatmapData> GetBeatmapDataAsync(GlobalNamespace::EnvironmentInfoSO environmentInfo, GlobalNamespace::PlayerSpecificSettings playerSpecificSettings) ;

/// @brief Method get_level addr 0x21e8800 size 0x8 virtual true final true
 GlobalNamespace::IBeatmapLevel get_level() ;

/// @brief Method get_parentDifficultyBeatmapSet addr 0x21e8808 size 0x8 virtual true final true
 GlobalNamespace::IDifficultyBeatmapSet get_parentDifficultyBeatmapSet() ;

/// @brief Method SetParents addr 0x21e06d0 size 0x8 virtual false final false
 void SetParents(GlobalNamespace::IBeatmapLevel parentLevel, GlobalNamespace::IDifficultyBeatmapSet parentDifficultyBeatmapSet) ;

static GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap New_ctor(GlobalNamespace::IBeatmapLevel parentLevel, GlobalNamespace::BeatmapDifficulty difficulty, int32_t difficultyRank, float_t noteJumpMovementSpeed, float_t noteJumpStartBeatOffset, int32_t environmentNameIdx, GlobalNamespace::BeatmapDataSO beatmapData) ;

/// @brief Method .ctor addr 0x21e8810 size 0x64 virtual false final false
 void _ctor(GlobalNamespace::IBeatmapLevel parentLevel, GlobalNamespace::BeatmapDifficulty difficulty, int32_t difficultyRank, float_t noteJumpMovementSpeed, float_t noteJumpStartBeatOffset, int32_t environmentNameIdx, GlobalNamespace::BeatmapDataSO beatmapData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Result
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4390))
// CS Name: BeatmapLevelSO::GetBeatmapLevelDataResult::Result
struct CORDL_TYPE GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result(int32_t value__) noexcept;


                    constexpr GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result(GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result const&) = default;
                    constexpr GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result(GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result&&) = default;
                    constexpr GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result& operator=(GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result& operator=(GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result_Unwrapped : int32_t {
__OK = 0,
__NotOwned = 1,
__Fail = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field OK offset 0
static GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result const OK;

/// @brief Field NotOwned offset 0
static GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result const NotOwned;

/// @brief Field Fail offset 0
static GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result const Fail;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GetBeatmapLevelDataResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4391))
// CS Name: BeatmapLevelSO::GetBeatmapLevelDataResult
struct CORDL_TYPE GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Result = GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result;

// Ctor Parameters [CppParam { name: "result", ty: "GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result", modifiers: "", def_value: None }, CppParam { name: "beatmapLevelData", ty: "GlobalNamespace::IBeatmapLevelData", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult(GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result result, GlobalNamespace::IBeatmapLevelData beatmapLevelData) noexcept;


                    constexpr GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult(GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult const&) = default;
                    constexpr GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult(GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult&&) = default;
                    constexpr GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult& operator=(GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult& operator=(GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result __declspec(property(get=__get_result, put=__set_result))  result;

constexpr void __set_result(GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result value) ;

constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result __get_result() const;

 GlobalNamespace::IBeatmapLevelData __declspec(property(get=__get_beatmapLevelData, put=__set_beatmapLevelData))  beatmapLevelData;

constexpr void __set_beatmapLevelData(GlobalNamespace::IBeatmapLevelData value) ;

constexpr GlobalNamespace::IBeatmapLevelData __get_beatmapLevelData() const;


// Methods

/// @brief Method .ctor addr 0x21e8df0 size 0xc virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result result, GlobalNamespace::IBeatmapLevelData beatmapLevelData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetPreviewAudioClipAsync>d__68
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4392))
// CS Name: BeatmapLevelSO::<GetPreviewAudioClipAsync>d__68
struct CORDL_TYPE GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::AudioClip>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::BeatmapLevelSO", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::AudioClip> __t__builder, System::Threading::CancellationToken cancellationToken, GlobalNamespace::BeatmapLevelSO __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> __u__1) noexcept;


                    constexpr GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68(GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68 const&) = default;
                    constexpr GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68(GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68&&) = default;
                    constexpr GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68& operator=(GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68& operator=(GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::AudioClip> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::AudioClip> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::AudioClip> __get___t__builder() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 GlobalNamespace::BeatmapLevelSO __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::BeatmapLevelSO value) ;

constexpr GlobalNamespace::BeatmapLevelSO __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21e8dfc size 0x230 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21e902c size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetCoverImageAsync>d__69
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4393))
// CS Name: BeatmapLevelSO::<GetCoverImageAsync>d__69
struct CORDL_TYPE GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::BeatmapLevelSO", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite> __t__builder, System::Threading::CancellationToken cancellationToken, GlobalNamespace::BeatmapLevelSO __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> __u__1) noexcept;


                    constexpr GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69(GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69 const&) = default;
                    constexpr GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69(GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69&&) = default;
                    constexpr GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69& operator=(GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69& operator=(GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite> __get___t__builder() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 GlobalNamespace::BeatmapLevelSO __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::BeatmapLevelSO value) ;

constexpr GlobalNamespace::BeatmapLevelSO __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21e9084 size 0x230 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21e92b4 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetBeatmapLevelDataAsync>d__72
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4394))
// CS Name: BeatmapLevelSO::<GetBeatmapLevelDataAsync>d__72
struct CORDL_TYPE GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::BeatmapLevelSO", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> __t__builder, GlobalNamespace::BeatmapLevelSO __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> __u__1) noexcept;


                    constexpr GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72(GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72 const&) = default;
                    constexpr GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72(GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72&&) = default;
                    constexpr GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72& operator=(GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72& operator=(GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> __get___t__builder() const;

 GlobalNamespace::BeatmapLevelSO __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::BeatmapLevelSO value) ;

constexpr GlobalNamespace::BeatmapLevelSO __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21e930c size 0x2a0 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21e95ac size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapLevelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4395))
// CS Name: BeatmapLevelSO
class CORDL_TYPE BeatmapLevelSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using _GetBeatmapLevelDataAsync_d__72 = GlobalNamespace::GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72;

using _GetCoverImageAsync_d__69 = GlobalNamespace::GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69;

using _GetPreviewAudioClipAsync_d__68 = GlobalNamespace::GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68;

using GetBeatmapLevelDataResult = GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult;

using DifficultyBeatmap = GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap;

using DifficultyBeatmapSet = GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet;

/// @brief Convert operator to GlobalNamespace::IBeatmapLevel
constexpr operator  GlobalNamespace::IBeatmapLevel() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPreviewBeatmapLevel
constexpr operator  GlobalNamespace::IPreviewBeatmapLevel() const noexcept;

/// @brief Convert operator to GlobalNamespace::IAssetSongAudioClipProvider
constexpr operator  GlobalNamespace::IAssetSongAudioClipProvider() const noexcept;

/// @brief Convert operator to GlobalNamespace::IAssetSongPreviewAudioClipProvider
constexpr operator  GlobalNamespace::IAssetSongPreviewAudioClipProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~BeatmapLevelSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelSO", modifiers: " const&", def_value: None }]
constexpr BeatmapLevelSO(BeatmapLevelSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelSO", modifiers: "&&", def_value: None }]
constexpr BeatmapLevelSO(BeatmapLevelSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapLevelSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr BeatmapLevelSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapLevelSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapLevelSO& operator=(BeatmapLevelSO&& o) noexcept = default;
  constexpr BeatmapLevelSO& operator=(BeatmapLevelSO const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__levelID, put=__set__levelID))  _levelID;

constexpr void __set__levelID(::StringW value) ;

constexpr ::StringW __get__levelID() const;

 ::StringW __declspec(property(get=__get__songName, put=__set__songName))  _songName;

constexpr void __set__songName(::StringW value) ;

constexpr ::StringW __get__songName() const;

 ::StringW __declspec(property(get=__get__songSubName, put=__set__songSubName))  _songSubName;

constexpr void __set__songSubName(::StringW value) ;

constexpr ::StringW __get__songSubName() const;

 ::StringW __declspec(property(get=__get__songAuthorName, put=__set__songAuthorName))  _songAuthorName;

constexpr void __set__songAuthorName(::StringW value) ;

constexpr ::StringW __get__songAuthorName() const;

 ::StringW __declspec(property(get=__get__levelAuthorName, put=__set__levelAuthorName))  _levelAuthorName;

constexpr void __set__levelAuthorName(::StringW value) ;

constexpr ::StringW __get__levelAuthorName() const;

 UnityEngine::AudioClip __declspec(property(get=__get__audioClip, put=__set__audioClip))  _audioClip;

constexpr void __set__audioClip(UnityEngine::AudioClip value) ;

constexpr UnityEngine::AudioClip __get__audioClip() const;

 float_t __declspec(property(get=__get__beatsPerMinute, put=__set__beatsPerMinute))  _beatsPerMinute;

constexpr void __set__beatsPerMinute(float_t value) ;

constexpr float_t __get__beatsPerMinute() const;

 float_t __declspec(property(get=__get__songTimeOffset, put=__set__songTimeOffset))  _songTimeOffset;

constexpr void __set__songTimeOffset(float_t value) ;

constexpr float_t __get__songTimeOffset() const;

 float_t __declspec(property(get=__get__shuffle, put=__set__shuffle))  _shuffle;

constexpr void __set__shuffle(float_t value) ;

constexpr float_t __get__shuffle() const;

 float_t __declspec(property(get=__get__shufflePeriod, put=__set__shufflePeriod))  _shufflePeriod;

constexpr void __set__shufflePeriod(float_t value) ;

constexpr float_t __get__shufflePeriod() const;

 float_t __declspec(property(get=__get__previewStartTime, put=__set__previewStartTime))  _previewStartTime;

constexpr void __set__previewStartTime(float_t value) ;

constexpr float_t __get__previewStartTime() const;

 float_t __declspec(property(get=__get__previewDuration, put=__set__previewDuration))  _previewDuration;

constexpr void __set__previewDuration(float_t value) ;

constexpr float_t __get__previewDuration() const;

 UnityEngine::Sprite __declspec(property(get=__get__coverImage, put=__set__coverImage))  _coverImage;

constexpr void __set__coverImage(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__coverImage() const;

 GlobalNamespace::EnvironmentInfoSO __declspec(property(get=__get__environmentInfo, put=__set__environmentInfo))  _environmentInfo;

constexpr void __set__environmentInfo(GlobalNamespace::EnvironmentInfoSO value) ;

constexpr GlobalNamespace::EnvironmentInfoSO __get__environmentInfo() const;

 GlobalNamespace::EnvironmentInfoSO __declspec(property(get=__get__allDirectionsEnvironmentInfo, put=__set__allDirectionsEnvironmentInfo))  _allDirectionsEnvironmentInfo;

constexpr void __set__allDirectionsEnvironmentInfo(GlobalNamespace::EnvironmentInfoSO value) ;

constexpr GlobalNamespace::EnvironmentInfoSO __get__allDirectionsEnvironmentInfo() const;

 ::ArrayW<GlobalNamespace::EnvironmentInfoSO> __declspec(property(get=__get__environmentInfos, put=__set__environmentInfos))  _environmentInfos;

constexpr void __set__environmentInfos(::ArrayW<GlobalNamespace::EnvironmentInfoSO> value) ;

constexpr ::ArrayW<GlobalNamespace::EnvironmentInfoSO> __get__environmentInfos() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet> __declspec(property(get=__get__difficultyBeatmapSets, put=__set__difficultyBeatmapSets))  _difficultyBeatmapSets;

constexpr void __set__difficultyBeatmapSets(::ArrayW<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet> __get__difficultyBeatmapSets() const;

 bool __declspec(property(get=__get__ignore360MovementBeatmaps, put=__set__ignore360MovementBeatmaps))  _ignore360MovementBeatmaps;

constexpr void __set__ignore360MovementBeatmaps(bool value) ;

constexpr bool __get__ignore360MovementBeatmaps() const;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet> __declspec(property(get=__get__no360MovementDifficultyBeatmapSets, put=__set__no360MovementDifficultyBeatmapSets))  _no360MovementDifficultyBeatmapSets;

constexpr void __set__no360MovementDifficultyBeatmapSets(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet> value) ;

constexpr System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet> __get__no360MovementDifficultyBeatmapSets() const;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> __declspec(property(get=__get__previewDifficultyBeatmapSets, put=__set__previewDifficultyBeatmapSets))  _previewDifficultyBeatmapSets;

constexpr void __set__previewDifficultyBeatmapSets(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> value) ;

constexpr System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> __get__previewDifficultyBeatmapSets() const;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> __declspec(property(get=__get__no360MovementPreviewDifficultyBeatmapSets, put=__set__no360MovementPreviewDifficultyBeatmapSets))  _no360MovementPreviewDifficultyBeatmapSets;

constexpr void __set__no360MovementPreviewDifficultyBeatmapSets(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> value) ;

constexpr System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> __get__no360MovementPreviewDifficultyBeatmapSets() const;

 GlobalNamespace::IBeatmapLevelData __declspec(property(get=__get__beatmapLevelData, put=__set__beatmapLevelData))  _beatmapLevelData;

constexpr void __set__beatmapLevelData(GlobalNamespace::IBeatmapLevelData value) ;

constexpr GlobalNamespace::IBeatmapLevelData __get__beatmapLevelData() const;

 GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult __declspec(property(get=__get__getBeatmapLevelDataResult, put=__set__getBeatmapLevelDataResult))  _getBeatmapLevelDataResult;

constexpr void __set__getBeatmapLevelDataResult(GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult value) ;

constexpr GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult __get__getBeatmapLevelDataResult() const;


// Properties

 ::StringW __declspec(property(get=get_levelID))  levelID;

 ::StringW __declspec(property(get=get_songName))  songName;

 ::StringW __declspec(property(get=get_songSubName))  songSubName;

 ::StringW __declspec(property(get=get_songAuthorName))  songAuthorName;

 ::StringW __declspec(property(get=get_levelAuthorName))  levelAuthorName;

 float_t __declspec(property(get=get_beatsPerMinute))  beatsPerMinute;

 float_t __declspec(property(get=get_songTimeOffset))  songTimeOffset;

 float_t __declspec(property(get=get_shuffle))  shuffle;

 float_t __declspec(property(get=get_shufflePeriod))  shufflePeriod;

 float_t __declspec(property(get=get_previewStartTime))  previewStartTime;

 float_t __declspec(property(get=get_previewDuration))  previewDuration;

 UnityEngine::Sprite __declspec(property(get=get_coverImage))  coverImage;

 GlobalNamespace::EnvironmentInfoSO __declspec(property(get=get_environmentInfo))  environmentInfo;

 GlobalNamespace::EnvironmentInfoSO __declspec(property(get=get_allDirectionsEnvironmentInfo))  allDirectionsEnvironmentInfo;

 ::ArrayW<GlobalNamespace::EnvironmentInfoSO> __declspec(property(get=get_environmentInfos))  environmentInfos;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmapSet> __declspec(property(get=get_difficultyBeatmapSets))  difficultyBeatmapSets;

 float_t __declspec(property(get=get_songDuration))  songDuration;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> __declspec(property(get=get_previewDifficultyBeatmapSets))  previewDifficultyBeatmapSets;

 UnityEngine::AudioClip __declspec(property(get=get_songPreviewAudioClip))  songPreviewAudioClip;

 UnityEngine::AudioClip __declspec(property(get=get_songAudioClip))  songAudioClip;

 GlobalNamespace::IBeatmapLevelData __declspec(property(get=get_beatmapLevelData))  beatmapLevelData;


// Methods

/// @brief Method get_levelID addr 0x21e7800 size 0x8 virtual true final true
 ::StringW get_levelID() ;

/// @brief Method get_songName addr 0x21e7808 size 0x8 virtual true final true
 ::StringW get_songName() ;

/// @brief Method get_songSubName addr 0x21e7810 size 0x8 virtual true final true
 ::StringW get_songSubName() ;

/// @brief Method get_songAuthorName addr 0x21e7818 size 0x8 virtual true final true
 ::StringW get_songAuthorName() ;

/// @brief Method get_levelAuthorName addr 0x21e7820 size 0x8 virtual true final true
 ::StringW get_levelAuthorName() ;

/// @brief Method get_beatsPerMinute addr 0x21e7828 size 0x8 virtual true final true
 float_t get_beatsPerMinute() ;

/// @brief Method get_songTimeOffset addr 0x21e7830 size 0x8 virtual true final true
 float_t get_songTimeOffset() ;

/// @brief Method get_shuffle addr 0x21e7838 size 0x8 virtual true final true
 float_t get_shuffle() ;

/// @brief Method get_shufflePeriod addr 0x21e7840 size 0x8 virtual true final true
 float_t get_shufflePeriod() ;

/// @brief Method get_previewStartTime addr 0x21e7848 size 0x8 virtual true final true
 float_t get_previewStartTime() ;

/// @brief Method get_previewDuration addr 0x21e7850 size 0x8 virtual true final true
 float_t get_previewDuration() ;

/// @brief Method get_coverImage addr 0x21e7858 size 0x8 virtual false final false
 UnityEngine::Sprite get_coverImage() ;

/// @brief Method get_environmentInfo addr 0x21e7860 size 0x8 virtual true final true
 GlobalNamespace::EnvironmentInfoSO get_environmentInfo() ;

/// @brief Method get_allDirectionsEnvironmentInfo addr 0x21e7868 size 0x8 virtual true final true
 GlobalNamespace::EnvironmentInfoSO get_allDirectionsEnvironmentInfo() ;

/// @brief Method get_environmentInfos addr 0x21e7870 size 0x8 virtual true final true
 ::ArrayW<GlobalNamespace::EnvironmentInfoSO> get_environmentInfos() ;

/// @brief Method get_difficultyBeatmapSets addr 0x21e7878 size 0x1c virtual false final false
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmapSet> get_difficultyBeatmapSets() ;

/// @brief Method get_songDuration addr 0x21e7894 size 0x1c virtual true final true
 float_t get_songDuration() ;

/// @brief Method get_previewDifficultyBeatmapSets addr 0x21e78b0 size 0x1c virtual true final true
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PreviewDifficultyBeatmapSet> get_previewDifficultyBeatmapSets() ;

/// @brief Method get_songPreviewAudioClip addr 0x21e78cc size 0x8 virtual true final true
 UnityEngine::AudioClip get_songPreviewAudioClip() ;

/// @brief Method get_songAudioClip addr 0x21e78d4 size 0x8 virtual true final true
 UnityEngine::AudioClip get_songAudioClip() ;

/// @brief Method OnEnable addr 0x21e78dc size 0x1c virtual true final false
 void OnEnable() ;

/// @brief Method InitData addr 0x21e78f8 size 0x128 virtual false final false
 void InitData() ;

/// @brief Method GetPreviewAudioClipAsync addr 0x21e7a64 size 0xfc virtual false final false
 System::Threading::Tasks::Task_1<UnityEngine::AudioClip> GetPreviewAudioClipAsync(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method GetCoverImageAsync addr 0x21e7b60 size 0xfc virtual true final true
 System::Threading::Tasks::Task_1<UnityEngine::Sprite> GetCoverImageAsync(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method get_beatmapLevelData addr 0x21e7c5c size 0x80 virtual true final true
 GlobalNamespace::IBeatmapLevelData get_beatmapLevelData() ;

/// @brief Method GetBeatmapLevelDataAsync addr 0x21e7cdc size 0xf8 virtual false final false
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> GetBeatmapLevelDataAsync(System::Threading::CancellationToken token) ;

/// @brief Method GetDifficultyBeatmap addr 0x21e7dd4 size 0x79c virtual false final false
 GlobalNamespace::IDifficultyBeatmap GetDifficultyBeatmap(GlobalNamespace::BeatmapCharacteristicSO characteristic, GlobalNamespace::BeatmapDifficulty difficulty) ;

/// @brief Method InitFull addr 0x21e8570 size 0x30 virtual false final false
 void InitFull(::StringW levelID, ::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::StringW levelAuthorName, UnityEngine::AudioClip audioClip, float_t beatsPerMinute, float_t songTimeOffset, float_t shuffle, float_t shufflePeriod, float_t previewStartTime, float_t previewDuration, UnityEngine::Sprite coverImage, GlobalNamespace::EnvironmentInfoSO environmentInfo, GlobalNamespace::EnvironmentInfoSO allDirectionsEnvironmentInfo, ::ArrayW<GlobalNamespace::EnvironmentInfoSO> environmentInfos, ::ArrayW<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet> difficultyBeatmapSets) ;

static GlobalNamespace::BeatmapLevelSO New_ctor() ;

/// @brief Method .ctor addr 0x21e85a0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult__Result, "", "BeatmapLevelSO/GetBeatmapLevelDataResult/Result");
NEED_NO_BOX(GlobalNamespace::BeatmapLevelSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelSO, "", "BeatmapLevelSO");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap, "", "BeatmapLevelSO/DifficultyBeatmap");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmapSet, "", "BeatmapLevelSO/DifficultyBeatmapSet");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataAsync_d__17, "", "BeatmapLevelSO/DifficultyBeatmap/<GetBeatmapDataAsync>d__17");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapLevelSO__DifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__16, "", "BeatmapLevelSO/DifficultyBeatmap/<GetBeatmapDataBasicInfoAsync>d__16");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult, "", "BeatmapLevelSO/GetBeatmapLevelDataResult");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapLevelSO___GetBeatmapLevelDataAsync_d__72, "", "BeatmapLevelSO/<GetBeatmapLevelDataAsync>d__72");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapLevelSO___GetCoverImageAsync_d__69, "", "BeatmapLevelSO/<GetCoverImageAsync>d__69");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapLevelSO___GetPreviewAudioClipAsync_d__68, "", "BeatmapLevelSO/<GetPreviewAudioClipAsync>d__68");
