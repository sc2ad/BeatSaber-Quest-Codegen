#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class TypeName;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace System {
class TypeIdentifier;
}
// Type: System::TypeIdentifier
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2627))
// CS Name: System.TypeIdentifier
class CORDL_TYPE TypeIdentifier : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::TypeName
constexpr operator  ::System::TypeName() const noexcept;

/// @brief Convert operator to ::System::IEquatable_1<::System::TypeName>
constexpr operator  ::System::IEquatable_1<::System::TypeName>() const noexcept;

~TypeIdentifier() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeIdentifier(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_InternalName))  InternalName;


// Methods

/// @brief Method get_InternalName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_InternalName() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::TypeIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::System::TypeIdentifier, "System", "TypeIdentifier");
