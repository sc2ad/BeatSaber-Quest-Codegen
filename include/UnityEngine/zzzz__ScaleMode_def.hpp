#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct ScaleMode;
}
// Type: UnityEngine::ScaleMode
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14756))
// CS Name: UnityEngine.ScaleMode
struct CORDL_TYPE ScaleMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ScaleMode(int32_t value__) noexcept;


                    constexpr ScaleMode(ScaleMode const&) = default;
                    constexpr ScaleMode(ScaleMode&&) = default;
                    constexpr ScaleMode& operator=(ScaleMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ScaleMode& operator=(ScaleMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ScaleMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ScaleMode_Unwrapped : int32_t {
__StretchToFill = 0,
__ScaleAndCrop = 1,
__ScaleToFit = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScaleMode_Unwrapped () const noexcept {
return std::bit_cast<__ScaleMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field StretchToFill offset 0
static UnityEngine::ScaleMode const StretchToFill;

/// @brief Field ScaleAndCrop offset 0
static UnityEngine::ScaleMode const ScaleAndCrop;

/// @brief Field ScaleToFit offset 0
static UnityEngine::ScaleMode const ScaleToFit;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ScaleMode, "UnityEngine", "ScaleMode");
