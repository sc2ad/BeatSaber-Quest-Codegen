#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine {
class Object;
}
namespace Zenject {
class Zenject__PrefabBindingFinalizer____c__DisplayClass6_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class Zenject__PrefabBindingFinalizer____c__DisplayClass5_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace Zenject {
class IPrefabInstantiator;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class Zenject__PrefabBindingFinalizer____c__DisplayClass6_0;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class Zenject__PrefabBindingFinalizer____c__DisplayClass5_0;
}
namespace System {
class Type;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class PrefabInstantiatorCached;
}
// Forward declare root types
namespace Zenject {
class PrefabBindingFinalizer;
}
namespace Zenject {
class Zenject__PrefabBindingFinalizer____c__DisplayClass5_0;
}
namespace Zenject {
class Zenject__PrefabBindingFinalizer____c__DisplayClass5_1;
}
namespace Zenject {
class Zenject__PrefabBindingFinalizer____c__DisplayClass6_0;
}
namespace Zenject {
class Zenject__PrefabBindingFinalizer____c__DisplayClass6_1;
}
// Type: ::<>c__DisplayClass5_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10897))
// CS Name: Zenject.PrefabBindingFinalizer::<>c__DisplayClass5_0
class CORDL_TYPE Zenject__PrefabBindingFinalizer____c__DisplayClass5_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Zenject__PrefabBindingFinalizer____c__DisplayClass5_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__PrefabBindingFinalizer____c__DisplayClass5_0", modifiers: " const&", def_value: None }]
constexpr Zenject__PrefabBindingFinalizer____c__DisplayClass5_0(Zenject__PrefabBindingFinalizer____c__DisplayClass5_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__PrefabBindingFinalizer____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
constexpr Zenject__PrefabBindingFinalizer____c__DisplayClass5_0(Zenject__PrefabBindingFinalizer____c__DisplayClass5_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__PrefabBindingFinalizer____c__DisplayClass5_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__PrefabBindingFinalizer____c__DisplayClass5_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__PrefabBindingFinalizer____c__DisplayClass5_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__PrefabBindingFinalizer____c__DisplayClass5_0& operator=(Zenject__PrefabBindingFinalizer____c__DisplayClass5_0&& o) noexcept = default;
  constexpr Zenject__PrefabBindingFinalizer____c__DisplayClass5_0& operator=(Zenject__PrefabBindingFinalizer____c__DisplayClass5_0 const& o) noexcept = default;
                


// Fields

 Zenject::PrefabBindingFinalizer __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Zenject::PrefabBindingFinalizer value) ;

constexpr Zenject::PrefabBindingFinalizer __get___4__this() const;

 Zenject::DiContainer __declspec(property(get=__get_container, put=__set_container))  container;

constexpr void __set_container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get_container() const;

 System::Collections::Generic::List_1<System::Type> __declspec(property(get=__get_concreteTypes, put=__set_concreteTypes))  concreteTypes;

constexpr void __set_concreteTypes(System::Collections::Generic::List_1<System::Type> value) ;

constexpr System::Collections::Generic::List_1<System::Type> __get_concreteTypes() const;


// Methods

static Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0 New_ctor() ;

/// @brief Method .ctor addr 0x2d69178 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <FinalizeBindingConcrete>b__0 addr 0x2d69b94 size 0x118 virtual false final false
 Zenject::IProvider _FinalizeBindingConcrete_b__0(Zenject::DiContainer _, System::Type concreteType) ;

/// @brief Method __zenCreate addr 0x2d69cac size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d69d08 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass5_1
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10898))
// CS Name: Zenject.PrefabBindingFinalizer::<>c__DisplayClass5_1
class CORDL_TYPE Zenject__PrefabBindingFinalizer____c__DisplayClass5_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__PrefabBindingFinalizer____c__DisplayClass5_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__PrefabBindingFinalizer____c__DisplayClass5_1", modifiers: " const&", def_value: None }]
constexpr Zenject__PrefabBindingFinalizer____c__DisplayClass5_1(Zenject__PrefabBindingFinalizer____c__DisplayClass5_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__PrefabBindingFinalizer____c__DisplayClass5_1", modifiers: "&&", def_value: None }]
constexpr Zenject__PrefabBindingFinalizer____c__DisplayClass5_1(Zenject__PrefabBindingFinalizer____c__DisplayClass5_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__PrefabBindingFinalizer____c__DisplayClass5_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__PrefabBindingFinalizer____c__DisplayClass5_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__PrefabBindingFinalizer____c__DisplayClass5_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__PrefabBindingFinalizer____c__DisplayClass5_1& operator=(Zenject__PrefabBindingFinalizer____c__DisplayClass5_1&& o) noexcept = default;
  constexpr Zenject__PrefabBindingFinalizer____c__DisplayClass5_1& operator=(Zenject__PrefabBindingFinalizer____c__DisplayClass5_1 const& o) noexcept = default;
                


// Fields

 Zenject::PrefabInstantiatorCached __declspec(property(get=__get_prefabCreator, put=__set_prefabCreator))  prefabCreator;

constexpr void __set_prefabCreator(Zenject::PrefabInstantiatorCached value) ;

constexpr Zenject::PrefabInstantiatorCached __get_prefabCreator() const;

 Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0 __declspec(property(get=__get_CS$__8__locals1, put=__set_CS$__8__locals1))  CS$__8__locals1;

constexpr void __set_CS$__8__locals1(Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0 value) ;

constexpr Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0 __get_CS$__8__locals1() const;


// Methods

static Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1 New_ctor() ;

/// @brief Method .ctor addr 0x2d69968 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <FinalizeBindingConcrete>b__1 addr 0x2d69ec8 size 0x40 virtual false final false
 Zenject::IProvider _FinalizeBindingConcrete_b__1(Zenject::DiContainer _, System::Type concreteType) ;

/// @brief Method __zenCreate addr 0x2d69f08 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d69f64 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass6_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10899))
// CS Name: Zenject.PrefabBindingFinalizer::<>c__DisplayClass6_0
class CORDL_TYPE Zenject__PrefabBindingFinalizer____c__DisplayClass6_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__PrefabBindingFinalizer____c__DisplayClass6_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__PrefabBindingFinalizer____c__DisplayClass6_0", modifiers: " const&", def_value: None }]
constexpr Zenject__PrefabBindingFinalizer____c__DisplayClass6_0(Zenject__PrefabBindingFinalizer____c__DisplayClass6_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__PrefabBindingFinalizer____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
constexpr Zenject__PrefabBindingFinalizer____c__DisplayClass6_0(Zenject__PrefabBindingFinalizer____c__DisplayClass6_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__PrefabBindingFinalizer____c__DisplayClass6_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__PrefabBindingFinalizer____c__DisplayClass6_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__PrefabBindingFinalizer____c__DisplayClass6_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__PrefabBindingFinalizer____c__DisplayClass6_0& operator=(Zenject__PrefabBindingFinalizer____c__DisplayClass6_0&& o) noexcept = default;
  constexpr Zenject__PrefabBindingFinalizer____c__DisplayClass6_0& operator=(Zenject__PrefabBindingFinalizer____c__DisplayClass6_0 const& o) noexcept = default;
                


// Fields

 Zenject::PrefabBindingFinalizer __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Zenject::PrefabBindingFinalizer value) ;

constexpr Zenject::PrefabBindingFinalizer __get___4__this() const;

 Zenject::DiContainer __declspec(property(get=__get_container, put=__set_container))  container;

constexpr void __set_container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get_container() const;


// Methods

static Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0 New_ctor() ;

/// @brief Method .ctor addr 0x2d69970 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <FinalizeBindingSelf>b__0 addr 0x2d6a124 size 0x11c virtual false final false
 Zenject::IProvider _FinalizeBindingSelf_b__0(Zenject::DiContainer _, System::Type contractType) ;

/// @brief Method __zenCreate addr 0x2d6a240 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d6a29c size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass6_1
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10900))
// CS Name: Zenject.PrefabBindingFinalizer::<>c__DisplayClass6_1
class CORDL_TYPE Zenject__PrefabBindingFinalizer____c__DisplayClass6_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__PrefabBindingFinalizer____c__DisplayClass6_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__PrefabBindingFinalizer____c__DisplayClass6_1", modifiers: " const&", def_value: None }]
constexpr Zenject__PrefabBindingFinalizer____c__DisplayClass6_1(Zenject__PrefabBindingFinalizer____c__DisplayClass6_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__PrefabBindingFinalizer____c__DisplayClass6_1", modifiers: "&&", def_value: None }]
constexpr Zenject__PrefabBindingFinalizer____c__DisplayClass6_1(Zenject__PrefabBindingFinalizer____c__DisplayClass6_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__PrefabBindingFinalizer____c__DisplayClass6_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__PrefabBindingFinalizer____c__DisplayClass6_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__PrefabBindingFinalizer____c__DisplayClass6_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__PrefabBindingFinalizer____c__DisplayClass6_1& operator=(Zenject__PrefabBindingFinalizer____c__DisplayClass6_1&& o) noexcept = default;
  constexpr Zenject__PrefabBindingFinalizer____c__DisplayClass6_1& operator=(Zenject__PrefabBindingFinalizer____c__DisplayClass6_1 const& o) noexcept = default;
                


// Fields

 Zenject::PrefabInstantiatorCached __declspec(property(get=__get_prefabCreator, put=__set_prefabCreator))  prefabCreator;

constexpr void __set_prefabCreator(Zenject::PrefabInstantiatorCached value) ;

constexpr Zenject::PrefabInstantiatorCached __get_prefabCreator() const;

 Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0 __declspec(property(get=__get_CS$__8__locals1, put=__set_CS$__8__locals1))  CS$__8__locals1;

constexpr void __set_CS$__8__locals1(Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0 value) ;

constexpr Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0 __get_CS$__8__locals1() const;


// Methods

static Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1 New_ctor() ;

/// @brief Method .ctor addr 0x2d69b8c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <FinalizeBindingSelf>b__1 addr 0x2d6a45c size 0x40 virtual false final false
 Zenject::IProvider _FinalizeBindingSelf_b__1(Zenject::DiContainer _, System::Type contractType) ;

/// @brief Method __zenCreate addr 0x2d6a49c size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d6a4f8 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::PrefabBindingFinalizer
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10908))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10901))
// CS Name: Zenject.PrefabBindingFinalizer
class CORDL_TYPE PrefabBindingFinalizer : public Zenject::ProviderBindingFinalizer {
public:
// Declarations
using __c__DisplayClass6_1 = Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1;

using __c__DisplayClass6_0 = Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0;

using __c__DisplayClass5_1 = Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1;

using __c__DisplayClass5_0 = Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PrefabBindingFinalizer() = default;

// Ctor Parameters [CppParam { name: "", ty: "PrefabBindingFinalizer", modifiers: " const&", def_value: None }]
constexpr PrefabBindingFinalizer(PrefabBindingFinalizer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PrefabBindingFinalizer", modifiers: "&&", def_value: None }]
constexpr PrefabBindingFinalizer(PrefabBindingFinalizer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PrefabBindingFinalizer(void* ptr) noexcept : Zenject::ProviderBindingFinalizer(ptr) {
}


  constexpr PrefabBindingFinalizer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PrefabBindingFinalizer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PrefabBindingFinalizer& operator=(PrefabBindingFinalizer&& o) noexcept = default;
  constexpr PrefabBindingFinalizer& operator=(PrefabBindingFinalizer const& o) noexcept = default;
                


// Fields

 Zenject::GameObjectCreationParameters __declspec(property(get=__get__gameObjectBindInfo, put=__set__gameObjectBindInfo))  _gameObjectBindInfo;

constexpr void __set__gameObjectBindInfo(Zenject::GameObjectCreationParameters value) ;

constexpr Zenject::GameObjectCreationParameters __get__gameObjectBindInfo() const;

 UnityEngine::Object __declspec(property(get=__get__prefab, put=__set__prefab))  _prefab;

constexpr void __set__prefab(UnityEngine::Object value) ;

constexpr UnityEngine::Object __get__prefab() const;

 System::Func_3<System::Type,Zenject::IPrefabInstantiator,Zenject::IProvider> __declspec(property(get=__get__providerFactory, put=__set__providerFactory))  _providerFactory;

constexpr void __set__providerFactory(System::Func_3<System::Type,Zenject::IPrefabInstantiator,Zenject::IProvider> value) ;

constexpr System::Func_3<System::Type,Zenject::IPrefabInstantiator,Zenject::IProvider> __get__providerFactory() const;


// Methods

static Zenject::PrefabBindingFinalizer New_ctor(Zenject::BindInfo bindInfo, Zenject::GameObjectCreationParameters gameObjectBindInfo, UnityEngine::Object prefab, System::Func_3<System::Type,Zenject::IPrefabInstantiator,Zenject::IProvider> providerFactory) ;

/// @brief Method .ctor addr 0x2d68a28 size 0x40 virtual false final false
 void _ctor(Zenject::BindInfo bindInfo, Zenject::GameObjectCreationParameters gameObjectBindInfo, UnityEngine::Object prefab, System::Func_3<System::Type,Zenject::IPrefabInstantiator,Zenject::IProvider> providerFactory) ;

/// @brief Method OnFinalizeBinding addr 0x2d68a90 size 0x84 virtual true final false
 void OnFinalizeBinding(Zenject::DiContainer container) ;

/// @brief Method FinalizeBindingConcrete addr 0x2d68e44 size 0x334 virtual false final false
 void FinalizeBindingConcrete(Zenject::DiContainer container, System::Collections::Generic::List_1<System::Type> concreteTypes) ;

/// @brief Method FinalizeBindingSelf addr 0x2d68b14 size 0x330 virtual false final false
 void FinalizeBindingSelf(Zenject::DiContainer container) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::PrefabBindingFinalizer);
DEFINE_IL2CPP_ARG_TYPE(Zenject::PrefabBindingFinalizer, "Zenject", "PrefabBindingFinalizer");
NEED_NO_BOX(Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0, "Zenject", "PrefabBindingFinalizer/<>c__DisplayClass5_0");
NEED_NO_BOX(Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1, "Zenject", "PrefabBindingFinalizer/<>c__DisplayClass5_1");
NEED_NO_BOX(Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0, "Zenject", "PrefabBindingFinalizer/<>c__DisplayClass6_0");
NEED_NO_BOX(Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1, "Zenject", "PrefabBindingFinalizer/<>c__DisplayClass6_1");
