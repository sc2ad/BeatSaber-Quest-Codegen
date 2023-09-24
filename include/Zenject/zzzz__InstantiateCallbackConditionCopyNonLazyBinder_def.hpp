#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__ConditionCopyNonLazyBinder_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
class ConditionCopyNonLazyBinder;
}
namespace Zenject {
template<typename T>
class Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1;
}
namespace Zenject {
class BindInfo;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template<typename T>
class Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1;
}
namespace Zenject {
class InstantiateCallbackConditionCopyNonLazyBinder;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type T>
class Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1<T>;
}
// Type: ::<>c__DisplayClass2_0`1
// Type: Zenject::InstantiateCallbackConditionCopyNonLazyBinder
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10623))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10866))
// CS Name: Zenject.InstantiateCallbackConditionCopyNonLazyBinder
class CORDL_TYPE InstantiateCallbackConditionCopyNonLazyBinder : public Zenject::ConditionCopyNonLazyBinder {
public:
// Declarations
template<typename T>
using __c__DisplayClass2_0_1 = Zenject::Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~InstantiateCallbackConditionCopyNonLazyBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "InstantiateCallbackConditionCopyNonLazyBinder", modifiers: " const&", def_value: None }]
constexpr InstantiateCallbackConditionCopyNonLazyBinder(InstantiateCallbackConditionCopyNonLazyBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InstantiateCallbackConditionCopyNonLazyBinder", modifiers: "&&", def_value: None }]
constexpr InstantiateCallbackConditionCopyNonLazyBinder(InstantiateCallbackConditionCopyNonLazyBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InstantiateCallbackConditionCopyNonLazyBinder(void* ptr) noexcept : Zenject::ConditionCopyNonLazyBinder(ptr) {
}


  constexpr InstantiateCallbackConditionCopyNonLazyBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InstantiateCallbackConditionCopyNonLazyBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InstantiateCallbackConditionCopyNonLazyBinder& operator=(InstantiateCallbackConditionCopyNonLazyBinder&& o) noexcept = default;
  constexpr InstantiateCallbackConditionCopyNonLazyBinder& operator=(InstantiateCallbackConditionCopyNonLazyBinder const& o) noexcept = default;
                


// Methods

static Zenject::InstantiateCallbackConditionCopyNonLazyBinder New_ctor(Zenject::BindInfo bindInfo) ;

/// @brief Method .ctor addr 0x2d61cfc size 0x8 virtual false final false
 void _ctor(Zenject::BindInfo bindInfo) ;

/// @brief Method OnInstantiated addr 0x2d61d04 size 0x1c virtual false final false
 Zenject::ConditionCopyNonLazyBinder OnInstantiated(System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> callback) ;

/// @brief Method OnInstantiated addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 Zenject::ConditionCopyNonLazyBinder OnInstantiated(System::Action_2<Zenject::InjectContext,T> callback) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass2_0`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10865))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10865), inst: 2 })
// CS Name: Zenject.InstantiateCallbackConditionCopyNonLazyBinder::<>c__DisplayClass2_0`1
class CORDL_TYPE Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1", modifiers: " const&", def_value: None }]
constexpr Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1(Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1", modifiers: "&&", def_value: None }]
constexpr Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1(Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1& operator=(Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1&& o) noexcept = default;
  constexpr Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1& operator=(Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1 const& o) noexcept = default;
                


// Fields

 System::Action_2<Zenject::InjectContext,T> __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(System::Action_2<Zenject::InjectContext,T> value) ;

constexpr System::Action_2<Zenject::InjectContext,T> __get_callback() const;


// Methods

static Zenject::Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <OnInstantiated>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _OnInstantiated_b__0(Zenject::InjectContext ctx, ::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1, "Zenject", "InstantiateCallbackConditionCopyNonLazyBinder/<>c__DisplayClass2_0`1");
NEED_NO_BOX(Zenject::InstantiateCallbackConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(Zenject::InstantiateCallbackConditionCopyNonLazyBinder, "Zenject", "InstantiateCallbackConditionCopyNonLazyBinder");
