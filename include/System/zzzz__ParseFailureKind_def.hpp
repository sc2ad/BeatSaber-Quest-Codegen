#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System {
struct ParseFailureKind;
}
// Type: System::ParseFailureKind
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2397))
// CS Name: System.ParseFailureKind
struct CORDL_TYPE ParseFailureKind : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ParseFailureKind(int32_t value__) noexcept;


                    constexpr ParseFailureKind(ParseFailureKind const&) = default;
                    constexpr ParseFailureKind(ParseFailureKind&&) = default;
                    constexpr ParseFailureKind& operator=(ParseFailureKind const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ParseFailureKind& operator=(ParseFailureKind&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ParseFailureKind(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ParseFailureKind_Unwrapped : int32_t {
__None = 0,
__ArgumentNull = 1,
__Format = 2,
__FormatWithParameter = 3,
__FormatWithOriginalDateTime = 4,
__FormatWithFormatSpecifier = 5,
__FormatWithOriginalDateTimeAndParameter = 6,
__FormatBadDateTimeCalendar = 7,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ParseFailureKind_Unwrapped () const noexcept {
return std::bit_cast<__ParseFailureKind_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::ParseFailureKind const None;

/// @brief Field ArgumentNull offset 0
static ::System::ParseFailureKind const ArgumentNull;

/// @brief Field Format offset 0
static ::System::ParseFailureKind const Format;

/// @brief Field FormatWithParameter offset 0
static ::System::ParseFailureKind const FormatWithParameter;

/// @brief Field FormatWithOriginalDateTime offset 0
static ::System::ParseFailureKind const FormatWithOriginalDateTime;

/// @brief Field FormatWithFormatSpecifier offset 0
static ::System::ParseFailureKind const FormatWithFormatSpecifier;

/// @brief Field FormatWithOriginalDateTimeAndParameter offset 0
static ::System::ParseFailureKind const FormatWithOriginalDateTimeAndParameter;

/// @brief Field FormatBadDateTimeCalendar offset 0
static ::System::ParseFailureKind const FormatBadDateTimeCalendar;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::ParseFailureKind, "System", "ParseFailureKind");
