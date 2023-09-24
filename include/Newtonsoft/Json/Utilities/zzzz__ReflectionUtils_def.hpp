#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Reflection {
class ConstructorInfo;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System {
class Type;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace Newtonsoft::Json::Utilities {
class Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass42_0;
}
namespace Newtonsoft::Json::Utilities {
class Newtonsoft__Json__Utilities__ReflectionUtils____c;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace Newtonsoft::Json::Utilities {
class Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass43_0;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Runtime::Serialization::Formatters {
struct FormatterAssemblyStyle;
}
namespace System {
class Attribute;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Runtime::Serialization {
class SerializationBinder;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class Newtonsoft__Json__Utilities__ReflectionUtils____c;
}
namespace Newtonsoft::Json::Utilities {
class Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass42_0;
}
namespace Newtonsoft::Json::Utilities {
class Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass43_0;
}
namespace Newtonsoft::Json::Utilities {
class ReflectionUtils;
}
// Type: ::<>c
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11837))
// CS Name: Newtonsoft.Json.Utilities.ReflectionUtils::<>c
class CORDL_TYPE Newtonsoft__Json__Utilities__ReflectionUtils____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Newtonsoft__Json__Utilities__ReflectionUtils____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Utilities__ReflectionUtils____c", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__Utilities__ReflectionUtils____c(Newtonsoft__Json__Utilities__ReflectionUtils____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Utilities__ReflectionUtils____c", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__Utilities__ReflectionUtils____c(Newtonsoft__Json__Utilities__ReflectionUtils____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Utilities__ReflectionUtils____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__Utilities__ReflectionUtils____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__Utilities__ReflectionUtils____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__Utilities__ReflectionUtils____c& operator=(Newtonsoft__Json__Utilities__ReflectionUtils____c&& o) noexcept = default;
  constexpr Newtonsoft__Json__Utilities__ReflectionUtils____c& operator=(Newtonsoft__Json__Utilities__ReflectionUtils____c const& o) noexcept = default;
                


// Fields

static Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ReflectionUtils____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ReflectionUtils____c value) ;

static Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ReflectionUtils____c __get___9() ;

static System::Func_2<System::Reflection::ConstructorInfo,bool> __declspec(property(get=__get___9__10_0, put=__set___9__10_0))  __9__10_0;

static void __set___9__10_0(System::Func_2<System::Reflection::ConstructorInfo,bool> value) ;

static System::Func_2<System::Reflection::ConstructorInfo,bool> __get___9__10_0() ;

static System::Func_2<System::Reflection::MemberInfo,::StringW> __declspec(property(get=__get___9__29_0, put=__set___9__29_0))  __9__29_0;

static void __set___9__29_0(System::Func_2<System::Reflection::MemberInfo,::StringW> value) ;

static System::Func_2<System::Reflection::MemberInfo,::StringW> __get___9__29_0() ;

static System::Func_2<System::Reflection::ParameterInfo,System::Type> __declspec(property(get=__get___9__37_0, put=__set___9__37_0))  __9__37_0;

static void __set___9__37_0(System::Func_2<System::Reflection::ParameterInfo,System::Type> value) ;

static System::Func_2<System::Reflection::ParameterInfo,System::Type> __get___9__37_0() ;

static System::Func_2<System::Reflection::FieldInfo,bool> __declspec(property(get=__get___9__39_0, put=__set___9__39_0))  __9__39_0;

static void __set___9__39_0(System::Func_2<System::Reflection::FieldInfo,bool> value) ;

static System::Func_2<System::Reflection::FieldInfo,bool> __get___9__39_0() ;


// Methods

static Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ReflectionUtils____c New_ctor() ;

/// @brief Method .ctor addr 0x24f1688 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetDefaultConstructor>b__10_0 addr 0x24f1690 size 0x6c virtual false final false
 bool _GetDefaultConstructor_b__10_0(System::Reflection::ConstructorInfo c) ;

/// @brief Method <GetFieldsAndProperties>b__29_0 addr 0x24f16fc size 0x20 virtual false final false
 ::StringW _GetFieldsAndProperties_b__29_0(System::Reflection::MemberInfo m) ;

/// @brief Method <GetMemberInfoFromType>b__37_0 addr 0x24f171c size 0x20 virtual false final false
 System::Type _GetMemberInfoFromType_b__37_0(System::Reflection::ParameterInfo p) ;

/// @brief Method <GetChildPrivateFields>b__39_0 addr 0x24f173c size 0x18 virtual false final false
 bool _GetChildPrivateFields_b__39_0(System::Reflection::FieldInfo f) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
// Type: ::<>c__DisplayClass42_0
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11838))
// CS Name: Newtonsoft.Json.Utilities.ReflectionUtils::<>c__DisplayClass42_0
class CORDL_TYPE Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass42_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass42_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass42_0", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass42_0(Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass42_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass42_0", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass42_0(Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass42_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass42_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass42_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass42_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass42_0& operator=(Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass42_0&& o) noexcept = default;
  constexpr Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass42_0& operator=(Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass42_0 const& o) noexcept = default;
                


// Fields

 System::Reflection::PropertyInfo __declspec(property(get=__get_subTypeProperty, put=__set_subTypeProperty))  subTypeProperty;

constexpr void __set_subTypeProperty(System::Reflection::PropertyInfo value) ;

constexpr System::Reflection::PropertyInfo __get_subTypeProperty() const;


// Methods

static Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass42_0 New_ctor() ;

/// @brief Method .ctor addr 0x24f12f0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetChildPrivateProperties>b__0 addr 0x24f1754 size 0x54 virtual false final false
 bool _GetChildPrivateProperties_b__0(System::Reflection::PropertyInfo p) ;

/// @brief Method <GetChildPrivateProperties>b__1 addr 0x24f17a8 size 0xa0 virtual false final false
 bool _GetChildPrivateProperties_b__1(System::Reflection::PropertyInfo p) ;

/// @brief Method <GetChildPrivateProperties>b__2 addr 0x24f1848 size 0x134 virtual false final false
 bool _GetChildPrivateProperties_b__2(System::Reflection::PropertyInfo p) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
// Type: ::<>c__DisplayClass43_0
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11839))
// CS Name: Newtonsoft.Json.Utilities.ReflectionUtils::<>c__DisplayClass43_0
class CORDL_TYPE Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass43_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass43_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass43_0", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass43_0(Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass43_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass43_0", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass43_0(Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass43_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass43_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass43_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass43_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass43_0& operator=(Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass43_0&& o) noexcept = default;
  constexpr Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass43_0& operator=(Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass43_0 const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_method, put=__set_method))  method;

