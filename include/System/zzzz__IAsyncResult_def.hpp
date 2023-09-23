#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Threading {
class WaitHandle;
}
// Forward declare root types
namespace System {
class IAsyncResult;
}
// Type: System::IAsyncResult
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2408))
// CS Name: System.IAsyncResult
class CORDL_TYPE IAsyncResult : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IAsyncResult() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IAsyncResult(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;

 System::Threading::WaitHandle __declspec(property(get=get_AsyncWaitHandle))  AsyncWaitHandle;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_AsyncState))  AsyncState;

 bool __declspec(property(get=get_CompletedSynchronously))  CompletedSynchronously;


// Methods

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsCompleted() ;

/// @brief Method get_AsyncWaitHandle addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Threading::WaitHandle get_AsyncWaitHandle() ;

/// @brief Method get_AsyncState addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType get_AsyncState() ;

/// @brief Method get_CompletedSynchronously addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_CompletedSynchronously() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::IAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(System::IAsyncResult, "System", "IAsyncResult");
