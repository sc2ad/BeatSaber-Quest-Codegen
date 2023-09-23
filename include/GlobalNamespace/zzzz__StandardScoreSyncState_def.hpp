#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class IStateTable_3;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
template<typename T>
class IEquatableByReference_1;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__StandardScoreSyncState__Score;
}
namespace GlobalNamespace {
struct StandardScoreSyncState;
}
// Type: ::Score
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12916))
// CS Name: StandardScoreSyncState::Score
struct CORDL_TYPE GlobalNamespace__StandardScoreSyncState__Score : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__StandardScoreSyncState__Score(int32_t value__) noexcept;


                    constexpr GlobalNamespace__StandardScoreSyncState__Score(GlobalNamespace__StandardScoreSyncState__Score const&) = default;
                    constexpr GlobalNamespace__StandardScoreSyncState__Score(GlobalNamespace__StandardScoreSyncState__Score&&) = default;
                    constexpr GlobalNamespace__StandardScoreSyncState__Score& operator=(GlobalNamespace__StandardScoreSyncState__Score const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__StandardScoreSyncState__Score& operator=(GlobalNamespace__StandardScoreSyncState__Score&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__StandardScoreSyncState__Score(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__StandardScoreSyncState__Score_Unwrapped : int32_t {
__ModifiedScore = 0,
__MultipliedScore = 1,
__ImmediateMaxPossibleMultipliedScore = 2,
__Combo = 3,
__Multiplier = 4,
__Count = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__StandardScoreSyncState__Score_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__StandardScoreSyncState__Score_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ModifiedScore offset 0
static GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score const ModifiedScore;

/// @brief Field MultipliedScore offset 0
static GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score const MultipliedScore;

/// @brief Field ImmediateMaxPossibleMultipliedScore offset 0
static GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score const ImmediateMaxPossibleMultipliedScore;

/// @brief Field Combo offset 0
static GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score const Combo;

/// @brief Field Multiplier offset 0
static GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score const Multiplier;

/// @brief Field Count offset 0
static GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score const Count;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::StandardScoreSyncState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12917))
// CS Name: StandardScoreSyncState
struct CORDL_TYPE StandardScoreSyncState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Score = GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score;

/// @brief Convert operator to GlobalNamespace::IStateTable_3<GlobalNamespace::StandardScoreSyncState,GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score,int32_t>
constexpr operator  GlobalNamespace::IStateTable_3<GlobalNamespace::StandardScoreSyncState,GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score,int32_t>() const;

/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const;

/// @brief Convert operator to GlobalNamespace::IEquatableByReference_1<GlobalNamespace::StandardScoreSyncState>
constexpr operator  GlobalNamespace::IEquatableByReference_1<GlobalNamespace::StandardScoreSyncState>() const;

// Ctor Parameters [CppParam { name: "_modifiedScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_multipliedScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_immediateMaxPossibleMultipliedScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_combo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_multiplier", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StandardScoreSyncState(int32_t _modifiedScore, int32_t _multipliedScore, int32_t _immediateMaxPossibleMultipliedScore, int32_t _combo, int32_t _multiplier) noexcept;


                    constexpr StandardScoreSyncState(StandardScoreSyncState const&) = default;
                    constexpr StandardScoreSyncState(StandardScoreSyncState&&) = default;
                    constexpr StandardScoreSyncState& operator=(StandardScoreSyncState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StandardScoreSyncState& operator=(StandardScoreSyncState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StandardScoreSyncState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get__modifiedScore, put=__set__modifiedScore))  _modifiedScore;

constexpr void __set__modifiedScore(int32_t value) ;

constexpr int32_t __get__modifiedScore() const;

 int32_t __declspec(property(get=__get__multipliedScore, put=__set__multipliedScore))  _multipliedScore;

constexpr void __set__multipliedScore(int32_t value) ;

constexpr int32_t __get__multipliedScore() const;

 int32_t __declspec(property(get=__get__immediateMaxPossibleMultipliedScore, put=__set__immediateMaxPossibleMultipliedScore))  _immediateMaxPossibleMultipliedScore;

constexpr void __set__immediateMaxPossibleMultipliedScore(int32_t value) ;

constexpr int32_t __get__immediateMaxPossibleMultipliedScore() const;

 int32_t __declspec(property(get=__get__combo, put=__set__combo))  _combo;

constexpr void __set__combo(int32_t value) ;

constexpr int32_t __get__combo() const;

 int32_t __declspec(property(get=__get__multiplier, put=__set__multiplier))  _multiplier;

constexpr void __set__multiplier(int32_t value) ;

constexpr int32_t __get__multiplier() const;


// Methods

/// @brief Method SetState addr 0xdcd45c size 0x48 virtual true final true
 void SetState(GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score s, int32_t value) ;

/// @brief Method GetDelta addr 0xdcd4a4 size 0x24 virtual false final false
 GlobalNamespace::StandardScoreSyncState GetDelta(ByRef<GlobalNamespace::StandardScoreSyncState> stateTable) ;

/// @brief Method ApplyDelta addr 0xdcd4c8 size 0x24 virtual false final false
 GlobalNamespace::StandardScoreSyncState ApplyDelta(ByRef<GlobalNamespace::StandardScoreSyncState> delta) ;

/// @brief Method GetState addr 0xdcd4ec size 0x50 virtual true final true
 int32_t GetState(GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score s) ;

/// @brief Method Serialize addr 0xdcd53c size 0x6c virtual true final true
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xdcd5a8 size 0x6c virtual true final true
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Equals addr 0xdcd614 size 0x5c virtual false final false
 bool Equals(ByRef<GlobalNamespace::StandardScoreSyncState> other) ;

/// @brief Method GetSize addr 0xdcd670 size 0x8c virtual true final true
 int32_t GetSize() ;

/// @brief Method IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.GetDelta addr 0xdcd6fc size 0x24 virtual true final true
 GlobalNamespace::StandardScoreSyncState IStateTable_StandardScoreSyncState,StandardScoreSyncState_Score,System_Int32__GetDelta(ByRef<GlobalNamespace::StandardScoreSyncState> stateTable) ;

/// @brief Method IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.ApplyDelta addr 0xdcd720 size 0x24 virtual true final true
 GlobalNamespace::StandardScoreSyncState IStateTable_StandardScoreSyncState,StandardScoreSyncState_Score,System_Int32__ApplyDelta(ByRef<GlobalNamespace::StandardScoreSyncState> delta) ;

/// @brief Method IEquatableByReference<StandardScoreSyncState>.Equals addr 0xdcd744 size 0x4 virtual true final true
 bool IEquatableByReference_StandardScoreSyncState__Equals(ByRef<GlobalNamespace::StandardScoreSyncState> other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score, "", "StandardScoreSyncState/Score");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardScoreSyncState, "", "StandardScoreSyncState");
