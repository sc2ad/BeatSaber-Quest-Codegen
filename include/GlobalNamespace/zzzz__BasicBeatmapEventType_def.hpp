#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
// Type: ::BasicBeatmapEventType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14909))
// CS Name: BasicBeatmapEventType
struct CORDL_TYPE BasicBeatmapEventType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BasicBeatmapEventType(int32_t value__) noexcept;


                    constexpr BasicBeatmapEventType(BasicBeatmapEventType const&) = default;
                    constexpr BasicBeatmapEventType(BasicBeatmapEventType&&) = default;
                    constexpr BasicBeatmapEventType& operator=(BasicBeatmapEventType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BasicBeatmapEventType& operator=(BasicBeatmapEventType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BasicBeatmapEventType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __BasicBeatmapEventType_Unwrapped : int32_t {
__Event0 = 0,
__Event1 = 1,
__Event2 = 2,
__Event3 = 3,
__Event4 = 4,
__Event5 = 5,
__Event6 = 6,
__Event7 = 7,
__Event8 = 8,
__Event9 = 9,
__Event10 = 10,
__Event11 = 11,
__Event12 = 12,
__Event13 = 13,
__Event14 = 14,
__Event15 = 15,
__Event16 = 16,
__Event17 = 17,
__Event18 = 18,
__Event19 = 19,
__Event20 = 20,
__Event21 = 21,
__VoidEvent = -1,
__Special0 = 40,
__Special1 = 41,
__Special2 = 42,
__Special3 = 43,
__BpmChange = 100,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BasicBeatmapEventType_Unwrapped () const noexcept {
return std::bit_cast<__BasicBeatmapEventType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Event0 offset 0
static GlobalNamespace::BasicBeatmapEventType const Event0;

/// @brief Field Event1 offset 0
static GlobalNamespace::BasicBeatmapEventType const Event1;

/// @brief Field Event2 offset 0
static GlobalNamespace::BasicBeatmapEventType const Event2;

/// @brief Field Event3 offset 0
static GlobalNamespace::BasicBeatmapEventType const Event3;

/// @brief Field Event4 offset 0
static GlobalNamespace::BasicBeatmapEventType const Event4;

/// @brief Field Event5 offset 0
static GlobalNamespace::BasicBeatmapEventType const Event5;

/// @brief Field Event6 offset 0
static GlobalNamespace::BasicBeatmapEventType const Event6;

/// @brief Field Event7 offset 0
static GlobalNamespace::BasicBeatmapEventType const Event7;

/// @brief Field Event8 offset 0
static GlobalNamespace::BasicBeatmapEventType const Event8;

/// @brief Field Event9 offset 0
static GlobalNamespace::BasicBeatmapEventType const Event9;

/// @brief Field Event10 offset 0
static GlobalNamespace::BasicBeatmapEventType const Event10;

/// @brief Field Event11 offset 0
static GlobalNamespace::BasicBeatmapEventType const Event11;

/// @brief Field Event12 offset 0
static GlobalNamespace::BasicBeatmapEventType const Event12;

/// @brief Field Event13 offset 0
static GlobalNamespace::BasicBeatmapEventType const Event13;

/// @brief Field Event14 offset 0
static GlobalNamespace::BasicBeatmapEventType const Event14;

/// @brief Field Event15 offset 0
static GlobalNamespace::BasicBeatmapEventType const Event15;

/// @brief Field Event16 offset 0
static GlobalNamespace::BasicBeatmapEventType const Event16;

/// @brief Field Event17 offset 0
static GlobalNamespace::BasicBeatmapEventType const Event17;

/// @brief Field Event18 offset 0
static GlobalNamespace::BasicBeatmapEventType const Event18;

/// @brief Field Event19 offset 0
static GlobalNamespace::BasicBeatmapEventType const Event19;

/// @brief Field Event20 offset 0
static GlobalNamespace::BasicBeatmapEventType const Event20;

/// @brief Field Event21 offset 0
static GlobalNamespace::BasicBeatmapEventType const Event21;

/// @brief Field VoidEvent offset 0
static GlobalNamespace::BasicBeatmapEventType const VoidEvent;

/// @brief Field Special0 offset 0
static GlobalNamespace::BasicBeatmapEventType const Special0;

/// @brief Field Special1 offset 0
static GlobalNamespace::BasicBeatmapEventType const Special1;

/// @brief Field Special2 offset 0
static GlobalNamespace::BasicBeatmapEventType const Special2;

/// @brief Field Special3 offset 0
static GlobalNamespace::BasicBeatmapEventType const Special3;

/// @brief Field BpmChange offset 0
static GlobalNamespace::BasicBeatmapEventType const BpmChange;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BasicBeatmapEventType, "", "BasicBeatmapEventType");
