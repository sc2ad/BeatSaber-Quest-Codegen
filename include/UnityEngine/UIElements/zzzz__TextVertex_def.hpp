#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TextVertex;
}
// Type: UnityEngine.UIElements::TextVertex
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15399))
// CS Name: UnityEngine.UIElements.TextVertex
struct CORDL_TYPE TextVertex : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "position", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "color", ty: "UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "uv0", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr TextVertex(UnityEngine::Vector3 position, UnityEngine::Color32 color, UnityEngine::Vector2 uv0) noexcept;


                    constexpr TextVertex(TextVertex const&) = default;
                    constexpr TextVertex(TextVertex&&) = default;
                    constexpr TextVertex& operator=(TextVertex const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextVertex& operator=(TextVertex&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextVertex(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_position() const;

 UnityEngine::Color32 __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(UnityEngine::Color32 value) ;

constexpr UnityEngine::Color32 __get_color() const;

 UnityEngine::Vector2 __declspec(property(get=__get_uv0, put=__set_uv0))  uv0;

constexpr void __set_uv0(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_uv0() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::TextVertex, "UnityEngine.UIElements", "TextVertex");
