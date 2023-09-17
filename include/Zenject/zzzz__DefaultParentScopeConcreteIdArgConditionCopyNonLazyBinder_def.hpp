#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Zenject {
class SubContainerCreatorBindInfo;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class ScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Forward declare root types
namespace Zenject {
class DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Type: Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10868))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10644))
// CS Name: Zenject.DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
class CORDL_TYPE DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder : public ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: " const&", def_value: None }]
constexpr DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder(DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: "&&", def_value: None }]
constexpr DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder(DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder(void* ptr) noexcept : ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder(ptr) {
}


  constexpr DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder& operator=(DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder&& o) noexcept = default;
  constexpr DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder& operator=(DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder const& o) noexcept = default;
                


// Fields

 ::Zenject::SubContainerCreatorBindInfo __declspec(property(get=__get__SubContainerCreatorBindInfo_k__BackingField, put=__set__SubContainerCreatorBindInfo_k__BackingField))  _SubContainerCreatorBindInfo_k__BackingField;

constexpr void __set__SubContainerCreatorBindInfo_k__BackingField(::Zenject::SubContainerCreatorBindInfo value) ;

constexpr ::Zenject::SubContainerCreatorBindInfo __get__SubContainerCreatorBindInfo_k__BackingField() const;


// Properties

 ::Zenject::SubContainerCreatorBindInfo __declspec(property(get=get_SubContainerCreatorBindInfo, put=set_SubContainerCreatorBindInfo))  SubContainerCreatorBindInfo;


// Methods

// Ctor Parameters [CppParam { name: "subContainerBindInfo", ty: "::Zenject::SubContainerCreatorBindInfo", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "::Zenject::BindInfo", modifiers: "", def_value: None }]
explicit DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder(::Zenject::SubContainerCreatorBindInfo subContainerBindInfo, ::Zenject::BindInfo bindInfo) ;

/// @brief Method .ctor addr 0x2d52580 size 0x2c virtual false final false
 void _ctor(::Zenject::SubContainerCreatorBindInfo subContainerBindInfo, ::Zenject::BindInfo bindInfo) ;

/// @brief Method get_SubContainerCreatorBindInfo addr 0x2d525ac size 0x8 virtual false final false
 ::Zenject::SubContainerCreatorBindInfo get_SubContainerCreatorBindInfo() ;

/// @brief Method set_SubContainerCreatorBindInfo addr 0x2d525b4 size 0x8 virtual false final false
 void set_SubContainerCreatorBindInfo(::Zenject::SubContainerCreatorBindInfo value) ;

/// @brief Method WithDefaultGameObjectParent addr 0x2d525bc size 0x1c virtual false final false
 ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder WithDefaultGameObjectParent(::StringW defaultParentName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder, "Zenject", "DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder");
