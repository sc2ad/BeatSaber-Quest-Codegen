#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Collections {
class IHashCodeProvider;
}
// Type: System.Collections::IHashCodeProvider
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3784))
// CS Name: System.Collections.IHashCodeProvider
class CORDL_TYPE IHashCodeProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IHashCodeProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IHashCodeProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
} // end anonymous namespace
NEED_NO_BOX(::System::Collections::IHashCodeProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::IHashCodeProvider, "System.Collections", "IHashCodeProvider");
