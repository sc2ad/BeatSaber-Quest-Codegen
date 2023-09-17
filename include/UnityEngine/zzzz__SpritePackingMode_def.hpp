#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct SpritePackingMode;
}
// Type: UnityEngine::SpritePackingMode
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10225))
// CS Name: UnityEngine.SpritePackingMode
struct CORDL_TYPE SpritePackingMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SpritePackingMode(int32_t value__) noexcept;


                    constexpr SpritePackingMode(SpritePackingMode const&) = default;
                    constexpr SpritePackingMode(SpritePackingMode&&) = default;
                    constexpr SpritePackingMode& operator=(SpritePackingMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SpritePackingMode& operator=(SpritePackingMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SpritePackingMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SpritePackingMode_Unwrapped : int32_t {
__Tight = 0,
__Rectangle = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SpritePackingMode_Unwrapped () const noexcept {
return std::bit_cast<__SpritePackingMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Tight offset 0
static ::UnityEngine::SpritePackingMode const Tight;

/// @brief Field Rectangle offset 0
static ::UnityEngine::SpritePackingMode const Rectangle;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpritePackingMode, "UnityEngine", "SpritePackingMode");
