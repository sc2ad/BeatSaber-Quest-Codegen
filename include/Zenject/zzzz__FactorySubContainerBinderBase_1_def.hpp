#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Type;
}
namespace Zenject {
template<typename TContract>
class Zenject__FactorySubContainerBinderBase_1____c__DisplayClass29_0;
}
namespace Zenject {
template<typename TContract>
class Zenject__FactorySubContainerBinderBase_1____c__DisplayClass23_0;
}
namespace Zenject {
template<typename TContract>
class Zenject__FactorySubContainerBinderBase_1____c__DisplayClass27_0;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class ScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace Zenject {
class NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace UnityEngine {
class Object;
}
namespace Zenject {
template<typename TContract>
class Zenject__FactorySubContainerBinderBase_1____c__DisplayClass25_0;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class SubContainerCreatorBindInfo;
}
namespace Zenject {
class GameObjectCreationParameters;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class FactorySubContainerBinderBase_1;
}
namespace Zenject {
template<typename TContract>
class Zenject__FactorySubContainerBinderBase_1____c__DisplayClass23_0;
}
namespace Zenject {
template<typename TContract>
class Zenject__FactorySubContainerBinderBase_1____c__DisplayClass25_0;
}
namespace Zenject {
template<typename TContract>
class Zenject__FactorySubContainerBinderBase_1____c__DisplayClass27_0;
}
namespace Zenject {
template<typename TContract>
class Zenject__FactorySubContainerBinderBase_1____c__DisplayClass29_0;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class FactorySubContainerBinderBase_1<TContract>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class Zenject__FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class Zenject__FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class Zenject__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class Zenject__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>;
}
// Type: ::<>c__DisplayClass23_0
// Type: ::<>c__DisplayClass25_0
// Type: ::<>c__DisplayClass27_0
// Type: ::<>c__DisplayClass29_0
// Type: Zenject::FactorySubContainerBinderBase`1
// Type: ::<>c__DisplayClass23_0
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10765))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10765), inst: 2 })
// CS Name: Zenject.FactorySubContainerBinderBase`1::<>c__DisplayClass23_0
class CORDL_TYPE Zenject__FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Zenject__FactorySubContainerBinderBase_1____c__DisplayClass23_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FactorySubContainerBinderBase_1____c__DisplayClass23_0", modifiers: " const&", def_value: None }]
constexpr Zenject__FactorySubContainerBinderBase_1____c__DisplayClass23_0(Zenject__FactorySubContainerBinderBase_1____c__DisplayClass23_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FactorySubContainerBinderBase_1____c__DisplayClass23_0", modifiers: "&&", def_value: None }]
constexpr Zenject__FactorySubContainerBinderBase_1____c__DisplayClass23_0(Zenject__FactorySubContainerBinderBase_1____c__DisplayClass23_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__FactorySubContainerBinderBase_1____c__DisplayClass23_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__FactorySubContainerBinderBase_1____c__DisplayClass23_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__FactorySubContainerBinderBase_1____c__DisplayClass23_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__FactorySubContainerBinderBase_1____c__DisplayClass23_0& operator=(Zenject__FactorySubContainerBinderBase_1____c__DisplayClass23_0&& o) noexcept = default;
  constexpr Zenject__FactorySubContainerBinderBase_1____c__DisplayClass23_0& operator=(Zenject__FactorySubContainerBinderBase_1____c__DisplayClass23_0 const& o) noexcept = default;
                


// Fields

 Zenject::FactorySubContainerBinderBase_1<TContract> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Zenject::FactorySubContainerBinderBase_1<TContract> value) ;

constexpr Zenject::FactorySubContainerBinderBase_1<TContract> __get___4__this() const;

 Zenject::SubContainerCreatorBindInfo __declspec(property(get=__get_subcontainerBindInfo, put=__set_subcontainerBindInfo))  subcontainerBindInfo;

constexpr void __set_subcontainerBindInfo(Zenject::SubContainerCreatorBindInfo value) ;

constexpr Zenject::SubContainerCreatorBindInfo __get_subcontainerBindInfo() const;

 System::Type __declspec(property(get=__get_installerType, put=__set_installerType))  installerType;

constexpr void __set_installerType(System::Type value) ;

constexpr System::Type __get_installerType() const;


// Methods

static Zenject::Zenject__FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <ByInstaller>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::IProvider _ByInstaller_b__0(Zenject::DiContainer container) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass25_0
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10766))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10766), inst: 2 })
// CS Name: Zenject.FactorySubContainerBinderBase`1::<>c__DisplayClass25_0
class CORDL_TYPE Zenject__FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Zenject__FactorySubContainerBinderBase_1____c__DisplayClass25_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FactorySubContainerBinderBase_1____c__DisplayClass25_0", modifiers: " const&", def_value: None }]
constexpr Zenject__FactorySubContainerBinderBase_1____c__DisplayClass25_0(Zenject__FactorySubContainerBinderBase_1____c__DisplayClass25_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FactorySubContainerBinderBase_1____c__DisplayClass25_0", modifiers: "&&", def_value: None }]
constexpr Zenject__FactorySubContainerBinderBase_1____c__DisplayClass25_0(Zenject__FactorySubContainerBinderBase_1____c__DisplayClass25_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__FactorySubContainerBinderBase_1____c__DisplayClass25_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__FactorySubContainerBinderBase_1____c__DisplayClass25_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__FactorySubContainerBinderBase_1____c__DisplayClass25_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__FactorySubContainerBinderBase_1____c__DisplayClass25_0& operator=(Zenject__FactorySubContainerBinderBase_1____c__DisplayClass25_0&& o) noexcept = default;
  constexpr Zenject__FactorySubContainerBinderBase_1____c__DisplayClass25_0& operator=(Zenject__FactorySubContainerBinderBase_1____c__DisplayClass25_0 const& o) noexcept = default;
                


// Fields

 Zenject::FactorySubContainerBinderBase_1<TContract> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Zenject::FactorySubContainerBinderBase_1<TContract> value) ;

constexpr Zenject::FactorySubContainerBinderBase_1<TContract> __get___4__this() const;

 Zenject::GameObjectCreationParameters __declspec(property(get=__get_gameObjectInfo, put=__set_gameObjectInfo))  gameObjectInfo;

constexpr void __set_gameObjectInfo(Zenject::GameObjectCreationParameters value) ;

constexpr Zenject::GameObjectCreationParameters __get_gameObjectInfo() const;

 System::Type __declspec(property(get=__get_installerType, put=__set_installerType))  installerType;

constexpr void __set_installerType(System::Type value) ;

constexpr System::Type __get_installerType() const;


// Methods

static Zenject::Zenject__FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <ByNewGameObjectInstaller>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::IProvider _ByNewGameObjectInstaller_b__0(Zenject::DiContainer container) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass27_0
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10767))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10767), inst: 2 })
// CS Name: Zenject.FactorySubContainerBinderBase`1::<>c__DisplayClass27_0
class CORDL_TYPE Zenject__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Zenject__FactorySubContainerBinderBase_1____c__DisplayClass27_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FactorySubContainerBinderBase_1____c__DisplayClass27_0", modifiers: " const&", def_value: None }]
constexpr Zenject__FactorySubContainerBinderBase_1____c__DisplayClass27_0(Zenject__FactorySubContainerBinderBase_1____c__DisplayClass27_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FactorySubContainerBinderBase_1____c__DisplayClass27_0", modifiers: "&&", def_value: None }]
constexpr Zenject__FactorySubContainerBinderBase_1____c__DisplayClass27_0(Zenject__FactorySubContainerBinderBase_1____c__DisplayClass27_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__FactorySubContainerBinderBase_1____c__DisplayClass27_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__FactorySubContainerBinderBase_1____c__DisplayClass27_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__FactorySubContainerBinderBase_1____c__DisplayClass27_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__FactorySubContainerBinderBase_1____c__DisplayClass27_0& operator=(Zenject__FactorySubContainerBinderBase_1____c__DisplayClass27_0&& o) noexcept = default;
  constexpr Zenject__FactorySubContainerBinderBase_1____c__DisplayClass27_0& operator=(Zenject__FactorySubContainerBinderBase_1____c__DisplayClass27_0 const& o) noexcept = default;
                


// Fields

 Zenject::FactorySubContainerBinderBase_1<TContract> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Zenject::FactorySubContainerBinderBase_1<TContract> value) ;

constexpr Zenject::FactorySubContainerBinderBase_1<TContract> __get___4__this() const;

 UnityEngine::Object __declspec(property(get=__get_prefab, put=__set_prefab))  prefab;

constexpr void __set_prefab(UnityEngine::Object value) ;

constexpr UnityEngine::Object __get_prefab() const;

 Zenject::GameObjectCreationParameters __declspec(property(get=__get_gameObjectInfo, put=__set_gameObjectInfo))  gameObjectInfo;

constexpr void __set_gameObjectInfo(Zenject::GameObjectCreationParameters value) ;

constexpr Zenject::GameObjectCreationParameters __get_gameObjectInfo() const;

 System::Type __declspec(property(get=__get_installerType, put=__set_installerType))  installerType;

constexpr void __set_installerType(System::Type value) ;

constexpr System::Type __get_installerType() const;


// Methods

static Zenject::Zenject__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <ByNewPrefabInstaller>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::IProvider _ByNewPrefabInstaller_b__0(Zenject::DiContainer container) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass29_0
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10768))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10768), inst: 2 })
// CS Name: Zenject.FactorySubContainerBinderBase`1::<>c__DisplayClass29_0
class CORDL_TYPE Zenject__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Zenject__FactorySubContainerBinderBase_1____c__DisplayClass29_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FactorySubContainerBinderBase_1____c__DisplayClass29_0", modifiers: " const&", def_value: None }]
constexpr Zenject__FactorySubContainerBinderBase_1____c__DisplayClass29_0(Zenject__FactorySubContainerBinderBase_1____c__DisplayClass29_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__FactorySubContainerBinderBase_1____c__DisplayClass29_0", modifiers: "&&", def_value: None }]
constexpr Zenject__FactorySubContainerBinderBase_1____c__DisplayClass29_0(Zenject__FactorySubContainerBinderBase_1____c__DisplayClass29_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__FactorySubContainerBinderBase_1____c__DisplayClass29_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__FactorySubContainerBinderBase_1____c__DisplayClass29_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__FactorySubContainerBinderBase_1____c__DisplayClass29_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__FactorySubContainerBinderBase_1____c__DisplayClass29_0& operator=(Zenject__FactorySubContainerBinderBase_1____c__DisplayClass29_0&& o) noexcept = default;
  constexpr Zenject__FactorySubContainerBinderBase_1____c__DisplayClass29_0& operator=(Zenject__FactorySubContainerBinderBase_1____c__DisplayClass29_0 const& o) noexcept = default;
                


// Fields

 Zenject::FactorySubContainerBinderBase_1<TContract> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Zenject::FactorySubContainerBinderBase_1<TContract> value) ;

constexpr Zenject::FactorySubContainerBinderBase_1<TContract> __get___4__this() const;

 ::StringW __declspec(property(get=__get_resourcePath, put=__set_resourcePath))  resourcePath;

constexpr void __set_resourcePath(::StringW value) ;

constexpr ::StringW __get_resourcePath() const;

 Zenject::GameObjectCreationParameters __declspec(property(get=__get_gameObjectInfo, put=__set_gameObjectInfo))  gameObjectInfo;

constexpr void __set_gameObjectInfo(Zenject::GameObjectCreationParameters value) ;

constexpr Zenject::GameObjectCreationParameters __get_gameObjectInfo() const;

 System::Type __declspec(property(get=__get_installerType, put=__set_installerType))  installerType;

constexpr void __set_installerType(System::Type value) ;

constexpr System::Type __get_installerType() const;


// Methods

static Zenject::Zenject__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <ByNewPrefabResourceInstaller>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::IProvider _ByNewPrefabResourceInstaller_b__0(Zenject::DiContainer container) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::FactorySubContainerBinderBase`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10769))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10769), inst: 2 })
// CS Name: Zenject.FactorySubContainerBinderBase`1
class CORDL_TYPE FactorySubContainerBinderBase_1<TContract> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass29_0 = Zenject::Zenject__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>;

using __c__DisplayClass27_0 = Zenject::Zenject__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>;

using __c__DisplayClass25_0 = Zenject::Zenject__FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract>;

using __c__DisplayClass23_0 = Zenject::Zenject__FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~FactorySubContainerBinderBase_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinderBase_1", modifiers: " const&", def_value: None }]
constexpr FactorySubContainerBinderBase_1(FactorySubContainerBinderBase_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinderBase_1", modifiers: "&&", def_value: None }]
constexpr FactorySubContainerBinderBase_1(FactorySubContainerBinderBase_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactorySubContainerBinderBase_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FactorySubContainerBinderBase_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactorySubContainerBinderBase_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactorySubContainerBinderBase_1& operator=(FactorySubContainerBinderBase_1&& o) noexcept = default;
  constexpr FactorySubContainerBinderBase_1& operator=(FactorySubContainerBinderBase_1 const& o) noexcept = default;
                


// Fields

 Zenject::DiContainer __declspec(property(get=__get__BindContainer_k__BackingField, put=__set__BindContainer_k__BackingField))  _BindContainer_k__BackingField;

constexpr void __set__BindContainer_k__BackingField(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__BindContainer_k__BackingField() const;

 Zenject::FactoryBindInfo __declspec(property(get=__get__FactoryBindInfo_k__BackingField, put=__set__FactoryBindInfo_k__BackingField))  _FactoryBindInfo_k__BackingField;

constexpr void __set__FactoryBindInfo_k__BackingField(Zenject::FactoryBindInfo value) ;

constexpr Zenject::FactoryBindInfo __get__FactoryBindInfo_k__BackingField() const;

 Zenject::BindInfo __declspec(property(get=__get__BindInfo_k__BackingField, put=__set__BindInfo_k__BackingField))  _BindInfo_k__BackingField;

constexpr void __set__BindInfo_k__BackingField(Zenject::BindInfo value) ;

constexpr Zenject::BindInfo __get__BindInfo_k__BackingField() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__SubIdentifier_k__BackingField, put=__set__SubIdentifier_k__BackingField))  _SubIdentifier_k__BackingField;

constexpr void __set__SubIdentifier_k__BackingField(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__SubIdentifier_k__BackingField() const;


// Properties

 Zenject::DiContainer __declspec(property(get=get_BindContainer, put=set_BindContainer))  BindContainer;

 Zenject::FactoryBindInfo __declspec(property(get=get_FactoryBindInfo, put=set_FactoryBindInfo))  FactoryBindInfo;

 System::Func_2<Zenject::DiContainer,Zenject::IProvider> __declspec(property(get=get_ProviderFunc, put=set_ProviderFunc))  ProviderFunc;

 Zenject::BindInfo __declspec(property(get=get_BindInfo, put=set_BindInfo))  BindInfo;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SubIdentifier, put=set_SubIdentifier))  SubIdentifier;

 System::Type __declspec(property(get=get_ContractType))  ContractType;


// Methods

static Zenject::FactorySubContainerBinderBase_1<TContract> New_ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo, ::bs_hook::Il2CppWrapperType subIdentifier) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo, ::bs_hook::Il2CppWrapperType subIdentifier) ;

