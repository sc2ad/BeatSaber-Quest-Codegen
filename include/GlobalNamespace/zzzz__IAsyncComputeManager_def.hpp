#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace GlobalNamespace {
class AsyncComputeOperation;
}
namespace GlobalNamespace {
template<typename T>
class AsyncComputeOperation_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class IAsyncComputeManager;
}
// Type: ::IAsyncComputeManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12716))
// CS Name: IAsyncComputeManager
class CORDL_TYPE IAsyncComputeManager : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

~IAsyncComputeManager() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IAsyncComputeManager(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method BeginOperation addr 0x0 size 0xffffffffffffffff virtual true final false
 void BeginOperation(GlobalNamespace::AsyncComputeOperation asyncComputeOperation) ;

/// @brief Method BeginOperation addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 System::Threading::Tasks::Task_1<T> BeginOperation(GlobalNamespace::AsyncComputeOperation_1<T> asyncComputeOperation) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IAsyncComputeManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IAsyncComputeManager, "", "IAsyncComputeManager");
