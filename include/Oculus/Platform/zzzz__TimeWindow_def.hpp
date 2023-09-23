#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
struct TimeWindow;
}
// Type: Oculus.Platform::TimeWindow
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13365))
// CS Name: Oculus.Platform.TimeWindow
struct CORDL_TYPE TimeWindow : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TimeWindow(int32_t value__) noexcept;


                    constexpr TimeWindow(TimeWindow const&) = default;
                    constexpr TimeWindow(TimeWindow&&) = default;
                    constexpr TimeWindow& operator=(TimeWindow const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TimeWindow& operator=(TimeWindow&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TimeWindow(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TimeWindow_Unwrapped : int32_t {
__Unknown = 0,
__OneHour = 1,
__OneDay = 2,
__OneWeek = 3,
__ThirtyDays = 4,
__NinetyDays = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TimeWindow_Unwrapped () const noexcept {
return std::bit_cast<__TimeWindow_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static Oculus::Platform::TimeWindow const Unknown;

/// @brief Field OneHour offset 0
static Oculus::Platform::TimeWindow const OneHour;

/// @brief Field OneDay offset 0
static Oculus::Platform::TimeWindow const OneDay;

/// @brief Field OneWeek offset 0
static Oculus::Platform::TimeWindow const OneWeek;

/// @brief Field ThirtyDays offset 0
static Oculus::Platform::TimeWindow const ThirtyDays;

/// @brief Field NinetyDays offset 0
static Oculus::Platform::TimeWindow const NinetyDays;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::TimeWindow, "Oculus.Platform", "TimeWindow");
