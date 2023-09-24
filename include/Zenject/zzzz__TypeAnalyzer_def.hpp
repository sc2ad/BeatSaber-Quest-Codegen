#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Zenject {
class Zenject__TypeAnalyzer____c__DisplayClass23_0;
}
namespace System {
class Type;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
struct ReflectionBakingCoverageModes;
}
namespace Zenject::Internal {
class Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo;
}
namespace Zenject {
class Zenject__InjectTypeInfo__InjectMemberInfo;
}
namespace Zenject::Internal {
class Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo;
}
// Forward declare root types
namespace Zenject {
class TypeAnalyzer;
}
namespace Zenject {
class Zenject__TypeAnalyzer____c__DisplayClass23_0;
}
// Type: ::<>c__DisplayClass23_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11297))
// CS Name: Zenject.TypeAnalyzer::<>c__DisplayClass23_0
class CORDL_TYPE Zenject__TypeAnalyzer____c__DisplayClass23_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Zenject__TypeAnalyzer____c__DisplayClass23_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__TypeAnalyzer____c__DisplayClass23_0", modifiers: " const&", def_value: None }]
constexpr Zenject__TypeAnalyzer____c__DisplayClass23_0(Zenject__TypeAnalyzer____c__DisplayClass23_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__TypeAnalyzer____c__DisplayClass23_0", modifiers: "&&", def_value: None }]
constexpr Zenject__TypeAnalyzer____c__DisplayClass23_0(Zenject__TypeAnalyzer____c__DisplayClass23_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__TypeAnalyzer____c__DisplayClass23_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__TypeAnalyzer____c__DisplayClass23_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__TypeAnalyzer____c__DisplayClass23_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__TypeAnalyzer____c__DisplayClass23_0& operator=(Zenject__TypeAnalyzer____c__DisplayClass23_0&& o) noexcept = default;
  constexpr Zenject__TypeAnalyzer____c__DisplayClass23_0& operator=(Zenject__TypeAnalyzer____c__DisplayClass23_0 const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(System::Type value) ;

constexpr System::Type __get_type() const;


// Methods

static Zenject::Zenject__TypeAnalyzer____c__DisplayClass23_0 New_ctor() ;

/// @brief Method .ctor addr 0x2da5b98 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <CreateTypeInfoFromReflection>b__0 addr 0x2da5fd0 size 0x8 virtual false final false
 Zenject::Zenject__InjectTypeInfo__InjectMemberInfo _CreateTypeInfoFromReflection_b__0(Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo x) ;

/// @brief Method <CreateTypeInfoFromReflection>b__1 addr 0x2da6060 size 0x8 virtual false final false
 Zenject::Zenject__InjectTypeInfo__InjectMemberInfo _CreateTypeInfoFromReflection_b__1(Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo x) ;

/// @brief Method __zenCreate addr 0x2da60f0 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2da614c size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::TypeAnalyzer
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11298))
// CS Name: Zenject.TypeAnalyzer
class CORDL_TYPE TypeAnalyzer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass23_0 = Zenject::Zenject__TypeAnalyzer____c__DisplayClass23_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TypeAnalyzer() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeAnalyzer", modifiers: " const&", def_value: None }]
constexpr TypeAnalyzer(TypeAnalyzer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeAnalyzer", modifiers: "&&", def_value: None }]
constexpr TypeAnalyzer(TypeAnalyzer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeAnalyzer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TypeAnalyzer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeAnalyzer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeAnalyzer& operator=(TypeAnalyzer&& o) noexcept = default;
  constexpr TypeAnalyzer& operator=(TypeAnalyzer const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::Dictionary_2<System::Type,Zenject::InjectTypeInfo> __declspec(property(get=__get__typeInfo, put=__set__typeInfo))  _typeInfo;

static void __set__typeInfo(System::Collections::Generic::Dictionary_2<System::Type,Zenject::InjectTypeInfo> value) ;

static System::Collections::Generic::Dictionary_2<System::Type,Zenject::InjectTypeInfo> __get__typeInfo() ;

static System::Collections::Generic::Dictionary_2<System::Type,bool> __declspec(property(get=__get__allowDuringValidation, put=__set__allowDuringValidation))  _allowDuringValidation;

static void __set__allowDuringValidation(System::Collections::Generic::Dictionary_2<System::Type,bool> value) ;

static System::Collections::Generic::Dictionary_2<System::Type,bool> __get__allowDuringValidation() ;

/// @brief Field ReflectionBakingGetInjectInfoMethodName offset 0
static constexpr ::ConstString  ReflectionBakingGetInjectInfoMethodName{u"__zenCreateInjectTypeInfo"};

/// @brief Field ReflectionBakingFactoryMethodName offset 0
static constexpr ::ConstString  ReflectionBakingFactoryMethodName{u"__zenCreate"};

/// @brief Field ReflectionBakingInjectMethodPrefix offset 0
static constexpr ::ConstString  ReflectionBakingInjectMethodPrefix{u"__zenInjectMethod"};

/// @brief Field ReflectionBakingFieldSetterPrefix offset 0
static constexpr ::ConstString  ReflectionBakingFieldSetterPrefix{u"__zenFieldSetter"};

/// @brief Field ReflectionBakingPropertySetterPrefix offset 0
static constexpr ::ConstString  ReflectionBakingPropertySetterPrefix{u"__zenPropertySetter"};

static Zenject::ReflectionBakingCoverageModes __declspec(property(get=__get__ReflectionBakingCoverageMode_k__BackingField, put=__set__ReflectionBakingCoverageMode_k__BackingField))  _ReflectionBakingCoverageMode_k__BackingField;

static void __set__ReflectionBakingCoverageMode_k__BackingField(Zenject::ReflectionBakingCoverageModes value) ;

static Zenject::ReflectionBakingCoverageModes __get__ReflectionBakingCoverageMode_k__BackingField() ;


// Properties

static Zenject::ReflectionBakingCoverageModes __declspec(property(get=get_ReflectionBakingCoverageMode, put=set_ReflectionBakingCoverageMode))  ReflectionBakingCoverageMode;


// Methods

/// @brief Method get_ReflectionBakingCoverageMode addr 0x2da5228 size 0x58 virtual false final false
static Zenject::ReflectionBakingCoverageModes get_ReflectionBakingCoverageMode() ;

/// @brief Method set_ReflectionBakingCoverageMode addr 0x2da5280 size 0x5c virtual false final false
static void set_ReflectionBakingCoverageMode(Zenject::ReflectionBakingCoverageModes value) ;

/// @brief Method ShouldAllowDuringValidation addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool ShouldAllowDuringValidation() ;

/// @brief Method ShouldAllowDuringValidation addr 0x2d8c8b8 size 0xec virtual false final false
static bool ShouldAllowDuringValidation(System::Type type) ;

/// @brief Method ShouldAllowDuringValidationInternal addr 0x2da52dc size 0x118 virtual false final false
static bool ShouldAllowDuringValidationInternal(System::Type type) ;

/// @brief Method HasInfo addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool HasInfo() ;

/// @brief Method HasInfo addr 0x2da53f4 size 0x60 virtual false final false
static bool HasInfo(System::Type type) ;

/// @brief Method GetInfo addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static Zenject::InjectTypeInfo GetInfo() ;

/// @brief Method GetInfo addr 0x2d939c4 size 0x84 virtual false final false
static Zenject::InjectTypeInfo GetInfo(System::Type type) ;

/// @brief Method TryGetInfo addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static Zenject::InjectTypeInfo TryGetInfo() ;

/// @brief Method TryGetInfo addr 0x2d8a748 size 0x1d4 virtual false final false
static Zenject::InjectTypeInfo TryGetInfo(System::Type type) ;

/// @brief Method GetInfoInternal addr 0x2da5454 size 0x27c virtual false final false
static Zenject::InjectTypeInfo GetInfoInternal(System::Type type) ;

/// @brief Method ShouldSkipTypeAnalysis addr 0x2da56d0 size 0x170 virtual false final false
static bool ShouldSkipTypeAnalysis(System::Type type) ;

/// @brief Method IsStaticType addr 0x2da5b10 size 0x88 virtual false final false
static bool IsStaticType(System::Type type) ;

/// @brief Method CreateTypeInfoFromReflection addr 0x2da5840 size 0x2d0 virtual false final false
static Zenject::InjectTypeInfo CreateTypeInfoFromReflection(System::Type type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::TypeAnalyzer);
DEFINE_IL2CPP_ARG_TYPE(Zenject::TypeAnalyzer, "Zenject", "TypeAnalyzer");
NEED_NO_BOX(Zenject::Zenject__TypeAnalyzer____c__DisplayClass23_0);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__TypeAnalyzer____c__DisplayClass23_0, "Zenject", "TypeAnalyzer/<>c__DisplayClass23_0");
