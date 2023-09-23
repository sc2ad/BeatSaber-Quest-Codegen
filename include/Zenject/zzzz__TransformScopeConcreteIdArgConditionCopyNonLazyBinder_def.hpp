#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
class Transform;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
class InjectContext;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class ScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Forward declare root types
namespace Zenject {
class TransformScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Type: Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10868))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10861))
// CS Name: Zenject.TransformScopeConcreteIdArgConditionCopyNonLazyBinder
class CORDL_TYPE TransformScopeConcreteIdArgConditionCopyNonLazyBinder : public Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~TransformScopeConcreteIdArgConditionCopyNonLazyBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "TransformScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: " const&", def_value: None }]
constexpr TransformScopeConcreteIdArgConditionCopyNonLazyBinder(TransformScopeConcreteIdArgConditionCopyNonLazyBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TransformScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: "&&", def_value: None }]
constexpr TransformScopeConcreteIdArgConditionCopyNonLazyBinder(TransformScopeConcreteIdArgConditionCopyNonLazyBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TransformScopeConcreteIdArgConditionCopyNonLazyBinder(void* ptr) noexcept : Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder(ptr) {
}


  constexpr TransformScopeConcreteIdArgConditionCopyNonLazyBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TransformScopeConcreteIdArgConditionCopyNonLazyBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TransformScopeConcreteIdArgConditionCopyNonLazyBinder& operator=(TransformScopeConcreteIdArgConditionCopyNonLazyBinder&& o) noexcept = default;
  constexpr TransformScopeConcreteIdArgConditionCopyNonLazyBinder& operator=(TransformScopeConcreteIdArgConditionCopyNonLazyBinder const& o) noexcept = default;
                


// Fields

 Zenject::GameObjectCreationParameters __declspec(property(get=__get__GameObjectInfo_k__BackingField, put=__set__GameObjectInfo_k__BackingField))  _GameObjectInfo_k__BackingField;

constexpr void __set__GameObjectInfo_k__BackingField(Zenject::GameObjectCreationParameters value) ;

constexpr Zenject::GameObjectCreationParameters __get__GameObjectInfo_k__BackingField() const;


// Properties

 Zenject::GameObjectCreationParameters __declspec(property(get=get_GameObjectInfo, put=set_GameObjectInfo))  GameObjectInfo;


// Methods

// Ctor Parameters [CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "gameObjectInfo", ty: "Zenject::GameObjectCreationParameters", modifiers: "", def_value: None }]
explicit TransformScopeConcreteIdArgConditionCopyNonLazyBinder(Zenject::BindInfo bindInfo, Zenject::GameObjectCreationParameters gameObjectInfo) ;

/// @brief Method .ctor addr 0x2d60b8c size 0x28 virtual false final false
 void _ctor(Zenject::BindInfo bindInfo, Zenject::GameObjectCreationParameters gameObjectInfo) ;

/// @brief Method get_GameObjectInfo addr 0x2d60bd0 size 0x8 virtual false final false
 Zenject::GameObjectCreationParameters get_GameObjectInfo() ;

/// @brief Method set_GameObjectInfo addr 0x2d60bd8 size 0x8 virtual false final false
 void set_GameObjectInfo(Zenject::GameObjectCreationParameters value) ;

/// @brief Method UnderTransform addr 0x2d60be0 size 0x1c virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder UnderTransform(UnityEngine::Transform parent) ;

/// @brief Method UnderTransform addr 0x2d60bfc size 0x1c virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder UnderTransform(System::Func_2<Zenject::InjectContext,UnityEngine::Transform> parentGetter) ;

/// @brief Method UnderTransformGroup addr 0x2d60c18 size 0x1c virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder UnderTransformGroup(::StringW transformGroupname) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder, "Zenject", "TransformScopeConcreteIdArgConditionCopyNonLazyBinder");
