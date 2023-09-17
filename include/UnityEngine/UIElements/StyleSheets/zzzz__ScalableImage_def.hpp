#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace {
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct ScalableImage;
}
// Type: UnityEngine.UIElements.StyleSheets::ScalableImage
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7573))
// CS Name: UnityEngine.UIElements.StyleSheets.ScalableImage
struct CORDL_TYPE ScalableImage : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "normalImage", ty: "::UnityEngine::Texture2D", modifiers: "", def_value: None }, CppParam { name: "highResolutionImage", ty: "::UnityEngine::Texture2D", modifiers: "", def_value: None }]
constexpr ScalableImage(::UnityEngine::Texture2D normalImage, ::UnityEngine::Texture2D highResolutionImage) noexcept;


                    constexpr ScalableImage(ScalableImage const&) = default;
                    constexpr ScalableImage(ScalableImage&&) = default;
                    constexpr ScalableImage& operator=(ScalableImage const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ScalableImage& operator=(ScalableImage&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ScalableImage(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Texture2D __declspec(property(get=__get_normalImage, put=__set_normalImage))  normalImage;

constexpr void __set_normalImage(::UnityEngine::Texture2D value) ;

constexpr ::UnityEngine::Texture2D __get_normalImage() const;

 ::UnityEngine::Texture2D __declspec(property(get=__get_highResolutionImage, put=__set_highResolutionImage))  highResolutionImage;

constexpr void __set_highResolutionImage(::UnityEngine::Texture2D value) ;

constexpr ::UnityEngine::Texture2D __get_highResolutionImage() const;


// Methods

/// @brief Method ToString addr 0x2c6d2cc size 0x164 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::ScalableImage, "UnityEngine.UIElements.StyleSheets", "ScalableImage");
