#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace System::Threading {
class ThreadAbortException;
}
// Forward declare root types
namespace System::Threading {
class IThreadPoolWorkItem;
}
// Type: System.Threading::IThreadPoolWorkItem
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2726))
// CS Name: System.Threading.IThreadPoolWorkItem
class CORDL_TYPE IThreadPoolWorkItem : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IThreadPoolWorkItem() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IThreadPoolWorkItem(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method ExecuteWorkItem addr 0x0 size 0xffffffffffffffff virtual true final false
 void ExecuteWorkItem() ;

/// @brief Method MarkAborted addr 0x0 size 0xffffffffffffffff virtual true final false
 void MarkAborted(System::Threading::ThreadAbortException tae) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(System::Threading::IThreadPoolWorkItem);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::IThreadPoolWorkItem, "System.Threading", "IThreadPoolWorkItem");
