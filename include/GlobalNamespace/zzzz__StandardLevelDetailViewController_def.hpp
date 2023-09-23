#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class EventBinder;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class LoadingControl;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class StandardLevelBuyView;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class AdditionalContentModel;
}
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
class DlcPromoPanelModel;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace GlobalNamespace {
class StandardLevelBuyInfoView;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class StandardLevelDetailView;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace GlobalNamespace {
struct GlobalNamespace__AdditionalContentModel__OpenProductStoreResult;
}
namespace GlobalNamespace {
struct GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult;
}
namespace GlobalNamespace {
struct GlobalNamespace__AdditionalContentModel__EntitlementStatus;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__StandardLevelDetailViewController__ContentType;
}
namespace GlobalNamespace {
class StandardLevelDetailViewController;
}
namespace GlobalNamespace {
struct GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57;
}
namespace GlobalNamespace {
struct GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62;
}
namespace GlobalNamespace {
struct GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d;
}
namespace GlobalNamespace {
struct GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d;
}
namespace GlobalNamespace {
struct GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d;
}
namespace GlobalNamespace {
struct GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d;
}
// Type: ::ContentType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5774))
// CS Name: StandardLevelDetailViewController::ContentType
struct CORDL_TYPE GlobalNamespace__StandardLevelDetailViewController__ContentType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__StandardLevelDetailViewController__ContentType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__StandardLevelDetailViewController__ContentType(GlobalNamespace__StandardLevelDetailViewController__ContentType const&) = default;
                    constexpr GlobalNamespace__StandardLevelDetailViewController__ContentType(GlobalNamespace__StandardLevelDetailViewController__ContentType&&) = default;
                    constexpr GlobalNamespace__StandardLevelDetailViewController__ContentType& operator=(GlobalNamespace__StandardLevelDetailViewController__ContentType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__StandardLevelDetailViewController__ContentType& operator=(GlobalNamespace__StandardLevelDetailViewController__ContentType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__StandardLevelDetailViewController__ContentType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__StandardLevelDetailViewController__ContentType_Unwrapped : int32_t {
__Loading = 0,
__OwnedAndReady = 1,
__NoAllowedDifficultyBeatmap = 2,
__OwnedAndDownloading = 3,
__Buy = 4,
__BuyInfo = 5,
__Error = 6,
__Inactive = 7,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__StandardLevelDetailViewController__ContentType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__StandardLevelDetailViewController__ContentType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Loading offset 0
static GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController__ContentType const Loading;

/// @brief Field OwnedAndReady offset 0
static GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController__ContentType const OwnedAndReady;

/// @brief Field NoAllowedDifficultyBeatmap offset 0
static GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController__ContentType const NoAllowedDifficultyBeatmap;

/// @brief Field OwnedAndDownloading offset 0
static GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController__ContentType const OwnedAndDownloading;

/// @brief Field Buy offset 0
static GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController__ContentType const Buy;

/// @brief Field BuyInfo offset 0
static GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController__ContentType const BuyInfo;

/// @brief Field Error offset 0
static GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController__ContentType const Error;

/// @brief Field Inactive offset 0
static GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController__ContentType const Inactive;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<LoadBeatmapLevelAsync>d__57
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5775))
// CS Name: StandardLevelDetailViewController::<LoadBeatmapLevelAsync>d__57
struct CORDL_TYPE GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::StandardLevelDetailViewController", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, GlobalNamespace::StandardLevelDetailViewController __4__this, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept;


                    constexpr GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57(GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57 const&) = default;
                    constexpr GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57(GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57&&) = default;
                    constexpr GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57& operator=(GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57& operator=(GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::StandardLevelDetailViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::StandardLevelDetailViewController value) ;

constexpr GlobalNamespace::StandardLevelDetailViewController __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> __get___u__1() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<bool> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<bool> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<bool> __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x216e838 size 0x51c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x216ed54 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<ShowLoadingAndDoSomething>d__62
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5776))
// CS Name: StandardLevelDetailViewController::<ShowLoadingAndDoSomething>d__62
struct CORDL_TYPE GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::StandardLevelDetailViewController", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Func_2<System::Threading::CancellationToken,System::Threading::Tasks::Task>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::StandardLevelDetailViewController __4__this, System::Func_2<System::Threading::CancellationToken,System::Threading::Tasks::Task> action, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62(GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62 const&) = default;
                    constexpr GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62(GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62&&) = default;
                    constexpr GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62& operator=(GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62& operator=(GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::StandardLevelDetailViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::StandardLevelDetailViewController value) ;

constexpr GlobalNamespace::StandardLevelDetailViewController __get___4__this() const;

 System::Func_2<System::Threading::CancellationToken,System::Threading::Tasks::Task> __declspec(property(get=__get_action, put=__set_action))  action;

constexpr void __set_action(System::Func_2<System::Threading::CancellationToken,System::Threading::Tasks::Task> value) ;

constexpr System::Func_2<System::Threading::CancellationToken,System::Threading::Tasks::Task> __get_action() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x216ed60 size 0x2a4 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x216f004 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<<BuyPackButtonWasPressed>b__56_0>d
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5777))
// CS Name: StandardLevelDetailViewController::<<BuyPackButtonWasPressed>b__56_0>d
struct CORDL_TYPE GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::StandardLevelDetailViewController", modifiers: "", def_value: None }, CppParam { name: "token", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, GlobalNamespace::StandardLevelDetailViewController __4__this, System::Threading::CancellationToken token, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __u__1) noexcept;


                    constexpr GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d(GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d const&) = default;
                    constexpr GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d(GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d&&) = default;
                    constexpr GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d& operator=(GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d& operator=(GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::StandardLevelDetailViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::StandardLevelDetailViewController value) ;

constexpr GlobalNamespace::StandardLevelDetailViewController __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get_token, put=__set_token))  token;

