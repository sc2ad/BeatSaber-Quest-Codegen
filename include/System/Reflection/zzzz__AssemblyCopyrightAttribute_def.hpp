#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace System::Reflection {
class AssemblyCopyrightAttribute;
}
// Type: System.Reflection::AssemblyCopyrightAttribute
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3439))
// CS Name: System.Reflection.AssemblyCopyrightAttribute
class CORDL_TYPE AssemblyCopyrightAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AssemblyCopyrightAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyCopyrightAttribute", modifiers: " const&", def_value: None }]
constexpr AssemblyCopyrightAttribute(AssemblyCopyrightAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyCopyrightAttribute", modifiers: "&&", def_value: None }]
constexpr AssemblyCopyrightAttribute(AssemblyCopyrightAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssemblyCopyrightAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr AssemblyCopyrightAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssemblyCopyrightAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssemblyCopyrightAttribute& operator=(AssemblyCopyrightAttribute&& o) noexcept = default;
  constexpr AssemblyCopyrightAttribute& operator=(AssemblyCopyrightAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Copyright_k__BackingField, put=__set__Copyright_k__BackingField))  _Copyright_k__BackingField;

constexpr void __set__Copyright_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Copyright_k__BackingField() const;


// Methods

// Ctor Parameters [CppParam { name: "copyright", ty: "::StringW", modifiers: "", def_value: None }]
explicit AssemblyCopyrightAttribute(::StringW copyright) ;

/// @brief Method .ctor addr 0x2378cd0 size 0x28 virtual false final false
 void _ctor(::StringW copyright) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
} // end anonymous namespace
NEED_NO_BOX(::System::Reflection::AssemblyCopyrightAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyCopyrightAttribute, "System.Reflection", "AssemblyCopyrightAttribute");
