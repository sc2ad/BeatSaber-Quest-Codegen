#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Collections {
class IEqualityComparer;
}
// Type: System.Collections::IEqualityComparer
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3746))
// CS Name: System.Collections.IEqualityComparer
class CORDL_TYPE IEqualityComparer : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IEqualityComparer() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IEqualityComparer(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType x, ::bs_hook::Il2CppWrapperType y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
} // end anonymous namespace
NEED_NO_BOX(::System::Collections::IEqualityComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::IEqualityComparer, "System.Collections", "IEqualityComparer");
