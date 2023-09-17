#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class IStandaloneThreadRunner;
}
namespace System {
class Action;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IStandaloneMonobehavior;
}
// Type: ::IStandaloneMonobehavior
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12759))
// CS Name: IStandaloneMonobehavior
class CORDL_TYPE IStandaloneMonobehavior : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IStandaloneMonobehavior() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IStandaloneMonobehavior(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Dispatch addr 0x0 size 0xffffffffffffffff virtual true final false
 void Dispatch(::System::Action action) ;

/// @brief Method DispatchAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Task DispatchAsync(::System::Func_1<::System::Threading::Tasks::Task> action) ;

/// @brief Method RunAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Task RunAsync(::GlobalNamespace::IStandaloneThreadRunner runner, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Stop addr 0x0 size 0xffffffffffffffff virtual true final false
 void Stop() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IStandaloneMonobehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IStandaloneMonobehavior, "", "IStandaloneMonobehavior");
