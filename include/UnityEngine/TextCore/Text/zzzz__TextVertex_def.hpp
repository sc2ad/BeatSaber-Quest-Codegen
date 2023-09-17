#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace {
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
namespace UnityEngine::TextCore::Text {
struct TextVertex;
}
// Type: UnityEngine.TextCore.Text::TextVertex
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13511))
// CS Name: UnityEngine.TextCore.Text.TextVertex
struct CORDL_TYPE TextVertex : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "uv", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "uv2", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "uv4", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }]
constexpr TextVertex(::UnityEngine::Vector3 position, ::UnityEngine::Vector2 uv, ::UnityEngine::Vector2 uv2, ::UnityEngine::Vector2 uv4, ::UnityEngine::Color32 color) noexcept;


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
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

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

 ::UnityEngine::Vector3 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_position() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_uv, put=__set_uv))  uv;

constexpr void __set_uv(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_uv() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_uv2, put=__set_uv2))  uv2;

constexpr void __set_uv2(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_uv2() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_uv4, put=__set_uv4))  uv4;

constexpr void __set_uv4(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_uv4() const;

 ::UnityEngine::Color32 __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(::UnityEngine::Color32 value) ;

constexpr ::UnityEngine::Color32 __get_color() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextVertex, "UnityEngine.TextCore.Text", "TextVertex");
