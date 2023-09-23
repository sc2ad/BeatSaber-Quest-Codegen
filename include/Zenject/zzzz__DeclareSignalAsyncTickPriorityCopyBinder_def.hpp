#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__SignalTickPriorityCopyBinder_def.hpp"
namespace Zenject {
class SignalTickPriorityCopyBinder;
}
namespace Zenject {
class SignalCopyBinder;
}
namespace Zenject {
class SignalDeclarationBindInfo;
}
// Forward declare root types
namespace Zenject {
class DeclareSignalAsyncTickPriorityCopyBinder;
}
// Type: Zenject::DeclareSignalAsyncTickPriorityCopyBinder
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10599))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10592))
// CS Name: Zenject.DeclareSignalAsyncTickPriorityCopyBinder
class CORDL_TYPE DeclareSignalAsyncTickPriorityCopyBinder : public Zenject::SignalTickPriorityCopyBinder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DeclareSignalAsyncTickPriorityCopyBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "DeclareSignalAsyncTickPriorityCopyBinder", modifiers: " const&", def_value: None }]
constexpr DeclareSignalAsyncTickPriorityCopyBinder(DeclareSignalAsyncTickPriorityCopyBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DeclareSignalAsyncTickPriorityCopyBinder", modifiers: "&&", def_value: None }]
constexpr DeclareSignalAsyncTickPriorityCopyBinder(DeclareSignalAsyncTickPriorityCopyBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DeclareSignalAsyncTickPriorityCopyBinder(void* ptr) noexcept : Zenject::SignalTickPriorityCopyBinder(ptr) {
}


  constexpr DeclareSignalAsyncTickPriorityCopyBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DeclareSignalAsyncTickPriorityCopyBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DeclareSignalAsyncTickPriorityCopyBinder& operator=(DeclareSignalAsyncTickPriorityCopyBinder&& o) noexcept = default;
  constexpr DeclareSignalAsyncTickPriorityCopyBinder& operator=(DeclareSignalAsyncTickPriorityCopyBinder const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "signalBindInfo", ty: "Zenject::SignalDeclarationBindInfo", modifiers: "", def_value: None }]
explicit DeclareSignalAsyncTickPriorityCopyBinder(Zenject::SignalDeclarationBindInfo signalBindInfo) ;

/// @brief Method .ctor addr 0x2d48dcc size 0x24 virtual false final false
 void _ctor(Zenject::SignalDeclarationBindInfo signalBindInfo) ;

/// @brief Method RunAsync addr 0x2d48e14 size 0x20 virtual false final false
 Zenject::SignalTickPriorityCopyBinder RunAsync() ;

/// @brief Method RunSync addr 0x2d48e34 size 0x1c virtual false final false
 Zenject::SignalCopyBinder RunSync() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::DeclareSignalAsyncTickPriorityCopyBinder);
DEFINE_IL2CPP_ARG_TYPE(Zenject::DeclareSignalAsyncTickPriorityCopyBinder, "Zenject", "DeclareSignalAsyncTickPriorityCopyBinder");