constexpr void __set_token(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_token() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x216f010 size 0x278 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x216f288 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<<OpenLevelProductStoreOrShowBuyInfo>b__58_0>d
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5778))
// CS Name: StandardLevelDetailViewController::<<OpenLevelProductStoreOrShowBuyInfo>b__58_0>d
struct CORDL_TYPE GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::StandardLevelDetailViewController", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, GlobalNamespace::StandardLevelDetailViewController __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> __u__1) noexcept;


                    constexpr GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d(GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d const&) = default;
                    constexpr GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d(GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d&&) = default;
                    constexpr GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d& operator=(GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d& operator=(GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::StandardLevelDetailViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::StandardLevelDetailViewController value) ;

constexpr GlobalNamespace::StandardLevelDetailViewController __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x216f294 size 0x37c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x216f610 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<<OpenLevelProductStore>b__59_0>d
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5779))
// CS Name: StandardLevelDetailViewController::<<OpenLevelProductStore>b__59_0>d
struct CORDL_TYPE GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::StandardLevelDetailViewController", modifiers: "", def_value: None }, CppParam { name: "token", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, GlobalNamespace::StandardLevelDetailViewController __4__this, System::Threading::CancellationToken token, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __u__1) noexcept;


                    constexpr GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d(GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d const&) = default;
                    constexpr GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d(GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d&&) = default;
                    constexpr GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d& operator=(GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d& operator=(GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::StandardLevelDetailViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::StandardLevelDetailViewController value) ;

constexpr GlobalNamespace::StandardLevelDetailViewController __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get_token, put=__set_token))  token;

