#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class IPlatformUserModel;
}
namespace GlobalNamespace {
class HMAsyncRequest;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class GlobalNamespace__LeaderboardScoreUploader__ScoreData;
}
namespace GlobalNamespace {
class LeaderboardScoreUploader;
}
namespace GlobalNamespace {
class UserInfo;
}
namespace GlobalNamespace {
class PlatformLeaderboardsHandler;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__PlatformLeaderboardsModel__GetScoresResult;
}
namespace GlobalNamespace {
struct GlobalNamespace__PlatformLeaderboardsModel__ScoresScope;
}
namespace GlobalNamespace {
struct GlobalNamespace__PlatformLeaderboardsModel__State;
}
namespace GlobalNamespace {
struct GlobalNamespace__PlatformLeaderboardsModel__UploadScoreResult;
}
namespace GlobalNamespace {
class GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler;
}
namespace GlobalNamespace {
class GlobalNamespace__PlatformLeaderboardsModel__LeaderboardScore;
}
namespace GlobalNamespace {
class GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel;
}
namespace GlobalNamespace {
struct GlobalNamespace__PlatformLeaderboardsModel___Initialize_d__19;
}
// Type: ::State
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4255))
// CS Name: PlatformLeaderboardsModel::State
struct CORDL_TYPE GlobalNamespace__PlatformLeaderboardsModel__State : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__PlatformLeaderboardsModel__State(int32_t value__) noexcept;


                    constexpr GlobalNamespace__PlatformLeaderboardsModel__State(GlobalNamespace__PlatformLeaderboardsModel__State const&) = default;
                    constexpr GlobalNamespace__PlatformLeaderboardsModel__State(GlobalNamespace__PlatformLeaderboardsModel__State&&) = default;
                    constexpr GlobalNamespace__PlatformLeaderboardsModel__State& operator=(GlobalNamespace__PlatformLeaderboardsModel__State const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__PlatformLeaderboardsModel__State& operator=(GlobalNamespace__PlatformLeaderboardsModel__State&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlatformLeaderboardsModel__State(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__PlatformLeaderboardsModel__State_Unwrapped : int32_t {
__NotInitialized = 0,
__Initializing = 1,
__Initialized = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__PlatformLeaderboardsModel__State_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__PlatformLeaderboardsModel__State_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NotInitialized offset 0
static GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__State const NotInitialized;

/// @brief Field Initializing offset 0
static GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__State const Initializing;

/// @brief Field Initialized offset 0
static GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__State const Initialized;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GetScoresResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4256))
// CS Name: PlatformLeaderboardsModel::GetScoresResult
struct CORDL_TYPE GlobalNamespace__PlatformLeaderboardsModel__GetScoresResult : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__PlatformLeaderboardsModel__GetScoresResult(int32_t value__) noexcept;


                    constexpr GlobalNamespace__PlatformLeaderboardsModel__GetScoresResult(GlobalNamespace__PlatformLeaderboardsModel__GetScoresResult const&) = default;
                    constexpr GlobalNamespace__PlatformLeaderboardsModel__GetScoresResult(GlobalNamespace__PlatformLeaderboardsModel__GetScoresResult&&) = default;
                    constexpr GlobalNamespace__PlatformLeaderboardsModel__GetScoresResult& operator=(GlobalNamespace__PlatformLeaderboardsModel__GetScoresResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__PlatformLeaderboardsModel__GetScoresResult& operator=(GlobalNamespace__PlatformLeaderboardsModel__GetScoresResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlatformLeaderboardsModel__GetScoresResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__PlatformLeaderboardsModel__GetScoresResult_Unwrapped : int32_t {
__Ok = 0,
__Failed = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__PlatformLeaderboardsModel__GetScoresResult_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__PlatformLeaderboardsModel__GetScoresResult_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Ok offset 0
static GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__GetScoresResult const Ok;

/// @brief Field Failed offset 0
static GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__GetScoresResult const Failed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::UploadScoreResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4257))
// CS Name: PlatformLeaderboardsModel::UploadScoreResult
struct CORDL_TYPE GlobalNamespace__PlatformLeaderboardsModel__UploadScoreResult : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__PlatformLeaderboardsModel__UploadScoreResult(int32_t value__) noexcept;


                    constexpr GlobalNamespace__PlatformLeaderboardsModel__UploadScoreResult(GlobalNamespace__PlatformLeaderboardsModel__UploadScoreResult const&) = default;
                    constexpr GlobalNamespace__PlatformLeaderboardsModel__UploadScoreResult(GlobalNamespace__PlatformLeaderboardsModel__UploadScoreResult&&) = default;
                    constexpr GlobalNamespace__PlatformLeaderboardsModel__UploadScoreResult& operator=(GlobalNamespace__PlatformLeaderboardsModel__UploadScoreResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__PlatformLeaderboardsModel__UploadScoreResult& operator=(GlobalNamespace__PlatformLeaderboardsModel__UploadScoreResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlatformLeaderboardsModel__UploadScoreResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__PlatformLeaderboardsModel__UploadScoreResult_Unwrapped : int32_t {
__Ok = 0,
__Failed = 1,
__FailedTooManyRequests = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__PlatformLeaderboardsModel__UploadScoreResult_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__PlatformLeaderboardsModel__UploadScoreResult_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Ok offset 0
static GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__UploadScoreResult const Ok;

/// @brief Field Failed offset 0
static GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__UploadScoreResult const Failed;

/// @brief Field FailedTooManyRequests offset 0
static GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__UploadScoreResult const FailedTooManyRequests;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ScoresScope
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4258))
// CS Name: PlatformLeaderboardsModel::ScoresScope
struct CORDL_TYPE GlobalNamespace__PlatformLeaderboardsModel__ScoresScope : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__PlatformLeaderboardsModel__ScoresScope(int32_t value__) noexcept;


                    constexpr GlobalNamespace__PlatformLeaderboardsModel__ScoresScope(GlobalNamespace__PlatformLeaderboardsModel__ScoresScope const&) = default;
                    constexpr GlobalNamespace__PlatformLeaderboardsModel__ScoresScope(GlobalNamespace__PlatformLeaderboardsModel__ScoresScope&&) = default;
                    constexpr GlobalNamespace__PlatformLeaderboardsModel__ScoresScope& operator=(GlobalNamespace__PlatformLeaderboardsModel__ScoresScope const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__PlatformLeaderboardsModel__ScoresScope& operator=(GlobalNamespace__PlatformLeaderboardsModel__ScoresScope&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlatformLeaderboardsModel__ScoresScope(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__PlatformLeaderboardsModel__ScoresScope_Unwrapped : int32_t {
__Global = 0,
__AroundPlayer = 1,
__Friends = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__PlatformLeaderboardsModel__ScoresScope_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__PlatformLeaderboardsModel__ScoresScope_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Global offset 0
static GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__ScoresScope const Global;

/// @brief Field AroundPlayer offset 0
static GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__ScoresScope const AroundPlayer;

/// @brief Field Friends offset 0
static GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__ScoresScope const Friends;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GetScoresCompletionHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4259))
// CS Name: PlatformLeaderboardsModel::GetScoresCompletionHandler
class CORDL_TYPE GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler(GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler(GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler& operator=(GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler&& o) noexcept = default;
  constexpr GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler& operator=(GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x21c7f08 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x21c7fcc size 0x14 virtual true final false
 void Invoke(GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__GetScoresResult result, ::ArrayW<GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__LeaderboardScore> scores, int32_t referencePlayerScoreIndex) ;

/// @brief Method BeginInvoke addr 0x21c7fe0 size 0xb8 virtual true final false
 System::IAsyncResult BeginInvoke(GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__GetScoresResult result, ::ArrayW<GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__LeaderboardScore> scores, int32_t referencePlayerScoreIndex, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x21c8098 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::UploadScoreCompletionHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4260))
// CS Name: PlatformLeaderboardsModel::UploadScoreCompletionHandler
class CORDL_TYPE GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler(GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler(GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler& operator=(GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler&& o) noexcept = default;
  constexpr GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler& operator=(GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x21c4fac size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x21c80a4 size 0x14 virtual true final false
 void Invoke(GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__UploadScoreResult result) ;

/// @brief Method BeginInvoke addr 0x21c80b8 size 0x84 virtual true final false
 System::IAsyncResult BeginInvoke(GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__UploadScoreResult result, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x21c813c size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LeaderboardScore
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4261))
// CS Name: PlatformLeaderboardsModel::LeaderboardScore
class CORDL_TYPE GlobalNamespace__PlatformLeaderboardsModel__LeaderboardScore : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IComparable_1<GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__LeaderboardScore>
constexpr operator  System::IComparable_1<GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__LeaderboardScore>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__PlatformLeaderboardsModel__LeaderboardScore() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlatformLeaderboardsModel__LeaderboardScore", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlatformLeaderboardsModel__LeaderboardScore(GlobalNamespace__PlatformLeaderboardsModel__LeaderboardScore const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlatformLeaderboardsModel__LeaderboardScore", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlatformLeaderboardsModel__LeaderboardScore(GlobalNamespace__PlatformLeaderboardsModel__LeaderboardScore&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlatformLeaderboardsModel__LeaderboardScore(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PlatformLeaderboardsModel__LeaderboardScore& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlatformLeaderboardsModel__LeaderboardScore& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlatformLeaderboardsModel__LeaderboardScore& operator=(GlobalNamespace__PlatformLeaderboardsModel__LeaderboardScore&& o) noexcept = default;
  constexpr GlobalNamespace__PlatformLeaderboardsModel__LeaderboardScore& operator=(GlobalNamespace__PlatformLeaderboardsModel__LeaderboardScore const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_score, put=__set_score))  score;

constexpr void __set_score(int32_t value) ;

constexpr int32_t __get_score() const;

 int32_t __declspec(property(get=__get_rank, put=__set_rank))  rank;

constexpr void __set_rank(int32_t value) ;

constexpr int32_t __get_rank() const;

 ::StringW __declspec(property(get=__get_playerName, put=__set_playerName))  playerName;

constexpr void __set_playerName(::StringW value) ;

constexpr ::StringW __get_playerName() const;

 ::StringW __declspec(property(get=__get_playerId, put=__set_playerId))  playerId;

constexpr void __set_playerId(::StringW value) ;

constexpr ::StringW __get_playerId() const;


// Methods

// Ctor Parameters [CppParam { name: "score", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "rank", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "playerName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "playerId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "gameplayModifiers", ty: "System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO>", modifiers: "", def_value: None }]
explicit GlobalNamespace__PlatformLeaderboardsModel__LeaderboardScore(int32_t score, int32_t rank, ::StringW playerName, ::StringW playerId, System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO> gameplayModifiers) ;

/// @brief Method .ctor addr 0x21c754c size 0x40 virtual false final false
 void _ctor(int32_t score, int32_t rank, ::StringW playerName, ::StringW playerId, System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO> gameplayModifiers) ;

/// @brief Method CompareTo addr 0x21c8148 size 0x28 virtual true final true
 int32_t CompareTo(GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__LeaderboardScore other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<Initialize>d__19
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4262))
// CS Name: PlatformLeaderboardsModel::<Initialize>d__19
struct CORDL_TYPE GlobalNamespace__PlatformLeaderboardsModel___Initialize_d__19 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::PlatformLeaderboardsModel", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__PlatformLeaderboardsModel___Initialize_d__19(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::PlatformLeaderboardsModel __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo> __u__1) noexcept;


                    constexpr GlobalNamespace__PlatformLeaderboardsModel___Initialize_d__19(GlobalNamespace__PlatformLeaderboardsModel___Initialize_d__19 const&) = default;
                    constexpr GlobalNamespace__PlatformLeaderboardsModel___Initialize_d__19(GlobalNamespace__PlatformLeaderboardsModel___Initialize_d__19&&) = default;
                    constexpr GlobalNamespace__PlatformLeaderboardsModel___Initialize_d__19& operator=(GlobalNamespace__PlatformLeaderboardsModel___Initialize_d__19 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__PlatformLeaderboardsModel___Initialize_d__19& operator=(GlobalNamespace__PlatformLeaderboardsModel___Initialize_d__19&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlatformLeaderboardsModel___Initialize_d__19(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::PlatformLeaderboardsModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::PlatformLeaderboardsModel value) ;

constexpr GlobalNamespace::PlatformLeaderboardsModel __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21c8170 size 0x328 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21c8498 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlatformLeaderboardsModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4263))
// CS Name: PlatformLeaderboardsModel
class CORDL_TYPE PlatformLeaderboardsModel : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _Initialize_d__19 = GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel___Initialize_d__19;

using LeaderboardScore = GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__LeaderboardScore;

using UploadScoreCompletionHandler = GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler;

using GetScoresCompletionHandler = GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler;

using ScoresScope = GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__ScoresScope;

using UploadScoreResult = GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__UploadScoreResult;

using GetScoresResult = GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__GetScoresResult;

using State = GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__State;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~PlatformLeaderboardsModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardsModel", modifiers: " const&", def_value: None }]
constexpr PlatformLeaderboardsModel(PlatformLeaderboardsModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardsModel", modifiers: "&&", def_value: None }]
constexpr PlatformLeaderboardsModel(PlatformLeaderboardsModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlatformLeaderboardsModel(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PlatformLeaderboardsModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlatformLeaderboardsModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlatformLeaderboardsModel& operator=(PlatformLeaderboardsModel&& o) noexcept = default;
  constexpr PlatformLeaderboardsModel& operator=(PlatformLeaderboardsModel const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GameplayModifiersModelSO __declspec(property(get=__get__gameplayModifiersModel, put=__set__gameplayModifiersModel))  _gameplayModifiersModel;

constexpr void __set__gameplayModifiersModel(GlobalNamespace::GameplayModifiersModelSO value) ;

constexpr GlobalNamespace::GameplayModifiersModelSO __get__gameplayModifiersModel() const;

 GlobalNamespace::LeaderboardScoreUploader __declspec(property(get=__get__leaderboardScoreUploader, put=__set__leaderboardScoreUploader))  _leaderboardScoreUploader;

constexpr void __set__leaderboardScoreUploader(GlobalNamespace::LeaderboardScoreUploader value) ;

constexpr GlobalNamespace::LeaderboardScoreUploader __get__leaderboardScoreUploader() const;

 GlobalNamespace::IPlatformUserModel __declspec(property(get=__get__platformUserModel, put=__set__platformUserModel))  _platformUserModel;

constexpr void __set__platformUserModel(GlobalNamespace::IPlatformUserModel value) ;

constexpr GlobalNamespace::IPlatformUserModel __get__platformUserModel() const;

 GlobalNamespace::PlatformLeaderboardsHandler __declspec(property(get=__get__platformLeaderboardsHandler, put=__set__platformLeaderboardsHandler))  _platformLeaderboardsHandler;

constexpr void __set__platformLeaderboardsHandler(GlobalNamespace::PlatformLeaderboardsHandler value) ;

constexpr GlobalNamespace::PlatformLeaderboardsHandler __get__platformLeaderboardsHandler() const;

 System::Action __declspec(property(get=__get_allScoresDidUploadEvent, put=__set_allScoresDidUploadEvent))  allScoresDidUploadEvent;

constexpr void __set_allScoresDidUploadEvent(System::Action value) ;

constexpr System::Action __get_allScoresDidUploadEvent() const;

 GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__State __declspec(property(get=__get__state, put=__set__state))  _state;

constexpr void __set__state(GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__State value) ;

constexpr GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__State __get__state() const;

 ::StringW __declspec(property(get=__get__playerId, put=__set__playerId))  _playerId;

constexpr void __set__playerId(::StringW value) ;

constexpr ::StringW __get__playerId() const;


// Properties

 bool __declspec(property(get=get_initialized))  initialized;


// Methods

/// @brief Method add_allScoresDidUploadEvent addr 0x21c76e4 size 0x9c virtual false final false
 void add_allScoresDidUploadEvent(System::Action value) ;

/// @brief Method remove_allScoresDidUploadEvent addr 0x21c7780 size 0x9c virtual false final false
 void remove_allScoresDidUploadEvent(System::Action value) ;

/// @brief Method get_initialized addr 0x21c781c size 0x28 virtual false final false
 bool get_initialized() ;

/// @brief Method OnDestroy addr 0x21c78d8 size 0x1ac virtual false final false
 void OnDestroy() ;

/// @brief Method Initialize addr 0x21c7844 size 0x94 virtual false final false
 void Initialize() ;

/// @brief Method InitializeForUserInfo addr 0x21c7a84 size 0x19c virtual false final false
 void InitializeForUserInfo(GlobalNamespace::UserInfo newInfo) ;

/// @brief Method HandlePlatformUserInfoDidChange addr 0x21c7c20 size 0x4 virtual false final false
 void HandlePlatformUserInfoDidChange(GlobalNamespace::UserInfo newInfo) ;

/// @brief Method UploadScore addr 0x21c7c24 size 0x80 virtual false final false
 GlobalNamespace::HMAsyncRequest UploadScore(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData scoreData, GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler completionHandler) ;

/// @brief Method GetScores addr 0x21c7ca4 size 0xbc virtual false final false
 GlobalNamespace::HMAsyncRequest GetScores(GlobalNamespace::IDifficultyBeatmap beatmap, int32_t count, int32_t fromRank, GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__ScoresScope scope, GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler completionHandler) ;

/// @brief Method HandleAllScoresDidUpload addr 0x21c7d60 size 0x1c virtual false final false
 void HandleAllScoresDidUpload() ;

/// @brief Method GetScores addr 0x21c7d7c size 0xc virtual false final false
 GlobalNamespace::HMAsyncRequest GetScores(GlobalNamespace::IDifficultyBeatmap beatmap, int32_t count, int32_t fromRank, GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler completionHandler) ;

/// @brief Method GetScoresAroundPlayer addr 0x21c7d88 size 0x10 virtual false final false
 GlobalNamespace::HMAsyncRequest GetScoresAroundPlayer(GlobalNamespace::IDifficultyBeatmap beatmap, int32_t count, GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler completionHandler) ;

/// @brief Method GetFriendsScores addr 0x21c7d98 size 0xc virtual false final false
 GlobalNamespace::HMAsyncRequest GetFriendsScores(GlobalNamespace::IDifficultyBeatmap beatmap, int32_t count, int32_t fromRank, GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler completionHandler) ;

/// @brief Method UploadScore addr 0x21c7da4 size 0x15c virtual false final false
 void UploadScore(GlobalNamespace::IDifficultyBeatmap beatmap, int32_t multipliedScore, int32_t modifiedScore, int32_t maxPossibleMultipliedScore, bool fullCombo, int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCount, int32_t maxCombo, float_t energy, GlobalNamespace::GameplayModifiers gameplayModifiers) ;

// Ctor Parameters []
explicit PlatformLeaderboardsModel() ;

/// @brief Method .ctor addr 0x21c7f00 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__GetScoresResult, "", "PlatformLeaderboardsModel/GetScoresResult");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__ScoresScope, "", "PlatformLeaderboardsModel/ScoresScope");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__State, "", "PlatformLeaderboardsModel/State");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__UploadScoreResult, "", "PlatformLeaderboardsModel/UploadScoreResult");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler, "", "PlatformLeaderboardsModel/GetScoresCompletionHandler");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__LeaderboardScore);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__LeaderboardScore, "", "PlatformLeaderboardsModel/LeaderboardScore");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler, "", "PlatformLeaderboardsModel/UploadScoreCompletionHandler");
NEED_NO_BOX(GlobalNamespace::PlatformLeaderboardsModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformLeaderboardsModel, "", "PlatformLeaderboardsModel");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel___Initialize_d__19, "", "PlatformLeaderboardsModel/<Initialize>d__19");
