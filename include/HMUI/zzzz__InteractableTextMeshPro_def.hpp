#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include <cmath>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace HMUI {
class InteractableTextMeshPro;
}
// Type: HMUI::InteractableTextMeshPro
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13153))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13582))
// CS Name: HMUI.InteractableTextMeshPro
class CORDL_TYPE InteractableTextMeshPro : public ::UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~InteractableTextMeshPro() = default;

// Ctor Parameters [CppParam { name: "", ty: "InteractableTextMeshPro", modifiers: " const&", def_value: None }]
constexpr InteractableTextMeshPro(InteractableTextMeshPro const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InteractableTextMeshPro", modifiers: "&&", def_value: None }]
constexpr InteractableTextMeshPro(InteractableTextMeshPro&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InteractableTextMeshPro(void* ptr) noexcept : ::UnityEngine::EventSystems::UIBehaviour(ptr) {
}


  constexpr InteractableTextMeshPro& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InteractableTextMeshPro& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InteractableTextMeshPro& operator=(InteractableTextMeshPro&& o) noexcept = default;
  constexpr InteractableTextMeshPro& operator=(InteractableTextMeshPro const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__interactionAlpha, put=__set__interactionAlpha))  _interactionAlpha;

constexpr void __set__interactionAlpha(float_t value) ;

constexpr float_t __get__interactionAlpha() const;

 float_t __declspec(property(get=__get__noInteractionAlpha, put=__set__noInteractionAlpha))  _noInteractionAlpha;

constexpr void __set__noInteractionAlpha(float_t value) ;

constexpr float_t __get__noInteractionAlpha() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__text() const;

 ::System::Collections::Generic::List_1<::UnityEngine::CanvasGroup> __declspec(property(get=__get__canvasGroupCache, put=__set__canvasGroupCache))  _canvasGroupCache;

constexpr void __set__canvasGroupCache(::System::Collections::Generic::List_1<::UnityEngine::CanvasGroup> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::CanvasGroup> __get__canvasGroupCache() const;


// Methods

/// @brief Method OnCanvasGroupChanged addr 0x1fa924c size 0x194 virtual true final false
 void OnCanvasGroupChanged() ;

// Ctor Parameters []
explicit InteractableTextMeshPro() ;

/// @brief Method .ctor addr 0x1fa93e0 size 0x88 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
NEED_NO_BOX(::HMUI::InteractableTextMeshPro);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::InteractableTextMeshPro, "HMUI", "InteractableTextMeshPro");
