#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct FilterMode;
}
// Type: UnityEngine::FilterMode
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10055))
// CS Name: UnityEngine.FilterMode
struct CORDL_TYPE FilterMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FilterMode(int32_t value__) noexcept;


                    constexpr FilterMode(FilterMode const&) = default;
                    constexpr FilterMode(FilterMode&&) = default;
                    constexpr FilterMode& operator=(FilterMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FilterMode& operator=(FilterMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FilterMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FilterMode_Unwrapped : int32_t {
__Point = 0,
__Bilinear = 1,
__Trilinear = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FilterMode_Unwrapped () const noexcept {
return std::bit_cast<__FilterMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Point offset 0
static UnityEngine::FilterMode const Point;

/// @brief Field Bilinear offset 0
static UnityEngine::FilterMode const Bilinear;

/// @brief Field Trilinear offset 0
static UnityEngine::FilterMode const Trilinear;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::FilterMode, "UnityEngine", "FilterMode");
