#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class ScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Forward declare root types
namespace Zenject {
class IdScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Type: Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10868))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10863))
// CS Name: Zenject.IdScopeConcreteIdArgConditionCopyNonLazyBinder
class CORDL_TYPE IdScopeConcreteIdArgConditionCopyNonLazyBinder : public Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~IdScopeConcreteIdArgConditionCopyNonLazyBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "IdScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: " const&", def_value: None }]
constexpr IdScopeConcreteIdArgConditionCopyNonLazyBinder(IdScopeConcreteIdArgConditionCopyNonLazyBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IdScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: "&&", def_value: None }]
constexpr IdScopeConcreteIdArgConditionCopyNonLazyBinder(IdScopeConcreteIdArgConditionCopyNonLazyBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IdScopeConcreteIdArgConditionCopyNonLazyBinder(void* ptr) noexcept : Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder(ptr) {
}


  constexpr IdScopeConcreteIdArgConditionCopyNonLazyBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IdScopeConcreteIdArgConditionCopyNonLazyBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IdScopeConcreteIdArgConditionCopyNonLazyBinder& operator=(IdScopeConcreteIdArgConditionCopyNonLazyBinder&& o) noexcept = default;
  constexpr IdScopeConcreteIdArgConditionCopyNonLazyBinder& operator=(IdScopeConcreteIdArgConditionCopyNonLazyBinder const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }]
explicit IdScopeConcreteIdArgConditionCopyNonLazyBinder(Zenject::BindInfo bindInfo) ;

/// @brief Method .ctor addr 0x2d61c78 size 0x8 virtual false final false
 void _ctor(Zenject::BindInfo bindInfo) ;

/// @brief Method WithId addr 0x2d61c88 size 0x1c virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder WithId(::bs_hook::Il2CppWrapperType identifier) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder, "Zenject", "IdScopeConcreteIdArgConditionCopyNonLazyBinder");
