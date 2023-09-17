#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemeView;
}
// Type: ::ColorSchemeView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5500))
// CS Name: ColorSchemeView
class CORDL_TYPE ColorSchemeView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~ColorSchemeView() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemeView", modifiers: " const&", def_value: None }]
constexpr ColorSchemeView(ColorSchemeView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemeView", modifiers: "&&", def_value: None }]
constexpr ColorSchemeView(ColorSchemeView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorSchemeView(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ColorSchemeView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorSchemeView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorSchemeView& operator=(ColorSchemeView&& o) noexcept = default;
  constexpr ColorSchemeView& operator=(ColorSchemeView const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UI::Image __declspec(property(get=__get__saberAColorImage, put=__set__saberAColorImage))  _saberAColorImage;

constexpr void __set__saberAColorImage(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__saberAColorImage() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get__saberBColorImage, put=__set__saberBColorImage))  _saberBColorImage;

constexpr void __set__saberBColorImage(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__saberBColorImage() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get__environment0ColorImage, put=__set__environment0ColorImage))  _environment0ColorImage;

constexpr void __set__environment0ColorImage(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__environment0ColorImage() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get__environment1ColorImage, put=__set__environment1ColorImage))  _environment1ColorImage;

constexpr void __set__environment1ColorImage(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__environment1ColorImage() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get__environmentColor0BoostImage, put=__set__environmentColor0BoostImage))  _environmentColor0BoostImage;

constexpr void __set__environmentColor0BoostImage(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__environmentColor0BoostImage() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get__environmentColor1BoostImage, put=__set__environmentColor1BoostImage))  _environmentColor1BoostImage;

constexpr void __set__environmentColor1BoostImage(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__environmentColor1BoostImage() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get__obstacleColorImage, put=__set__obstacleColorImage))  _obstacleColorImage;

constexpr void __set__obstacleColorImage(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__obstacleColorImage() const;


// Methods

/// @brief Method SetColors addr 0x211e5bc size 0x1b8 virtual false final false
 void SetColors(::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor, ::UnityEngine::Color environment0Color, ::UnityEngine::Color environment1Color, ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost, ::UnityEngine::Color obstacleColor) ;

// Ctor Parameters []
explicit ColorSchemeView() ;

/// @brief Method .ctor addr 0x211e7f8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ColorSchemeView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemeView, "", "ColorSchemeView");
