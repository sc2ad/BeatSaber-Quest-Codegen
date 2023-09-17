#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace JetBrains::Annotations {
class MustUseReturnValueAttribute;
}
// Type: JetBrains.Annotations::MustUseReturnValueAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15697))
// CS Name: JetBrains.Annotations.MustUseReturnValueAttribute
class CORDL_TYPE MustUseReturnValueAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MustUseReturnValueAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "MustUseReturnValueAttribute", modifiers: " const&", def_value: None }]
constexpr MustUseReturnValueAttribute(MustUseReturnValueAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MustUseReturnValueAttribute", modifiers: "&&", def_value: None }]
constexpr MustUseReturnValueAttribute(MustUseReturnValueAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MustUseReturnValueAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr MustUseReturnValueAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MustUseReturnValueAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MustUseReturnValueAttribute& operator=(MustUseReturnValueAttribute&& o) noexcept = default;
  constexpr MustUseReturnValueAttribute& operator=(MustUseReturnValueAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Justification_k__BackingField, put=__set__Justification_k__BackingField))  _Justification_k__BackingField;

constexpr void __set__Justification_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Justification_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Justification, put=set_Justification))  Justification;


// Methods

// Ctor Parameters []
explicit MustUseReturnValueAttribute() ;

/// @brief Method .ctor addr 0x2d40e38 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "justification", ty: "::StringW", modifiers: "", def_value: None }]
explicit MustUseReturnValueAttribute(::StringW justification) ;

/// @brief Method .ctor addr 0x2d40e40 size 0x28 virtual false final false
 void _ctor(::StringW justification) ;

/// @brief Method get_Justification addr 0x2d40e68 size 0x8 virtual false final false
 ::StringW get_Justification() ;

/// @brief Method set_Justification addr 0x2d40e70 size 0x8 virtual false final false
 void set_Justification(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
} // end anonymous namespace
NEED_NO_BOX(::JetBrains::Annotations::MustUseReturnValueAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::MustUseReturnValueAttribute, "JetBrains.Annotations", "MustUseReturnValueAttribute");
