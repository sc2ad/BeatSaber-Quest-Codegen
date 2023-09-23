#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
class BeforeRenderOrderAttribute;
}
// Type: UnityEngine::BeforeRenderOrderAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10040))
// CS Name: UnityEngine.BeforeRenderOrderAttribute
class CORDL_TYPE BeforeRenderOrderAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BeforeRenderOrderAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeforeRenderOrderAttribute", modifiers: " const&", def_value: None }]
constexpr BeforeRenderOrderAttribute(BeforeRenderOrderAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeforeRenderOrderAttribute", modifiers: "&&", def_value: None }]
constexpr BeforeRenderOrderAttribute(BeforeRenderOrderAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeforeRenderOrderAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr BeforeRenderOrderAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeforeRenderOrderAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeforeRenderOrderAttribute& operator=(BeforeRenderOrderAttribute&& o) noexcept = default;
  constexpr BeforeRenderOrderAttribute& operator=(BeforeRenderOrderAttribute const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__order_k__BackingField, put=__set__order_k__BackingField))  _order_k__BackingField;

constexpr void __set__order_k__BackingField(int32_t value) ;

constexpr int32_t __get__order_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_order, put=set_order))  order;


// Methods

/// @brief Method get_order addr 0x2b4b51c size 0x8 virtual false final false
 int32_t get_order() ;

/// @brief Method set_order addr 0x2b4b524 size 0x8 virtual false final false
 void set_order(int32_t value) ;

// Ctor Parameters [CppParam { name: "order", ty: "int32_t", modifiers: "", def_value: None }]
explicit BeforeRenderOrderAttribute(int32_t order) ;

/// @brief Method .ctor addr 0x2b4b52c size 0x28 virtual false final false
 void _ctor(int32_t order) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::BeforeRenderOrderAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::BeforeRenderOrderAttribute, "UnityEngine", "BeforeRenderOrderAttribute");
