#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class ContractAnnotationAttribute;
}
// Type: JetBrains.Annotations::ContractAnnotationAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15686))
// CS Name: JetBrains.Annotations.ContractAnnotationAttribute
class CORDL_TYPE ContractAnnotationAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ContractAnnotationAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContractAnnotationAttribute", modifiers: " const&", def_value: None }]
constexpr ContractAnnotationAttribute(ContractAnnotationAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContractAnnotationAttribute", modifiers: "&&", def_value: None }]
constexpr ContractAnnotationAttribute(ContractAnnotationAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContractAnnotationAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr ContractAnnotationAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContractAnnotationAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContractAnnotationAttribute& operator=(ContractAnnotationAttribute&& o) noexcept = default;
  constexpr ContractAnnotationAttribute& operator=(ContractAnnotationAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Contract_k__BackingField, put=__set__Contract_k__BackingField))  _Contract_k__BackingField;

constexpr void __set__Contract_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Contract_k__BackingField() const;

 bool __declspec(property(get=__get__ForceFullStates_k__BackingField, put=__set__ForceFullStates_k__BackingField))  _ForceFullStates_k__BackingField;

constexpr void __set__ForceFullStates_k__BackingField(bool value) ;

constexpr bool __get__ForceFullStates_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Contract, put=set_Contract))  Contract;

 bool __declspec(property(get=get_ForceFullStates, put=set_ForceFullStates))  ForceFullStates;


// Methods

static JetBrains::Annotations::ContractAnnotationAttribute New_ctor(::StringW contract) ;

/// @brief Method .ctor addr 0x2d40b34 size 0x2c virtual false final false
 void _ctor(::StringW contract) ;

static JetBrains::Annotations::ContractAnnotationAttribute New_ctor(::StringW contract, bool forceFullStates) ;

/// @brief Method .ctor addr 0x2d40b60 size 0x34 virtual false final false
 void _ctor(::StringW contract, bool forceFullStates) ;

/// @brief Method get_Contract addr 0x2d40b94 size 0x8 virtual false final false
 ::StringW get_Contract() ;

/// @brief Method set_Contract addr 0x2d40b9c size 0x8 virtual false final false
 void set_Contract(::StringW value) ;

/// @brief Method get_ForceFullStates addr 0x2d40ba4 size 0x8 virtual false final false
 bool get_ForceFullStates() ;

/// @brief Method set_ForceFullStates addr 0x2d40bac size 0xc virtual false final false
 void set_ForceFullStates(bool value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::ContractAnnotationAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::ContractAnnotationAttribute, "JetBrains.Annotations", "ContractAnnotationAttribute");
