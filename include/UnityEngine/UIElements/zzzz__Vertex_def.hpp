#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace {
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct Vertex;
}
// Type: UnityEngine.UIElements::Vertex
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7429))
// CS Name: UnityEngine.UIElements.Vertex
struct CORDL_TYPE Vertex : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "tint", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "uv", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "xformClipPages", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "ids", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "opacityColorPages", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "circle", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "textureId", ty: "float_t", modifiers: "", def_value: None }]
constexpr Vertex(::UnityEngine::Vector3 position, ::UnityEngine::Color32 tint, ::UnityEngine::Vector2 uv, ::UnityEngine::Color32 xformClipPages, ::UnityEngine::Color32 ids, ::UnityEngine::Color32 flags, ::UnityEngine::Color32 opacityColorPages, ::UnityEngine::Vector4 circle, float_t textureId) noexcept;


                    constexpr Vertex(Vertex const&) = default;
                    constexpr Vertex(Vertex&&) = default;
                    constexpr Vertex& operator=(Vertex const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Vertex& operator=(Vertex&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x3c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Vertex(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static float_t __declspec(property(get=__get_nearZ, put=__set_nearZ))  nearZ;

static void __set_nearZ(float_t value) ;

static float_t __get_nearZ() ;

 ::UnityEngine::Vector3 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_position() const;

 ::UnityEngine::Color32 __declspec(property(get=__get_tint, put=__set_tint))  tint;

constexpr void __set_tint(::UnityEngine::Color32 value) ;

constexpr ::UnityEngine::Color32 __get_tint() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_uv, put=__set_uv))  uv;

constexpr void __set_uv(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_uv() const;

 ::UnityEngine::Color32 __declspec(property(get=__get_xformClipPages, put=__set_xformClipPages))  xformClipPages;

constexpr void __set_xformClipPages(::UnityEngine::Color32 value) ;

constexpr ::UnityEngine::Color32 __get_xformClipPages() const;

 ::UnityEngine::Color32 __declspec(property(get=__get_ids, put=__set_ids))  ids;

constexpr void __set_ids(::UnityEngine::Color32 value) ;

constexpr ::UnityEngine::Color32 __get_ids() const;

 ::UnityEngine::Color32 __declspec(property(get=__get_flags, put=__set_flags))  flags;

constexpr void __set_flags(::UnityEngine::Color32 value) ;

constexpr ::UnityEngine::Color32 __get_flags() const;

 ::UnityEngine::Color32 __declspec(property(get=__get_opacityColorPages, put=__set_opacityColorPages))  opacityColorPages;

constexpr void __set_opacityColorPages(::UnityEngine::Color32 value) ;

constexpr ::UnityEngine::Color32 __get_opacityColorPages() const;

 ::UnityEngine::Vector4 __declspec(property(get=__get_circle, put=__set_circle))  circle;

constexpr void __set_circle(::UnityEngine::Vector4 value) ;

constexpr ::UnityEngine::Vector4 __get_circle() const;

 float_t __declspec(property(get=__get_textureId, put=__set_textureId))  textureId;

constexpr void __set_textureId(float_t value) ;

constexpr float_t __get_textureId() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Vertex, "UnityEngine.UIElements", "Vertex");
