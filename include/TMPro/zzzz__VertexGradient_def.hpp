#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace TMPro {
struct VertexGradient;
}
// Type: TMPro::VertexGradient
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12259))
// CS Name: TMPro.VertexGradient
struct CORDL_TYPE VertexGradient : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "topLeft", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "topRight", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "bottomLeft", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "bottomRight", ty: "UnityEngine::Color", modifiers: "", def_value: None }]
constexpr VertexGradient(UnityEngine::Color topLeft, UnityEngine::Color topRight, UnityEngine::Color bottomLeft, UnityEngine::Color bottomRight) noexcept;


                    constexpr VertexGradient(VertexGradient const&) = default;
                    constexpr VertexGradient(VertexGradient&&) = default;
                    constexpr VertexGradient& operator=(VertexGradient const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VertexGradient& operator=(VertexGradient&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VertexGradient(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Color __declspec(property(get=__get_topLeft, put=__set_topLeft))  topLeft;

constexpr void __set_topLeft(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_topLeft() const;

 UnityEngine::Color __declspec(property(get=__get_topRight, put=__set_topRight))  topRight;

constexpr void __set_topRight(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_topRight() const;

 UnityEngine::Color __declspec(property(get=__get_bottomLeft, put=__set_bottomLeft))  bottomLeft;

constexpr void __set_bottomLeft(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_bottomLeft() const;

 UnityEngine::Color __declspec(property(get=__get_bottomRight, put=__set_bottomRight))  bottomRight;

constexpr void __set_bottomRight(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_bottomRight() const;


// Methods

/// @brief Method .ctor addr 0x2a693c0 size 0x24 virtual false final false
 void _ctor(UnityEngine::Color color) ;

/// @brief Method .ctor addr 0x2a693e4 size 0x1c virtual false final false
 void _ctor(UnityEngine::Color color0, UnityEngine::Color color1, UnityEngine::Color color2, UnityEngine::Color color3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(TMPro::VertexGradient, "TMPro", "VertexGradient");
