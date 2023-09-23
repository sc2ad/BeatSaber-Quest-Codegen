#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System {
struct DateTimeKind;
}
// Type: System::DateTimeKind
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2369))
// CS Name: System.DateTimeKind
struct CORDL_TYPE DateTimeKind : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DateTimeKind(int32_t value__) noexcept;


                    constexpr DateTimeKind(DateTimeKind const&) = default;
                    constexpr DateTimeKind(DateTimeKind&&) = default;
                    constexpr DateTimeKind& operator=(DateTimeKind const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DateTimeKind& operator=(DateTimeKind&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DateTimeKind(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __DateTimeKind_Unwrapped : int32_t {
__Unspecified = 0,
__Utc = 1,
__Local = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DateTimeKind_Unwrapped () const noexcept {
return std::bit_cast<__DateTimeKind_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unspecified offset 0
static System::DateTimeKind const Unspecified;

/// @brief Field Utc offset 0
static System::DateTimeKind const Utc;

/// @brief Field Local offset 0
static System::DateTimeKind const Local;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::DateTimeKind, "System", "DateTimeKind");