constexpr void __set_token(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_token() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x216f61c size 0x278 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x216f894 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<<RefreshAvailabilityIfNeeded>b__60_0>d
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5780))
// CS Name: StandardLevelDetailViewController::<<RefreshAvailabilityIfNeeded>b__60_0>d
struct CORDL_TYPE GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::StandardLevelDetailViewController", modifiers: "", def_value: None }, CppParam { name: "token", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, GlobalNamespace::StandardLevelDetailViewController __4__this, System::Threading::CancellationToken token, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __u__1, System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;


                    constexpr GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d(GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d const&) = default;
                    constexpr GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d(GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d&&) = default;
                    constexpr GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d& operator=(GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d& operator=(GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::StandardLevelDetailViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::StandardLevelDetailViewController value) ;

constexpr GlobalNamespace::StandardLevelDetailViewController __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get_token, put=__set_token))  token;

constexpr void __set_token(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_token() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __get___u__1() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x216f8a0 size 0x3c8 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x216fc68 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::StandardLevelDetailViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5781))
// CS Name: StandardLevelDetailViewController
class CORDL_TYPE StandardLevelDetailViewController : public HMUI::ViewController {
public:
// Declarations
using __RefreshAvailabilityIfNeeded_b__60_0_d = GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d;

using __OpenLevelProductStore_b__59_0_d = GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d;

using __OpenLevelProductStoreOrShowBuyInfo_b__58_0_d = GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d;

using __BuyPackButtonWasPressed_b__56_0_d = GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d;

using _ShowLoadingAndDoSomething_d__62 = GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62;

using _LoadBeatmapLevelAsync_d__57 = GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57;

using ContentType = GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController__ContentType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x138};

