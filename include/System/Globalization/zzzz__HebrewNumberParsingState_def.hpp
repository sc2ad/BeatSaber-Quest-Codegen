#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Globalization {
struct HebrewNumberParsingState;
}
// Type: System.Globalization::HebrewNumberParsingState
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3659))
// CS Name: System.Globalization.HebrewNumberParsingState
struct CORDL_TYPE HebrewNumberParsingState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HebrewNumberParsingState(int32_t value__) noexcept;


                    constexpr HebrewNumberParsingState(HebrewNumberParsingState const&) = default;
                    constexpr HebrewNumberParsingState(HebrewNumberParsingState&&) = default;
                    constexpr HebrewNumberParsingState& operator=(HebrewNumberParsingState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HebrewNumberParsingState& operator=(HebrewNumberParsingState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HebrewNumberParsingState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HebrewNumberParsingState_Unwrapped : int32_t {
__InvalidHebrewNumber = 0,
__NotHebrewDigit = 1,
__FoundEndOfHebrewNumber = 2,
__ContinueParsing = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HebrewNumberParsingState_Unwrapped () const noexcept {
return std::bit_cast<__HebrewNumberParsingState_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field InvalidHebrewNumber offset 0
static System::Globalization::HebrewNumberParsingState const InvalidHebrewNumber;

/// @brief Field NotHebrewDigit offset 0
static System::Globalization::HebrewNumberParsingState const NotHebrewDigit;

/// @brief Field FoundEndOfHebrewNumber offset 0
static System::Globalization::HebrewNumberParsingState const FoundEndOfHebrewNumber;

/// @brief Field ContinueParsing offset 0
static System::Globalization::HebrewNumberParsingState const ContinueParsing;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::HebrewNumberParsingState, "System.Globalization", "HebrewNumberParsingState");
