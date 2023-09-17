#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Color32;
}
// Forward declare root types
namespace TMPro {
struct TMP_Vertex;
}
// Type: TMPro::TMP_Vertex
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12271))
// CS Name: TMPro.TMP_Vertex
struct CORDL_TYPE TMP_Vertex : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "uv", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "uv2", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "uv4", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }]
constexpr TMP_Vertex(::UnityEngine::Vector3 position, ::UnityEngine::Vector2 uv, ::UnityEngine::Vector2 uv2, ::UnityEngine::Vector2 uv4, ::UnityEngine::Color32 color) noexcept;


                    constexpr TMP_Vertex(TMP_Vertex const&) = default;
                    constexpr TMP_Vertex(TMP_Vertex&&) = default;
                    constexpr TMP_Vertex& operator=(TMP_Vertex const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMP_Vertex& operator=(TMP_Vertex&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMP_Vertex(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

static ::TMPro::TMP_Vertex __declspec(property(get=__get_k_Zero, put=__set_k_Zero))  k_Zero;

static void __set_k_Zero(::TMPro::TMP_Vertex value) ;

static ::TMPro::TMP_Vertex __get_k_Zero() ;


// Properties

static ::TMPro::TMP_Vertex __declspec(property(get=get_zero))  zero;


// Methods

/// @brief Method get_zero addr 0x2a69e84 size 0x68 virtual false final false
static ::TMPro::TMP_Vertex get_zero() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Vertex, "TMPro", "TMP_Vertex");
