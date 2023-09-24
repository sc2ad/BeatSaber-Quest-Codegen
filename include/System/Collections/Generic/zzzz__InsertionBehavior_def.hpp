#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Collections::Generic {
struct InsertionBehavior;
}
// Type: System.Collections.Generic::InsertionBehavior
namespace System::Collections::Generic {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3802))
// CS Name: System.Collections.Generic.InsertionBehavior
struct CORDL_TYPE InsertionBehavior : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr InsertionBehavior(uint8_t value__) noexcept;


                    constexpr InsertionBehavior(InsertionBehavior const&) = default;
                    constexpr InsertionBehavior(InsertionBehavior&&) = default;
                    constexpr InsertionBehavior& operator=(InsertionBehavior const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InsertionBehavior& operator=(InsertionBehavior&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InsertionBehavior(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __InsertionBehavior_Unwrapped : uint8_t {
__None = 0u,
__OverwriteExisting = 1u,
__ThrowOnExisting = 2u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InsertionBehavior_Unwrapped () const noexcept {
return std::bit_cast<__InsertionBehavior_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = uint8_t;


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field None offset 0
static System::Collections::Generic::InsertionBehavior const None;

/// @brief Field OverwriteExisting offset 0
static System::Collections::Generic::InsertionBehavior const OverwriteExisting;

/// @brief Field ThrowOnExisting offset 0
static System::Collections::Generic::InsertionBehavior const ThrowOnExisting;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Generic::InsertionBehavior, "System.Collections.Generic", "InsertionBehavior");
