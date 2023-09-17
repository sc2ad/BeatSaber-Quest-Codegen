#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Zenject {
class BindInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Type;
}
namespace Zenject {
class ISubContainerCreator;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class SubContainerCreatorCached;
}
// Forward declare root types
namespace Zenject {
class SubContainerBindingFinalizer;
}
namespace Zenject {
class ____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0;
}
namespace Zenject {
class ____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1;
}
namespace Zenject {
class ____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0;
}
namespace Zenject {
class ____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1;
}
// Type: ::<>c__DisplayClass5_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10913))
// CS Name: Zenject.SubContainerBindingFinalizer::<>c__DisplayClass5_0
class CORDL_TYPE ____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0", modifiers: " const&", def_value: None }]
constexpr ____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0(____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
constexpr ____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0(____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0& operator=(____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0&& o) noexcept = default;
  constexpr ____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0& operator=(____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0 const& o) noexcept = default;
                


// Fields

 ::Zenject::SubContainerBindingFinalizer __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::Zenject::SubContainerBindingFinalizer value) ;

constexpr ::Zenject::SubContainerBindingFinalizer __get___4__this() const;

 ::Zenject::DiContainer __declspec(property(get=__get_container, put=__set_container))  container;

constexpr void __set_container(::Zenject::DiContainer value) ;

constexpr ::Zenject::DiContainer __get_container() const;


// Methods

// Ctor Parameters []
explicit ____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0() ;

/// @brief Method .ctor addr 0x2d6d784 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <FinalizeBindingConcrete>b__0 addr 0x2d6d7a4 size 0xb8 virtual false final false
 ::Zenject::IProvider _FinalizeBindingConcrete_b__0(::Zenject::DiContainer _, ::System::Type concreteType) ;

/// @brief Method __zenCreate addr 0x2d6d85c size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d6d8b8 size 0x1c0 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass5_1
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10914))
// CS Name: Zenject.SubContainerBindingFinalizer::<>c__DisplayClass5_1
class CORDL_TYPE ____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1", modifiers: " const&", def_value: None }]
constexpr ____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1(____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1", modifiers: "&&", def_value: None }]
constexpr ____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1(____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1& operator=(____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1&& o) noexcept = default;
  constexpr ____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1& operator=(____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1 const& o) noexcept = default;
                


// Fields

 ::Zenject::SubContainerCreatorCached __declspec(property(get=__get_containerCreator, put=__set_containerCreator))  containerCreator;

constexpr void __set_containerCreator(::Zenject::SubContainerCreatorCached value) ;

constexpr ::Zenject::SubContainerCreatorCached __get_containerCreator() const;

 ::Zenject::____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0 __declspec(property(get=__get_CS$__8__locals1, put=__set_CS$__8__locals1))  CS$__8__locals1;

constexpr void __set_CS$__8__locals1(::Zenject::____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0 value) ;

constexpr ::Zenject::____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0 __get_CS$__8__locals1() const;


// Methods

// Ctor Parameters []
explicit ____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1() ;

/// @brief Method .ctor addr 0x2d6d78c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <FinalizeBindingConcrete>b__1 addr 0x2d6da78 size 0x9c virtual false final false
 ::Zenject::IProvider _FinalizeBindingConcrete_b__1(::Zenject::DiContainer _, ::System::Type concreteType) ;

/// @brief Method __zenCreate addr 0x2d6db14 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d6db70 size 0x1c0 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass6_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10915))
// CS Name: Zenject.SubContainerBindingFinalizer::<>c__DisplayClass6_0
class CORDL_TYPE ____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0", modifiers: " const&", def_value: None }]
constexpr ____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0(____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
constexpr ____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0(____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0& operator=(____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0&& o) noexcept = default;
  constexpr ____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0& operator=(____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0 const& o) noexcept = default;
                


// Fields

 ::Zenject::SubContainerBindingFinalizer __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::Zenject::SubContainerBindingFinalizer value) ;

constexpr ::Zenject::SubContainerBindingFinalizer __get___4__this() const;

 ::Zenject::DiContainer __declspec(property(get=__get_container, put=__set_container))  container;

constexpr void __set_container(::Zenject::DiContainer value) ;

constexpr ::Zenject::DiContainer __get_container() const;


// Methods

// Ctor Parameters []
explicit ____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0() ;

/// @brief Method .ctor addr 0x2d6d794 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <FinalizeBindingSelf>b__0 addr 0x2d6dd30 size 0xb8 virtual false final false
 ::Zenject::IProvider _FinalizeBindingSelf_b__0(::Zenject::DiContainer _, ::System::Type contractType) ;

/// @brief Method __zenCreate addr 0x2d6dde8 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d6de44 size 0x1c0 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass6_1
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10916))
// CS Name: Zenject.SubContainerBindingFinalizer::<>c__DisplayClass6_1
class CORDL_TYPE ____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1", modifiers: " const&", def_value: None }]
constexpr ____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1(____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1", modifiers: "&&", def_value: None }]
constexpr ____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1(____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1& operator=(____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1&& o) noexcept = default;
  constexpr ____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1& operator=(____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1 const& o) noexcept = default;
                


// Fields

 ::Zenject::SubContainerCreatorCached __declspec(property(get=__get_containerCreator, put=__set_containerCreator))  containerCreator;

constexpr void __set_containerCreator(::Zenject::SubContainerCreatorCached value) ;

constexpr ::Zenject::SubContainerCreatorCached __get_containerCreator() const;

 ::Zenject::____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0 __declspec(property(get=__get_CS$__8__locals1, put=__set_CS$__8__locals1))  CS$__8__locals1;

constexpr void __set_CS$__8__locals1(::Zenject::____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0 value) ;

constexpr ::Zenject::____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0 __get_CS$__8__locals1() const;


// Methods

// Ctor Parameters []
explicit ____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1() ;

/// @brief Method .ctor addr 0x2d6d79c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <FinalizeBindingSelf>b__1 addr 0x2d6e004 size 0x9c virtual false final false
 ::Zenject::IProvider _FinalizeBindingSelf_b__1(::Zenject::DiContainer _, ::System::Type contractType) ;

/// @brief Method __zenCreate addr 0x2d6e0a0 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d6e0fc size 0x1c0 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::SubContainerBindingFinalizer
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10908))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10917))
// CS Name: Zenject.SubContainerBindingFinalizer
class CORDL_TYPE SubContainerBindingFinalizer : public ::Zenject::ProviderBindingFinalizer {
public:
// Declarations
using __c__DisplayClass6_1 = ::Zenject::____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1;

using __c__DisplayClass6_0 = ::Zenject::____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0;

using __c__DisplayClass5_1 = ::Zenject::____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1;

using __c__DisplayClass5_0 = ::Zenject::____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SubContainerBindingFinalizer() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerBindingFinalizer", modifiers: " const&", def_value: None }]
constexpr SubContainerBindingFinalizer(SubContainerBindingFinalizer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerBindingFinalizer", modifiers: "&&", def_value: None }]
constexpr SubContainerBindingFinalizer(SubContainerBindingFinalizer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerBindingFinalizer(void* ptr) noexcept : ::Zenject::ProviderBindingFinalizer(ptr) {
}


  constexpr SubContainerBindingFinalizer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerBindingFinalizer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerBindingFinalizer& operator=(SubContainerBindingFinalizer&& o) noexcept = default;
  constexpr SubContainerBindingFinalizer& operator=(SubContainerBindingFinalizer const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__subIdentifier, put=__set__subIdentifier))  _subIdentifier;

constexpr void __set__subIdentifier(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__subIdentifier() const;

 bool __declspec(property(get=__get__resolveAll, put=__set__resolveAll))  _resolveAll;

constexpr void __set__resolveAll(bool value) ;

constexpr bool __get__resolveAll() const;

 ::System::Func_2<::Zenject::DiContainer,::Zenject::ISubContainerCreator> __declspec(property(get=__get__creatorFactory, put=__set__creatorFactory))  _creatorFactory;

constexpr void __set__creatorFactory(::System::Func_2<::Zenject::DiContainer,::Zenject::ISubContainerCreator> value) ;

constexpr ::System::Func_2<::Zenject::DiContainer,::Zenject::ISubContainerCreator> __get__creatorFactory() const;


// Methods

// Ctor Parameters [CppParam { name: "bindInfo", ty: "::Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "subIdentifier", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "resolveAll", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "creatorFactory", ty: "::System::Func_2<::Zenject::DiContainer,::Zenject::ISubContainerCreator>", modifiers: "", def_value: None }]
explicit SubContainerBindingFinalizer(::Zenject::BindInfo bindInfo, ::bs_hook::Il2CppWrapperType subIdentifier, bool resolveAll, ::System::Func_2<::Zenject::DiContainer,::Zenject::ISubContainerCreator> creatorFactory) ;

/// @brief Method .ctor addr 0x2d61fa4 size 0x44 virtual false final false
 void _ctor(::Zenject::BindInfo bindInfo, ::bs_hook::Il2CppWrapperType subIdentifier, bool resolveAll, ::System::Func_2<::Zenject::DiContainer,::Zenject::ISubContainerCreator> creatorFactory) ;

/// @brief Method OnFinalizeBinding addr 0x2d6d348 size 0x84 virtual true final false
 void OnFinalizeBinding(::Zenject::DiContainer container) ;

/// @brief Method FinalizeBindingConcrete addr 0x2d6d5a0 size 0x1e4 virtual false final false
 void FinalizeBindingConcrete(::Zenject::DiContainer container, ::System::Collections::Generic::List_1<::System::Type> concreteTypes) ;

/// @brief Method FinalizeBindingSelf addr 0x2d6d3cc size 0x1d4 virtual false final false
 void FinalizeBindingSelf(::Zenject::DiContainer container) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::SubContainerBindingFinalizer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerBindingFinalizer, "Zenject", "SubContainerBindingFinalizer");
NEED_NO_BOX(::Zenject::____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0, "Zenject", "SubContainerBindingFinalizer/<>c__DisplayClass5_0");
NEED_NO_BOX(::Zenject::____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::____Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1, "Zenject", "SubContainerBindingFinalizer/<>c__DisplayClass5_1");
NEED_NO_BOX(::Zenject::____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0, "Zenject", "SubContainerBindingFinalizer/<>c__DisplayClass6_0");
NEED_NO_BOX(::Zenject::____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::____Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1, "Zenject", "SubContainerBindingFinalizer/<>c__DisplayClass6_1");
