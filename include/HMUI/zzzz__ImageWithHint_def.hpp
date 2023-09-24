#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class Sprite;
}
namespace HMUI {
class HoverHint;
}
// Forward declare root types
namespace HMUI {
class ImageWithHint;
}
// Type: HMUI::ImageWithHint
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13679))
// CS Name: HMUI.ImageWithHint
class CORDL_TYPE ImageWithHint : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ImageWithHint() = default;

// Ctor Parameters [CppParam { name: "", ty: "ImageWithHint", modifiers: " const&", def_value: None }]
constexpr ImageWithHint(ImageWithHint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ImageWithHint", modifiers: "&&", def_value: None }]
constexpr ImageWithHint(ImageWithHint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ImageWithHint(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ImageWithHint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ImageWithHint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ImageWithHint& operator=(ImageWithHint&& o) noexcept = default;
  constexpr ImageWithHint& operator=(ImageWithHint const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Image __declspec(property(get=__get__image, put=__set__image))  _image;

constexpr void __set__image(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get__image() const;

 HMUI::HoverHint __declspec(property(get=__get__hoverHint, put=__set__hoverHint))  _hoverHint;

constexpr void __set__hoverHint(HMUI::HoverHint value) ;

constexpr HMUI::HoverHint __get__hoverHint() const;


// Properties

 UnityEngine::Sprite __declspec(property(get=get_sprite, put=set_sprite))  sprite;

 ::StringW __declspec(property(put=set_hintText))  hintText;


// Methods

/// @brief Method set_sprite addr 0x1fcd074 size 0x1c virtual false final false
 void set_sprite(UnityEngine::Sprite value) ;

/// @brief Method get_sprite addr 0x1fcd090 size 0x1c virtual false final false
 UnityEngine::Sprite get_sprite() ;

/// @brief Method set_hintText addr 0x1fcd0ac size 0x1c virtual false final false
 void set_hintText(::StringW value) ;

static HMUI::ImageWithHint New_ctor() ;

/// @brief Method .ctor addr 0x1fcd0c8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::ImageWithHint);
DEFINE_IL2CPP_ARG_TYPE(HMUI::ImageWithHint, "HMUI", "ImageWithHint");
