#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class IBeatmapDataBasicInfo;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
class EmptyDifficultyBeatmap;
}
namespace GlobalNamespace {
struct GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24;
}
namespace GlobalNamespace {
struct GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23;
}
// Type: ::<GetBeatmapDataBasicInfoAsync>d__23
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4408))
// CS Name: EmptyDifficultyBeatmap::<GetBeatmapDataBasicInfoAsync>d__23
struct CORDL_TYPE GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapDataBasicInfo>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::EmptyDifficultyBeatmap", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapData>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapDataBasicInfo> __t__builder, GlobalNamespace::EmptyDifficultyBeatmap __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapData> __u__1) noexcept;


                    constexpr GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23(GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23 const&) = default;
                    constexpr GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23(GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23&&) = default;
                    constexpr GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23& operator=(GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23& operator=(GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::EmptyDifficultyBeatmap __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::EmptyDifficultyBeatmap value) ;

constexpr GlobalNamespace::EmptyDifficultyBeatmap __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapData> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapData> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapData> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21eac8c size 0x220 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21eaeac size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetBeatmapDataAsync>d__24
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4409))
// CS Name: EmptyDifficultyBeatmap::<GetBeatmapDataAsync>d__24
struct CORDL_TYPE GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::EmptyDifficultyBeatmap", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData> __t__builder, GlobalNamespace::EmptyDifficultyBeatmap __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> __u__1) noexcept;


                    constexpr GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24(GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24 const&) = default;
                    constexpr GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24(GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24&&) = default;
                    constexpr GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24& operator=(GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24& operator=(GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::EmptyDifficultyBeatmap __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::EmptyDifficultyBeatmap value) ;

constexpr GlobalNamespace::EmptyDifficultyBeatmap __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21eaf04 size 0x220 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21eb124 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EmptyDifficultyBeatmap
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4410))
// CS Name: EmptyDifficultyBeatmap
class CORDL_TYPE EmptyDifficultyBeatmap : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetBeatmapDataAsync_d__24 = GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24;

using _GetBeatmapDataBasicInfoAsync_d__23 = GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23;

