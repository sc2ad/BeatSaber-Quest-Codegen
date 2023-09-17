#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::Rendering {
struct RenderTextureSubElement;
}
// Type: UnityEngine.Rendering::RenderTextureSubElement
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10288))
// CS Name: UnityEngine.Rendering.RenderTextureSubElement
struct CORDL_TYPE RenderTextureSubElement : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RenderTextureSubElement(int32_t value__) noexcept;


                    constexpr RenderTextureSubElement(RenderTextureSubElement const&) = default;
                    constexpr RenderTextureSubElement(RenderTextureSubElement&&) = default;
                    constexpr RenderTextureSubElement& operator=(RenderTextureSubElement const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RenderTextureSubElement& operator=(RenderTextureSubElement&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RenderTextureSubElement(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RenderTextureSubElement_Unwrapped : int32_t {
__Color = 0,
__Depth = 1,
__Stencil = 2,
__Default = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderTextureSubElement_Unwrapped () const noexcept {
return std::bit_cast<__RenderTextureSubElement_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Color offset 0
static ::UnityEngine::Rendering::RenderTextureSubElement const Color;

/// @brief Field Depth offset 0
static ::UnityEngine::Rendering::RenderTextureSubElement const Depth;

/// @brief Field Stencil offset 0
static ::UnityEngine::Rendering::RenderTextureSubElement const Stencil;

/// @brief Field Default offset 0
static ::UnityEngine::Rendering::RenderTextureSubElement const Default;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderTextureSubElement, "UnityEngine.Rendering", "RenderTextureSubElement");
