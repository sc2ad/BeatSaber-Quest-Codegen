#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace System::Reflection {
class AssemblyKeyFileAttribute;
}
// Type: System.Reflection::AssemblyKeyFileAttribute
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3445))
// CS Name: System.Reflection.AssemblyKeyFileAttribute
class CORDL_TYPE AssemblyKeyFileAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AssemblyKeyFileAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyKeyFileAttribute", modifiers: " const&", def_value: None }]
constexpr AssemblyKeyFileAttribute(AssemblyKeyFileAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyKeyFileAttribute", modifiers: "&&", def_value: None }]
constexpr AssemblyKeyFileAttribute(AssemblyKeyFileAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssemblyKeyFileAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr AssemblyKeyFileAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssemblyKeyFileAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssemblyKeyFileAttribute& operator=(AssemblyKeyFileAttribute&& o) noexcept = default;
  constexpr AssemblyKeyFileAttribute& operator=(AssemblyKeyFileAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__KeyFile_k__BackingField, put=__set__KeyFile_k__BackingField))  _KeyFile_k__BackingField;

constexpr void __set__KeyFile_k__BackingField(::StringW value) ;

constexpr ::StringW __get__KeyFile_k__BackingField() const;


// Methods

// Ctor Parameters [CppParam { name: "keyFile", ty: "::StringW", modifiers: "", def_value: None }]
explicit AssemblyKeyFileAttribute(::StringW keyFile) ;

/// @brief Method .ctor addr 0x2378e10 size 0x28 virtual false final false
 void _ctor(::StringW keyFile) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
} // end anonymous namespace
NEED_NO_BOX(::System::Reflection::AssemblyKeyFileAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyKeyFileAttribute, "System.Reflection", "AssemblyKeyFileAttribute");
