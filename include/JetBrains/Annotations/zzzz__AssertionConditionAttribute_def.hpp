#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace JetBrains::Annotations {
struct AssertionConditionType;
}
// Forward declare root types
namespace JetBrains::Annotations {
class AssertionConditionAttribute;
}
// Type: JetBrains.Annotations::AssertionConditionAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15728))
// CS Name: JetBrains.Annotations.AssertionConditionAttribute
class CORDL_TYPE AssertionConditionAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AssertionConditionAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssertionConditionAttribute", modifiers: " const&", def_value: None }]
constexpr AssertionConditionAttribute(AssertionConditionAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssertionConditionAttribute", modifiers: "&&", def_value: None }]
constexpr AssertionConditionAttribute(AssertionConditionAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssertionConditionAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AssertionConditionAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssertionConditionAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssertionConditionAttribute& operator=(AssertionConditionAttribute&& o) noexcept = default;
  constexpr AssertionConditionAttribute& operator=(AssertionConditionAttribute const& o) noexcept = default;
                


// Fields

 JetBrains::Annotations::AssertionConditionType __declspec(property(get=__get__ConditionType_k__BackingField, put=__set__ConditionType_k__BackingField))  _ConditionType_k__BackingField;

constexpr void __set__ConditionType_k__BackingField(JetBrains::Annotations::AssertionConditionType value) ;

constexpr JetBrains::Annotations::AssertionConditionType __get__ConditionType_k__BackingField() const;


// Properties

 JetBrains::Annotations::AssertionConditionType __declspec(property(get=get_ConditionType, put=set_ConditionType))  ConditionType;


// Methods

// Ctor Parameters [CppParam { name: "conditionType", ty: "JetBrains::Annotations::AssertionConditionType", modifiers: "", def_value: None }]
explicit AssertionConditionAttribute(JetBrains::Annotations::AssertionConditionType conditionType) ;

/// @brief Method .ctor addr 0x2d41228 size 0x28 virtual false final false
 void _ctor(JetBrains::Annotations::AssertionConditionType conditionType) ;

/// @brief Method get_ConditionType addr 0x2d41250 size 0x8 virtual false final false
 JetBrains::Annotations::AssertionConditionType get_ConditionType() ;

/// @brief Method set_ConditionType addr 0x2d41258 size 0x8 virtual false final false
 void set_ConditionType(JetBrains::Annotations::AssertionConditionType value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::AssertionConditionAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AssertionConditionAttribute, "JetBrains.Annotations", "AssertionConditionAttribute");
