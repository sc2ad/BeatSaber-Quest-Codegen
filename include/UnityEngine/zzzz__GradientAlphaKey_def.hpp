#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace {
// Forward declare root types
namespace UnityEngine {
struct GradientAlphaKey;
}
// Type: UnityEngine::GradientAlphaKey
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10196))
// CS Name: UnityEngine.GradientAlphaKey
struct CORDL_TYPE GradientAlphaKey : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "alpha", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }]
constexpr GradientAlphaKey(float_t alpha, float_t time) noexcept;


                    constexpr GradientAlphaKey(GradientAlphaKey const&) = default;
                    constexpr GradientAlphaKey(GradientAlphaKey&&) = default;
                    constexpr GradientAlphaKey& operator=(GradientAlphaKey const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GradientAlphaKey& operator=(GradientAlphaKey&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GradientAlphaKey(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_alpha, put=__set_alpha))  alpha;

constexpr void __set_alpha(float_t value) ;

constexpr float_t __get_alpha() const;

 float_t __declspec(property(get=__get_time, put=__set_time))  time;

constexpr void __set_time(float_t value) ;

constexpr float_t __get_time() const;


// Methods

/// @brief Method .ctor addr 0x2b66fb4 size 0x8 virtual false final false
 void _ctor(float_t alpha, float_t time) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GradientAlphaKey, "UnityEngine", "GradientAlphaKey");
