#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace HMUI {
class HoverTextController;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
// Forward declare root types
namespace HMUI {
class HoverTextSetter;
}
// Type: HMUI::HoverTextSetter
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13597))
// CS Name: HMUI.HoverTextSetter
class CORDL_TYPE HoverTextSetter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::EventSystems::IPointerEnterHandler
constexpr operator  ::UnityEngine::EventSystems::IPointerEnterHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::IPointerExitHandler
constexpr operator  ::UnityEngine::EventSystems::IPointerExitHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HoverTextSetter() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoverTextSetter", modifiers: " const&", def_value: None }]
constexpr HoverTextSetter(HoverTextSetter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoverTextSetter", modifiers: "&&", def_value: None }]
constexpr HoverTextSetter(HoverTextSetter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoverTextSetter(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr HoverTextSetter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoverTextSetter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoverTextSetter& operator=(HoverTextSetter&& o) noexcept = default;
  constexpr HoverTextSetter& operator=(HoverTextSetter const& o) noexcept = default;
                


// Fields

 ::HMUI::HoverTextController __declspec(property(get=__get__hoverTextController, put=__set__hoverTextController))  _hoverTextController;

constexpr void __set__hoverTextController(::HMUI::HoverTextController value) ;

constexpr ::HMUI::HoverTextController __get__hoverTextController() const;

 ::StringW __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(::StringW value) ;

constexpr ::StringW __get__text() const;


// Properties

 ::StringW __declspec(property(get=get_text, put=set_text))  text;


// Methods

/// @brief Method get_text addr 0x1fabafc size 0x8 virtual false final false
 ::StringW get_text() ;

/// @brief Method set_text addr 0x1fabb04 size 0x8 virtual false final false
 void set_text(::StringW value) ;

/// @brief Method OnPointerEnter addr 0x1fabb0c size 0x20 virtual true final true
 void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerExit addr 0x1fabb2c size 0x18 virtual true final true
 void OnPointerExit(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnDisable addr 0x1fabb44 size 0x18 virtual false final false
 void OnDisable() ;

// Ctor Parameters []
explicit HoverTextSetter() ;

/// @brief Method .ctor addr 0x1fabb5c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
NEED_NO_BOX(::HMUI::HoverTextSetter);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::HoverTextSetter, "HMUI", "HoverTextSetter");
