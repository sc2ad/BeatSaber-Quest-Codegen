#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace System::Collections {
class IEnumerator;
}
// Type: System.Collections::IEnumerator
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3745))
// CS Name: System.Collections.IEnumerator
class CORDL_TYPE IEnumerator : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IEnumerator() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IEnumerator(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Current))  Current;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final false
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType get_Current() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
} // end anonymous namespace
NEED_NO_BOX(::System::Collections::IEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::IEnumerator, "System.Collections", "IEnumerator");
