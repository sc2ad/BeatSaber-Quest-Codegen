#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace System::Diagnostics {
class ConditionalAttribute;
}
// Type: System.Diagnostics::ConditionalAttribute
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3712))
// CS Name: System.Diagnostics.ConditionalAttribute
class CORDL_TYPE ConditionalAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ConditionalAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConditionalAttribute", modifiers: " const&", def_value: None }]
constexpr ConditionalAttribute(ConditionalAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConditionalAttribute", modifiers: "&&", def_value: None }]
constexpr ConditionalAttribute(ConditionalAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConditionalAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr ConditionalAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConditionalAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConditionalAttribute& operator=(ConditionalAttribute&& o) noexcept = default;
  constexpr ConditionalAttribute& operator=(ConditionalAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__ConditionString_k__BackingField, put=__set__ConditionString_k__BackingField))  _ConditionString_k__BackingField;

constexpr void __set__ConditionString_k__BackingField(::StringW value) ;

constexpr ::StringW __get__ConditionString_k__BackingField() const;


// Methods

// Ctor Parameters [CppParam { name: "conditionString", ty: "::StringW", modifiers: "", def_value: None }]
explicit ConditionalAttribute(::StringW conditionString) ;

/// @brief Method .ctor addr 0x240bf08 size 0x28 virtual false final false
 void _ctor(::StringW conditionString) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
} // end anonymous namespace
NEED_NO_BOX(::System::Diagnostics::ConditionalAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::ConditionalAttribute, "System.Diagnostics", "ConditionalAttribute");
