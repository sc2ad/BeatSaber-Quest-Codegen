#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
class DefaultExecutionOrder;
}
// Type: UnityEngine::DefaultExecutionOrder
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10163))
// CS Name: UnityEngine.DefaultExecutionOrder
class CORDL_TYPE DefaultExecutionOrder : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DefaultExecutionOrder() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultExecutionOrder", modifiers: " const&", def_value: None }]
constexpr DefaultExecutionOrder(DefaultExecutionOrder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultExecutionOrder", modifiers: "&&", def_value: None }]
constexpr DefaultExecutionOrder(DefaultExecutionOrder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultExecutionOrder(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr DefaultExecutionOrder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultExecutionOrder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultExecutionOrder& operator=(DefaultExecutionOrder&& o) noexcept = default;
  constexpr DefaultExecutionOrder& operator=(DefaultExecutionOrder const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_Order, put=__set_m_Order))  m_Order;

constexpr void __set_m_Order(int32_t value) ;

constexpr int32_t __get_m_Order() const;


// Properties

 int32_t __declspec(property(get=get_order))  order;


// Methods

// Ctor Parameters [CppParam { name: "order", ty: "int32_t", modifiers: "", def_value: None }]
explicit DefaultExecutionOrder(int32_t order) ;

/// @brief Method .ctor addr 0x2b5b3d8 size 0x28 virtual false final false
 void _ctor(int32_t order) ;

/// @brief Method get_order addr 0x2b567a4 size 0x8 virtual false final false
 int32_t get_order() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::DefaultExecutionOrder);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::DefaultExecutionOrder, "UnityEngine", "DefaultExecutionOrder");
