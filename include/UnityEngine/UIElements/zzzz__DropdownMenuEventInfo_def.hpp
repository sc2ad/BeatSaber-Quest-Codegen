#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine {
struct KeyCode;
}
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DropdownMenuEventInfo;
}
// Type: UnityEngine.UIElements::DropdownMenuEventInfo
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7031))
// CS Name: UnityEngine.UIElements.DropdownMenuEventInfo
class CORDL_TYPE DropdownMenuEventInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DropdownMenuEventInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "DropdownMenuEventInfo", modifiers: " const&", def_value: None }]
constexpr DropdownMenuEventInfo(DropdownMenuEventInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DropdownMenuEventInfo", modifiers: "&&", def_value: None }]
constexpr DropdownMenuEventInfo(DropdownMenuEventInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DropdownMenuEventInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DropdownMenuEventInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DropdownMenuEventInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DropdownMenuEventInfo& operator=(DropdownMenuEventInfo&& o) noexcept = default;
  constexpr DropdownMenuEventInfo& operator=(DropdownMenuEventInfo const& o) noexcept = default;
                


// Fields

 UnityEngine::EventModifiers __declspec(property(get=__get__modifiers_k__BackingField, put=__set__modifiers_k__BackingField))  _modifiers_k__BackingField;

constexpr void __set__modifiers_k__BackingField(UnityEngine::EventModifiers value) ;

constexpr UnityEngine::EventModifiers __get__modifiers_k__BackingField() const;

 UnityEngine::Vector2 __declspec(property(get=__get__mousePosition_k__BackingField, put=__set__mousePosition_k__BackingField))  _mousePosition_k__BackingField;

constexpr void __set__mousePosition_k__BackingField(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__mousePosition_k__BackingField() const;

 UnityEngine::Vector2 __declspec(property(get=__get__localMousePosition_k__BackingField, put=__set__localMousePosition_k__BackingField))  _localMousePosition_k__BackingField;

constexpr void __set__localMousePosition_k__BackingField(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__localMousePosition_k__BackingField() const;

 char16_t __declspec(property(get=__get__character_k__BackingField, put=__set__character_k__BackingField))  _character_k__BackingField;

constexpr void __set__character_k__BackingField(char16_t value) ;

constexpr char16_t __get__character_k__BackingField() const;

 UnityEngine::KeyCode __declspec(property(get=__get__keyCode_k__BackingField, put=__set__keyCode_k__BackingField))  _keyCode_k__BackingField;

constexpr void __set__keyCode_k__BackingField(UnityEngine::KeyCode value) ;

constexpr UnityEngine::KeyCode __get__keyCode_k__BackingField() const;


// Methods

static UnityEngine::UIElements::DropdownMenuEventInfo New_ctor(UnityEngine::UIElements::EventBase e) ;

/// @brief Method .ctor addr 0x2c8f93c size 0x31c virtual false final false
 void _ctor(UnityEngine::UIElements::EventBase e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::DropdownMenuEventInfo);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::DropdownMenuEventInfo, "UnityEngine.UIElements", "DropdownMenuEventInfo");
