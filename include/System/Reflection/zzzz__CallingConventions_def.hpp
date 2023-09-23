#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Reflection {
struct CallingConventions;
}
// Type: System.Reflection::CallingConventions
namespace System::Reflection {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3452))
// CS Name: System.Reflection.CallingConventions
struct CORDL_TYPE CallingConventions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CallingConventions(int32_t value__) noexcept;


                    constexpr CallingConventions(CallingConventions const&) = default;
                    constexpr CallingConventions(CallingConventions&&) = default;
                    constexpr CallingConventions& operator=(CallingConventions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CallingConventions& operator=(CallingConventions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CallingConventions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CallingConventions_Unwrapped : int32_t {
__Standard = 1,
__VarArgs = 2,
__Any = 3,
__HasThis = 32,
__ExplicitThis = 64,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CallingConventions_Unwrapped () const noexcept {
return std::bit_cast<__CallingConventions_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Standard offset 0
static System::Reflection::CallingConventions const Standard;

/// @brief Field VarArgs offset 0
static System::Reflection::CallingConventions const VarArgs;

/// @brief Field Any offset 0
static System::Reflection::CallingConventions const Any;

/// @brief Field HasThis offset 0
static System::Reflection::CallingConventions const HasThis;

/// @brief Field ExplicitThis offset 0
static System::Reflection::CallingConventions const ExplicitThis;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::CallingConventions, "System.Reflection", "CallingConventions");
