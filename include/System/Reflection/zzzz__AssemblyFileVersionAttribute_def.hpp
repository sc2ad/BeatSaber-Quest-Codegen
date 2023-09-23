#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Reflection {
class AssemblyFileVersionAttribute;
}
// Type: System.Reflection::AssemblyFileVersionAttribute
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3443))
// CS Name: System.Reflection.AssemblyFileVersionAttribute
class CORDL_TYPE AssemblyFileVersionAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AssemblyFileVersionAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyFileVersionAttribute", modifiers: " const&", def_value: None }]
constexpr AssemblyFileVersionAttribute(AssemblyFileVersionAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyFileVersionAttribute", modifiers: "&&", def_value: None }]
constexpr AssemblyFileVersionAttribute(AssemblyFileVersionAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssemblyFileVersionAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AssemblyFileVersionAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssemblyFileVersionAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssemblyFileVersionAttribute& operator=(AssemblyFileVersionAttribute&& o) noexcept = default;
  constexpr AssemblyFileVersionAttribute& operator=(AssemblyFileVersionAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Version_k__BackingField, put=__set__Version_k__BackingField))  _Version_k__BackingField;

constexpr void __set__Version_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Version_k__BackingField() const;


// Methods

// Ctor Parameters [CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: None }]
explicit AssemblyFileVersionAttribute(::StringW version) ;

/// @brief Method .ctor addr 0x2378d70 size 0x78 virtual false final false
 void _ctor(::StringW version) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::AssemblyFileVersionAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyFileVersionAttribute, "System.Reflection", "AssemblyFileVersionAttribute");