virtual ~StandardLevelDetailViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelDetailViewController", modifiers: " const&", def_value: None }]
constexpr StandardLevelDetailViewController(StandardLevelDetailViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelDetailViewController", modifiers: "&&", def_value: None }]
constexpr StandardLevelDetailViewController(StandardLevelDetailViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StandardLevelDetailViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr StandardLevelDetailViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StandardLevelDetailViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StandardLevelDetailViewController& operator=(StandardLevelDetailViewController&& o) noexcept = default;
  constexpr StandardLevelDetailViewController& operator=(StandardLevelDetailViewController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::StandardLevelDetailView __declspec(property(get=__get__standardLevelDetailView, put=__set__standardLevelDetailView))  _standardLevelDetailView;

constexpr void __set__standardLevelDetailView(GlobalNamespace::StandardLevelDetailView value) ;

constexpr GlobalNamespace::StandardLevelDetailView __get__standardLevelDetailView() const;

 GlobalNamespace::StandardLevelBuyView __declspec(property(get=__get__standardLevelBuyView, put=__set__standardLevelBuyView))  _standardLevelBuyView;

constexpr void __set__standardLevelBuyView(GlobalNamespace::StandardLevelBuyView value) ;

constexpr GlobalNamespace::StandardLevelBuyView __get__standardLevelBuyView() const;

 GlobalNamespace::StandardLevelBuyInfoView __declspec(property(get=__get__standardLevelBuyInfoView, put=__set__standardLevelBuyInfoView))  _standardLevelBuyInfoView;

constexpr void __set__standardLevelBuyInfoView(GlobalNamespace::StandardLevelBuyInfoView value) ;

constexpr GlobalNamespace::StandardLevelBuyInfoView __get__standardLevelBuyInfoView() const;

 GlobalNamespace::LoadingControl __declspec(property(get=__get__loadingControl, put=__set__loadingControl))  _loadingControl;

constexpr void __set__loadingControl(GlobalNamespace::LoadingControl value) ;

constexpr GlobalNamespace::LoadingControl __get__loadingControl() const;

 UnityEngine::GameObject __declspec(property(get=__get__noAllowedBeatmapInfoContainer, put=__set__noAllowedBeatmapInfoContainer))  _noAllowedBeatmapInfoContainer;

constexpr void __set__noAllowedBeatmapInfoContainer(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__noAllowedBeatmapInfoContainer() const;

 GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel))  _playerDataModel;

constexpr void __set__playerDataModel(GlobalNamespace::PlayerDataModel value) ;

constexpr GlobalNamespace::PlayerDataModel __get__playerDataModel() const;

 GlobalNamespace::AdditionalContentModel __declspec(property(get=__get__additionalContentModel, put=__set__additionalContentModel))  _additionalContentModel;

constexpr void __set__additionalContentModel(GlobalNamespace::AdditionalContentModel value) ;

constexpr GlobalNamespace::AdditionalContentModel __get__additionalContentModel() const;

 GlobalNamespace::BeatmapLevelsModel __declspec(property(get=__get__beatmapLevelsModel, put=__set__beatmapLevelsModel))  _beatmapLevelsModel;

constexpr void __set__beatmapLevelsModel(GlobalNamespace::BeatmapLevelsModel value) ;

constexpr GlobalNamespace::BeatmapLevelsModel __get__beatmapLevelsModel() const;

 GlobalNamespace::DlcPromoPanelModel __declspec(property(get=__get__dlcPromoPanelModel, put=__set__dlcPromoPanelModel))  _dlcPromoPanelModel;

constexpr void __set__dlcPromoPanelModel(GlobalNamespace::DlcPromoPanelModel value) ;

constexpr GlobalNamespace::DlcPromoPanelModel __get__dlcPromoPanelModel() const;

 GlobalNamespace::IAnalyticsModel __declspec(property(get=__get__analyticsModel, put=__set__analyticsModel))  _analyticsModel;

constexpr void __set__analyticsModel(GlobalNamespace::IAnalyticsModel value) ;

constexpr GlobalNamespace::IAnalyticsModel __get__analyticsModel() const;

/// @brief Field kLoadingDataErrorNoInternetLocalizationKey offset 0
static constexpr ::ConstString  kLoadingDataErrorNoInternetLocalizationKey{u"ERROR_LOADING_DATA_NO_INTERNET_MESSAGE"};

/// @brief Field kLoadingDataErrorLocalizationKey offset 0
static constexpr ::ConstString  kLoadingDataErrorLocalizationKey{u"ERROR_LOADING_DATA"};

 System::Action_1<GlobalNamespace::StandardLevelDetailViewController> __declspec(property(get=__get_didPressActionButtonEvent, put=__set_didPressActionButtonEvent))  didPressActionButtonEvent;

constexpr void __set_didPressActionButtonEvent(System::Action_1<GlobalNamespace::StandardLevelDetailViewController> value) ;

constexpr System::Action_1<GlobalNamespace::StandardLevelDetailViewController> __get_didPressActionButtonEvent() const;

 System::Action_2<GlobalNamespace::StandardLevelDetailViewController,GlobalNamespace::IBeatmapLevelPack> __declspec(property(get=__get_didPressOpenLevelPackButtonEvent, put=__set_didPressOpenLevelPackButtonEvent))  didPressOpenLevelPackButtonEvent;

constexpr void __set_didPressOpenLevelPackButtonEvent(System::Action_2<GlobalNamespace::StandardLevelDetailViewController,GlobalNamespace::IBeatmapLevelPack> value) ;

constexpr System::Action_2<GlobalNamespace::StandardLevelDetailViewController,GlobalNamespace::IBeatmapLevelPack> __get_didPressOpenLevelPackButtonEvent() const;

 System::Action_2<GlobalNamespace::StandardLevelDetailViewController,bool> __declspec(property(get=__get_levelFavoriteStatusDidChangeEvent, put=__set_levelFavoriteStatusDidChangeEvent))  levelFavoriteStatusDidChangeEvent;

constexpr void __set_levelFavoriteStatusDidChangeEvent(System::Action_2<GlobalNamespace::StandardLevelDetailViewController,bool> value) ;

constexpr System::Action_2<GlobalNamespace::StandardLevelDetailViewController,bool> __get_levelFavoriteStatusDidChangeEvent() const;

 System::Action_2<GlobalNamespace::StandardLevelDetailViewController,GlobalNamespace::IBeatmapLevel> __declspec(property(get=__get_didPressPracticeButtonEvent, put=__set_didPressPracticeButtonEvent))  didPressPracticeButtonEvent;

constexpr void __set_didPressPracticeButtonEvent(System::Action_2<GlobalNamespace::StandardLevelDetailViewController,GlobalNamespace::IBeatmapLevel> value) ;

constexpr System::Action_2<GlobalNamespace::StandardLevelDetailViewController,GlobalNamespace::IBeatmapLevel> __get_didPressPracticeButtonEvent() const;

 System::Action_2<GlobalNamespace::StandardLevelDetailViewController,GlobalNamespace::IDifficultyBeatmap> __declspec(property(get=__get_didChangeDifficultyBeatmapEvent, put=__set_didChangeDifficultyBeatmapEvent))  didChangeDifficultyBeatmapEvent;

constexpr void __set_didChangeDifficultyBeatmapEvent(System::Action_2<GlobalNamespace::StandardLevelDetailViewController,GlobalNamespace::IDifficultyBeatmap> value) ;

constexpr System::Action_2<GlobalNamespace::StandardLevelDetailViewController,GlobalNamespace::IDifficultyBeatmap> __get_didChangeDifficultyBeatmapEvent() const;

 System::Action_2<GlobalNamespace::StandardLevelDetailViewController,GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController__ContentType> __declspec(property(get=__get_didChangeContentEvent, put=__set_didChangeContentEvent))  didChangeContentEvent;

constexpr void __set_didChangeContentEvent(System::Action_2<GlobalNamespace::StandardLevelDetailViewController,GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController__ContentType> value) ;

constexpr System::Action_2<GlobalNamespace::StandardLevelDetailViewController,GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController__ContentType> __get_didChangeContentEvent() const;

 GlobalNamespace::EventBinder __declspec(property(get=__get__ownedObjectsEventBinder, put=__set__ownedObjectsEventBinder))  _ownedObjectsEventBinder;

constexpr void __set__ownedObjectsEventBinder(GlobalNamespace::EventBinder value) ;

constexpr GlobalNamespace::EventBinder __get__ownedObjectsEventBinder() const;

 GlobalNamespace::EventBinder __declspec(property(get=__get__eventBinder, put=__set__eventBinder))  _eventBinder;

constexpr void __set__eventBinder(GlobalNamespace::EventBinder value) ;

constexpr GlobalNamespace::EventBinder __get__eventBinder() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get__cancellationTokenSource, put=__set__cancellationTokenSource))  _cancellationTokenSource;

