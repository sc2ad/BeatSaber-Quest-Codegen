#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace GlobalNamespace {
class IStandaloneThreadRunnable;
}
// Forward declare root types
namespace GlobalNamespace {
class IStandaloneThreadRunner;
}
// Type: ::IStandaloneThreadRunner
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12760))
// CS Name: IStandaloneThreadRunner
class CORDL_TYPE IStandaloneThreadRunner : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IStandaloneThreadRunner() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IStandaloneThreadRunner(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Run addr 0x0 size 0xffffffffffffffff virtual true final false
 void Run(::GlobalNamespace::IStandaloneThreadRunnable runnable) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IStandaloneThreadRunner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IStandaloneThreadRunner, "", "IStandaloneThreadRunner");
