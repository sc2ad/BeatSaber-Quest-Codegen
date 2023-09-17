#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
// Type: UnityEngine.UIElements::GeometryChangedEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7279)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7279), inst: 1639 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7311))
// CS Name: UnityEngine.UIElements.GeometryChangedEvent
class CORDL_TYPE GeometryChangedEvent : public ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::GeometryChangedEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~GeometryChangedEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "GeometryChangedEvent", modifiers: " const&", def_value: None }]
constexpr GeometryChangedEvent(GeometryChangedEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GeometryChangedEvent", modifiers: "&&", def_value: None }]
constexpr GeometryChangedEvent(GeometryChangedEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GeometryChangedEvent(void* ptr) noexcept : ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::GeometryChangedEvent>(ptr) {
}


  constexpr GeometryChangedEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GeometryChangedEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GeometryChangedEvent& operator=(GeometryChangedEvent&& o) noexcept = default;
  constexpr GeometryChangedEvent& operator=(GeometryChangedEvent const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Rect __declspec(property(get=__get__oldRect_k__BackingField, put=__set__oldRect_k__BackingField))  _oldRect_k__BackingField;

constexpr void __set__oldRect_k__BackingField(::UnityEngine::Rect value) ;

constexpr ::UnityEngine::Rect __get__oldRect_k__BackingField() const;

 ::UnityEngine::Rect __declspec(property(get=__get__newRect_k__BackingField, put=__set__newRect_k__BackingField))  _newRect_k__BackingField;

constexpr void __set__newRect_k__BackingField(::UnityEngine::Rect value) ;

constexpr ::UnityEngine::Rect __get__newRect_k__BackingField() const;

 int32_t __declspec(property(get=__get__layoutPass_k__BackingField, put=__set__layoutPass_k__BackingField))  _layoutPass_k__BackingField;

constexpr void __set__layoutPass_k__BackingField(int32_t value) ;

constexpr int32_t __get__layoutPass_k__BackingField() const;


// Properties

 ::UnityEngine::Rect __declspec(property(get=get_oldRect, put=set_oldRect))  oldRect;

 ::UnityEngine::Rect __declspec(property(get=get_newRect, put=set_newRect))  newRect;

 int32_t __declspec(property(get=get_layoutPass, put=set_layoutPass))  layoutPass;


// Methods

/// @brief Method GetPooled addr 0x2cd98b4 size 0xc0 virtual false final false
static ::UnityEngine::UIElements::GeometryChangedEvent GetPooled(::UnityEngine::Rect oldRect, ::UnityEngine::Rect newRect) ;

/// @brief Method Init addr 0x2cd9974 size 0x50 virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x2cd99c4 size 0x34 virtual false final false
 void LocalInit() ;

/// @brief Method get_oldRect addr 0x2cd99f8 size 0xc virtual false final false
 ::UnityEngine::Rect get_oldRect() ;

/// @brief Method set_oldRect addr 0x2cd9a04 size 0xc virtual false final false
 void set_oldRect(::UnityEngine::Rect value) ;

/// @brief Method get_newRect addr 0x2cd9a10 size 0xc virtual false final false
 ::UnityEngine::Rect get_newRect() ;

/// @brief Method set_newRect addr 0x2cd9a1c size 0xc virtual false final false
 void set_newRect(::UnityEngine::Rect value) ;

/// @brief Method get_layoutPass addr 0x2cd9a28 size 0x8 virtual false final false
 int32_t get_layoutPass() ;

/// @brief Method set_layoutPass addr 0x2cd9a30 size 0x8 virtual false final false
 void set_layoutPass(int32_t value) ;

// Ctor Parameters []
explicit GeometryChangedEvent() ;

/// @brief Method .ctor addr 0x2cd9a38 size 0x74 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::GeometryChangedEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::GeometryChangedEvent, "UnityEngine.UIElements", "GeometryChangedEvent");