constexpr void __set__cancellationTokenSource(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get__cancellationTokenSource() const;

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get__previewBeatmapLevel, put=__set__previewBeatmapLevel))  _previewBeatmapLevel;

constexpr void __set__previewBeatmapLevel(GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr GlobalNamespace::IPreviewBeatmapLevel __get__previewBeatmapLevel() const;

 GlobalNamespace::IBeatmapLevel __declspec(property(get=__get__beatmapLevel, put=__set__beatmapLevel))  _beatmapLevel;

constexpr void __set__beatmapLevel(GlobalNamespace::IBeatmapLevel value) ;

constexpr GlobalNamespace::IBeatmapLevel __get__beatmapLevel() const;

 GlobalNamespace::IBeatmapLevelPack __declspec(property(get=__get__pack, put=__set__pack))  _pack;

constexpr void __set__pack(GlobalNamespace::IBeatmapLevelPack value) ;

constexpr GlobalNamespace::IBeatmapLevelPack __get__pack() const;

 bool __declspec(property(get=__get__canBuyPack, put=__set__canBuyPack))  _canBuyPack;

constexpr void __set__canBuyPack(bool value) ;

constexpr bool __get__canBuyPack() const;

 GlobalNamespace::BeatmapDifficultyMask __declspec(property(get=__get__allowedBeatmapDifficultyMask, put=__set__allowedBeatmapDifficultyMask))  _allowedBeatmapDifficultyMask;

constexpr void __set__allowedBeatmapDifficultyMask(GlobalNamespace::BeatmapDifficultyMask value) ;

constexpr GlobalNamespace::BeatmapDifficultyMask __get__allowedBeatmapDifficultyMask() const;

 System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapCharacteristicSO> __declspec(property(get=__get__notAllowedCharacteristics, put=__set__notAllowedCharacteristics))  _notAllowedCharacteristics;

constexpr void __set__notAllowedCharacteristics(System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapCharacteristicSO> value) ;

constexpr System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapCharacteristicSO> __get__notAllowedCharacteristics() const;

 bool __declspec(property(get=__get__contentIsOwnedAndReady, put=__set__contentIsOwnedAndReady))  _contentIsOwnedAndReady;

constexpr void __set__contentIsOwnedAndReady(bool value) ;

constexpr bool __get__contentIsOwnedAndReady() const;


// Properties

 GlobalNamespace::IDifficultyBeatmap __declspec(property(get=get_selectedDifficultyBeatmap))  selectedDifficultyBeatmap;

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=get_beatmapLevel))  beatmapLevel;


