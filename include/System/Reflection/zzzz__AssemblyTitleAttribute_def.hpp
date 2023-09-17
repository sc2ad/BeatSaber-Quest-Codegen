#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace System::Reflection {
class AssemblyTitleAttribute;
}
// Type: System.Reflection::AssemblyTitleAttribute
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3448))
// CS Name: System.Reflection.AssemblyTitleAttribute
class CORDL_TYPE AssemblyTitleAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AssemblyTitleAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyTitleAttribute", modifiers: " const&", def_value: None }]
constexpr AssemblyTitleAttribute(AssemblyTitleAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyTitleAttribute", modifiers: "&&", def_value: None }]
constexpr AssemblyTitleAttribute(AssemblyTitleAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssemblyTitleAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr AssemblyTitleAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssemblyTitleAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssemblyTitleAttribute& operator=(AssemblyTitleAttribute&& o) noexcept = default;
  constexpr AssemblyTitleAttribute& operator=(AssemblyTitleAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Title_k__BackingField, put=__set__Title_k__BackingField))  _Title_k__BackingField;

constexpr void __set__Title_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Title_k__BackingField() const;


// Methods

// Ctor Parameters [CppParam { name: "title", ty: "::StringW", modifiers: "", def_value: None }]
explicit AssemblyTitleAttribute(::StringW title) ;

/// @brief Method .ctor addr 0x2378e60 size 0x28 virtual false final false
 void _ctor(::StringW title) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
} // end anonymous namespace
NEED_NO_BOX(::System::Reflection::AssemblyTitleAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyTitleAttribute, "System.Reflection", "AssemblyTitleAttribute");
