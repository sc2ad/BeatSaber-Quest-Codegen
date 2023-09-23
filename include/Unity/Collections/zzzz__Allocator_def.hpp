#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Unity::Collections {
struct Allocator;
}
// Type: Unity.Collections::Allocator
namespace Unity::Collections {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9945))
// CS Name: Unity.Collections.Allocator
struct CORDL_TYPE Allocator : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Allocator(int32_t value__) noexcept;


                    constexpr Allocator(Allocator const&) = default;
                    constexpr Allocator(Allocator&&) = default;
                    constexpr Allocator& operator=(Allocator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Allocator& operator=(Allocator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Allocator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Allocator_Unwrapped : int32_t {
__Invalid = 0,
__None = 1,
__Temp = 2,
__TempJob = 3,
__Persistent = 4,
__AudioKernel = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Allocator_Unwrapped () const noexcept {
return std::bit_cast<__Allocator_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Invalid offset 0
static Unity::Collections::Allocator const Invalid;

/// @brief Field None offset 0
static Unity::Collections::Allocator const None;

/// @brief Field Temp offset 0
static Unity::Collections::Allocator const Temp;

/// @brief Field TempJob offset 0
static Unity::Collections::Allocator const TempJob;

/// @brief Field Persistent offset 0
static Unity::Collections::Allocator const Persistent;

/// @brief Field AudioKernel offset 0
static Unity::Collections::Allocator const AudioKernel;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::Allocator, "Unity.Collections", "Allocator");
