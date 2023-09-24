#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct State;
}
// Type: UnityEngine.UIElements.UIR::State
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7541))
// CS Name: UnityEngine.UIElements.UIR.State
struct CORDL_TYPE State : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "material", ty: "UnityEngine::Material", modifiers: "", def_value: None }, CppParam { name: "font", ty: "UnityEngine::Texture", modifiers: "", def_value: None }, CppParam { name: "fontTexSDFScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "texture", ty: "UnityEngine::UIElements::TextureId", modifiers: "", def_value: None }, CppParam { name: "stencilRef", ty: "int32_t", modifiers: "", def_value: None }]
constexpr State(UnityEngine::Material material, UnityEngine::Texture font, float_t fontTexSDFScale, UnityEngine::UIElements::TextureId texture, int32_t stencilRef) noexcept;


                    constexpr State(State const&) = default;
                    constexpr State(State&&) = default;
                    constexpr State& operator=(State const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr State& operator=(State&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit State(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Material __declspec(property(get=__get_material, put=__set_material))  material;

constexpr void __set_material(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_material() const;

 UnityEngine::Texture __declspec(property(get=__get_font, put=__set_font))  font;

constexpr void __set_font(UnityEngine::Texture value) ;

constexpr UnityEngine::Texture __get_font() const;

 float_t __declspec(property(get=__get_fontTexSDFScale, put=__set_fontTexSDFScale))  fontTexSDFScale;

constexpr void __set_fontTexSDFScale(float_t value) ;

constexpr float_t __get_fontTexSDFScale() const;

 UnityEngine::UIElements::TextureId __declspec(property(get=__get_texture, put=__set_texture))  texture;

constexpr void __set_texture(UnityEngine::UIElements::TextureId value) ;

constexpr UnityEngine::UIElements::TextureId __get_texture() const;

 int32_t __declspec(property(get=__get_stencilRef, put=__set_stencilRef))  stencilRef;

constexpr void __set_stencilRef(int32_t value) ;

constexpr int32_t __get_stencilRef() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::State, "UnityEngine.UIElements.UIR", "State");
