#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Collections {
class IComparer;
}
// Type: System.Collections::IComparer
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3741))
// CS Name: System.Collections.IComparer
class CORDL_TYPE IComparer : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IComparer() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IComparer(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(::bs_hook::Il2CppWrapperType x, ::bs_hook::Il2CppWrapperType y) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
NEED_NO_BOX(System::Collections::IComparer);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::IComparer, "System.Collections", "IComparer");
