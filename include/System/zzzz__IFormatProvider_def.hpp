#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class IFormatProvider;
}
// Type: System::IFormatProvider
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2416))
// CS Name: System.IFormatProvider
class CORDL_TYPE IFormatProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IFormatProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IFormatProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetFormat addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType GetFormat(::System::Type formatType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::IFormatProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::IFormatProvider, "System", "IFormatProvider");
