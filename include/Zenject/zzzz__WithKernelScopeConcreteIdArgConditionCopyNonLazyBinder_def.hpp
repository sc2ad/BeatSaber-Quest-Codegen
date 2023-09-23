#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
namespace Zenject {
class ScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace Zenject {
class SubContainerCreatorBindInfo;
}
namespace Zenject {
class BindInfo;
}
// Forward declare root types
namespace Zenject {
class WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Type: Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10868))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10883))
// CS Name: Zenject.WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder
class CORDL_TYPE WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder : public Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: " const&", def_value: None }]
constexpr WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder(WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: "&&", def_value: None }]
constexpr WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder(WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder(void* ptr) noexcept : Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder(ptr) {
}


  constexpr WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder& operator=(WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder&& o) noexcept = default;
  constexpr WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder& operator=(WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder const& o) noexcept = default;
                


// Fields

 Zenject::SubContainerCreatorBindInfo __declspec(property(get=__get__subContainerBindInfo, put=__set__subContainerBindInfo))  _subContainerBindInfo;

constexpr void __set__subContainerBindInfo(Zenject::SubContainerCreatorBindInfo value) ;

constexpr Zenject::SubContainerCreatorBindInfo __get__subContainerBindInfo() const;


// Methods

// Ctor Parameters [CppParam { name: "subContainerBindInfo", ty: "Zenject::SubContainerCreatorBindInfo", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }]
explicit WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder(Zenject::SubContainerCreatorBindInfo subContainerBindInfo, Zenject::BindInfo bindInfo) ;

/// @brief Method .ctor addr 0x2d65434 size 0x2c virtual false final false
 void _ctor(Zenject::SubContainerCreatorBindInfo subContainerBindInfo, Zenject::BindInfo bindInfo) ;

/// @brief Method WithKernel addr 0x2d65460 size 0x20 virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder WithKernel() ;

/// @brief Method WithKernel addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TKernel>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder WithKernel() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder, "Zenject", "WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder");
