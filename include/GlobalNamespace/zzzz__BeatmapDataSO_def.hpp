#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5;
}
namespace BeatmapSaveDataVersion3 {
class BeatmapSaveData;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class IBeatmapDataBasicInfo;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataSO;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6;
}
// Type: ::<>c__DisplayClass1_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4275))
// CS Name: BeatmapDataSO::<>c__DisplayClass1_0
class CORDL_TYPE GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0(GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0(GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0& operator=(GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0&& o) noexcept = default;
  constexpr GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0& operator=(GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IBeatmapDataBasicInfo __declspec(property(get=__get_beatmapDataBasicInfo, put=__set_beatmapDataBasicInfo))  beatmapDataBasicInfo;

constexpr void __set_beatmapDataBasicInfo(GlobalNamespace::IBeatmapDataBasicInfo value) ;

constexpr GlobalNamespace::IBeatmapDataBasicInfo __get_beatmapDataBasicInfo() const;

 BeatmapSaveDataVersion3::BeatmapSaveData __declspec(property(get=__get_beatmapSaveData, put=__set_beatmapSaveData))  beatmapSaveData;

constexpr void __set_beatmapSaveData(BeatmapSaveDataVersion3::BeatmapSaveData value) ;

constexpr BeatmapSaveDataVersion3::BeatmapSaveData __get_beatmapSaveData() const;


// Methods

static GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0 New_ctor() ;

/// @brief Method .ctor addr 0x21cb00c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetBeatmapDataBasicInfoAsync>b__0 addr 0x21cb014 size 0x1c virtual false final false
 void _GetBeatmapDataBasicInfoAsync_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetBeatmapDataBasicInfoAsync>d__1
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4276))
// CS Name: BeatmapDataSO::<GetBeatmapDataBasicInfoAsync>d__1
struct CORDL_TYPE GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapDataBasicInfo>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::BeatmapDataSO", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<BeatmapSaveDataVersion3::BeatmapSaveData>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapDataBasicInfo> __t__builder, GlobalNamespace::BeatmapDataSO __4__this, GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0 __8__1, System::Runtime::CompilerServices::TaskAwaiter_1<BeatmapSaveDataVersion3::BeatmapSaveData> __u__1, System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;


                    constexpr GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1(GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1 const&) = default;
                    constexpr GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1(GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1&&) = default;
                    constexpr GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1& operator=(GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1& operator=(GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::BeatmapDataSO __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::BeatmapDataSO value) ;

constexpr GlobalNamespace::BeatmapDataSO __get___4__this() const;

 GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0 __declspec(property(get=__get___8__1, put=__set___8__1))  __8__1;

constexpr void __set___8__1(GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0 value) ;

constexpr GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0 __get___8__1() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<BeatmapSaveDataVersion3::BeatmapSaveData> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<BeatmapSaveDataVersion3::BeatmapSaveData> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BeatmapSaveDataVersion3::BeatmapSaveData> __get___u__1() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x21cb2e4 size 0x360 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21cb644 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass2_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4277))
// CS Name: BeatmapDataSO::<>c__DisplayClass2_0
class CORDL_TYPE GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0(GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0(GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0& operator=(GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0&& o) noexcept = default;
  constexpr GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0& operator=(GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IReadonlyBeatmapData __declspec(property(get=__get_readonlyBeatmapData, put=__set_readonlyBeatmapData))  readonlyBeatmapData;

constexpr void __set_readonlyBeatmapData(GlobalNamespace::IReadonlyBeatmapData value) ;

constexpr GlobalNamespace::IReadonlyBeatmapData __get_readonlyBeatmapData() const;

 BeatmapSaveDataVersion3::BeatmapSaveData __declspec(property(get=__get_beatmapSaveData, put=__set_beatmapSaveData))  beatmapSaveData;

constexpr void __set_beatmapSaveData(BeatmapSaveDataVersion3::BeatmapSaveData value) ;

constexpr BeatmapSaveDataVersion3::BeatmapSaveData __get_beatmapSaveData() const;

 GlobalNamespace::BeatmapDifficulty __declspec(property(get=__get_beatmapDifficulty, put=__set_beatmapDifficulty))  beatmapDifficulty;

constexpr void __set_beatmapDifficulty(GlobalNamespace::BeatmapDifficulty value) ;

constexpr GlobalNamespace::BeatmapDifficulty __get_beatmapDifficulty() const;

 float_t __declspec(property(get=__get_beatsPerMinute, put=__set_beatsPerMinute))  beatsPerMinute;

constexpr void __set_beatsPerMinute(float_t value) ;

constexpr float_t __get_beatsPerMinute() const;

 bool __declspec(property(get=__get_loadingForDesignatedEnvironment, put=__set_loadingForDesignatedEnvironment))  loadingForDesignatedEnvironment;

constexpr void __set_loadingForDesignatedEnvironment(bool value) ;

constexpr bool __get_loadingForDesignatedEnvironment() const;

 GlobalNamespace::EnvironmentInfoSO __declspec(property(get=__get_environmentInfo, put=__set_environmentInfo))  environmentInfo;

constexpr void __set_environmentInfo(GlobalNamespace::EnvironmentInfoSO value) ;

constexpr GlobalNamespace::EnvironmentInfoSO __get_environmentInfo() const;

 GlobalNamespace::PlayerSpecificSettings __declspec(property(get=__get_playerSpecificSettings, put=__set_playerSpecificSettings))  playerSpecificSettings;

constexpr void __set_playerSpecificSettings(GlobalNamespace::PlayerSpecificSettings value) ;

constexpr GlobalNamespace::PlayerSpecificSettings __get_playerSpecificSettings() const;


// Methods

static GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0 New_ctor() ;

/// @brief Method .ctor addr 0x21cb69c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetBeatmapDataAsync>b__0 addr 0x21cb6a4 size 0x2c virtual false final false
 void _GetBeatmapDataAsync_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetBeatmapDataAsync>d__2
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4278))
// CS Name: BeatmapDataSO::<GetBeatmapDataAsync>d__2
struct CORDL_TYPE GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData>", modifiers: "", def_value: None }, CppParam { name: "beatmapDifficulty", ty: "GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None }, CppParam { name: "beatsPerMinute", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "loadingForDesignatedEnvironment", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "environmentInfo", ty: "GlobalNamespace::EnvironmentInfoSO", modifiers: "", def_value: None }, CppParam { name: "playerSpecificSettings", ty: "GlobalNamespace::PlayerSpecificSettings", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::BeatmapDataSO", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<BeatmapSaveDataVersion3::BeatmapSaveData>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData> __t__builder, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float_t beatsPerMinute, bool loadingForDesignatedEnvironment, GlobalNamespace::EnvironmentInfoSO environmentInfo, GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, GlobalNamespace::BeatmapDataSO __4__this, GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0 __8__1, System::Runtime::CompilerServices::TaskAwaiter_1<BeatmapSaveDataVersion3::BeatmapSaveData> __u__1, System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;


