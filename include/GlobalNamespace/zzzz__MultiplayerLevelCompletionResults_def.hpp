#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason;
}
namespace LiteNetLib::Utils {
template<typename T>
class INetImmutableSerializable_1;
}
namespace System {
class IComparable;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason;
}
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
// Type: ::MultiplayerPlayerLevelEndState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12817))
// CS Name: MultiplayerLevelCompletionResults::MultiplayerPlayerLevelEndState
struct CORDL_TYPE GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState(int32_t value__) noexcept;


                    constexpr GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState(GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState const&) = default;
                    constexpr GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState(GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState&&) = default;
                    constexpr GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState& operator=(GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState& operator=(GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState_Unwrapped : int32_t {
__SongFinished = 0,
__NotFinished = 1,
__NotStarted = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field SongFinished offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState const SongFinished;

/// @brief Field NotFinished offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState const NotFinished;

/// @brief Field NotStarted offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState const NotStarted;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerPlayerLevelEndReason
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12818))
// CS Name: MultiplayerLevelCompletionResults::MultiplayerPlayerLevelEndReason
struct CORDL_TYPE GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason(int32_t value__) noexcept;


                    constexpr GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason(GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason const&) = default;
                    constexpr GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason(GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason&&) = default;
                    constexpr GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason& operator=(GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason& operator=(GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason_Unwrapped : int32_t {
__Cleared = 0,
__Failed = 1,
__GivenUp = 2,
__Quit = 3,
__HostEndedLevel = 4,
__WasInactive = 5,
__StartupFailed = 6,
__ConnectedAfterLevelEnded = 7,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Cleared offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason const Cleared;

/// @brief Field Failed offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason const Failed;

/// @brief Field GivenUp offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason const GivenUp;

/// @brief Field Quit offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason const Quit;

/// @brief Field HostEndedLevel offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason const HostEndedLevel;

/// @brief Field WasInactive offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason const WasInactive;

/// @brief Field StartupFailed offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason const StartupFailed;

/// @brief Field ConnectedAfterLevelEnded offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason const ConnectedAfterLevelEnded;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerLevelCompletionResults
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12819))
// CS Name: MultiplayerLevelCompletionResults
class CORDL_TYPE MultiplayerLevelCompletionResults : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using MultiplayerPlayerLevelEndReason = GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason;

using MultiplayerPlayerLevelEndState = GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState;

/// @brief Convert operator to LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::MultiplayerLevelCompletionResults>
constexpr operator  LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::MultiplayerLevelCompletionResults>() const noexcept;

/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MultiplayerLevelCompletionResults() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelCompletionResults", modifiers: " const&", def_value: None }]
constexpr MultiplayerLevelCompletionResults(MultiplayerLevelCompletionResults const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelCompletionResults", modifiers: "&&", def_value: None }]
constexpr MultiplayerLevelCompletionResults(MultiplayerLevelCompletionResults&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLevelCompletionResults(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MultiplayerLevelCompletionResults& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLevelCompletionResults& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLevelCompletionResults& operator=(MultiplayerLevelCompletionResults&& o) noexcept = default;
  constexpr MultiplayerLevelCompletionResults& operator=(MultiplayerLevelCompletionResults const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState __declspec(property(get=__get__playerLevelEndState, put=__set__playerLevelEndState))  _playerLevelEndState;

constexpr void __set__playerLevelEndState(GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState value) ;

constexpr GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState __get__playerLevelEndState() const;

 GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason __declspec(property(get=__get__playerLevelEndReason, put=__set__playerLevelEndReason))  _playerLevelEndReason;

constexpr void __set__playerLevelEndReason(GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason value) ;

constexpr GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason __get__playerLevelEndReason() const;

 GlobalNamespace::LevelCompletionResults __declspec(property(get=__get__levelCompletionResults, put=__set__levelCompletionResults))  _levelCompletionResults;

constexpr void __set__levelCompletionResults(GlobalNamespace::LevelCompletionResults value) ;

constexpr GlobalNamespace::LevelCompletionResults __get__levelCompletionResults() const;


// Properties

 GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState __declspec(property(get=get_playerLevelEndState))  playerLevelEndState;

 GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason __declspec(property(get=get_playerLevelEndReason))  playerLevelEndReason;

 GlobalNamespace::LevelCompletionResults __declspec(property(get=get_levelCompletionResults))  levelCompletionResults;

 bool __declspec(property(get=get_hasAnyResults))  hasAnyResults;

 bool __declspec(property(get=get_failedOrGivenUp))  failedOrGivenUp;


// Methods

/// @brief Method get_playerLevelEndState addr 0xdbca4c size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState get_playerLevelEndState() ;

/// @brief Method get_playerLevelEndReason addr 0xdbca54 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason get_playerLevelEndReason() ;

/// @brief Method get_levelCompletionResults addr 0xdbca5c size 0x8 virtual false final false
 GlobalNamespace::LevelCompletionResults get_levelCompletionResults() ;

/// @brief Method get_hasAnyResults addr 0xdbca64 size 0x10 virtual false final false
 bool get_hasAnyResults() ;

/// @brief Method get_failedOrGivenUp addr 0xdbca80 size 0x14 virtual false final false
 bool get_failedOrGivenUp() ;

static GlobalNamespace::MultiplayerLevelCompletionResults New_ctor() ;

/// @brief Method .ctor addr 0xdbca94 size 0x8 virtual false final false
 void _ctor() ;

static GlobalNamespace::MultiplayerLevelCompletionResults New_ctor(GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState playerLevelEndState, GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason playerLevelEndReason, GlobalNamespace::LevelCompletionResults levelCompletionResults) ;

/// @brief Method .ctor addr 0xdbca9c size 0x3c virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState playerLevelEndState, GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason playerLevelEndReason, GlobalNamespace::LevelCompletionResults levelCompletionResults) ;

/// @brief Method Serialize addr 0xdbcad8 size 0x6c virtual true final true
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method CreateFromSerializedData addr 0xdbcb44 size 0xac virtual true final true
 GlobalNamespace::MultiplayerLevelCompletionResults CreateFromSerializedData(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method CompareTo addr 0xdbcbf0 size 0xec virtual true final true
 int32_t CompareTo(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method HasAnyResult addr 0xdbca74 size 0xc virtual false final false
static bool HasAnyResult(GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState playerLevelEndState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason, "", "MultiplayerLevelCompletionResults/MultiplayerPlayerLevelEndReason");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState, "", "MultiplayerLevelCompletionResults/MultiplayerPlayerLevelEndState");
NEED_NO_BOX(GlobalNamespace::MultiplayerLevelCompletionResults);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLevelCompletionResults, "", "MultiplayerLevelCompletionResults");
