#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System {
struct UnescapeMode;
}
// Type: System::UnescapeMode
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7733))
// CS Name: System.UnescapeMode
struct CORDL_TYPE UnescapeMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnescapeMode(int32_t value__) noexcept;


                    constexpr UnescapeMode(UnescapeMode const&) = default;
                    constexpr UnescapeMode(UnescapeMode&&) = default;
                    constexpr UnescapeMode& operator=(UnescapeMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnescapeMode& operator=(UnescapeMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnescapeMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnescapeMode_Unwrapped : int32_t {
__CopyOnly = 0,
__Escape = 1,
__Unescape = 2,
__EscapeUnescape = 3,
__V1ToStringFlag = 4,
__UnescapeAll = 8,
__UnescapeAllOrThrow = 24,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnescapeMode_Unwrapped () const noexcept {
return std::bit_cast<__UnescapeMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field CopyOnly offset 0
static System::UnescapeMode const CopyOnly;

/// @brief Field Escape offset 0
static System::UnescapeMode const Escape;

/// @brief Field Unescape offset 0
static System::UnescapeMode const Unescape;

/// @brief Field EscapeUnescape offset 0
static System::UnescapeMode const EscapeUnescape;

/// @brief Field V1ToStringFlag offset 0
static System::UnescapeMode const V1ToStringFlag;

/// @brief Field UnescapeAll offset 0
static System::UnescapeMode const UnescapeAll;

/// @brief Field UnescapeAllOrThrow offset 0
static System::UnescapeMode const UnescapeAllOrThrow;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::UnescapeMode, "System", "UnescapeMode");
