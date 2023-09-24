#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace JetBrains::Annotations {
struct ImplicitUseKindFlags;
}
namespace JetBrains::Annotations {
struct ImplicitUseTargetFlags;
}
// Forward declare root types
namespace JetBrains::Annotations {
class UsedImplicitlyAttribute;
}
// Type: JetBrains.Annotations::UsedImplicitlyAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9969))
// CS Name: JetBrains.Annotations.UsedImplicitlyAttribute
class CORDL_TYPE UsedImplicitlyAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UsedImplicitlyAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "UsedImplicitlyAttribute", modifiers: " const&", def_value: None }]
constexpr UsedImplicitlyAttribute(UsedImplicitlyAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UsedImplicitlyAttribute", modifiers: "&&", def_value: None }]
constexpr UsedImplicitlyAttribute(UsedImplicitlyAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UsedImplicitlyAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr UsedImplicitlyAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UsedImplicitlyAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UsedImplicitlyAttribute& operator=(UsedImplicitlyAttribute&& o) noexcept = default;
  constexpr UsedImplicitlyAttribute& operator=(UsedImplicitlyAttribute const& o) noexcept = default;
                


// Fields

 JetBrains::Annotations::ImplicitUseKindFlags __declspec(property(get=__get__UseKindFlags_k__BackingField, put=__set__UseKindFlags_k__BackingField))  _UseKindFlags_k__BackingField;

constexpr void __set__UseKindFlags_k__BackingField(JetBrains::Annotations::ImplicitUseKindFlags value) ;

constexpr JetBrains::Annotations::ImplicitUseKindFlags __get__UseKindFlags_k__BackingField() const;

 JetBrains::Annotations::ImplicitUseTargetFlags __declspec(property(get=__get__TargetFlags_k__BackingField, put=__set__TargetFlags_k__BackingField))  _TargetFlags_k__BackingField;

constexpr void __set__TargetFlags_k__BackingField(JetBrains::Annotations::ImplicitUseTargetFlags value) ;

constexpr JetBrains::Annotations::ImplicitUseTargetFlags __get__TargetFlags_k__BackingField() const;


// Methods

static JetBrains::Annotations::UsedImplicitlyAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2b28af8 size 0x24 virtual false final false
 void _ctor() ;

static JetBrains::Annotations::UsedImplicitlyAttribute New_ctor(JetBrains::Annotations::ImplicitUseKindFlags useKindFlags, JetBrains::Annotations::ImplicitUseTargetFlags targetFlags) ;

/// @brief Method .ctor addr 0x2b28b1c size 0x2c virtual false final false
 void _ctor(JetBrains::Annotations::ImplicitUseKindFlags useKindFlags, JetBrains::Annotations::ImplicitUseTargetFlags targetFlags) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::UsedImplicitlyAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::UsedImplicitlyAttribute, "JetBrains.Annotations", "UsedImplicitlyAttribute");