                    constexpr GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2(GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2 const&) = default;
                    constexpr GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2(GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2&&) = default;
                    constexpr GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2& operator=(GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2& operator=(GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x60};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::BeatmapDifficulty __declspec(property(get=__get_beatmapDifficulty, put=__set_beatmapDifficulty))  beatmapDifficulty;

constexpr void __set_beatmapDifficulty(GlobalNamespace::BeatmapDifficulty value) ;

constexpr GlobalNamespace::BeatmapDifficulty __get_beatmapDifficulty() const;

 float_t __declspec(property(get=__get_beatsPerMinute, put=__set_beatsPerMinute))  beatsPerMinute;

constexpr void __set_beatsPerMinute(float_t value) ;

constexpr float_t __get_beatsPerMinute() const;

 bool __declspec(property(get=__get_loadingForDesignatedEnvironment, put=__set_loadingForDesignatedEnvironment))  loadingForDesignatedEnvironment;

constexpr void __set_loadingForDesignatedEnvironment(bool value) ;

constexpr bool __get_loadingForDesignatedEnvironment() const;

 GlobalNamespace::EnvironmentInfoSO __declspec(property(get=__get_environmentInfo, put=__set_environmentInfo))  environmentInfo;

constexpr void __set_environmentInfo(GlobalNamespace::EnvironmentInfoSO value) ;

constexpr GlobalNamespace::EnvironmentInfoSO __get_environmentInfo() const;

 GlobalNamespace::PlayerSpecificSettings __declspec(property(get=__get_playerSpecificSettings, put=__set_playerSpecificSettings))  playerSpecificSettings;

constexpr void __set_playerSpecificSettings(GlobalNamespace::PlayerSpecificSettings value) ;

constexpr GlobalNamespace::PlayerSpecificSettings __get_playerSpecificSettings() const;

 GlobalNamespace::BeatmapDataSO __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::BeatmapDataSO value) ;

constexpr GlobalNamespace::BeatmapDataSO __get___4__this() const;

 GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0 __declspec(property(get=__get___8__1, put=__set___8__1))  __8__1;

constexpr void __set___8__1(GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0 value) ;

constexpr GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0 __get___8__1() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<BeatmapSaveDataVersion3::BeatmapSaveData> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<BeatmapSaveDataVersion3::BeatmapSaveData> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BeatmapSaveDataVersion3::BeatmapSaveData> __get___u__1() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x21cb87c size 0x378 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21cbbf4 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass5_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4279))
// CS Name: BeatmapDataSO::<>c__DisplayClass5_0
class CORDL_TYPE GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0(GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0(GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0& operator=(GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0&& o) noexcept = default;
  constexpr GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0& operator=(GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0 const& o) noexcept = default;
                


// Fields

 BeatmapSaveDataVersion3::BeatmapSaveData __declspec(property(get=__get_beatmapSaveData, put=__set_beatmapSaveData))  beatmapSaveData;

constexpr void __set_beatmapSaveData(BeatmapSaveDataVersion3::BeatmapSaveData value) ;

constexpr BeatmapSaveDataVersion3::BeatmapSaveData __get_beatmapSaveData() const;

 GlobalNamespace::BeatmapDataSO __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::BeatmapDataSO value) ;

constexpr GlobalNamespace::BeatmapDataSO __get___4__this() const;


// Methods

static GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0 New_ctor() ;

/// @brief Method .ctor addr 0x21cbc4c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <LoadBeatmapSaveDataAsync>b__0 addr 0x21cbc54 size 0x70 virtual false final false
 void _LoadBeatmapSaveDataAsync_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<LoadBeatmapSaveDataAsync>d__5
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4280))
// CS Name: BeatmapDataSO::<LoadBeatmapSaveDataAsync>d__5
struct CORDL_TYPE GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BeatmapSaveDataVersion3::BeatmapSaveData>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::BeatmapDataSO", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BeatmapSaveDataVersion3::BeatmapSaveData> __t__builder, GlobalNamespace::BeatmapDataSO __4__this, GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0 __8__1, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5(GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5 const&) = default;
                    constexpr GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5(GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5&&) = default;
                    constexpr GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5& operator=(GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5& operator=(GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BeatmapSaveDataVersion3::BeatmapSaveData> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BeatmapSaveDataVersion3::BeatmapSaveData> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BeatmapSaveDataVersion3::BeatmapSaveData> __get___t__builder() const;

 GlobalNamespace::BeatmapDataSO __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::BeatmapDataSO value) ;

constexpr GlobalNamespace::BeatmapDataSO __get___4__this() const;

 GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0 __declspec(property(get=__get___8__1, put=__set___8__1))  __8__1;

constexpr void __set___8__1(GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0 value) ;

constexpr GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0 __get___8__1() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21cbcc4 size 0x254 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21cbf18 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass6_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4281))
// CS Name: BeatmapDataSO::<>c__DisplayClass6_0
class CORDL_TYPE GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0(GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0(GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0& operator=(GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0&& o) noexcept = default;
  constexpr GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0& operator=(GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0 const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_action, put=__set_action))  action;

constexpr void __set_action(System::Action value) ;

constexpr System::Action __get_action() const;


// Methods

static GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0 New_ctor() ;

/// @brief Method .ctor addr 0x21cbf70 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <RunTaskAndLogException>b__0 addr 0x21cbf78 size 0xc0 virtual false final false
 void _RunTaskAndLogException_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<RunTaskAndLogException>d__6
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4282))
// CS Name: BeatmapDataSO::<RunTaskAndLogException>d__6
struct CORDL_TYPE GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Action", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, System::Action action, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6(GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6 const&) = default;
                    constexpr GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6(GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6&&) = default;
                    constexpr GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6& operator=(GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6& operator=(GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder __get___t__builder() const;

 System::Action __declspec(property(get=__get_action, put=__set_action))  action;

constexpr void __set_action(System::Action value) ;

constexpr System::Action __get_action() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21cc038 size 0x230 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21cc268 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4283))
// CS Name: BeatmapDataSO
class CORDL_TYPE BeatmapDataSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using _RunTaskAndLogException_d__6 = GlobalNamespace::GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6;

