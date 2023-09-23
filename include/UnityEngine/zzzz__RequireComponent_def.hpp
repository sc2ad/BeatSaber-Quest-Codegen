#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine {
class RequireComponent;
}
// Type: UnityEngine::RequireComponent
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10155))
// CS Name: UnityEngine.RequireComponent
class CORDL_TYPE RequireComponent : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~RequireComponent() = default;

// Ctor Parameters [CppParam { name: "", ty: "RequireComponent", modifiers: " const&", def_value: None }]
constexpr RequireComponent(RequireComponent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RequireComponent", modifiers: "&&", def_value: None }]
constexpr RequireComponent(RequireComponent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RequireComponent(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr RequireComponent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RequireComponent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RequireComponent& operator=(RequireComponent&& o) noexcept = default;
  constexpr RequireComponent& operator=(RequireComponent const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get_m_Type0, put=__set_m_Type0))  m_Type0;

constexpr void __set_m_Type0(System::Type value) ;

constexpr System::Type __get_m_Type0() const;

 System::Type __declspec(property(get=__get_m_Type1, put=__set_m_Type1))  m_Type1;

constexpr void __set_m_Type1(System::Type value) ;

constexpr System::Type __get_m_Type1() const;

 System::Type __declspec(property(get=__get_m_Type2, put=__set_m_Type2))  m_Type2;

constexpr void __set_m_Type2(System::Type value) ;

constexpr System::Type __get_m_Type2() const;


// Methods

// Ctor Parameters [CppParam { name: "requiredComponent", ty: "System::Type", modifiers: "", def_value: None }]
explicit RequireComponent(System::Type requiredComponent) ;

/// @brief Method .ctor addr 0x2b5b1dc size 0x28 virtual false final false
 void _ctor(System::Type requiredComponent) ;

// Ctor Parameters [CppParam { name: "requiredComponent", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "requiredComponent2", ty: "System::Type", modifiers: "", def_value: None }]
explicit RequireComponent(System::Type requiredComponent, System::Type requiredComponent2) ;

/// @brief Method .ctor addr 0x2b5b204 size 0x2c virtual false final false
 void _ctor(System::Type requiredComponent, System::Type requiredComponent2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::RequireComponent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RequireComponent, "UnityEngine", "RequireComponent");
