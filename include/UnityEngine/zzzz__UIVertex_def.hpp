#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
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
namespace UnityEngine {
struct UIVertex;
}
// Type: UnityEngine::UIVertex
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15791))
// CS Name: UnityEngine.UIVertex
struct CORDL_TYPE UIVertex : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "position", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "normal", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "tangent", ty: "UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "color", ty: "UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "uv0", ty: "UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "uv1", ty: "UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "uv2", ty: "UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "uv3", ty: "UnityEngine::Vector4", modifiers: "", def_value: None }]
constexpr UIVertex(UnityEngine::Vector3 position, UnityEngine::Vector3 normal, UnityEngine::Vector4 tangent, UnityEngine::Color32 color, UnityEngine::Vector4 uv0, UnityEngine::Vector4 uv1, UnityEngine::Vector4 uv2, UnityEngine::Vector4 uv3) noexcept;


                    constexpr UIVertex(UIVertex const&) = default;
                    constexpr UIVertex(UIVertex&&) = default;
                    constexpr UIVertex& operator=(UIVertex const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UIVertex& operator=(UIVertex&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x6c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UIVertex(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_position() const;

 UnityEngine::Vector3 __declspec(property(get=__get_normal, put=__set_normal))  normal;

constexpr void __set_normal(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_normal() const;

 UnityEngine::Vector4 __declspec(property(get=__get_tangent, put=__set_tangent))  tangent;

constexpr void __set_tangent(UnityEngine::Vector4 value) ;

constexpr UnityEngine::Vector4 __get_tangent() const;

 UnityEngine::Color32 __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(UnityEngine::Color32 value) ;

constexpr UnityEngine::Color32 __get_color() const;

 UnityEngine::Vector4 __declspec(property(get=__get_uv0, put=__set_uv0))  uv0;

constexpr void __set_uv0(UnityEngine::Vector4 value) ;

constexpr UnityEngine::Vector4 __get_uv0() const;

 UnityEngine::Vector4 __declspec(property(get=__get_uv1, put=__set_uv1))  uv1;

constexpr void __set_uv1(UnityEngine::Vector4 value) ;

constexpr UnityEngine::Vector4 __get_uv1() const;

 UnityEngine::Vector4 __declspec(property(get=__get_uv2, put=__set_uv2))  uv2;

constexpr void __set_uv2(UnityEngine::Vector4 value) ;

constexpr UnityEngine::Vector4 __get_uv2() const;

 UnityEngine::Vector4 __declspec(property(get=__get_uv3, put=__set_uv3))  uv3;

constexpr void __set_uv3(UnityEngine::Vector4 value) ;

constexpr UnityEngine::Vector4 __get_uv3() const;

static UnityEngine::Color32 __declspec(property(get=__get_s_DefaultColor, put=__set_s_DefaultColor))  s_DefaultColor;

static void __set_s_DefaultColor(UnityEngine::Color32 value) ;

static UnityEngine::Color32 __get_s_DefaultColor() ;

static UnityEngine::Vector4 __declspec(property(get=__get_s_DefaultTangent, put=__set_s_DefaultTangent))  s_DefaultTangent;

static void __set_s_DefaultTangent(UnityEngine::Vector4 value) ;

static UnityEngine::Vector4 __get_s_DefaultTangent() ;

static UnityEngine::UIVertex __declspec(property(get=__get_simpleVert, put=__set_simpleVert))  simpleVert;

static void __set_simpleVert(UnityEngine::UIVertex value) ;

static UnityEngine::UIVertex __get_simpleVert() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIVertex, "UnityEngine", "UIVertex");