using __c__DisplayClass6_0 = GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0;

using _LoadBeatmapSaveDataAsync_d__5 = GlobalNamespace::GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5;

using __c__DisplayClass5_0 = GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0;

using _GetBeatmapDataAsync_d__2 = GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2;

using __c__DisplayClass2_0 = GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0;

using _GetBeatmapDataBasicInfoAsync_d__1 = GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1;

using __c__DisplayClass1_0 = GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BeatmapDataSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataSO", modifiers: " const&", def_value: None }]
constexpr BeatmapDataSO(BeatmapDataSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataSO", modifiers: "&&", def_value: None }]
constexpr BeatmapDataSO(BeatmapDataSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapDataSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr BeatmapDataSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapDataSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapDataSO& operator=(BeatmapDataSO&& o) noexcept = default;
  constexpr BeatmapDataSO& operator=(BeatmapDataSO const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__jsonData, put=__set__jsonData))  _jsonData;

constexpr void __set__jsonData(::StringW value) ;

constexpr ::StringW __get__jsonData() const;

 GlobalNamespace::IBeatmapDataBasicInfo __declspec(property(get=__get__beatmapDataBasic, put=__set__beatmapDataBasic))  _beatmapDataBasic;

constexpr void __set__beatmapDataBasic(GlobalNamespace::IBeatmapDataBasicInfo value) ;

constexpr GlobalNamespace::IBeatmapDataBasicInfo __get__beatmapDataBasic() const;


// Methods

/// @brief Method GetBeatmapDataBasicInfoAsync addr 0x21cac1c size 0xf0 virtual false final false
 System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapDataBasicInfo> GetBeatmapDataBasicInfoAsync() ;

/// @brief Method GetBeatmapDataAsync addr 0x21cad0c size 0x134 virtual false final false
 System::Threading::Tasks::Task_1<GlobalNamespace::IReadonlyBeatmapData> GetBeatmapDataAsync(GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float_t beatsPerMinute, bool loadingForDesignatedEnvironment, GlobalNamespace::EnvironmentInfoSO environmentInfo, GlobalNamespace::PlayerSpecificSettings playerSpecificSettings) ;

/// @brief Method SetJsonData addr 0x21cae40 size 0x8 virtual false final false
 void SetJsonData(::StringW jsonData) ;

/// @brief Method LoadBeatmapSaveDataAsync addr 0x21cae48 size 0xf4 virtual false final false
 System::Threading::Tasks::Task_1<BeatmapSaveDataVersion3::BeatmapSaveData> LoadBeatmapSaveDataAsync() ;

/// @brief Method RunTaskAndLogException addr 0x21caf3c size 0xc8 virtual false final false
 System::Threading::Tasks::Task RunTaskAndLogException(System::Action action) ;

static GlobalNamespace::BeatmapDataSO New_ctor() ;

/// @brief Method .ctor addr 0x21cb004 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapDataSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataSO, "", "BeatmapDataSO");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass1_0, "", "BeatmapDataSO/<>c__DisplayClass1_0");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass2_0, "", "BeatmapDataSO/<>c__DisplayClass2_0");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass5_0, "", "BeatmapDataSO/<>c__DisplayClass5_0");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapDataSO____c__DisplayClass6_0, "", "BeatmapDataSO/<>c__DisplayClass6_0");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataAsync_d__2, "", "BeatmapDataSO/<GetBeatmapDataAsync>d__2");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapDataSO___GetBeatmapDataBasicInfoAsync_d__1, "", "BeatmapDataSO/<GetBeatmapDataBasicInfoAsync>d__1");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapDataSO___LoadBeatmapSaveDataAsync_d__5, "", "BeatmapDataSO/<LoadBeatmapSaveDataAsync>d__5");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapDataSO___RunTaskAndLogException_d__6, "", "BeatmapDataSO/<RunTaskAndLogException>d__6");
