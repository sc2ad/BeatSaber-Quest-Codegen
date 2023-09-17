#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace System::Threading {
class IAsyncLocal;
}
// Type: System.Threading::IAsyncLocal
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2657))
// CS Name: System.Threading.IAsyncLocal
class CORDL_TYPE IAsyncLocal : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IAsyncLocal() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IAsyncLocal(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnValueChanged addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnValueChanged(::bs_hook::Il2CppWrapperType previousValue, ::bs_hook::Il2CppWrapperType currentValue, bool contextChanged) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::IAsyncLocal);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::IAsyncLocal, "System.Threading", "IAsyncLocal");
