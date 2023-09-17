#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace GlobalNamespace {
class FillIndicator;
}
// Type: ::FillIndicator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5513))
// CS Name: FillIndicator
class CORDL_TYPE FillIndicator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~FillIndicator() = default;

// Ctor Parameters [CppParam { name: "", ty: "FillIndicator", modifiers: " const&", def_value: None }]
constexpr FillIndicator(FillIndicator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FillIndicator", modifiers: "&&", def_value: None }]
constexpr FillIndicator(FillIndicator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FillIndicator(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FillIndicator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FillIndicator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FillIndicator& operator=(FillIndicator&& o) noexcept = default;
  constexpr FillIndicator& operator=(FillIndicator const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UI::Image __declspec(property(get=__get__bgImage, put=__set__bgImage))  _bgImage;

constexpr void __set__bgImage(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__bgImage() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get__image, put=__set__image))  _image;

constexpr void __set__image(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__image() const;


// Properties

 float_t __declspec(property(get=get_fillAmount, put=set_fillAmount))  fillAmount;


// Methods

/// @brief Method set_fillAmount addr 0x2122dd8 size 0x44 virtual false final false
 void set_fillAmount(float_t value) ;

/// @brief Method get_fillAmount addr 0x2122f08 size 0x1c virtual false final false
 float_t get_fillAmount() ;

// Ctor Parameters []
explicit FillIndicator() ;

/// @brief Method .ctor addr 0x2122f24 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::FillIndicator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FillIndicator, "", "FillIndicator");
