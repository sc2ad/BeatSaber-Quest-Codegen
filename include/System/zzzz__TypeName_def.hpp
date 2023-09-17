#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace System {
class TypeName;
}
// Type: System::TypeName
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2626))
// CS Name: System.TypeName
class CORDL_TYPE TypeName : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::System::TypeName>
constexpr operator  ::System::IEquatable_1<::System::TypeName>() const noexcept;

~TypeName() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeName(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_DisplayName))  DisplayName;


// Methods

/// @brief Method get_DisplayName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_DisplayName() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::TypeName);
DEFINE_IL2CPP_ARG_TYPE(::System::TypeName, "System", "TypeName");