/// @brief Convert operator to GlobalNamespace::IDifficultyBeatmap
constexpr operator  GlobalNamespace::IDifficultyBeatmap() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~EmptyDifficultyBeatmap() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyDifficultyBeatmap", modifiers: " const&", def_value: None }]
constexpr EmptyDifficultyBeatmap(EmptyDifficultyBeatmap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyDifficultyBeatmap", modifiers: "&&", def_value: None }]
constexpr EmptyDifficultyBeatmap(EmptyDifficultyBeatmap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyDifficultyBeatmap(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyDifficultyBeatmap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyDifficultyBeatmap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyDifficultyBeatmap& operator=(EmptyDifficultyBeatmap&& o) noexcept = default;
  constexpr EmptyDifficultyBeatmap& operator=(EmptyDifficultyBeatmap const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IBeatmapLevel __declspec(property(get=__get__level_k__BackingField, put=__set__level_k__BackingField))  _level_k__BackingField;

constexpr void __set__level_k__BackingField(GlobalNamespace::IBeatmapLevel value) ;

constexpr GlobalNamespace::IBeatmapLevel __get__level_k__BackingField() const;

 GlobalNamespace::IDifficultyBeatmapSet __declspec(property(get=__get__parentDifficultyBeatmapSet_k__BackingField, put=__set__parentDifficultyBeatmapSet_k__BackingField))  _parentDifficultyBeatmapSet_k__BackingField;

constexpr void __set__parentDifficultyBeatmapSet_k__BackingField(GlobalNamespace::IDifficultyBeatmapSet value) ;

constexpr GlobalNamespace::IDifficultyBeatmapSet __get__parentDifficultyBeatmapSet_k__BackingField() const;

 GlobalNamespace::BeatmapDifficulty __declspec(property(get=__get__difficulty_k__BackingField, put=__set__difficulty_k__BackingField))  _difficulty_k__BackingField;

constexpr void __set__difficulty_k__BackingField(GlobalNamespace::BeatmapDifficulty value) ;

constexpr GlobalNamespace::BeatmapDifficulty __get__difficulty_k__BackingField() const;

 int32_t __declspec(property(get=__get__difficultyRank_k__BackingField, put=__set__difficultyRank_k__BackingField))  _difficultyRank_k__BackingField;

constexpr void __set__difficultyRank_k__BackingField(int32_t value) ;

constexpr int32_t __get__difficultyRank_k__BackingField() const;

 float_t __declspec(property(get=__get__noteJumpMovementSpeed_k__BackingField, put=__set__noteJumpMovementSpeed_k__BackingField))  _noteJumpMovementSpeed_k__BackingField;

constexpr void __set__noteJumpMovementSpeed_k__BackingField(float_t value) ;

constexpr float_t __get__noteJumpMovementSpeed_k__BackingField() const;

 float_t __declspec(property(get=__get__noteJumpStartBeatOffset_k__BackingField, put=__set__noteJumpStartBeatOffset_k__BackingField))  _noteJumpStartBeatOffset_k__BackingField;

constexpr void __set__noteJumpStartBeatOffset_k__BackingField(float_t value) ;

constexpr float_t __get__noteJumpStartBeatOffset_k__BackingField() const;

 int32_t __declspec(property(get=__get__environmentNameIdx_k__BackingField, put=__set__environmentNameIdx_k__BackingField))  _environmentNameIdx_k__BackingField;

constexpr void __set__environmentNameIdx_k__BackingField(int32_t value) ;

constexpr int32_t __get__environmentNameIdx_k__BackingField() const;

 GlobalNamespace::BeatmapData __declspec(property(get=__get__beatmapData, put=__set__beatmapData))  _beatmapData;

constexpr void __set__beatmapData(GlobalNamespace::BeatmapData value) ;

constexpr GlobalNamespace::BeatmapData __get__beatmapData() const;


// Properties

 GlobalNamespace::IBeatmapLevel __declspec(property(get=get_level))  level;

 GlobalNamespace::IDifficultyBeatmapSet __declspec(property(get=get_parentDifficultyBeatmapSet))  parentDifficultyBeatmapSet;

 GlobalNamespace::BeatmapDifficulty __declspec(property(get=get_difficulty))  difficulty;

 int32_t __declspec(property(get=get_difficultyRank))  difficultyRank;

 float_t __declspec(property(get=get_noteJumpMovementSpeed))  noteJumpMovementSpeed;

 float_t __declspec(property(get=get_noteJumpStartBeatOffset))  noteJumpStartBeatOffset;

 int32_t __declspec(property(get=get_environmentNameIdx))  environmentNameIdx;

 GlobalNamespace::IBeatmapDataBasicInfo __declspec(property(get=get_beatmapDataBasicInfo))  beatmapDataBasicInfo;


// Methods

/// @brief Method get_level addr 0x21ea9d0 size 0x8 virtual true final true
 GlobalNamespace::IBeatmapLevel get_level() ;

/// @brief Method get_parentDifficultyBeatmapSet addr 0x21ea9d8 size 0x8 virtual true final true
 GlobalNamespace::IDifficultyBeatmapSet get_parentDifficultyBeatmapSet() ;

/// @brief Method get_difficulty addr 0x21ea9e0 size 0x8 virtual true final true
 GlobalNamespace::BeatmapDifficulty get_difficulty() ;

/// @brief Method get_difficultyRank addr 0x21ea9e8 size 0x8 virtual true final true
 int32_t get_difficultyRank() ;

/// @brief Method get_noteJumpMovementSpeed addr 0x21ea9f0 size 0x8 virtual true final true
 float_t get_noteJumpMovementSpeed() ;

/// @brief Method get_noteJumpStartBeatOffset addr 0x21ea9f8 size 0x8 virtual true final true
 float_t get_noteJumpStartBeatOffset() ;

/// @brief Method get_environmentNameIdx addr 0x21eaa00 size 0x8 virtual true final true
 int32_t get_environmentNameIdx() ;

/// @brief Method get_beatmapDataBasicInfo addr 0x21eaa08 size 0x8 virtual false final false
 GlobalNamespace::IBeatmapDataBasicInfo get_beatmapDataBasicInfo() ;

/// @brief Method GetBeatmapDataBasicInfoAsync addr 0x21eaa10 size 0xf0 virtual true final true
 System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapDataBasicInfo> GetBeatmapDataBasicInfoAsync() ;

/// @brief Method GetBeatmapDataAsync addr 0x21eab00 size 0xf0 virtual true final true
 System::Threading::Tasks::Task_1<GlobalNamespace::IReadonlyBeatmapData> GetBeatmapDataAsync(GlobalNamespace::EnvironmentInfoSO environmentInfo, GlobalNamespace::PlayerSpecificSettings playerSpecificSettings) ;

// Ctor Parameters []
explicit EmptyDifficultyBeatmap() ;

/// @brief Method .ctor addr 0x21eabf0 size 0x9c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EmptyDifficultyBeatmap);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EmptyDifficultyBeatmap, "", "EmptyDifficultyBeatmap");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataAsync_d__24, "", "EmptyDifficultyBeatmap/<GetBeatmapDataAsync>d__24");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__EmptyDifficultyBeatmap___GetBeatmapDataBasicInfoAsync_d__23, "", "EmptyDifficultyBeatmap/<GetBeatmapDataBasicInfoAsync>d__23");
