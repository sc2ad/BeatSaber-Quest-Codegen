#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Type;
}
// Forward declare root types
namespace System::Diagnostics {
class DebuggerTypeProxyAttribute;
}
// Type: System.Diagnostics::DebuggerTypeProxyAttribute
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3721))
// CS Name: System.Diagnostics.DebuggerTypeProxyAttribute
class CORDL_TYPE DebuggerTypeProxyAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DebuggerTypeProxyAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DebuggerTypeProxyAttribute", modifiers: " const&", def_value: None }]
constexpr DebuggerTypeProxyAttribute(DebuggerTypeProxyAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DebuggerTypeProxyAttribute", modifiers: "&&", def_value: None }]
constexpr DebuggerTypeProxyAttribute(DebuggerTypeProxyAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DebuggerTypeProxyAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr DebuggerTypeProxyAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DebuggerTypeProxyAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DebuggerTypeProxyAttribute& operator=(DebuggerTypeProxyAttribute&& o) noexcept = default;
  constexpr DebuggerTypeProxyAttribute& operator=(DebuggerTypeProxyAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_typeName, put=__set_typeName))  typeName;

constexpr void __set_typeName(::StringW value) ;

constexpr ::StringW __get_typeName() const;


// Methods

// Ctor Parameters [CppParam { name: "type", ty: "System::Type", modifiers: "", def_value: None }]
explicit DebuggerTypeProxyAttribute(System::Type type) ;

/// @brief Method .ctor addr 0x240bff4 size 0xe8 virtual false final false
 void _ctor(System::Type type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
NEED_NO_BOX(System::Diagnostics::DebuggerTypeProxyAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::DebuggerTypeProxyAttribute, "System.Diagnostics", "DebuggerTypeProxyAttribute");
