#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::UIElements {
class DetachFromPanelEvent;
}
namespace UnityEngine::UIElements {
class IVisualElementPanelActivatable;
}
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementPanelActivator;
}
// Type: UnityEngine.UIElements::VisualElementPanelActivator
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6833))
// CS Name: UnityEngine.UIElements.VisualElementPanelActivator
class CORDL_TYPE VisualElementPanelActivator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~VisualElementPanelActivator() = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementPanelActivator", modifiers: " const&", def_value: None }]
constexpr VisualElementPanelActivator(VisualElementPanelActivator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementPanelActivator", modifiers: "&&", def_value: None }]
constexpr VisualElementPanelActivator(VisualElementPanelActivator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VisualElementPanelActivator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr VisualElementPanelActivator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VisualElementPanelActivator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VisualElementPanelActivator& operator=(VisualElementPanelActivator&& o) noexcept = default;
  constexpr VisualElementPanelActivator& operator=(VisualElementPanelActivator const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::IVisualElementPanelActivatable __declspec(property(get=__get_m_Activatable, put=__set_m_Activatable))  m_Activatable;

constexpr void __set_m_Activatable(UnityEngine::UIElements::IVisualElementPanelActivatable value) ;

constexpr UnityEngine::UIElements::IVisualElementPanelActivatable __get_m_Activatable() const;

 bool __declspec(property(get=__get__isActive_k__BackingField, put=__set__isActive_k__BackingField))  _isActive_k__BackingField;

constexpr void __set__isActive_k__BackingField(bool value) ;

constexpr bool __get__isActive_k__BackingField() const;

 bool __declspec(property(get=__get__isDetaching_k__BackingField, put=__set__isDetaching_k__BackingField))  _isDetaching_k__BackingField;

constexpr void __set__isDetaching_k__BackingField(bool value) ;

constexpr bool __get__isDetaching_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_isActive, put=set_isActive))  isActive;

 bool __declspec(property(get=get_isDetaching, put=set_isDetaching))  isDetaching;


// Methods

/// @brief Method get_isActive addr 0x2c39304 size 0x8 virtual false final false
 bool get_isActive() ;

/// @brief Method set_isActive addr 0x2c3930c size 0xc virtual false final false
 void set_isActive(bool value) ;

/// @brief Method get_isDetaching addr 0x2c39318 size 0x8 virtual false final false
 bool get_isDetaching() ;

/// @brief Method set_isDetaching addr 0x2c39320 size 0xc virtual false final false
 void set_isDetaching(bool value) ;

static UnityEngine::UIElements::VisualElementPanelActivator New_ctor(UnityEngine::UIElements::IVisualElementPanelActivatable activatable) ;

/// @brief Method .ctor addr 0x2c374e8 size 0x28 virtual false final false
 void _ctor(UnityEngine::UIElements::IVisualElementPanelActivatable activatable) ;

/// @brief Method SetActive addr 0x2c375f8 size 0x33c virtual false final false
 void SetActive(bool action) ;

/// @brief Method SendActivation addr 0x2c3932c size 0x118 virtual false final false
 void SendActivation() ;

/// @brief Method SendDeactivation addr 0x2c39444 size 0x118 virtual false final false
 void SendDeactivation() ;

/// @brief Method OnEnter addr 0x2c3955c size 0x10 virtual false final false
 void OnEnter(UnityEngine::UIElements::AttachToPanelEvent evt) ;

/// @brief Method OnLeave addr 0x2c3956c size 0x74 virtual false final false
 void OnLeave(UnityEngine::UIElements::DetachFromPanelEvent evt) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::VisualElementPanelActivator);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::VisualElementPanelActivator, "UnityEngine.UIElements", "VisualElementPanelActivator");
