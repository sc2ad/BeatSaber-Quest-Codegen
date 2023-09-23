#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Zenject {
class IPrefabInstantiator;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class DiContainer;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
class Type;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
class BindInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class PrefabInstantiatorCached;
}
// Forward declare root types
namespace Zenject {
class PrefabResourceBindingFinalizer;
}
namespace Zenject {
class Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_0;
}
namespace Zenject {
class Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_1;
}
namespace Zenject {
class Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_0;
}
namespace Zenject {
class Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_1;
}
// Type: ::<>c__DisplayClass5_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10902))
// CS Name: Zenject.PrefabResourceBindingFinalizer::<>c__DisplayClass5_0
class CORDL_TYPE Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_0", modifiers: " const&", def_value: None }]
constexpr Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_0(Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
constexpr Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_0(Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_0& operator=(Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_0&& o) noexcept = default;
  constexpr Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_0& operator=(Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_0 const& o) noexcept = default;
                


// Fields

 Zenject::PrefabResourceBindingFinalizer __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Zenject::PrefabResourceBindingFinalizer value) ;

constexpr Zenject::PrefabResourceBindingFinalizer __get___4__this() const;

 Zenject::DiContainer __declspec(property(get=__get_container, put=__set_container))  container;

constexpr void __set_container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get_container() const;

 System::Collections::Generic::List_1<System::Type> __declspec(property(get=__get_concreteTypes, put=__set_concreteTypes))  concreteTypes;

constexpr void __set_concreteTypes(System::Collections::Generic::List_1<System::Type> value) ;

constexpr System::Collections::Generic::List_1<System::Type> __get_concreteTypes() const;


// Methods

// Ctor Parameters []
explicit Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_0() ;

/// @brief Method .ctor addr 0x2d6ade0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <FinalizeBindingConcrete>b__0 addr 0x2d6ae00 size 0x118 virtual false final false
 Zenject::IProvider _FinalizeBindingConcrete_b__0(Zenject::DiContainer _, System::Type concreteType) ;

/// @brief Method __zenCreate addr 0x2d6af18 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d6af74 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass5_1
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10903))
// CS Name: Zenject.PrefabResourceBindingFinalizer::<>c__DisplayClass5_1
class CORDL_TYPE Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_1", modifiers: " const&", def_value: None }]
constexpr Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_1(Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_1", modifiers: "&&", def_value: None }]
constexpr Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_1(Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_1& operator=(Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_1&& o) noexcept = default;
  constexpr Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_1& operator=(Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_1 const& o) noexcept = default;
                


// Fields

 Zenject::PrefabInstantiatorCached __declspec(property(get=__get_prefabCreator, put=__set_prefabCreator))  prefabCreator;

constexpr void __set_prefabCreator(Zenject::PrefabInstantiatorCached value) ;

constexpr Zenject::PrefabInstantiatorCached __get_prefabCreator() const;

 Zenject::Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_0 __declspec(property(get=__get_CS$__8__locals1, put=__set_CS$__8__locals1))  CS$__8__locals1;

constexpr void __set_CS$__8__locals1(Zenject::Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_0 value) ;

constexpr Zenject::Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_0 __get_CS$__8__locals1() const;


// Methods

// Ctor Parameters []
explicit Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_1() ;

/// @brief Method .ctor addr 0x2d6ade8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <FinalizeBindingConcrete>b__1 addr 0x2d6b134 size 0x40 virtual false final false
 Zenject::IProvider _FinalizeBindingConcrete_b__1(Zenject::DiContainer _, System::Type concreteType) ;

/// @brief Method __zenCreate addr 0x2d6b174 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d6b1d0 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass6_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10904))
// CS Name: Zenject.PrefabResourceBindingFinalizer::<>c__DisplayClass6_0
class CORDL_TYPE Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_0", modifiers: " const&", def_value: None }]
constexpr Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_0(Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
constexpr Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_0(Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_0& operator=(Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_0&& o) noexcept = default;
  constexpr Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_0& operator=(Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_0 const& o) noexcept = default;
                


// Fields

 Zenject::PrefabResourceBindingFinalizer __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Zenject::PrefabResourceBindingFinalizer value) ;

constexpr Zenject::PrefabResourceBindingFinalizer __get___4__this() const;

 Zenject::DiContainer __declspec(property(get=__get_container, put=__set_container))  container;

constexpr void __set_container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get_container() const;


// Methods

// Ctor Parameters []
explicit Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_0() ;

/// @brief Method .ctor addr 0x2d6adf0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <FinalizeBindingSelf>b__0 addr 0x2d6b390 size 0x11c virtual false final false
 Zenject::IProvider _FinalizeBindingSelf_b__0(Zenject::DiContainer _, System::Type contractType) ;

/// @brief Method __zenCreate addr 0x2d6b4ac size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d6b508 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass6_1
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10905))
// CS Name: Zenject.PrefabResourceBindingFinalizer::<>c__DisplayClass6_1
class CORDL_TYPE Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_1", modifiers: " const&", def_value: None }]
constexpr Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_1(Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_1", modifiers: "&&", def_value: None }]
constexpr Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_1(Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_1& operator=(Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_1&& o) noexcept = default;
  constexpr Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_1& operator=(Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_1 const& o) noexcept = default;
                


// Fields

 Zenject::PrefabInstantiatorCached __declspec(property(get=__get_prefabCreator, put=__set_prefabCreator))  prefabCreator;

constexpr void __set_prefabCreator(Zenject::PrefabInstantiatorCached value) ;

constexpr Zenject::PrefabInstantiatorCached __get_prefabCreator() const;

 Zenject::Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_0 __declspec(property(get=__get_CS$__8__locals1, put=__set_CS$__8__locals1))  CS$__8__locals1;

constexpr void __set_CS$__8__locals1(Zenject::Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_0 value) ;

constexpr Zenject::Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_0 __get_CS$__8__locals1() const;


// Methods

// Ctor Parameters []
explicit Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_1() ;

/// @brief Method .ctor addr 0x2d6adf8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <FinalizeBindingSelf>b__1 addr 0x2d6b6c8 size 0x40 virtual false final false
 Zenject::IProvider _FinalizeBindingSelf_b__1(Zenject::DiContainer _, System::Type contractType) ;

/// @brief Method __zenCreate addr 0x2d6b708 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d6b764 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::PrefabResourceBindingFinalizer
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10908))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10906))
// CS Name: Zenject.PrefabResourceBindingFinalizer
class CORDL_TYPE PrefabResourceBindingFinalizer : public Zenject::ProviderBindingFinalizer {
public:
// Declarations
using __c__DisplayClass6_1 = Zenject::Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_1;

using __c__DisplayClass6_0 = Zenject::Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_0;

using __c__DisplayClass5_1 = Zenject::Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_1;

using __c__DisplayClass5_0 = Zenject::Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PrefabResourceBindingFinalizer() = default;

// Ctor Parameters [CppParam { name: "", ty: "PrefabResourceBindingFinalizer", modifiers: " const&", def_value: None }]
constexpr PrefabResourceBindingFinalizer(PrefabResourceBindingFinalizer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PrefabResourceBindingFinalizer", modifiers: "&&", def_value: None }]
constexpr PrefabResourceBindingFinalizer(PrefabResourceBindingFinalizer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PrefabResourceBindingFinalizer(void* ptr) noexcept : Zenject::ProviderBindingFinalizer(ptr) {
}


  constexpr PrefabResourceBindingFinalizer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PrefabResourceBindingFinalizer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PrefabResourceBindingFinalizer& operator=(PrefabResourceBindingFinalizer&& o) noexcept = default;
  constexpr PrefabResourceBindingFinalizer& operator=(PrefabResourceBindingFinalizer const& o) noexcept = default;
                


// Fields

 Zenject::GameObjectCreationParameters __declspec(property(get=__get__gameObjectBindInfo, put=__set__gameObjectBindInfo))  _gameObjectBindInfo;

constexpr void __set__gameObjectBindInfo(Zenject::GameObjectCreationParameters value) ;

constexpr Zenject::GameObjectCreationParameters __get__gameObjectBindInfo() const;

 ::StringW __declspec(property(get=__get__resourcePath, put=__set__resourcePath))  _resourcePath;

constexpr void __set__resourcePath(::StringW value) ;

constexpr ::StringW __get__resourcePath() const;

 System::Func_3<System::Type,Zenject::IPrefabInstantiator,Zenject::IProvider> __declspec(property(get=__get__providerFactory, put=__set__providerFactory))  _providerFactory;

constexpr void __set__providerFactory(System::Func_3<System::Type,Zenject::IPrefabInstantiator,Zenject::IProvider> value) ;

constexpr System::Func_3<System::Type,Zenject::IPrefabInstantiator,Zenject::IProvider> __get__providerFactory() const;


// Methods

// Ctor Parameters [CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "gameObjectBindInfo", ty: "Zenject::GameObjectCreationParameters", modifiers: "", def_value: None }, CppParam { name: "resourcePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "providerFactory", ty: "System::Func_3<System::Type,Zenject::IPrefabInstantiator,Zenject::IProvider>", modifiers: "", def_value: None }]
explicit PrefabResourceBindingFinalizer(Zenject::BindInfo bindInfo, Zenject::GameObjectCreationParameters gameObjectBindInfo, ::StringW resourcePath, System::Func_3<System::Type,Zenject::IPrefabInstantiator,Zenject::IProvider> providerFactory) ;

/// @brief Method .ctor addr 0x2d6a6b8 size 0x40 virtual false final false
 void _ctor(Zenject::BindInfo bindInfo, Zenject::GameObjectCreationParameters gameObjectBindInfo, ::StringW resourcePath, System::Func_3<System::Type,Zenject::IPrefabInstantiator,Zenject::IProvider> providerFactory) ;

/// @brief Method OnFinalizeBinding addr 0x2d6a6f8 size 0x84 virtual true final false
 void OnFinalizeBinding(Zenject::DiContainer container) ;

/// @brief Method FinalizeBindingConcrete addr 0x2d6aaac size 0x334 virtual false final false
 void FinalizeBindingConcrete(Zenject::DiContainer container, System::Collections::Generic::List_1<System::Type> concreteTypes) ;

/// @brief Method FinalizeBindingSelf addr 0x2d6a77c size 0x330 virtual false final false
 void FinalizeBindingSelf(Zenject::DiContainer container) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::PrefabResourceBindingFinalizer);
DEFINE_IL2CPP_ARG_TYPE(Zenject::PrefabResourceBindingFinalizer, "Zenject", "PrefabResourceBindingFinalizer");
NEED_NO_BOX(Zenject::Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_0, "Zenject", "PrefabResourceBindingFinalizer/<>c__DisplayClass5_0");
NEED_NO_BOX(Zenject::Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_1);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__PrefabResourceBindingFinalizer____c__DisplayClass5_1, "Zenject", "PrefabResourceBindingFinalizer/<>c__DisplayClass5_1");
NEED_NO_BOX(Zenject::Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_0, "Zenject", "PrefabResourceBindingFinalizer/<>c__DisplayClass6_0");
NEED_NO_BOX(Zenject::Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_1);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__PrefabResourceBindingFinalizer____c__DisplayClass6_1, "Zenject", "PrefabResourceBindingFinalizer/<>c__DisplayClass6_1");
