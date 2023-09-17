#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace System {
class ICustomFormatter;
}
// Type: System::ICustomFormatter
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2413))
// CS Name: System.ICustomFormatter
class CORDL_TYPE ICustomFormatter : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ICustomFormatter() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICustomFormatter(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Format addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW Format(::StringW format, ::bs_hook::Il2CppWrapperType arg, ::System::IFormatProvider formatProvider) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::ICustomFormatter);
DEFINE_IL2CPP_ARG_TYPE(::System::ICustomFormatter, "System", "ICustomFormatter");
