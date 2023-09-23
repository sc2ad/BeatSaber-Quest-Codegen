#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
class Sprite;
}
namespace HMUI {
class ImageView;
}
// Forward declare root types
namespace GlobalNamespace {
class StartMiddleEndButtonBackgroundController;
}
// Type: ::StartMiddleEndButtonBackgroundController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5537))
// CS Name: StartMiddleEndButtonBackgroundController
class CORDL_TYPE StartMiddleEndButtonBackgroundController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~StartMiddleEndButtonBackgroundController() = default;

// Ctor Parameters [CppParam { name: "", ty: "StartMiddleEndButtonBackgroundController", modifiers: " const&", def_value: None }]
constexpr StartMiddleEndButtonBackgroundController(StartMiddleEndButtonBackgroundController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StartMiddleEndButtonBackgroundController", modifiers: "&&", def_value: None }]
constexpr StartMiddleEndButtonBackgroundController(StartMiddleEndButtonBackgroundController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StartMiddleEndButtonBackgroundController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr StartMiddleEndButtonBackgroundController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StartMiddleEndButtonBackgroundController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StartMiddleEndButtonBackgroundController& operator=(StartMiddleEndButtonBackgroundController&& o) noexcept = default;
  constexpr StartMiddleEndButtonBackgroundController& operator=(StartMiddleEndButtonBackgroundController const& o) noexcept = default;
                


// Fields

 UnityEngine::Sprite __declspec(property(get=__get__startSprite, put=__set__startSprite))  _startSprite;

constexpr void __set__startSprite(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__startSprite() const;

 UnityEngine::Sprite __declspec(property(get=__get__middleSprite, put=__set__middleSprite))  _middleSprite;

constexpr void __set__middleSprite(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__middleSprite() const;

 UnityEngine::Sprite __declspec(property(get=__get__endSprite, put=__set__endSprite))  _endSprite;

constexpr void __set__endSprite(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__endSprite() const;

 HMUI::ImageView __declspec(property(get=__get__image, put=__set__image))  _image;

constexpr void __set__image(HMUI::ImageView value) ;

constexpr HMUI::ImageView __get__image() const;


// Methods

/// @brief Method SetStartSprite addr 0x2127388 size 0x24 virtual false final false
 void SetStartSprite() ;

/// @brief Method SetMiddleSprite addr 0x21273ac size 0x24 virtual false final false
 void SetMiddleSprite() ;

/// @brief Method SetEndSprite addr 0x21273d0 size 0x24 virtual false final false
 void SetEndSprite() ;

// Ctor Parameters []
explicit StartMiddleEndButtonBackgroundController() ;

/// @brief Method .ctor addr 0x21273f4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::StartMiddleEndButtonBackgroundController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StartMiddleEndButtonBackgroundController, "", "StartMiddleEndButtonBackgroundController");
