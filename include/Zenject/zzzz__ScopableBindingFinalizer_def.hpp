#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Zenject {
class DiContainer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class IProvider;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class ScopableBindingFinalizer;
}
namespace Zenject {
class ____Zenject__ScopableBindingFinalizer____c__DisplayClass3_0;
}
namespace Zenject {
class ____Zenject__ScopableBindingFinalizer____c__DisplayClass4_0;
}
// Type: ::<>c__DisplayClass3_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10909))
// CS Name: Zenject.ScopableBindingFinalizer::<>c__DisplayClass3_0
class CORDL_TYPE ____Zenject__ScopableBindingFinalizer____c__DisplayClass3_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____Zenject__ScopableBindingFinalizer____c__DisplayClass3_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__ScopableBindingFinalizer____c__DisplayClass3_0", modifiers: " const&", def_value: None }]
constexpr ____Zenject__ScopableBindingFinalizer____c__DisplayClass3_0(____Zenject__ScopableBindingFinalizer____c__DisplayClass3_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__ScopableBindingFinalizer____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
constexpr ____Zenject__ScopableBindingFinalizer____c__DisplayClass3_0(____Zenject__ScopableBindingFinalizer____c__DisplayClass3_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__ScopableBindingFinalizer____c__DisplayClass3_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__ScopableBindingFinalizer____c__DisplayClass3_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__ScopableBindingFinalizer____c__DisplayClass3_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__ScopableBindingFinalizer____c__DisplayClass3_0& operator=(____Zenject__ScopableBindingFinalizer____c__DisplayClass3_0&& o) noexcept = default;
  constexpr ____Zenject__ScopableBindingFinalizer____c__DisplayClass3_0& operator=(____Zenject__ScopableBindingFinalizer____c__DisplayClass3_0 const& o) noexcept = default;
                


// Fields

 ::Zenject::ScopableBindingFinalizer __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::Zenject::ScopableBindingFinalizer value) ;

constexpr ::Zenject::ScopableBindingFinalizer __get___4__this() const;

 ::Zenject::DiContainer __declspec(property(get=__get_container, put=__set_container))  container;

constexpr void __set_container(::Zenject::DiContainer value) ;

constexpr ::Zenject::DiContainer __get_container() const;


// Methods

// Ctor Parameters []
explicit ____Zenject__ScopableBindingFinalizer____c__DisplayClass3_0() ;

/// @brief Method .ctor addr 0x2d6cda8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <FinalizeBindingConcrete>b__0 addr 0x2d6cdb8 size 0x34 virtual false final false
 ::Zenject::IProvider _FinalizeBindingConcrete_b__0(::Zenject::DiContainer _, ::System::Type concreteType) ;

/// @brief Method __zenCreate addr 0x2d6cdec size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d6ce48 size 0x1c0 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass4_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10910))
// CS Name: Zenject.ScopableBindingFinalizer::<>c__DisplayClass4_0
class CORDL_TYPE ____Zenject__ScopableBindingFinalizer____c__DisplayClass4_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____Zenject__ScopableBindingFinalizer____c__DisplayClass4_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__ScopableBindingFinalizer____c__DisplayClass4_0", modifiers: " const&", def_value: None }]
constexpr ____Zenject__ScopableBindingFinalizer____c__DisplayClass4_0(____Zenject__ScopableBindingFinalizer____c__DisplayClass4_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__ScopableBindingFinalizer____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
constexpr ____Zenject__ScopableBindingFinalizer____c__DisplayClass4_0(____Zenject__ScopableBindingFinalizer____c__DisplayClass4_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__ScopableBindingFinalizer____c__DisplayClass4_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__ScopableBindingFinalizer____c__DisplayClass4_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__ScopableBindingFinalizer____c__DisplayClass4_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__ScopableBindingFinalizer____c__DisplayClass4_0& operator=(____Zenject__ScopableBindingFinalizer____c__DisplayClass4_0&& o) noexcept = default;
  constexpr ____Zenject__ScopableBindingFinalizer____c__DisplayClass4_0& operator=(____Zenject__ScopableBindingFinalizer____c__DisplayClass4_0 const& o) noexcept = default;
                


// Fields

 ::Zenject::ScopableBindingFinalizer __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::Zenject::ScopableBindingFinalizer value) ;

constexpr ::Zenject::ScopableBindingFinalizer __get___4__this() const;

 ::Zenject::DiContainer __declspec(property(get=__get_container, put=__set_container))  container;

constexpr void __set_container(::Zenject::DiContainer value) ;

constexpr ::Zenject::DiContainer __get_container() const;


// Methods

// Ctor Parameters []
explicit ____Zenject__ScopableBindingFinalizer____c__DisplayClass4_0() ;

/// @brief Method .ctor addr 0x2d6cdb0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <FinalizeBindingSelf>b__0 addr 0x2d6d008 size 0x34 virtual false final false
 ::Zenject::IProvider _FinalizeBindingSelf_b__0(::Zenject::DiContainer _, ::System::Type contractType) ;

/// @brief Method __zenCreate addr 0x2d6d03c size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d6d098 size 0x1c0 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::ScopableBindingFinalizer
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10908))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10911))
// CS Name: Zenject.ScopableBindingFinalizer
class CORDL_TYPE ScopableBindingFinalizer : public ::Zenject::ProviderBindingFinalizer {
public:
// Declarations
using __c__DisplayClass4_0 = ::Zenject::____Zenject__ScopableBindingFinalizer____c__DisplayClass4_0;

using __c__DisplayClass3_0 = ::Zenject::____Zenject__ScopableBindingFinalizer____c__DisplayClass3_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ScopableBindingFinalizer() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScopableBindingFinalizer", modifiers: " const&", def_value: None }]
constexpr ScopableBindingFinalizer(ScopableBindingFinalizer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScopableBindingFinalizer", modifiers: "&&", def_value: None }]
constexpr ScopableBindingFinalizer(ScopableBindingFinalizer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScopableBindingFinalizer(void* ptr) noexcept : ::Zenject::ProviderBindingFinalizer(ptr) {
}


  constexpr ScopableBindingFinalizer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScopableBindingFinalizer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScopableBindingFinalizer& operator=(ScopableBindingFinalizer&& o) noexcept = default;
  constexpr ScopableBindingFinalizer& operator=(ScopableBindingFinalizer const& o) noexcept = default;
                


// Fields

 ::System::Func_3<::Zenject::DiContainer,::System::Type,::Zenject::IProvider> __declspec(property(get=__get__providerFactory, put=__set__providerFactory))  _providerFactory;

constexpr void __set__providerFactory(::System::Func_3<::Zenject::DiContainer,::System::Type,::Zenject::IProvider> value) ;

constexpr ::System::Func_3<::Zenject::DiContainer,::System::Type,::Zenject::IProvider> __get__providerFactory() const;


// Methods

// Ctor Parameters [CppParam { name: "bindInfo", ty: "::Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "providerFactory", ty: "::System::Func_3<::Zenject::DiContainer,::System::Type,::Zenject::IProvider>", modifiers: "", def_value: None }]
explicit ScopableBindingFinalizer(::Zenject::BindInfo bindInfo, ::System::Func_3<::Zenject::DiContainer,::System::Type,::Zenject::IProvider> providerFactory) ;

/// @brief Method .ctor addr 0x2d6caa4 size 0x2c virtual false final false
 void _ctor(::Zenject::BindInfo bindInfo, ::System::Func_3<::Zenject::DiContainer,::System::Type,::Zenject::IProvider> providerFactory) ;

/// @brief Method OnFinalizeBinding addr 0x2d6cad0 size 0x84 virtual true final false
 void OnFinalizeBinding(::Zenject::DiContainer container) ;

/// @brief Method FinalizeBindingConcrete addr 0x2d6cc64 size 0x144 virtual false final false
 void FinalizeBindingConcrete(::Zenject::DiContainer container, ::System::Collections::Generic::List_1<::System::Type> concreteTypes) ;

/// @brief Method FinalizeBindingSelf addr 0x2d6cb54 size 0x110 virtual false final false
 void FinalizeBindingSelf(::Zenject::DiContainer container) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::ScopableBindingFinalizer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ScopableBindingFinalizer, "Zenject", "ScopableBindingFinalizer");
NEED_NO_BOX(::Zenject::____Zenject__ScopableBindingFinalizer____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::____Zenject__ScopableBindingFinalizer____c__DisplayClass3_0, "Zenject", "ScopableBindingFinalizer/<>c__DisplayClass3_0");
NEED_NO_BOX(::Zenject::____Zenject__ScopableBindingFinalizer____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::____Zenject__ScopableBindingFinalizer____c__DisplayClass4_0, "Zenject", "ScopableBindingFinalizer/<>c__DisplayClass4_0");
