#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
struct GradientColorKey;
}
// Type: UnityEngine::GradientColorKey
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10195))
// CS Name: UnityEngine.GradientColorKey
struct CORDL_TYPE GradientColorKey : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "color", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }]
constexpr GradientColorKey(UnityEngine::Color color, float_t time) noexcept;


                    constexpr GradientColorKey(GradientColorKey const&) = default;
                    constexpr GradientColorKey(GradientColorKey&&) = default;
                    constexpr GradientColorKey& operator=(GradientColorKey const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GradientColorKey& operator=(GradientColorKey&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GradientColorKey(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Color __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_color() const;

 float_t __declspec(property(get=__get_time, put=__set_time))  time;

constexpr void __set_time(float_t value) ;

constexpr float_t __get_time() const;


// Methods

/// @brief Method .ctor addr 0x2b66fa4 size 0x10 virtual false final false
 void _ctor(UnityEngine::Color col, float_t time) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GradientColorKey, "UnityEngine", "GradientColorKey");
