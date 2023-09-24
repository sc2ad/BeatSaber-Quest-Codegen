#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Zenject {
class InjectContext;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Zenject {
class Zenject__CachedOpenTypeProvider____c;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class CachedProvider;
}
namespace System {
class Type;
}
namespace System {
class Action;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Zenject {
class CachedOpenTypeProvider;
}
namespace Zenject {
class Zenject__CachedOpenTypeProvider____c;
}
// Type: ::<>c
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11119))
// CS Name: Zenject.CachedOpenTypeProvider::<>c
class CORDL_TYPE Zenject__CachedOpenTypeProvider____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Zenject__CachedOpenTypeProvider____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__CachedOpenTypeProvider____c", modifiers: " const&", def_value: None }]
constexpr Zenject__CachedOpenTypeProvider____c(Zenject__CachedOpenTypeProvider____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__CachedOpenTypeProvider____c", modifiers: "&&", def_value: None }]
constexpr Zenject__CachedOpenTypeProvider____c(Zenject__CachedOpenTypeProvider____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__CachedOpenTypeProvider____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__CachedOpenTypeProvider____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__CachedOpenTypeProvider____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__CachedOpenTypeProvider____c& operator=(Zenject__CachedOpenTypeProvider____c&& o) noexcept = default;
  constexpr Zenject__CachedOpenTypeProvider____c& operator=(Zenject__CachedOpenTypeProvider____c const& o) noexcept = default;
                


// Fields

static Zenject::Zenject__CachedOpenTypeProvider____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Zenject::Zenject__CachedOpenTypeProvider____c value) ;

static Zenject::Zenject__CachedOpenTypeProvider____c __get___9() ;

static System::Func_2<Zenject::CachedProvider,int32_t> __declspec(property(get=__get___9__8_0, put=__set___9__8_0))  __9__8_0;

static void __set___9__8_0(System::Func_2<Zenject::CachedProvider,int32_t> value) ;

static System::Func_2<Zenject::CachedProvider,int32_t> __get___9__8_0() ;


// Methods

static Zenject::Zenject__CachedOpenTypeProvider____c New_ctor() ;

/// @brief Method .ctor addr 0x2d8c0ac size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <get_NumInstances>b__8_0 addr 0x2d8c0b4 size 0x54 virtual false final false
 int32_t _get_NumInstances_b__8_0(Zenject::CachedProvider x) ;

/// @brief Method __zenCreate addr 0x2d8c154 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d8c1b0 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::CachedOpenTypeProvider
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11120))
// CS Name: Zenject.CachedOpenTypeProvider
class CORDL_TYPE CachedOpenTypeProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = Zenject::Zenject__CachedOpenTypeProvider____c;

/// @brief Convert operator to Zenject::IProvider
constexpr operator  Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CachedOpenTypeProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "CachedOpenTypeProvider", modifiers: " const&", def_value: None }]
constexpr CachedOpenTypeProvider(CachedOpenTypeProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CachedOpenTypeProvider", modifiers: "&&", def_value: None }]
constexpr CachedOpenTypeProvider(CachedOpenTypeProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CachedOpenTypeProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CachedOpenTypeProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CachedOpenTypeProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CachedOpenTypeProvider& operator=(CachedOpenTypeProvider&& o) noexcept = default;
  constexpr CachedOpenTypeProvider& operator=(CachedOpenTypeProvider const& o) noexcept = default;
                


// Fields

 Zenject::IProvider __declspec(property(get=__get__creator, put=__set__creator))  _creator;

constexpr void __set__creator(Zenject::IProvider value) ;

constexpr Zenject::IProvider __get__creator() const;

 System::Collections::Generic::Dictionary_2<System::Type,Zenject::CachedProvider> __declspec(property(get=__get__providerMap, put=__set__providerMap))  _providerMap;

constexpr void __set__providerMap(System::Collections::Generic::Dictionary_2<System::Type,Zenject::CachedProvider> value) ;

constexpr System::Collections::Generic::Dictionary_2<System::Type,Zenject::CachedProvider> __get__providerMap() const;


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;

 int32_t __declspec(property(get=get_NumInstances))  NumInstances;


// Methods

static Zenject::CachedOpenTypeProvider New_ctor(Zenject::IProvider creator) ;

/// @brief Method .ctor addr 0x2d8b8f4 size 0x10c virtual false final false
 void _ctor(Zenject::IProvider creator) ;

/// @brief Method get_IsCached addr 0x2d8ba00 size 0x8 virtual true final true
 bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x2d8ba08 size 0x28 virtual true final true
 bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method get_NumInstances addr 0x2d8ba30 size 0x130 virtual false final false
 int32_t get_NumInstances() ;

/// @brief Method ClearCache addr 0x2d8bb60 size 0x50 virtual false final false
 void ClearCache() ;

/// @brief Method GetInstanceType addr 0x2d8bbb0 size 0xac virtual true final true
 System::Type GetInstanceType(Zenject::InjectContext context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x2d8bc5c size 0x13c virtual true final true
 void GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::CachedOpenTypeProvider);
DEFINE_IL2CPP_ARG_TYPE(Zenject::CachedOpenTypeProvider, "Zenject", "CachedOpenTypeProvider");
NEED_NO_BOX(Zenject::Zenject__CachedOpenTypeProvider____c);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__CachedOpenTypeProvider____c, "Zenject", "CachedOpenTypeProvider/<>c");
