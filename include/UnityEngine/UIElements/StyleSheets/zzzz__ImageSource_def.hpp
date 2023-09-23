#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine::UIElements {
class VectorImage;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct ImageSource;
}
// Type: UnityEngine.UIElements.StyleSheets::ImageSource
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7563))
// CS Name: UnityEngine.UIElements.StyleSheets.ImageSource
struct CORDL_TYPE ImageSource : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "texture", ty: "UnityEngine::Texture2D", modifiers: "", def_value: None }, CppParam { name: "sprite", ty: "UnityEngine::Sprite", modifiers: "", def_value: None }, CppParam { name: "vectorImage", ty: "UnityEngine::UIElements::VectorImage", modifiers: "", def_value: None }, CppParam { name: "renderTexture", ty: "UnityEngine::RenderTexture", modifiers: "", def_value: None }]
constexpr ImageSource(UnityEngine::Texture2D texture, UnityEngine::Sprite sprite, UnityEngine::UIElements::VectorImage vectorImage, UnityEngine::RenderTexture renderTexture) noexcept;


                    constexpr ImageSource(ImageSource const&) = default;
                    constexpr ImageSource(ImageSource&&) = default;
                    constexpr ImageSource& operator=(ImageSource const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ImageSource& operator=(ImageSource&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ImageSource(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Texture2D __declspec(property(get=__get_texture, put=__set_texture))  texture;

constexpr void __set_texture(UnityEngine::Texture2D value) ;

constexpr UnityEngine::Texture2D __get_texture() const;

 UnityEngine::Sprite __declspec(property(get=__get_sprite, put=__set_sprite))  sprite;

constexpr void __set_sprite(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get_sprite() const;

 UnityEngine::UIElements::VectorImage __declspec(property(get=__get_vectorImage, put=__set_vectorImage))  vectorImage;

constexpr void __set_vectorImage(UnityEngine::UIElements::VectorImage value) ;

constexpr UnityEngine::UIElements::VectorImage __get_vectorImage() const;

 UnityEngine::RenderTexture __declspec(property(get=__get_renderTexture, put=__set_renderTexture))  renderTexture;

constexpr void __set_renderTexture(UnityEngine::RenderTexture value) ;

constexpr UnityEngine::RenderTexture __get_renderTexture() const;


// Methods

/// @brief Method IsNull addr 0x2c6d464 size 0xe8 virtual false final false
 bool IsNull() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleSheets::ImageSource, "UnityEngine.UIElements.StyleSheets", "ImageSource");