constexpr void __set_method(::StringW value) ;

constexpr ::StringW __get_method() const;

 System::Type __declspec(property(get=__get_methodDeclaringType, put=__set_methodDeclaringType))  methodDeclaringType;

constexpr void __set_methodDeclaringType(System::Type value) ;

constexpr System::Type __get_methodDeclaringType() const;


// Methods

static Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass43_0 New_ctor() ;

/// @brief Method .ctor addr 0x24f13f4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <IsMethodOverridden>b__0 addr 0x24f197c size 0x98 virtual false final false
 bool _IsMethodOverridden_b__0(System::Reflection::MethodInfo info) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
// Type: Newtonsoft.Json.Utilities::ReflectionUtils
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11840))
// CS Name: Newtonsoft.Json.Utilities.ReflectionUtils
class CORDL_TYPE ReflectionUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass43_0 = Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass43_0;

using __c__DisplayClass42_0 = Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass42_0;

using __c = Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ReflectionUtils____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ReflectionUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils", modifiers: " const&", def_value: None }]
constexpr ReflectionUtils(ReflectionUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils", modifiers: "&&", def_value: None }]
constexpr ReflectionUtils(ReflectionUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReflectionUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ReflectionUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReflectionUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReflectionUtils& operator=(ReflectionUtils&& o) noexcept = default;
  constexpr ReflectionUtils& operator=(ReflectionUtils const& o) noexcept = default;
                


// Fields

static ::ArrayW<System::Type> __declspec(property(get=__get_EmptyTypes, put=__set_EmptyTypes))  EmptyTypes;

static void __set_EmptyTypes(::ArrayW<System::Type> value) ;

static ::ArrayW<System::Type> __get_EmptyTypes() ;


// Methods

/// @brief Method IsVirtual addr 0x24edd4c size 0x98 virtual false final false
static bool IsVirtual(System::Reflection::PropertyInfo propertyInfo) ;

/// @brief Method GetBaseDefinition addr 0x24edde4 size 0x8c virtual false final false
static System::Reflection::MethodInfo GetBaseDefinition(System::Reflection::PropertyInfo propertyInfo) ;

/// @brief Method IsPublic addr 0x24ede70 size 0x78 virtual false final false
static bool IsPublic(System::Reflection::PropertyInfo property) ;

/// @brief Method GetObjectType addr 0x24e55ac size 0x10 virtual false final false
static System::Type GetObjectType(::bs_hook::Il2CppWrapperType v) ;

/// @brief Method GetTypeName addr 0x24edee8 size 0xd0 virtual false final false
static ::StringW GetTypeName(System::Type t, System::Runtime::Serialization::Formatters::FormatterAssemblyStyle assemblyFormat, System::Runtime::Serialization::SerializationBinder binder) ;

/// @brief Method RemoveAssemblyDetails addr 0x24edfb8 size 0x130 virtual false final false
static ::StringW RemoveAssemblyDetails(::StringW fullyQualifiedTypeName) ;

/// @brief Method HasDefaultConstructor addr 0x24e32c4 size 0xb0 virtual false final false
static bool HasDefaultConstructor(System::Type t, bool nonPublic) ;

/// @brief Method GetDefaultConstructor addr 0x24ee22c size 0x58 virtual false final false
static System::Reflection::ConstructorInfo GetDefaultConstructor(System::Type t) ;

/// @brief Method GetDefaultConstructor addr 0x24ee0fc size 0x130 virtual false final false
static System::Reflection::ConstructorInfo GetDefaultConstructor(System::Type t, bool nonPublic) ;

/// @brief Method IsNullable addr 0x24e516c size 0x9c virtual false final false
static bool IsNullable(System::Type t) ;

/// @brief Method IsNullableType addr 0x24e3f00 size 0xe0 virtual false final false
static bool IsNullableType(System::Type t) ;

/// @brief Method EnsureNotNullableType addr 0x24ee2a4 size 0x74 virtual false final false
static System::Type EnsureNotNullableType(System::Type t) ;

/// @brief Method IsGenericDefinition addr 0x24ee318 size 0x5c virtual false final false
static bool IsGenericDefinition(System::Type type, System::Type genericInterfaceDefinition) ;

/// @brief Method ImplementsGenericDefinition addr 0x24ec530 size 0x74 virtual false final false
static bool ImplementsGenericDefinition(System::Type type, System::Type genericInterfaceDefinition) ;

/// @brief Method ImplementsGenericDefinition addr 0x24ee374 size 0x210 virtual false final false
static bool ImplementsGenericDefinition(System::Type type, System::Type genericInterfaceDefinition, ByRef<System::Type> implementingType) ;

/// @brief Method InheritsGenericDefinition addr 0x24ee584 size 0x74 virtual false final false
static bool InheritsGenericDefinition(System::Type type, System::Type genericClassDefinition) ;

/// @brief Method InheritsGenericDefinition addr 0x24ee5f8 size 0x15c virtual false final false
static bool InheritsGenericDefinition(System::Type type, System::Type genericClassDefinition, ByRef<System::Type> implementingType) ;

/// @brief Method InheritsGenericDefinitionInternal addr 0x24ee768 size 0xe8 virtual false final false
static bool InheritsGenericDefinitionInternal(System::Type currentType, System::Type genericClassDefinition, ByRef<System::Type> implementingType) ;

/// @brief Method GetCollectionItemType addr 0x24ee870 size 0x228 virtual false final false
static System::Type GetCollectionItemType(System::Type type) ;

/// @brief Method GetDictionaryKeyValueTypes addr 0x24eea98 size 0x22c virtual false final false
static void GetDictionaryKeyValueTypes(System::Type dictionaryType, ByRef<System::Type> keyType, ByRef<System::Type> valueType) ;

/// @brief Method GetMemberUnderlyingType addr 0x24e3668 size 0x224 virtual false final false
static System::Type GetMemberUnderlyingType(System::Reflection::MemberInfo member) ;

/// @brief Method IsIndexedProperty addr 0x24eecc4 size 0xcc virtual false final false
static bool IsIndexedProperty(System::Reflection::MemberInfo member) ;

/// @brief Method IsIndexedProperty addr 0x24eed90 size 0x78 virtual false final false
static bool IsIndexedProperty(System::Reflection::PropertyInfo property) ;

/// @brief Method GetMemberValue addr 0x24eee08 size 0x328 virtual false final false
static ::bs_hook::Il2CppWrapperType GetMemberValue(System::Reflection::MemberInfo member, ::bs_hook::Il2CppWrapperType target) ;

/// @brief Method SetMemberValue addr 0x24ef130 size 0x214 virtual false final false
static void SetMemberValue(System::Reflection::MemberInfo member, ::bs_hook::Il2CppWrapperType target, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method CanReadMemberValue addr 0x24e3398 size 0x144 virtual false final false
static bool CanReadMemberValue(System::Reflection::MemberInfo member, bool nonPublic) ;

/// @brief Method CanSetMemberValue addr 0x24e34dc size 0x17c virtual false final false
static bool CanSetMemberValue(System::Reflection::MemberInfo member, bool nonPublic, bool canSetReadOnly) ;

/// @brief Method GetFieldsAndProperties addr 0x24ef344 size 0xa88 virtual false final false
static System::Collections::Generic::List_1<System::Reflection::MemberInfo> GetFieldsAndProperties(System::Type type, System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method IsOverridenGenericMember addr 0x24f01a4 size 0x19c virtual false final false
static bool IsOverridenGenericMember(System::Reflection::MemberInfo memberInfo, System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetAttribute addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T GetAttribute(::bs_hook::Il2CppWrapperType attributeProvider) ;

/// @brief Method GetAttribute addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T GetAttribute(::bs_hook::Il2CppWrapperType attributeProvider, bool inherit) ;

/// @brief Method GetAttributes addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<T> GetAttributes(::bs_hook::Il2CppWrapperType attributeProvider, bool inherit) ;

/// @brief Method GetAttributes addr 0x24f0340 size 0x4f4 virtual false final false
static ::ArrayW<System::Attribute> GetAttributes(::bs_hook::Il2CppWrapperType attributeProvider, System::Type attributeType, bool inherit) ;

/// @brief Method SplitFullyQualifiedTypeName addr 0x24f0834 size 0xf0 virtual false final false
static void SplitFullyQualifiedTypeName(::StringW fullyQualifiedTypeName, ByRef<::StringW> typeName, ByRef<::StringW> assemblyName) ;

/// @brief Method GetAssemblyDelimiterIndex addr 0x24f0924 size 0xd8 virtual false final false
static System::Nullable_1<int32_t> GetAssemblyDelimiterIndex(::StringW fullyQualifiedTypeName) ;

/// @brief Method GetMemberInfoFromType addr 0x24f09fc size 0x268 virtual false final false
static System::Reflection::MemberInfo GetMemberInfoFromType(System::Type targetType, System::Reflection::MemberInfo memberInfo) ;

/// @brief Method GetFields addr 0x24efdcc size 0x11c virtual false final false
static System::Collections::Generic::IEnumerable_1<System::Reflection::FieldInfo> GetFields(System::Type targetType, System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetChildPrivateFields addr 0x24f0c64 size 0x1e8 virtual false final false
static void GetChildPrivateFields(System::Collections::Generic::IList_1<System::Reflection::MemberInfo> initialFields, System::Type targetType, System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method GetProperties addr 0x24efee8 size 0x2bc virtual false final false
static System::Collections::Generic::IEnumerable_1<System::Reflection::PropertyInfo> GetProperties(System::Type targetType, System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method RemoveFlag addr 0x24f0e4c size 0x10 virtual false final false
static System::Reflection::BindingFlags RemoveFlag(System::Reflection::BindingFlags bindingAttr, System::Reflection::BindingFlags flag) ;

/// @brief Method GetChildPrivateProperties addr 0x24f0e5c size 0x494 virtual false final false
static void GetChildPrivateProperties(System::Collections::Generic::IList_1<System::Reflection::PropertyInfo> initialProperties, System::Type targetType, System::Reflection::BindingFlags bindingAttr) ;

/// @brief Method IsMethodOverridden addr 0x24f12f8 size 0xfc virtual false final false
static bool IsMethodOverridden(System::Type currentType, System::Type methodDeclaringType, ::StringW method) ;

/// @brief Method GetDefaultValue addr 0x24f13fc size 0x228 virtual false final false
static ::bs_hook::Il2CppWrapperType GetDefaultValue(System::Type type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
NEED_NO_BOX(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ReflectionUtils____c);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ReflectionUtils____c, "Newtonsoft.Json.Utilities", "ReflectionUtils/<>c");
NEED_NO_BOX(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass42_0);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass42_0, "Newtonsoft.Json.Utilities", "ReflectionUtils/<>c__DisplayClass42_0");
NEED_NO_BOX(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass43_0);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ReflectionUtils____c__DisplayClass43_0, "Newtonsoft.Json.Utilities", "ReflectionUtils/<>c__DisplayClass43_0");
NEED_NO_BOX(Newtonsoft::Json::Utilities::ReflectionUtils);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Utilities::ReflectionUtils, "Newtonsoft.Json.Utilities", "ReflectionUtils");
