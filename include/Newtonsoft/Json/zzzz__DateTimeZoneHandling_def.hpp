#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Newtonsoft::Json {
struct DateTimeZoneHandling;
}
// Type: Newtonsoft.Json::DateTimeZoneHandling
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11739))
// CS Name: Newtonsoft.Json.DateTimeZoneHandling
struct CORDL_TYPE DateTimeZoneHandling : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DateTimeZoneHandling(int32_t value__) noexcept;


                    constexpr DateTimeZoneHandling(DateTimeZoneHandling const&) = default;
                    constexpr DateTimeZoneHandling(DateTimeZoneHandling&&) = default;
                    constexpr DateTimeZoneHandling& operator=(DateTimeZoneHandling const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DateTimeZoneHandling& operator=(DateTimeZoneHandling&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DateTimeZoneHandling(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __DateTimeZoneHandling_Unwrapped : int32_t {
__Local = 0,
__Utc = 1,
__Unspecified = 2,
__RoundtripKind = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DateTimeZoneHandling_Unwrapped () const noexcept {
return std::bit_cast<__DateTimeZoneHandling_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Local offset 0
static Newtonsoft::Json::DateTimeZoneHandling const Local;

/// @brief Field Utc offset 0
static Newtonsoft::Json::DateTimeZoneHandling const Utc;

/// @brief Field Unspecified offset 0
static Newtonsoft::Json::DateTimeZoneHandling const Unspecified;

/// @brief Field RoundtripKind offset 0
static Newtonsoft::Json::DateTimeZoneHandling const RoundtripKind;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::DateTimeZoneHandling, "Newtonsoft.Json", "DateTimeZoneHandling");