// Methods

/// @brief Method add_didPressActionButtonEvent addr 0x21641d8 size 0xb0 virtual false final false
 void add_didPressActionButtonEvent(System::Action_1<GlobalNamespace::StandardLevelDetailViewController> value) ;

/// @brief Method remove_didPressActionButtonEvent addr 0x2164a90 size 0xb0 virtual false final false
 void remove_didPressActionButtonEvent(System::Action_1<GlobalNamespace::StandardLevelDetailViewController> value) ;

/// @brief Method add_didPressOpenLevelPackButtonEvent addr 0x2164498 size 0xb0 virtual false final false
 void add_didPressOpenLevelPackButtonEvent(System::Action_2<GlobalNamespace::StandardLevelDetailViewController,GlobalNamespace::IBeatmapLevelPack> value) ;

/// @brief Method remove_didPressOpenLevelPackButtonEvent addr 0x2164d50 size 0xb0 virtual false final false
 void remove_didPressOpenLevelPackButtonEvent(System::Action_2<GlobalNamespace::StandardLevelDetailViewController,GlobalNamespace::IBeatmapLevelPack> value) ;

/// @brief Method add_levelFavoriteStatusDidChangeEvent addr 0x2164548 size 0xb0 virtual false final false
 void add_levelFavoriteStatusDidChangeEvent(System::Action_2<GlobalNamespace::StandardLevelDetailViewController,bool> value) ;

/// @brief Method remove_levelFavoriteStatusDidChangeEvent addr 0x2164e00 size 0xb0 virtual false final false
 void remove_levelFavoriteStatusDidChangeEvent(System::Action_2<GlobalNamespace::StandardLevelDetailViewController,bool> value) ;

/// @brief Method add_didPressPracticeButtonEvent addr 0x2164288 size 0xb0 virtual false final false
 void add_didPressPracticeButtonEvent(System::Action_2<GlobalNamespace::StandardLevelDetailViewController,GlobalNamespace::IBeatmapLevel> value) ;

/// @brief Method remove_didPressPracticeButtonEvent addr 0x2164b40 size 0xb0 virtual false final false
 void remove_didPressPracticeButtonEvent(System::Action_2<GlobalNamespace::StandardLevelDetailViewController,GlobalNamespace::IBeatmapLevel> value) ;

/// @brief Method add_didChangeDifficultyBeatmapEvent addr 0x2164338 size 0xb0 virtual false final false
 void add_didChangeDifficultyBeatmapEvent(System::Action_2<GlobalNamespace::StandardLevelDetailViewController,GlobalNamespace::IDifficultyBeatmap> value) ;

/// @brief Method remove_didChangeDifficultyBeatmapEvent addr 0x2164bf0 size 0xb0 virtual false final false
 void remove_didChangeDifficultyBeatmapEvent(System::Action_2<GlobalNamespace::StandardLevelDetailViewController,GlobalNamespace::IDifficultyBeatmap> value) ;

