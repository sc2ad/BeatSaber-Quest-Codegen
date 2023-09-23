#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections {
class IEqualityComparer;
}
// Forward declare root types
namespace System::Collections {
class IStructuralEquatable;
}
// Type: System.Collections::IStructuralEquatable
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3749))
// CS Name: System.Collections.IStructuralEquatable
class CORDL_TYPE IStructuralEquatable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IStructuralEquatable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IStructuralEquatable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other, System::Collections::IEqualityComparer comparer) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(System::Collections::IEqualityComparer comparer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
NEED_NO_BOX(System::Collections::IStructuralEquatable);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::IStructuralEquatable, "System.Collections", "IStructuralEquatable");
