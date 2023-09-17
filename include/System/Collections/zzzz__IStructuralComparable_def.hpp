#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Collections {
class IComparer;
}
// Forward declare root types
namespace System::Collections {
class IStructuralComparable;
}
// Type: System.Collections::IStructuralComparable
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3748))
// CS Name: System.Collections.IStructuralComparable
class CORDL_TYPE IStructuralComparable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IStructuralComparable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IStructuralComparable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t CompareTo(::bs_hook::Il2CppWrapperType other, ::System::Collections::IComparer comparer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
} // end anonymous namespace
NEED_NO_BOX(::System::Collections::IStructuralComparable);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::IStructuralComparable, "System.Collections", "IStructuralComparable");