/// @brief Method add_didChangeContentEvent addr 0x21643e8 size 0xb0 virtual false final false
 void add_didChangeContentEvent(System::Action_2<GlobalNamespace::StandardLevelDetailViewController,GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController__ContentType> value) ;

/// @brief Method remove_didChangeContentEvent addr 0x2164ca0 size 0xb0 virtual false final false
 void remove_didChangeContentEvent(System::Action_2<GlobalNamespace::StandardLevelDetailViewController,GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController__ContentType> value) ;

/// @brief Method get_selectedDifficultyBeatmap addr 0x2163588 size 0x1c virtual false final false
 GlobalNamespace::IDifficultyBeatmap get_selectedDifficultyBeatmap() ;

/// @brief Method get_beatmapLevel addr 0x216cbe4 size 0x8 virtual false final false
 GlobalNamespace::IPreviewBeatmapLevel get_beatmapLevel() ;

/// @brief Method SetData addr 0x2165b0c size 0x10c virtual false final false
 void SetData(GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, bool hidePracticeButton, bool hide360DegreeBeatmapCharacteristic, ::StringW playButtonText, GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask, ::ArrayW<GlobalNamespace::BeatmapCharacteristicSO> notAllowedCharacteristics) ;

/// @brief Method SetData addr 0x2165c18 size 0x298 virtual false final false
 void SetData(GlobalNamespace::IBeatmapLevelPack pack, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, bool hidePracticeButton, bool hide360DegreeBeatmapCharacteristic, bool canBuyPack, ::StringW playButtonText, GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask, ::ArrayW<GlobalNamespace::BeatmapCharacteristicSO> notAllowedCharacteristics) ;

/// @brief Method DidActivate addr 0x216cc90 size 0x388 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x216d018 size 0x58 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method OnDestroy addr 0x216d070 size 0x3c virtual true final false
 void OnDestroy() ;

/// @brief Method RefreshContentLevelDetailView addr 0x2165708 size 0x1c virtual false final false
 void RefreshContentLevelDetailView() ;

/// @brief Method ClearSelected addr 0x2165748 size 0x1c virtual false final false
 void ClearSelected() ;

/// @brief Method HandleDidChangeDifficultyBeatmap addr 0x216d0ac size 0x1ec virtual false final false
 void HandleDidChangeDifficultyBeatmap(GlobalNamespace::StandardLevelDetailView view, GlobalNamespace::IDifficultyBeatmap beatmap) ;

/// @brief Method HandleDidFavoriteToggleChange addr 0x216d298 size 0x78 virtual false final false
 void HandleDidFavoriteToggleChange(GlobalNamespace::StandardLevelDetailView view, UnityEngine::UI::Toggle toggle) ;

/// @brief Method HandleLevelLoadingUpdate addr 0x216d310 size 0x194 virtual false final false
 void HandleLevelLoadingUpdate(GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__LevelDownloadingUpdate levelLoadingUpdate) ;

/// @brief Method BuyLevelButtonWasPressed addr 0x216d8a4 size 0x110 virtual false final false
 void BuyLevelButtonWasPressed() ;

/// @brief Method BuyPackButtonWasPressed addr 0x216da34 size 0x178 virtual false final false
 void BuyPackButtonWasPressed() ;

