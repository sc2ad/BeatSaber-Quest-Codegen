#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
namespace {
namespace Zenject {
class DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace Zenject {
class SubContainerCreatorBindInfo;
}
namespace Zenject {
class BindInfo;
}
// Forward declare root types
namespace Zenject {
class WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Type: Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10644))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10882))
// CS Name: Zenject.WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
class CORDL_TYPE WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder : public ::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: " const&", def_value: None }]
constexpr WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder(WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: "&&", def_value: None }]
constexpr WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder(WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder(void* ptr) noexcept : ::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder(ptr) {
}


  constexpr WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder& operator=(WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder&& o) noexcept = default;
  constexpr WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder& operator=(WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "subContainerBindInfo", ty: "::Zenject::SubContainerCreatorBindInfo", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "::Zenject::BindInfo", modifiers: "", def_value: None }]
explicit WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder(::Zenject::SubContainerCreatorBindInfo subContainerBindInfo, ::Zenject::BindInfo bindInfo) ;

/// @brief Method .ctor addr 0x2d62324 size 0x8 virtual false final false
 void _ctor(::Zenject::SubContainerCreatorBindInfo subContainerBindInfo, ::Zenject::BindInfo bindInfo) ;

/// @brief Method WithKernel addr 0x2d65414 size 0x20 virtual false final false
 ::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder WithKernel() ;

/// @brief Method WithKernel addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TKernel>
 ::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder WithKernel() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder, "Zenject", "WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder");
