#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Reflection {
class AssemblyInformationalVersionAttribute;
}
// Type: System.Reflection::AssemblyInformationalVersionAttribute
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3444))
// CS Name: System.Reflection.AssemblyInformationalVersionAttribute
class CORDL_TYPE AssemblyInformationalVersionAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AssemblyInformationalVersionAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyInformationalVersionAttribute", modifiers: " const&", def_value: None }]
constexpr AssemblyInformationalVersionAttribute(AssemblyInformationalVersionAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyInformationalVersionAttribute", modifiers: "&&", def_value: None }]
constexpr AssemblyInformationalVersionAttribute(AssemblyInformationalVersionAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssemblyInformationalVersionAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AssemblyInformationalVersionAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssemblyInformationalVersionAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssemblyInformationalVersionAttribute& operator=(AssemblyInformationalVersionAttribute&& o) noexcept = default;
  constexpr AssemblyInformationalVersionAttribute& operator=(AssemblyInformationalVersionAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__InformationalVersion_k__BackingField, put=__set__InformationalVersion_k__BackingField))  _InformationalVersion_k__BackingField;

constexpr void __set__InformationalVersion_k__BackingField(::StringW value) ;

constexpr ::StringW __get__InformationalVersion_k__BackingField() const;


// Methods

static System::Reflection::AssemblyInformationalVersionAttribute New_ctor(::StringW informationalVersion) ;

/// @brief Method .ctor addr 0x2378de8 size 0x28 virtual false final false
 void _ctor(::StringW informationalVersion) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::AssemblyInformationalVersionAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyInformationalVersionAttribute, "System.Reflection", "AssemblyInformationalVersionAttribute");
