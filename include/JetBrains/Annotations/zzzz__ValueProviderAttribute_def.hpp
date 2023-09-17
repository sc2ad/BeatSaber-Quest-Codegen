#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace JetBrains::Annotations {
class ValueProviderAttribute;
}
// Type: JetBrains.Annotations::ValueProviderAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15683))
// CS Name: JetBrains.Annotations.ValueProviderAttribute
class CORDL_TYPE ValueProviderAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ValueProviderAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ValueProviderAttribute", modifiers: " const&", def_value: None }]
constexpr ValueProviderAttribute(ValueProviderAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ValueProviderAttribute", modifiers: "&&", def_value: None }]
constexpr ValueProviderAttribute(ValueProviderAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ValueProviderAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr ValueProviderAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ValueProviderAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ValueProviderAttribute& operator=(ValueProviderAttribute&& o) noexcept = default;
  constexpr ValueProviderAttribute& operator=(ValueProviderAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Name_k__BackingField, put=__set__Name_k__BackingField))  _Name_k__BackingField;

constexpr void __set__Name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Name_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Name, put=set_Name))  Name;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit ValueProviderAttribute(::StringW name) ;

/// @brief Method .ctor addr 0x2d40ab4 size 0x28 virtual false final false
 void _ctor(::StringW name) ;

/// @brief Method get_Name addr 0x2d40adc size 0x8 virtual false final false
 ::StringW get_Name() ;

/// @brief Method set_Name addr 0x2d40ae4 size 0x8 virtual false final false
 void set_Name(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
} // end anonymous namespace
NEED_NO_BOX(::JetBrains::Annotations::ValueProviderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::ValueProviderAttribute, "JetBrains.Annotations", "ValueProviderAttribute");
