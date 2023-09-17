#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class IBeatmapDataBasicInfo;
}
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveData;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
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
// Forward declare root types
namespace GlobalNamespace {
class CustomDifficultyBeatmap;
}
namespace GlobalNamespace {
class ____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33;
}
// Type: ::<GetBeatmapDataBasicInfoAsync>d__33
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4399))
// CS Name: CustomDifficultyBeatmap::<GetBeatmapDataBasicInfoAsync>d__33
struct CORDL_TYPE ____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::CustomDifficultyBeatmap", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo> __t__builder, ::GlobalNamespace::CustomDifficultyBeatmap __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo> __u__1) noexcept;


                    constexpr ____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33(____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33 const&) = default;
                    constexpr ____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33(____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33&&) = default;
                    constexpr ____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33& operator=(____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33& operator=(____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapDataBasicInfo> __get___t__builder() const;

 ::GlobalNamespace::CustomDifficultyBeatmap __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::CustomDifficultyBeatmap value) ;

constexpr ::GlobalNamespace::CustomDifficultyBeatmap __get___4__this() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapDataBasicInfo> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21e99ec size 0x220 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21e9c0c size 0x58 virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass34_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4400))
// CS Name: CustomDifficultyBeatmap::<>c__DisplayClass34_0
class CORDL_TYPE ____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0(____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0(____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0& operator=(____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0& operator=(____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::IReadonlyBeatmapData __declspec(property(get=__get_readonlyBeatmapData, put=__set_readonlyBeatmapData))  readonlyBeatmapData;

constexpr void __set_readonlyBeatmapData(::GlobalNamespace::IReadonlyBeatmapData value) ;

constexpr ::GlobalNamespace::IReadonlyBeatmapData __get_readonlyBeatmapData() const;

 ::GlobalNamespace::CustomDifficultyBeatmap __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::CustomDifficultyBeatmap value) ;

constexpr ::GlobalNamespace::CustomDifficultyBeatmap __get___4__this() const;

 ::GlobalNamespace::EnvironmentInfoSO __declspec(property(get=__get_originalEnvironmentInfo, put=__set_originalEnvironmentInfo))  originalEnvironmentInfo;

constexpr void __set_originalEnvironmentInfo(::GlobalNamespace::EnvironmentInfoSO value) ;

constexpr ::GlobalNamespace::EnvironmentInfoSO __get_originalEnvironmentInfo() const;

 ::GlobalNamespace::EnvironmentInfoSO __declspec(property(get=__get_environmentInfo, put=__set_environmentInfo))  environmentInfo;

constexpr void __set_environmentInfo(::GlobalNamespace::EnvironmentInfoSO value) ;

constexpr ::GlobalNamespace::EnvironmentInfoSO __get_environmentInfo() const;

 ::GlobalNamespace::PlayerSpecificSettings __declspec(property(get=__get_playerSpecificSettings, put=__set_playerSpecificSettings))  playerSpecificSettings;

constexpr void __set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings value) ;

constexpr ::GlobalNamespace::PlayerSpecificSettings __get_playerSpecificSettings() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0() ;

/// @brief Method .ctor addr 0x21e9c64 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetBeatmapDataAsync>b__0 addr 0x21e9c6c size 0x78 virtual false final false
 void _GetBeatmapDataAsync_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetBeatmapDataAsync>d__34
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4401))
// CS Name: CustomDifficultyBeatmap::<GetBeatmapDataAsync>d__34
struct CORDL_TYPE ____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::CustomDifficultyBeatmap", modifiers: "", def_value: None }, CppParam { name: "environmentInfo", ty: "::GlobalNamespace::EnvironmentInfoSO", modifiers: "", def_value: None }, CppParam { name: "playerSpecificSettings", ty: "::GlobalNamespace::PlayerSpecificSettings", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData> __t__builder, ::GlobalNamespace::CustomDifficultyBeatmap __4__this, ::GlobalNamespace::EnvironmentInfoSO environmentInfo, ::GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0 __8__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr ____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34(____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34 const&) = default;
                    constexpr ____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34(____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34&&) = default;
                    constexpr ____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34& operator=(____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34& operator=(____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IReadonlyBeatmapData> __get___t__builder() const;

 ::GlobalNamespace::CustomDifficultyBeatmap __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::CustomDifficultyBeatmap value) ;

constexpr ::GlobalNamespace::CustomDifficultyBeatmap __get___4__this() const;

 ::GlobalNamespace::EnvironmentInfoSO __declspec(property(get=__get_environmentInfo, put=__set_environmentInfo))  environmentInfo;

constexpr void __set_environmentInfo(::GlobalNamespace::EnvironmentInfoSO value) ;

constexpr ::GlobalNamespace::EnvironmentInfoSO __get_environmentInfo() const;

 ::GlobalNamespace::PlayerSpecificSettings __declspec(property(get=__get_playerSpecificSettings, put=__set_playerSpecificSettings))  playerSpecificSettings;

constexpr void __set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings value) ;