/// @brief Method LoadBeatmapLevelAsync addr 0x216dc48 size 0xd8 virtual false final false
 System::Threading::Tasks::Task LoadBeatmapLevelAsync(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method OpenLevelProductStoreOrShowBuyInfo addr 0x216dd20 size 0x15c virtual false final false
 void OpenLevelProductStoreOrShowBuyInfo() ;

/// @brief Method OpenLevelProductStore addr 0x216d9b4 size 0x80 virtual false final false
 void OpenLevelProductStore() ;

/// @brief Method RefreshAvailabilityIfNeeded addr 0x216cbec size 0xa4 virtual false final false
 void RefreshAvailabilityIfNeeded() ;

/// @brief Method ShowContent addr 0x216d4a4 size 0x400 virtual false final false
 void ShowContent(GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController__ContentType contentType, ::StringW errorText, float_t downloadingProgress, ::StringW downloadingText) ;

/// @brief Method ShowLoadingAndDoSomething addr 0x216dbac size 0x9c virtual false final false
 void ShowLoadingAndDoSomething(System::Func_2<System::Threading::CancellationToken,System::Threading::Tasks::Task> action) ;

// Ctor Parameters []
explicit StandardLevelDetailViewController() ;

/// @brief Method .ctor addr 0x216de7c size 0x84 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__47_0 addr 0x216df00 size 0x24 virtual false final false
 void _DidActivate_b__47_0() ;

/// @brief Method <DidActivate>b__47_1 addr 0x216df24 size 0x20 virtual false final false
 void _DidActivate_b__47_1() ;

/// @brief Method <DidActivate>b__47_2 addr 0x216df44 size 0x24 virtual false final false
 void _DidActivate_b__47_2() ;

/// @brief Method <DidActivate>b__47_3 addr 0x216df68 size 0x154 virtual false final false
 void _DidActivate_b__47_3() ;

/// @brief Method <DidActivate>b__47_4 addr 0x216e0bc size 0x1c8 virtual false final false
 void _DidActivate_b__47_4() ;

/// @brief Method <DidActivate>b__47_5 addr 0x216e284 size 0xf4 virtual false final false
 void _DidActivate_b__47_5() ;

/// @brief Method <DidActivate>b__47_6 addr 0x216e378 size 0x168 virtual false final false
 void _DidActivate_b__47_6() ;

/// @brief Method <BuyPackButtonWasPressed>b__56_0 addr 0x216e4e0 size 0xdc virtual false final false
 System::Threading::Tasks::Task _BuyPackButtonWasPressed_b__56_0(System::Threading::CancellationToken token) ;

/// @brief Method <OpenLevelProductStoreOrShowBuyInfo>b__58_0 addr 0x216e5bc size 0xc8 virtual false final false
 System::Threading::Tasks::Task _OpenLevelProductStoreOrShowBuyInfo_b__58_0(System::Threading::CancellationToken token) ;

/// @brief Method <OpenLevelProductStore>b__59_0 addr 0x216e684 size 0xdc virtual false final false
 System::Threading::Tasks::Task _OpenLevelProductStore_b__59_0(System::Threading::CancellationToken token) ;

/// @brief Method <RefreshAvailabilityIfNeeded>b__60_0 addr 0x216e760 size 0xd8 virtual false final false
 System::Threading::Tasks::Task _RefreshAvailabilityIfNeeded_b__60_0(System::Threading::CancellationToken token) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController__ContentType, "", "StandardLevelDetailViewController/ContentType");
NEED_NO_BOX(GlobalNamespace::StandardLevelDetailViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelDetailViewController, "", "StandardLevelDetailViewController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController___LoadBeatmapLevelAsync_d__57, "", "StandardLevelDetailViewController/<LoadBeatmapLevelAsync>d__57");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController___ShowLoadingAndDoSomething_d__62, "", "StandardLevelDetailViewController/<ShowLoadingAndDoSomething>d__62");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController____BuyPackButtonWasPressed_b__56_0_d, "", "StandardLevelDetailViewController/<<BuyPackButtonWasPressed>b__56_0>d");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStoreOrShowBuyInfo_b__58_0_d, "", "StandardLevelDetailViewController/<<OpenLevelProductStoreOrShowBuyInfo>b__58_0>d");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController____OpenLevelProductStore_b__59_0_d, "", "StandardLevelDetailViewController/<<OpenLevelProductStore>b__59_0>d");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController____RefreshAvailabilityIfNeeded_b__60_0_d, "", "StandardLevelDetailViewController/<<RefreshAvailabilityIfNeeded>b__60_0>d");
