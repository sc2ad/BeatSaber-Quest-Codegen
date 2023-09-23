#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace System {
class Action;
}
namespace System {
struct TimeSpan;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace BGNet::Core {
class ITaskUtility;
}
// Type: BGNet.Core::ITaskUtility
namespace BGNet::Core {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12942))
// CS Name: BGNet.Core.ITaskUtility
class CORDL_TYPE ITaskUtility : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ITaskUtility() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITaskUtility(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Delay addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Threading::Tasks::Task Delay(System::TimeSpan timeSpan, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Wait addr 0x0 size 0xffffffffffffffff virtual true final false
 void Wait(System::Threading::Tasks::Task task) ;

/// @brief Method Wait addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 T Wait(System::Threading::Tasks::Task_1<T> task) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T1,typename T2>
 System::Threading::Tasks::Task_1<T2> ContinueWith(System::Threading::Tasks::Task_1<T1> task, System::Func_2<System::Threading::Tasks::Task_1<T1>,System::Threading::Tasks::Task_1<T2>> continuation) ;

/// @brief Method Run addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Threading::Tasks::Task Run(System::Action action, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Run addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Threading::Tasks::Task Run(System::Func_1<System::Threading::Tasks::Task> func, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Run addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 System::Threading::Tasks::Task_1<T> Run(System::Func_1<T> func, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method CancellationTokenWithDelay addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Threading::CancellationToken CancellationTokenWithDelay(System::TimeSpan timeSpan) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core
NEED_NO_BOX(BGNet::Core::ITaskUtility);
DEFINE_IL2CPP_ARG_TYPE(BGNet::Core::ITaskUtility, "BGNet.Core", "ITaskUtility");