constexpr ::GlobalNamespace::PlayerSpecificSettings __get_playerSpecificSettings() const;

 ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0 __declspec(property(get=__get___8__1, put=__set___8__1))  __8__1;

constexpr void __set___8__1(::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0 value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0 __get___8__1() const;

 ::System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21e9ce4 size 0x2a0 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21e9f84 size 0x58 virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CustomDifficultyBeatmap
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4402))
// CS Name: CustomDifficultyBeatmap
class CORDL_TYPE CustomDifficultyBeatmap : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetBeatmapDataAsync_d__34 = ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34;

using __c__DisplayClass34_0 = ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0;

using _GetBeatmapDataBasicInfoAsync_d__33 = ::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33;

/// @brief Convert operator to ::GlobalNamespace::IDifficultyBeatmap
constexpr operator  ::GlobalNamespace::IDifficultyBeatmap() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~CustomDifficultyBeatmap() = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomDifficultyBeatmap", modifiers: " const&", def_value: None }]
constexpr CustomDifficultyBeatmap(CustomDifficultyBeatmap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomDifficultyBeatmap", modifiers: "&&", def_value: None }]
constexpr CustomDifficultyBeatmap(CustomDifficultyBeatmap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CustomDifficultyBeatmap(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CustomDifficultyBeatmap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CustomDifficultyBeatmap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CustomDifficultyBeatmap& operator=(CustomDifficultyBeatmap&& o) noexcept = default;
  constexpr CustomDifficultyBeatmap& operator=(CustomDifficultyBeatmap const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::IBeatmapLevel __declspec(property(get=__get__level_k__BackingField, put=__set__level_k__BackingField))  _level_k__BackingField;

constexpr void __set__level_k__BackingField(::GlobalNamespace::IBeatmapLevel value) ;

constexpr ::GlobalNamespace::IBeatmapLevel __get__level_k__BackingField() const;

 ::GlobalNamespace::IDifficultyBeatmapSet __declspec(property(get=__get__parentDifficultyBeatmapSet_k__BackingField, put=__set__parentDifficultyBeatmapSet_k__BackingField))  _parentDifficultyBeatmapSet_k__BackingField;

constexpr void __set__parentDifficultyBeatmapSet_k__BackingField(::GlobalNamespace::IDifficultyBeatmapSet value) ;

constexpr ::GlobalNamespace::IDifficultyBeatmapSet __get__parentDifficultyBeatmapSet_k__BackingField() const;

 ::GlobalNamespace::BeatmapDifficulty __declspec(property(get=__get__difficulty_k__BackingField, put=__set__difficulty_k__BackingField))  _difficulty_k__BackingField;

constexpr void __set__difficulty_k__BackingField(::GlobalNamespace::BeatmapDifficulty value) ;

constexpr ::GlobalNamespace::BeatmapDifficulty __get__difficulty_k__BackingField() const;

 int32_t __declspec(property(get=__get__difficultyRank_k__BackingField, put=__set__difficultyRank_k__BackingField))  _difficultyRank_k__BackingField;

constexpr void __set__difficultyRank_k__BackingField(int32_t value) ;

constexpr int32_t __get__difficultyRank_k__BackingField() const;

 float_t __declspec(property(get=__get__noteJumpMovementSpeed_k__BackingField, put=__set__noteJumpMovementSpeed_k__BackingField))  _noteJumpMovementSpeed_k__BackingField;

constexpr void __set__noteJumpMovementSpeed_k__BackingField(float_t value) ;

constexpr float_t __get__noteJumpMovementSpeed_k__BackingField() const;

 float_t __declspec(property(get=__get__noteJumpStartBeatOffset_k__BackingField, put=__set__noteJumpStartBeatOffset_k__BackingField))  _noteJumpStartBeatOffset_k__BackingField;

constexpr void __set__noteJumpStartBeatOffset_k__BackingField(float_t value) ;

constexpr float_t __get__noteJumpStartBeatOffset_k__BackingField() const;

 ::GlobalNamespace::IBeatmapDataBasicInfo __declspec(property(get=__get__beatmapDataBasicInfo_k__BackingField, put=__set__beatmapDataBasicInfo_k__BackingField))  _beatmapDataBasicInfo_k__BackingField;

constexpr void __set__beatmapDataBasicInfo_k__BackingField(::GlobalNamespace::IBeatmapDataBasicInfo value) ;

constexpr ::GlobalNamespace::IBeatmapDataBasicInfo __get__beatmapDataBasicInfo_k__BackingField() const;

 int32_t __declspec(property(get=__get__beatmapColorSchemeIdx_k__BackingField, put=__set__beatmapColorSchemeIdx_k__BackingField))  _beatmapColorSchemeIdx_k__BackingField;

constexpr void __set__beatmapColorSchemeIdx_k__BackingField(int32_t value) ;

constexpr int32_t __get__beatmapColorSchemeIdx_k__BackingField() const;

 float_t __declspec(property(get=__get__beatsPerMinute_k__BackingField, put=__set__beatsPerMinute_k__BackingField))  _beatsPerMinute_k__BackingField;

constexpr void __set__beatsPerMinute_k__BackingField(float_t value) ;

constexpr float_t __get__beatsPerMinute_k__BackingField() const;

 int32_t __declspec(property(get=__get__environmentNameIdx_k__BackingField, put=__set__environmentNameIdx_k__BackingField))  _environmentNameIdx_k__BackingField;

constexpr void __set__environmentNameIdx_k__BackingField(int32_t value) ;

constexpr int32_t __get__environmentNameIdx_k__BackingField() const;

 ::BeatmapSaveDataVersion3::BeatmapSaveData __declspec(property(get=__get__beatmapSaveData_k__BackingField, put=__set__beatmapSaveData_k__BackingField))  _beatmapSaveData_k__BackingField;

constexpr void __set__beatmapSaveData_k__BackingField(::BeatmapSaveDataVersion3::BeatmapSaveData value) ;

constexpr ::BeatmapSaveDataVersion3::BeatmapSaveData __get__beatmapSaveData_k__BackingField() const;


// Properties

 ::GlobalNamespace::IBeatmapLevel __declspec(property(get=get_level))  level;

 ::GlobalNamespace::IDifficultyBeatmapSet __declspec(property(get=get_parentDifficultyBeatmapSet))  parentDifficultyBeatmapSet;

 ::GlobalNamespace::BeatmapDifficulty __declspec(property(get=get_difficulty))  difficulty;

 int32_t __declspec(property(get=get_difficultyRank))  difficultyRank;

 float_t __declspec(property(get=get_noteJumpMovementSpeed))  noteJumpMovementSpeed;

 float_t __declspec(property(get=get_noteJumpStartBeatOffset))  noteJumpStartBeatOffset;

 ::GlobalNamespace::IBeatmapDataBasicInfo __declspec(property(get=get_beatmapDataBasicInfo))  beatmapDataBasicInfo;

 int32_t __declspec(property(get=get_beatmapColorSchemeIdx))  beatmapColorSchemeIdx;

 float_t __declspec(property(get=get_beatsPerMinute))  beatsPerMinute;

 int32_t __declspec(property(get=get_environmentNameIdx))  environmentNameIdx;

 ::BeatmapSaveDataVersion3::BeatmapSaveData __declspec(property(get=get_beatmapSaveData))  beatmapSaveData;


// Methods

/// @brief Method get_level addr 0x21e9708 size 0x8 virtual true final true
 ::GlobalNamespace::IBeatmapLevel get_level() ;

/// @brief Method get_parentDifficultyBeatmapSet addr 0x21e9710 size 0x8 virtual true final true
 ::GlobalNamespace::IDifficultyBeatmapSet get_parentDifficultyBeatmapSet() ;

/// @brief Method get_difficulty addr 0x21e9718 size 0x8 virtual true final true
 ::GlobalNamespace::BeatmapDifficulty get_difficulty() ;

/// @brief Method get_difficultyRank addr 0x21e9720 size 0x8 virtual true final true
 int32_t get_difficultyRank() ;

/// @brief Method get_noteJumpMovementSpeed addr 0x21e9728 size 0x8 virtual true final true
 float_t get_noteJumpMovementSpeed() ;

/// @brief Method get_noteJumpStartBeatOffset addr 0x21e9730 size 0x8 virtual true final true
 float_t get_noteJumpStartBeatOffset() ;

/// @brief Method get_beatmapDataBasicInfo addr 0x21e9738 size 0x8 virtual false final false
 ::GlobalNamespace::IBeatmapDataBasicInfo get_beatmapDataBasicInfo() ;

/// @brief Method get_beatmapColorSchemeIdx addr 0x21e9740 size 0x8 virtual false final false
 int32_t get_beatmapColorSchemeIdx() ;

/// @brief Method get_beatsPerMinute addr 0x21e9748 size 0x8 virtual false final false
 float_t get_beatsPerMinute() ;

/// @brief Method get_environmentNameIdx addr 0x21e9750 size 0x8 virtual true final true
 int32_t get_environmentNameIdx() ;

/// @brief Method get_beatmapSaveData addr 0x21e9758 size 0x8 virtual false final false
 ::BeatmapSaveDataVersion3::BeatmapSaveData get_beatmapSaveData() ;

/// @brief Method GetBeatmapDataBasicInfoAsync addr 0x21e9760 size 0xf0 virtual true final true
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapDataBasicInfo> GetBeatmapDataBasicInfoAsync() ;

/// @brief Method GetBeatmapDataAsync addr 0x21e9850 size 0x108 virtual true final true
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData> GetBeatmapDataAsync(::GlobalNamespace::EnvironmentInfoSO environmentInfo, ::GlobalNamespace::PlayerSpecificSettings playerSpecificSettings) ;

// Ctor Parameters [CppParam { name: "level", ty: "::GlobalNamespace::IBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "parentDifficultyBeatmapSet", ty: "::GlobalNamespace::IDifficultyBeatmapSet", modifiers: "", def_value: None }, CppParam { name: "difficulty", ty: "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None }, CppParam { name: "difficultyRank", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "noteJumpMovementSpeed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "noteJumpStartBeatOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "beatsPerMinute", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "beatmapColorSchemeIdx", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "environmentNameIdx", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "beatmapSaveData", ty: "::BeatmapSaveDataVersion3::BeatmapSaveData", modifiers: "", def_value: None }, CppParam { name: "beatmapDataBasicInfo", ty: "::GlobalNamespace::IBeatmapDataBasicInfo", modifiers: "", def_value: None }]
explicit CustomDifficultyBeatmap(::GlobalNamespace::IBeatmapLevel level, ::GlobalNamespace::IDifficultyBeatmapSet parentDifficultyBeatmapSet, ::GlobalNamespace::BeatmapDifficulty difficulty, int32_t difficultyRank, float_t noteJumpMovementSpeed, float_t noteJumpStartBeatOffset, float_t beatsPerMinute, int32_t beatmapColorSchemeIdx, int32_t environmentNameIdx, ::BeatmapSaveDataVersion3::BeatmapSaveData beatmapSaveData, ::GlobalNamespace::IBeatmapDataBasicInfo beatmapDataBasicInfo) ;

/// @brief Method .ctor addr 0x21e9958 size 0x94 virtual false final false
 void _ctor(::GlobalNamespace::IBeatmapLevel level, ::GlobalNamespace::IDifficultyBeatmapSet parentDifficultyBeatmapSet, ::GlobalNamespace::BeatmapDifficulty difficulty, int32_t difficultyRank, float_t noteJumpMovementSpeed, float_t noteJumpStartBeatOffset, float_t beatsPerMinute, int32_t beatmapColorSchemeIdx, int32_t environmentNameIdx, ::BeatmapSaveDataVersion3::BeatmapSaveData beatmapSaveData, ::GlobalNamespace::IBeatmapDataBasicInfo beatmapDataBasicInfo) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::CustomDifficultyBeatmap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomDifficultyBeatmap, "", "CustomDifficultyBeatmap");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap____c__DisplayClass34_0, "", "CustomDifficultyBeatmap/<>c__DisplayClass34_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataAsync_d__34, "", "CustomDifficultyBeatmap/<GetBeatmapDataAsync>d__34");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__CustomDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__33, "", "CustomDifficultyBeatmap/<GetBeatmapDataBasicInfoAsync>d__33");
