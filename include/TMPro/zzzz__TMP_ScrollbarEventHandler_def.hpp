#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class ISelectHandler;
}
namespace UnityEngine::EventSystems {
class IDeselectHandler;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
// Forward declare root types
namespace TMPro {
class TMP_ScrollbarEventHandler;
}
// Type: TMPro::TMP_ScrollbarEventHandler
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12354))
// CS Name: TMPro.TMP_ScrollbarEventHandler
class CORDL_TYPE TMP_ScrollbarEventHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::EventSystems::IPointerClickHandler
constexpr operator  ::UnityEngine::EventSystems::IPointerClickHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::ISelectHandler
constexpr operator  ::UnityEngine::EventSystems::ISelectHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::IDeselectHandler
constexpr operator  ::UnityEngine::EventSystems::IDeselectHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TMP_ScrollbarEventHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_ScrollbarEventHandler", modifiers: " const&", def_value: None }]
constexpr TMP_ScrollbarEventHandler(TMP_ScrollbarEventHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_ScrollbarEventHandler", modifiers: "&&", def_value: None }]
constexpr TMP_ScrollbarEventHandler(TMP_ScrollbarEventHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_ScrollbarEventHandler(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TMP_ScrollbarEventHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_ScrollbarEventHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_ScrollbarEventHandler& operator=(TMP_ScrollbarEventHandler&& o) noexcept = default;
  constexpr TMP_ScrollbarEventHandler& operator=(TMP_ScrollbarEventHandler const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_isSelected, put=__set_isSelected))  isSelected;

constexpr void __set_isSelected(bool value) ;

constexpr bool __get_isSelected() const;


// Methods

/// @brief Method OnPointerClick addr 0x2aa801c size 0x68 virtual true final true
 void OnPointerClick(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnSelect addr 0x2aa8084 size 0x78 virtual true final true
 void OnSelect(::UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method OnDeselect addr 0x2aa80fc size 0x74 virtual true final true
 void OnDeselect(::UnityEngine::EventSystems::BaseEventData eventData) ;

// Ctor Parameters []
explicit TMP_ScrollbarEventHandler() ;

/// @brief Method .ctor addr 0x2aa8170 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
NEED_NO_BOX(::TMPro::TMP_ScrollbarEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_ScrollbarEventHandler, "TMPro", "TMP_ScrollbarEventHandler");
