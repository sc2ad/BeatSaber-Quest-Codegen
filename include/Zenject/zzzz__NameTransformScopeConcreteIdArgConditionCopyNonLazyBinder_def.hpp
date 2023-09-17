#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__TransformScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class TransformScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Forward declare root types
namespace Zenject {
class NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Type: Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10861))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10860))
// CS Name: Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder
class CORDL_TYPE NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder : public ::Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: " const&", def_value: None }]
constexpr NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder(NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: "&&", def_value: None }]
constexpr NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder(NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder(void* ptr) noexcept : ::Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder(ptr) {
}


  constexpr NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder& operator=(NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder&& o) noexcept = default;
  constexpr NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder& operator=(NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindInfo", ty: "::Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "gameObjectInfo", ty: "::Zenject::GameObjectCreationParameters", modifiers: "", def_value: None }]
explicit NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder(::Zenject::BindInfo bindInfo, ::Zenject::GameObjectCreationParameters gameObjectInfo) ;

/// @brief Method .ctor addr 0x2d52f14 size 0x28 virtual false final false
 void _ctor(::Zenject::BindInfo bindInfo, ::Zenject::GameObjectCreationParameters gameObjectInfo) ;

/// @brief Method WithGameObjectName addr 0x2d60bb4 size 0x1c virtual false final false
 ::Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder WithGameObjectName(::StringW gameObjectName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder, "Zenject", "NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder");
