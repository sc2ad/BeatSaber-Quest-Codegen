#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class PanelChangedEventBase_1;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type T>
class PanelChangedEventBase_1<T>;
}
// Type: UnityEngine.UIElements::PanelChangedEventBase`1
// Type: UnityEngine.UIElements::PanelChangedEventBase`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7279)), TypeDefinitionIndex(TypeDefinitionIndex(7342)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7279), inst: 1633 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7342), inst: 2 })
// CS Name: UnityEngine.UIElements.PanelChangedEventBase`1
class CORDL_TYPE PanelChangedEventBase_1<T> : public UnityEngine::UIElements::EventBase_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~PanelChangedEventBase_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "PanelChangedEventBase_1", modifiers: " const&", def_value: None }]
constexpr PanelChangedEventBase_1(PanelChangedEventBase_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PanelChangedEventBase_1", modifiers: "&&", def_value: None }]
constexpr PanelChangedEventBase_1(PanelChangedEventBase_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PanelChangedEventBase_1(void* ptr) noexcept : UnityEngine::UIElements::EventBase_1<T>(ptr) {
}


  constexpr PanelChangedEventBase_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PanelChangedEventBase_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PanelChangedEventBase_1& operator=(PanelChangedEventBase_1&& o) noexcept = default;
  constexpr PanelChangedEventBase_1& operator=(PanelChangedEventBase_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::IPanel __declspec(property(get=__get__originPanel_k__BackingField, put=__set__originPanel_k__BackingField))  _originPanel_k__BackingField;

constexpr void __set__originPanel_k__BackingField(UnityEngine::UIElements::IPanel value) ;

constexpr UnityEngine::UIElements::IPanel __get__originPanel_k__BackingField() const;

 UnityEngine::UIElements::IPanel __declspec(property(get=__get__destinationPanel_k__BackingField, put=__set__destinationPanel_k__BackingField))  _destinationPanel_k__BackingField;

constexpr void __set__destinationPanel_k__BackingField(UnityEngine::UIElements::IPanel value) ;

constexpr UnityEngine::UIElements::IPanel __get__destinationPanel_k__BackingField() const;


// Properties

 UnityEngine::UIElements::IPanel __declspec(property(get=get_originPanel, put=set_originPanel))  originPanel;

 UnityEngine::UIElements::IPanel __declspec(property(get=get_destinationPanel, put=set_destinationPanel))  destinationPanel;


// Methods

/// @brief Method get_originPanel addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::IPanel get_originPanel() ;

/// @brief Method set_originPanel addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_originPanel(UnityEngine::UIElements::IPanel value) ;

/// @brief Method get_destinationPanel addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::IPanel get_destinationPanel() ;

/// @brief Method set_destinationPanel addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_destinationPanel(UnityEngine::UIElements::IPanel value) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static T GetPooled(UnityEngine::UIElements::IPanel originPanel, UnityEngine::UIElements::IPanel destinationPanel) ;

static UnityEngine::UIElements::PanelChangedEventBase_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::PanelChangedEventBase_1, "UnityEngine.UIElements", "PanelChangedEventBase`1");
