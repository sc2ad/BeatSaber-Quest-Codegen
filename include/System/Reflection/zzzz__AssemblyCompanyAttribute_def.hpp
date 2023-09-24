#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Reflection {
class AssemblyCompanyAttribute;
}
// Type: System.Reflection::AssemblyCompanyAttribute
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3436))
// CS Name: System.Reflection.AssemblyCompanyAttribute
class CORDL_TYPE AssemblyCompanyAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AssemblyCompanyAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyCompanyAttribute", modifiers: " const&", def_value: None }]
constexpr AssemblyCompanyAttribute(AssemblyCompanyAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyCompanyAttribute", modifiers: "&&", def_value: None }]
constexpr AssemblyCompanyAttribute(AssemblyCompanyAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssemblyCompanyAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AssemblyCompanyAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssemblyCompanyAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssemblyCompanyAttribute& operator=(AssemblyCompanyAttribute&& o) noexcept = default;
  constexpr AssemblyCompanyAttribute& operator=(AssemblyCompanyAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Company_k__BackingField, put=__set__Company_k__BackingField))  _Company_k__BackingField;

constexpr void __set__Company_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Company_k__BackingField() const;


// Methods

static System::Reflection::AssemblyCompanyAttribute New_ctor(::StringW company) ;

/// @brief Method .ctor addr 0x2378c80 size 0x28 virtual false final false
 void _ctor(::StringW company) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::AssemblyCompanyAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyCompanyAttribute, "System.Reflection", "AssemblyCompanyAttribute");
