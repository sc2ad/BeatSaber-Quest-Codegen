#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class ConventionBindInfo;
}
namespace Zenject {
class ____Zenject__ConventionBindInfo____c__DisplayClass6_0;
}
namespace Zenject {
class ____Zenject__ConventionBindInfo____c__DisplayClass7_0;
}
// Type: ::<>c__DisplayClass6_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10627))
// CS Name: Zenject.ConventionBindInfo::<>c__DisplayClass6_0
class CORDL_TYPE ____Zenject__ConventionBindInfo____c__DisplayClass6_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____Zenject__ConventionBindInfo____c__DisplayClass6_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__ConventionBindInfo____c__DisplayClass6_0", modifiers: " const&", def_value: None }]
constexpr ____Zenject__ConventionBindInfo____c__DisplayClass6_0(____Zenject__ConventionBindInfo____c__DisplayClass6_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__ConventionBindInfo____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
constexpr ____Zenject__ConventionBindInfo____c__DisplayClass6_0(____Zenject__ConventionBindInfo____c__DisplayClass6_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__ConventionBindInfo____c__DisplayClass6_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__ConventionBindInfo____c__DisplayClass6_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__ConventionBindInfo____c__DisplayClass6_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__ConventionBindInfo____c__DisplayClass6_0& operator=(____Zenject__ConventionBindInfo____c__DisplayClass6_0&& o) noexcept = default;
  constexpr ____Zenject__ConventionBindInfo____c__DisplayClass6_0& operator=(____Zenject__ConventionBindInfo____c__DisplayClass6_0 const& o) noexcept = default;
                


// Fields

 ::System::Reflection::Assembly __declspec(property(get=__get_assembly, put=__set_assembly))  assembly;

constexpr void __set_assembly(::System::Reflection::Assembly value) ;

constexpr ::System::Reflection::Assembly __get_assembly() const;


// Methods

// Ctor Parameters []
explicit ____Zenject__ConventionBindInfo____c__DisplayClass6_0() ;

/// @brief Method .ctor addr 0x2d4f40c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ShouldIncludeAssembly>b__0 addr 0x2d4f684 size 0x28 virtual false final false
 bool _ShouldIncludeAssembly_b__0(::System::Func_2<::System::Reflection::Assembly,bool> predicate) ;

/// @brief Method __zenCreate addr 0x2d4f6ac size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d4f708 size 0x1c0 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass7_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10628))
// CS Name: Zenject.ConventionBindInfo::<>c__DisplayClass7_0
class CORDL_TYPE ____Zenject__ConventionBindInfo____c__DisplayClass7_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____Zenject__ConventionBindInfo____c__DisplayClass7_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__ConventionBindInfo____c__DisplayClass7_0", modifiers: " const&", def_value: None }]
constexpr ____Zenject__ConventionBindInfo____c__DisplayClass7_0(____Zenject__ConventionBindInfo____c__DisplayClass7_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__ConventionBindInfo____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
constexpr ____Zenject__ConventionBindInfo____c__DisplayClass7_0(____Zenject__ConventionBindInfo____c__DisplayClass7_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__ConventionBindInfo____c__DisplayClass7_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__ConventionBindInfo____c__DisplayClass7_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__ConventionBindInfo____c__DisplayClass7_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__ConventionBindInfo____c__DisplayClass7_0& operator=(____Zenject__ConventionBindInfo____c__DisplayClass7_0&& o) noexcept = default;
  constexpr ____Zenject__ConventionBindInfo____c__DisplayClass7_0& operator=(____Zenject__ConventionBindInfo____c__DisplayClass7_0 const& o) noexcept = default;
                


// Fields

 ::System::Type __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(::System::Type value) ;

constexpr ::System::Type __get_type() const;


// Methods

// Ctor Parameters []
explicit ____Zenject__ConventionBindInfo____c__DisplayClass7_0() ;

/// @brief Method .ctor addr 0x2d4f4ec size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ShouldIncludeType>b__0 addr 0x2d4f8c8 size 0x28 virtual false final false
 bool _ShouldIncludeType_b__0(::System::Func_2<::System::Type,bool> predicate) ;

/// @brief Method __zenCreate addr 0x2d4f8f0 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d4f94c size 0x1c0 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::ConventionBindInfo
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10629))
// CS Name: Zenject.ConventionBindInfo
class CORDL_TYPE ConventionBindInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass7_0 = ::Zenject::____Zenject__ConventionBindInfo____c__DisplayClass7_0;

using __c__DisplayClass6_0 = ::Zenject::____Zenject__ConventionBindInfo____c__DisplayClass6_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ConventionBindInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConventionBindInfo", modifiers: " const&", def_value: None }]
constexpr ConventionBindInfo(ConventionBindInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConventionBindInfo", modifiers: "&&", def_value: None }]
constexpr ConventionBindInfo(ConventionBindInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConventionBindInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ConventionBindInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConventionBindInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConventionBindInfo& operator=(ConventionBindInfo&& o) noexcept = default;
  constexpr ConventionBindInfo& operator=(ConventionBindInfo const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::System::Func_2<::System::Type,bool>> __declspec(property(get=__get__typeFilters, put=__set__typeFilters))  _typeFilters;

constexpr void __set__typeFilters(::System::Collections::Generic::List_1<::System::Func_2<::System::Type,bool>> value) ;

constexpr ::System::Collections::Generic::List_1<::System::Func_2<::System::Type,bool>> __get__typeFilters() const;

 ::System::Collections::Generic::List_1<::System::Func_2<::System::Reflection::Assembly,bool>> __declspec(property(get=__get__assemblyFilters, put=__set__assemblyFilters))  _assemblyFilters;

constexpr void __set__assemblyFilters(::System::Collections::Generic::List_1<::System::Func_2<::System::Reflection::Assembly,bool>> value) ;

constexpr ::System::Collections::Generic::List_1<::System::Func_2<::System::Reflection::Assembly,bool>> __get__assemblyFilters() const;

static ::System::Collections::Generic::Dictionary_2<::System::Reflection::Assembly,::ArrayW<::System::Type>> __declspec(property(get=__get__assemblyTypeCache, put=__set__assemblyTypeCache))  _assemblyTypeCache;

static void __set__assemblyTypeCache(::System::Collections::Generic::Dictionary_2<::System::Reflection::Assembly,::ArrayW<::System::Type>> value) ;

static ::System::Collections::Generic::Dictionary_2<::System::Reflection::Assembly,::ArrayW<::System::Type>> __get__assemblyTypeCache() ;


// Methods

/// @brief Method AddAssemblyFilter addr 0x2d4ec8c size 0xa8 virtual false final false
 void AddAssemblyFilter(::System::Func_2<::System::Reflection::Assembly,bool> predicate) ;

/// @brief Method AddTypeFilter addr 0x2d4f26c size 0xa8 virtual false final false
 void AddTypeFilter(::System::Func_2<::System::Type,bool> predicate) ;

/// @brief Method GetAllAssemblies addr 0x2d4f314 size 0x20 virtual false final false
 ::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly> GetAllAssemblies() ;

/// @brief Method ShouldIncludeAssembly addr 0x2d4f334 size 0xd8 virtual false final false
 bool ShouldIncludeAssembly(::System::Reflection::Assembly assembly) ;

/// @brief Method ShouldIncludeType addr 0x2d4f414 size 0xd8 virtual false final false
 bool ShouldIncludeType(::System::Type type) ;

/// @brief Method GetTypes addr 0x2d4f4f4 size 0x100 virtual false final false
 ::ArrayW<::System::Type> GetTypes(::System::Reflection::Assembly assembly) ;

/// @brief Method ResolveTypes addr 0x2d4dc54 size 0x1b0 virtual false final false
 ::System::Collections::Generic::List_1<::System::Type> ResolveTypes() ;

// Ctor Parameters []
explicit ConventionBindInfo() ;

/// @brief Method .ctor addr 0x2d4db6c size 0xc0 virtual false final false
 void _ctor() ;

/// @brief Method <ResolveTypes>b__9_0 addr 0x2d4f680 size 0x4 virtual false final false
 ::System::Collections::Generic::IEnumerable_1<::System::Type> _ResolveTypes_b__9_0(::System::Reflection::Assembly assembly) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::ConventionBindInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ConventionBindInfo, "Zenject", "ConventionBindInfo");
NEED_NO_BOX(::Zenject::____Zenject__ConventionBindInfo____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::____Zenject__ConventionBindInfo____c__DisplayClass6_0, "Zenject", "ConventionBindInfo/<>c__DisplayClass6_0");
NEED_NO_BOX(::Zenject::____Zenject__ConventionBindInfo____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::____Zenject__ConventionBindInfo____c__DisplayClass7_0, "Zenject", "ConventionBindInfo/<>c__DisplayClass7_0");
