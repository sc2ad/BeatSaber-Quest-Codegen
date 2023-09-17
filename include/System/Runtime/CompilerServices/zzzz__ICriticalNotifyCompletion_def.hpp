#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace {
namespace System {
class Action;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
// Type: System.Runtime.CompilerServices::ICriticalNotifyCompletion
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3366))
// CS Name: System.Runtime.CompilerServices.ICriticalNotifyCompletion
class CORDL_TYPE ICriticalNotifyCompletion : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ICriticalNotifyCompletion() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICriticalNotifyCompletion(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final false
 void UnsafeOnCompleted(::System::Action continuation) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::CompilerServices::ICriticalNotifyCompletion);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::ICriticalNotifyCompletion, "System.Runtime.CompilerServices", "ICriticalNotifyCompletion");
