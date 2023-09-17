#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace System::Reflection {
class AssemblyConfigurationAttribute;
}
// Type: System.Reflection::AssemblyConfigurationAttribute
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3437))
// CS Name: System.Reflection.AssemblyConfigurationAttribute
class CORDL_TYPE AssemblyConfigurationAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AssemblyConfigurationAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyConfigurationAttribute", modifiers: " const&", def_value: None }]
constexpr AssemblyConfigurationAttribute(AssemblyConfigurationAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyConfigurationAttribute", modifiers: "&&", def_value: None }]
constexpr AssemblyConfigurationAttribute(AssemblyConfigurationAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssemblyConfigurationAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr AssemblyConfigurationAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssemblyConfigurationAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssemblyConfigurationAttribute& operator=(AssemblyConfigurationAttribute&& o) noexcept = default;
  constexpr AssemblyConfigurationAttribute& operator=(AssemblyConfigurationAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Configuration_k__BackingField, put=__set__Configuration_k__BackingField))  _Configuration_k__BackingField;

constexpr void __set__Configuration_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Configuration_k__BackingField() const;


// Methods

// Ctor Parameters [CppParam { name: "configuration", ty: "::StringW", modifiers: "", def_value: None }]
explicit AssemblyConfigurationAttribute(::StringW configuration) ;

/// @brief Method .ctor addr 0x2378ca8 size 0x28 virtual false final false
 void _ctor(::StringW configuration) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
} // end anonymous namespace
NEED_NO_BOX(::System::Reflection::AssemblyConfigurationAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyConfigurationAttribute, "System.Reflection", "AssemblyConfigurationAttribute");
