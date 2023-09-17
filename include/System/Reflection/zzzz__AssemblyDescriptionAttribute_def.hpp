#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace System::Reflection {
class AssemblyDescriptionAttribute;
}
// Type: System.Reflection::AssemblyDescriptionAttribute
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3442))
// CS Name: System.Reflection.AssemblyDescriptionAttribute
class CORDL_TYPE AssemblyDescriptionAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AssemblyDescriptionAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyDescriptionAttribute", modifiers: " const&", def_value: None }]
constexpr AssemblyDescriptionAttribute(AssemblyDescriptionAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyDescriptionAttribute", modifiers: "&&", def_value: None }]
constexpr AssemblyDescriptionAttribute(AssemblyDescriptionAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssemblyDescriptionAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr AssemblyDescriptionAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssemblyDescriptionAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssemblyDescriptionAttribute& operator=(AssemblyDescriptionAttribute&& o) noexcept = default;
  constexpr AssemblyDescriptionAttribute& operator=(AssemblyDescriptionAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Description_k__BackingField, put=__set__Description_k__BackingField))  _Description_k__BackingField;

constexpr void __set__Description_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Description_k__BackingField() const;


// Methods

// Ctor Parameters [CppParam { name: "description", ty: "::StringW", modifiers: "", def_value: None }]
explicit AssemblyDescriptionAttribute(::StringW description) ;

/// @brief Method .ctor addr 0x2378d48 size 0x28 virtual false final false
 void _ctor(::StringW description) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
} // end anonymous namespace
NEED_NO_BOX(::System::Reflection::AssemblyDescriptionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyDescriptionAttribute, "System.Reflection", "AssemblyDescriptionAttribute");
