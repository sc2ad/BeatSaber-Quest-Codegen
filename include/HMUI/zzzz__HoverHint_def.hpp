#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace HMUI {
class HoverHintController;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace HMUI {
class HoverHint;
}
// Type: HMUI::HoverHint
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13585))
// CS Name: HMUI.HoverHint
class CORDL_TYPE HoverHint : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to UnityEngine::EventSystems::IPointerEnterHandler
constexpr operator  UnityEngine::EventSystems::IPointerEnterHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IPointerExitHandler
constexpr operator  UnityEngine::EventSystems::IPointerExitHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HoverHint() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoverHint", modifiers: " const&", def_value: None }]
constexpr HoverHint(HoverHint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoverHint", modifiers: "&&", def_value: None }]
constexpr HoverHint(HoverHint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoverHint(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr HoverHint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoverHint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoverHint& operator=(HoverHint&& o) noexcept = default;
  constexpr HoverHint& operator=(HoverHint const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(::StringW value) ;

constexpr ::StringW __get__text() const;

 HMUI::HoverHintController __declspec(property(get=__get__hoverHintController, put=__set__hoverHintController))  _hoverHintController;

constexpr void __set__hoverHintController(HMUI::HoverHintController value) ;

constexpr HMUI::HoverHintController __get__hoverHintController() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get__worldCornersTemp, put=__set__worldCornersTemp))  _worldCornersTemp;

constexpr void __set__worldCornersTemp(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get__worldCornersTemp() const;


// Properties

 ::StringW __declspec(property(get=get_text, put=set_text))  text;

 UnityEngine::Vector2 __declspec(property(get=get_size))  size;

 UnityEngine::Vector3 __declspec(property(get=get_worldCenter))  worldCenter;


// Methods

/// @brief Method get_text addr 0x1fa9860 size 0x8 virtual false final false
 ::StringW get_text() ;

/// @brief Method set_text addr 0x1fa9868 size 0x8 virtual false final false
 void set_text(::StringW value) ;

/// @brief Method get_size addr 0x1fa9870 size 0x90 virtual false final false
 UnityEngine::Vector2 get_size() ;

/// @brief Method get_worldCenter addr 0x1fa9900 size 0xfc virtual false final false
 UnityEngine::Vector3 get_worldCenter() ;

/// @brief Method OnPointerEnter addr 0x1fa99fc size 0x1c virtual true final true
 void OnPointerEnter(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerExit addr 0x1fa9aac size 0xbc virtual true final true
 void OnPointerExit(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnDisable addr 0x1fa9be0 size 0x80 virtual false final false
 void OnDisable() ;

// Ctor Parameters []
explicit HoverHint() ;

/// @brief Method .ctor addr 0x1fa9c60 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::HoverHint);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HoverHint, "HMUI", "HoverHint");
