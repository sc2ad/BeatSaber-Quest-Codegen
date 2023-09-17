#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System {
struct ParseFlags;
}
// Type: System::ParseFlags
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2398))
// CS Name: System.ParseFlags
struct CORDL_TYPE ParseFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ParseFlags(int32_t value__) noexcept;


                    constexpr ParseFlags(ParseFlags const&) = default;
                    constexpr ParseFlags(ParseFlags&&) = default;
                    constexpr ParseFlags& operator=(ParseFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ParseFlags& operator=(ParseFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ParseFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ParseFlags_Unwrapped : int32_t {
__HaveYear = 1,
__HaveMonth = 2,
__HaveDay = 4,
__HaveHour = 8,
__HaveMinute = 16,
__HaveSecond = 32,
__HaveTime = 64,
__HaveDate = 128,
__TimeZoneUsed = 256,
__TimeZoneUtc = 512,
__ParsedMonthName = 1024,
__CaptureOffset = 2048,
__YearDefault = 4096,
__Rfc1123Pattern = 8192,
__UtcSortPattern = 16384,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ParseFlags_Unwrapped () const noexcept {
return std::bit_cast<__ParseFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HaveYear offset 0
static ::System::ParseFlags const HaveYear;

/// @brief Field HaveMonth offset 0
static ::System::ParseFlags const HaveMonth;

/// @brief Field HaveDay offset 0
static ::System::ParseFlags const HaveDay;

/// @brief Field HaveHour offset 0
static ::System::ParseFlags const HaveHour;

/// @brief Field HaveMinute offset 0
static ::System::ParseFlags const HaveMinute;

/// @brief Field HaveSecond offset 0
static ::System::ParseFlags const HaveSecond;

/// @brief Field HaveTime offset 0
static ::System::ParseFlags const HaveTime;

/// @brief Field HaveDate offset 0
static ::System::ParseFlags const HaveDate;

/// @brief Field TimeZoneUsed offset 0
static ::System::ParseFlags const TimeZoneUsed;

/// @brief Field TimeZoneUtc offset 0
static ::System::ParseFlags const TimeZoneUtc;

/// @brief Field ParsedMonthName offset 0
static ::System::ParseFlags const ParsedMonthName;

/// @brief Field CaptureOffset offset 0
static ::System::ParseFlags const CaptureOffset;

/// @brief Field YearDefault offset 0
static ::System::ParseFlags const YearDefault;

/// @brief Field Rfc1123Pattern offset 0
static ::System::ParseFlags const Rfc1123Pattern;

/// @brief Field UtcSortPattern offset 0
static ::System::ParseFlags const UtcSortPattern;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::ParseFlags, "System", "ParseFlags");
