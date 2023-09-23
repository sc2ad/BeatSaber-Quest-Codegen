#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Unity::Collections {
struct NativeArrayOptions;
}
// Type: Unity.Collections::NativeArrayOptions
namespace Unity::Collections {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9939))
// CS Name: Unity.Collections.NativeArrayOptions
struct CORDL_TYPE NativeArrayOptions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NativeArrayOptions(int32_t value__) noexcept;


                    constexpr NativeArrayOptions(NativeArrayOptions const&) = default;
                    constexpr NativeArrayOptions(NativeArrayOptions&&) = default;
                    constexpr NativeArrayOptions& operator=(NativeArrayOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArrayOptions& operator=(NativeArrayOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArrayOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __NativeArrayOptions_Unwrapped : int32_t {
__UninitializedMemory = 0,
__ClearMemory = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NativeArrayOptions_Unwrapped () const noexcept {
return std::bit_cast<__NativeArrayOptions_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field UninitializedMemory offset 0
static Unity::Collections::NativeArrayOptions const UninitializedMemory;

/// @brief Field ClearMemory offset 0
static Unity::Collections::NativeArrayOptions const ClearMemory;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::NativeArrayOptions, "Unity.Collections", "NativeArrayOptions");
