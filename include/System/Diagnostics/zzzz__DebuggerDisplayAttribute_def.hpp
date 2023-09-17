#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace System::Diagnostics {
class DebuggerDisplayAttribute;
}
// Type: System.Diagnostics::DebuggerDisplayAttribute
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3722))
// CS Name: System.Diagnostics.DebuggerDisplayAttribute
class CORDL_TYPE DebuggerDisplayAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DebuggerDisplayAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DebuggerDisplayAttribute", modifiers: " const&", def_value: None }]
constexpr DebuggerDisplayAttribute(DebuggerDisplayAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DebuggerDisplayAttribute", modifiers: "&&", def_value: None }]
constexpr DebuggerDisplayAttribute(DebuggerDisplayAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DebuggerDisplayAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr DebuggerDisplayAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DebuggerDisplayAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DebuggerDisplayAttribute& operator=(DebuggerDisplayAttribute&& o) noexcept = default;
  constexpr DebuggerDisplayAttribute& operator=(DebuggerDisplayAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::StringW __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::StringW value) ;

constexpr ::StringW __get_value() const;

 ::StringW __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(::StringW value) ;

constexpr ::StringW __get_type() const;


// Methods

// Ctor Parameters [CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }]
explicit DebuggerDisplayAttribute(::StringW value) ;

/// @brief Method .ctor addr 0x240c0dc size 0x70 virtual false final false
 void _ctor(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
} // end anonymous namespace
NEED_NO_BOX(::System::Diagnostics::DebuggerDisplayAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::DebuggerDisplayAttribute, "System.Diagnostics", "DebuggerDisplayAttribute");
