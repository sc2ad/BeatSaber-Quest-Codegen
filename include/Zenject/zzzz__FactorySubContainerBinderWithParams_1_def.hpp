#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__FactorySubContainerBinderBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Type;
}
namespace UnityEngine {
class Object;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class GameObjectCreationParameters;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class FactorySubContainerBinderWithParams_1;
}
namespace Zenject {
template<typename TContract>
class Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass4_0;
}
namespace Zenject {
template<typename TContract>
class Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass8_0;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class FactorySubContainerBinderWithParams_1<TContract>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass4_0<TContract>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass8_0<TContract>;
}
// Type: ::<>c__DisplayClass4_0
// Type: ::<>c__DisplayClass8_0
// Type: Zenject::FactorySubContainerBinderWithParams`1
// Type: ::<>c__DisplayClass4_0
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10770))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10770), inst: 2 })
// CS Name: Zenject.FactorySubContainerBinderWithParams`1::<>c__DisplayClass4_0
class CORDL_TYPE Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass4_0<TContract> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass4_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass4_0", modifiers: " const&", def_value: None }]
constexpr Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass4_0(Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass4_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
constexpr Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass4_0(Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass4_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass4_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass4_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass4_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass4_0& operator=(Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass4_0&& o) noexcept = default;
  constexpr Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass4_0& operator=(Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass4_0 const& o) noexcept = default;
                


// Fields

 Zenject::FactorySubContainerBinderWithParams_1<TContract> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Zenject::FactorySubContainerBinderWithParams_1<TContract> value) ;

constexpr Zenject::FactorySubContainerBinderWithParams_1<TContract> __get___4__this() const;

 System::Type __declspec(property(get=__get_installerType, put=__set_installerType))  installerType;

constexpr void __set_installerType(System::Type value) ;

constexpr System::Type __get_installerType() const;

 UnityEngine::Object __declspec(property(get=__get_prefab, put=__set_prefab))  prefab;

constexpr void __set_prefab(UnityEngine::Object value) ;

constexpr UnityEngine::Object __get_prefab() const;

 Zenject::GameObjectCreationParameters __declspec(property(get=__get_gameObjectInfo, put=__set_gameObjectInfo))  gameObjectInfo;

constexpr void __set_gameObjectInfo(Zenject::GameObjectCreationParameters value) ;

constexpr Zenject::GameObjectCreationParameters __get_gameObjectInfo() const;


// Methods

// Ctor Parameters []
explicit Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass4_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <ByNewContextPrefab>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::IProvider _ByNewContextPrefab_b__0(Zenject::DiContainer container) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass8_0
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10771))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10771), inst: 2 })
// CS Name: Zenject.FactorySubContainerBinderWithParams`1::<>c__DisplayClass8_0
class CORDL_TYPE Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass8_0<TContract> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass8_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass8_0", modifiers: " const&", def_value: None }]
constexpr Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass8_0(Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass8_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
constexpr Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass8_0(Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass8_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass8_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass8_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass8_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass8_0& operator=(Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass8_0&& o) noexcept = default;
  constexpr Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass8_0& operator=(Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass8_0 const& o) noexcept = default;
                


// Fields

 Zenject::FactorySubContainerBinderWithParams_1<TContract> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Zenject::FactorySubContainerBinderWithParams_1<TContract> value) ;

constexpr Zenject::FactorySubContainerBinderWithParams_1<TContract> __get___4__this() const;

 System::Type __declspec(property(get=__get_installerType, put=__set_installerType))  installerType;

constexpr void __set_installerType(System::Type value) ;

constexpr System::Type __get_installerType() const;

 ::StringW __declspec(property(get=__get_resourcePath, put=__set_resourcePath))  resourcePath;

constexpr void __set_resourcePath(::StringW value) ;

constexpr ::StringW __get_resourcePath() const;

 Zenject::GameObjectCreationParameters __declspec(property(get=__get_gameObjectInfo, put=__set_gameObjectInfo))  gameObjectInfo;

constexpr void __set_gameObjectInfo(Zenject::GameObjectCreationParameters value) ;

constexpr Zenject::GameObjectCreationParameters __get_gameObjectInfo() const;


// Methods

// Ctor Parameters []
explicit Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass8_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <ByNewContextPrefabResource>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::IProvider _ByNewContextPrefabResource_b__0(Zenject::DiContainer container) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::FactorySubContainerBinderWithParams`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10769)), TypeDefinitionIndex(TypeDefinitionIndex(10772)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10769), inst: 1766 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10772), inst: 2 })
// CS Name: Zenject.FactorySubContainerBinderWithParams`1
class CORDL_TYPE FactorySubContainerBinderWithParams_1<TContract> : public Zenject::FactorySubContainerBinderBase_1<TContract> {
public:
// Declarations
using __c__DisplayClass8_0 = Zenject::Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass8_0<TContract>;

using __c__DisplayClass4_0 = Zenject::Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass4_0<TContract>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~FactorySubContainerBinderWithParams_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinderWithParams_1", modifiers: " const&", def_value: None }]
constexpr FactorySubContainerBinderWithParams_1(FactorySubContainerBinderWithParams_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinderWithParams_1", modifiers: "&&", def_value: None }]
constexpr FactorySubContainerBinderWithParams_1(FactorySubContainerBinderWithParams_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactorySubContainerBinderWithParams_1(void* ptr) noexcept : Zenject::FactorySubContainerBinderBase_1<TContract>(ptr) {
}


  constexpr FactorySubContainerBinderWithParams_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactorySubContainerBinderWithParams_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactorySubContainerBinderWithParams_1& operator=(FactorySubContainerBinderWithParams_1&& o) noexcept = default;
  constexpr FactorySubContainerBinderWithParams_1& operator=(FactorySubContainerBinderWithParams_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindContainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "Zenject::FactoryBindInfo", modifiers: "", def_value: None }, CppParam { name: "subIdentifier", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit FactorySubContainerBinderWithParams_1(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo, ::bs_hook::Il2CppWrapperType subIdentifier) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo, ::bs_hook::Il2CppWrapperType subIdentifier) ;

/// @brief Method ByNewPrefab addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefab(System::Type installerType, UnityEngine::Object prefab) ;

/// @brief Method ByNewPrefab addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstaller>
 Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefab(UnityEngine::Object prefab) ;

/// @brief Method ByNewContextPrefab addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstaller>
 Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewContextPrefab(UnityEngine::Object prefab) ;

/// @brief Method ByNewContextPrefab addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewContextPrefab(System::Type installerType, UnityEngine::Object prefab) ;

/// @brief Method ByNewPrefabResource addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstaller>
 Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabResource(::StringW resourcePath) ;

/// @brief Method ByNewPrefabResource addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabResource(System::Type installerType, ::StringW resourcePath) ;

/// @brief Method ByNewContextPrefabResource addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstaller>
 Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewContextPrefabResource(::StringW resourcePath) ;

/// @brief Method ByNewContextPrefabResource addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewContextPrefabResource(System::Type installerType, ::StringW resourcePath) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactorySubContainerBinderWithParams_1, "Zenject", "FactorySubContainerBinderWithParams`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass4_0, "Zenject", "FactorySubContainerBinderWithParams`1/<>c__DisplayClass4_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__FactorySubContainerBinderWithParams_1____c__DisplayClass8_0, "Zenject", "FactorySubContainerBinderWithParams`1/<>c__DisplayClass8_0");