/// @brief Method get_BindContainer addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::DiContainer get_BindContainer() ;

/// @brief Method set_BindContainer addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_BindContainer(Zenject::DiContainer value) ;

/// @brief Method get_FactoryBindInfo addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::FactoryBindInfo get_FactoryBindInfo() ;

/// @brief Method set_FactoryBindInfo addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_FactoryBindInfo(Zenject::FactoryBindInfo value) ;

/// @brief Method get_ProviderFunc addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Func_2<Zenject::DiContainer,Zenject::IProvider> get_ProviderFunc() ;

/// @brief Method set_ProviderFunc addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_ProviderFunc(System::Func_2<Zenject::DiContainer,Zenject::IProvider> value) ;

/// @brief Method get_BindInfo addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::BindInfo get_BindInfo() ;

/// @brief Method set_BindInfo addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_BindInfo(Zenject::BindInfo value) ;

/// @brief Method get_SubIdentifier addr 0x0 size 0xffffffffffffffff virtual false final false
 ::bs_hook::Il2CppWrapperType get_SubIdentifier() ;

/// @brief Method set_SubIdentifier addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_SubIdentifier(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_ContractType addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Type get_ContractType() ;

/// @brief Method ByInstaller addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstaller>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder ByInstaller() ;

/// @brief Method ByInstaller addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder ByInstaller(System::Type installerType) ;

