#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
namespace {
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace UnityEngine {
struct LOD;
}
// Type: UnityEngine::LOD
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10032))
// CS Name: UnityEngine.LOD
struct CORDL_TYPE LOD : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "screenRelativeTransitionHeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fadeTransitionWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "renderers", ty: "::ArrayW<::UnityEngine::Renderer>", modifiers: "", def_value: None }]
constexpr LOD(float_t screenRelativeTransitionHeight, float_t fadeTransitionWidth, ::ArrayW<::UnityEngine::Renderer> renderers) noexcept;


                    constexpr LOD(LOD const&) = default;
                    constexpr LOD(LOD&&) = default;
                    constexpr LOD& operator=(LOD const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LOD& operator=(LOD&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LOD(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_screenRelativeTransitionHeight, put=__set_screenRelativeTransitionHeight))  screenRelativeTransitionHeight;

constexpr void __set_screenRelativeTransitionHeight(float_t value) ;

constexpr float_t __get_screenRelativeTransitionHeight() const;

 float_t __declspec(property(get=__get_fadeTransitionWidth, put=__set_fadeTransitionWidth))  fadeTransitionWidth;

constexpr void __set_fadeTransitionWidth(float_t value) ;

constexpr float_t __get_fadeTransitionWidth() const;

 ::ArrayW<::UnityEngine::Renderer> __declspec(property(get=__get_renderers, put=__set_renderers))  renderers;

constexpr void __set_renderers(::ArrayW<::UnityEngine::Renderer> value) ;

constexpr ::ArrayW<::UnityEngine::Renderer> __get_renderers() const;


// Methods

/// @brief Method .ctor addr 0x2b40ecc size 0x10 virtual false final false
 void _ctor(float_t screenRelativeTransitionHeight, ::ArrayW<::UnityEngine::Renderer> renderers) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LOD, "UnityEngine", "LOD");
