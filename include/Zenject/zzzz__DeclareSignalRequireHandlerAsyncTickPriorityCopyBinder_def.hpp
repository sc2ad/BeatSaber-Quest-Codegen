#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__DeclareSignalAsyncTickPriorityCopyBinder_def.hpp"
namespace {
namespace Zenject {
class SignalDeclarationBindInfo;
}
namespace Zenject {
class DeclareSignalAsyncTickPriorityCopyBinder;
}
// Forward declare root types
namespace Zenject {
class DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder;
}
// Type: Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10592))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10594))
// CS Name: Zenject.DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder
class CORDL_TYPE DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder : public ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder", modifiers: " const&", def_value: None }]
constexpr DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder(DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder", modifiers: "&&", def_value: None }]
constexpr DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder(DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder(void* ptr) noexcept : ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder(ptr) {
}


  constexpr DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder& operator=(DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder&& o) noexcept = default;
  constexpr DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder& operator=(DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "signalBindInfo", ty: "::Zenject::SignalDeclarationBindInfo", modifiers: "", def_value: None }]
explicit DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder(::Zenject::SignalDeclarationBindInfo signalBindInfo) ;

/// @brief Method .ctor addr 0x2d48e74 size 0x24 virtual false final false
 void _ctor(::Zenject::SignalDeclarationBindInfo signalBindInfo) ;

/// @brief Method RequireSubscriber addr 0x2d48eb4 size 0x20 virtual false final false
 ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder RequireSubscriber() ;

/// @brief Method OptionalSubscriber addr 0x2d48ed4 size 0x1c virtual false final false
 ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder OptionalSubscriber() ;

/// @brief Method OptionalSubscriberWithWarning addr 0x2d48ef0 size 0x20 virtual false final false
 ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder OptionalSubscriberWithWarning() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder, "Zenject", "DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder");