/// @brief Method ByNewGameObjectInstaller addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstaller>
 Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewGameObjectInstaller() ;

/// @brief Method ByNewGameObjectInstaller addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewGameObjectInstaller(System::Type installerType) ;

/// @brief Method ByNewPrefabInstaller addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstaller>
 Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabInstaller(UnityEngine::Object prefab) ;

/// @brief Method ByNewPrefabInstaller addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabInstaller(UnityEngine::Object prefab, System::Type installerType) ;

/// @brief Method ByNewPrefabResourceInstaller addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstaller>
 Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabResourceInstaller(::StringW resourcePath) ;

/// @brief Method ByNewPrefabResourceInstaller addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabResourceInstaller(::StringW resourcePath, System::Type installerType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactorySubContainerBinderBase_1, "Zenject", "FactorySubContainerBinderBase`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__FactorySubContainerBinderBase_1____c__DisplayClass23_0, "Zenject", "FactorySubContainerBinderBase`1/<>c__DisplayClass23_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__FactorySubContainerBinderBase_1____c__DisplayClass25_0, "Zenject", "FactorySubContainerBinderBase`1/<>c__DisplayClass25_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__FactorySubContainerBinderBase_1____c__DisplayClass27_0, "Zenject", "FactorySubContainerBinderBase`1/<>c__DisplayClass27_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__FactorySubContainerBinderBase_1____c__DisplayClass29_0, "Zenject", "FactorySubContainerBinderBase`1/<>c__DisplayClass29_0");
