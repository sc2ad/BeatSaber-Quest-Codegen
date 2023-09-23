#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace System {
class IComparable;
}
// Type: System::IComparable
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2410))
// CS Name: System.IComparable
class CORDL_TYPE IComparable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IComparable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IComparable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method CompareTo addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t CompareTo(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::IComparable);
DEFINE_IL2CPP_ARG_TYPE(System::IComparable, "System", "IComparable");
