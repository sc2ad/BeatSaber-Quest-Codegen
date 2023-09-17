#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace Zenject {
class InjectableInfo;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
// Forward declare root types
namespace Zenject::Internal {
class ReflectionTypeInfo;
}
namespace Zenject::Internal {
class ____Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo;
}
namespace Zenject::Internal {
class ____Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo;
}
namespace Zenject::Internal {
class ____Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo;
}
namespace Zenject::Internal {
class ____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo;
}
namespace Zenject::Internal {
class ____Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo;
}
// Type: ::InjectFieldInfo
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11320))
// CS Name: Zenject.Internal.ReflectionTypeInfo::InjectFieldInfo
class CORDL_TYPE ____Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo", modifiers: " const&", def_value: None }]
constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo(____Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo", modifiers: "&&", def_value: None }]
constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo(____Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo& operator=(____Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo&& o) noexcept = default;
  constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo& operator=(____Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo const& o) noexcept = default;
                


// Fields

 ::System::Reflection::FieldInfo __declspec(property(get=__get_FieldInfo, put=__set_FieldInfo))  FieldInfo;

constexpr void __set_FieldInfo(::System::Reflection::FieldInfo value) ;

constexpr ::System::Reflection::FieldInfo __get_FieldInfo() const;

 ::Zenject::InjectableInfo __declspec(property(get=__get_InjectableInfo, put=__set_InjectableInfo))  InjectableInfo;

constexpr void __set_InjectableInfo(::Zenject::InjectableInfo value) ;

constexpr ::Zenject::InjectableInfo __get_InjectableInfo() const;


// Methods

// Ctor Parameters [CppParam { name: "fieldInfo", ty: "::System::Reflection::FieldInfo", modifiers: "", def_value: None }, CppParam { name: "injectableInfo", ty: "::Zenject::InjectableInfo", modifiers: "", def_value: None }]
explicit ____Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo(::System::Reflection::FieldInfo fieldInfo, ::Zenject::InjectableInfo injectableInfo) ;

/// @brief Method .ctor addr 0x2da9cc0 size 0x2c virtual false final false
 void _ctor(::System::Reflection::FieldInfo fieldInfo, ::Zenject::InjectableInfo injectableInfo) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject::Internal
// Type: ::InjectParameterInfo
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11321))
// CS Name: Zenject.Internal.ReflectionTypeInfo::InjectParameterInfo
class CORDL_TYPE ____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo", modifiers: " const&", def_value: None }]
constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo(____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo", modifiers: "&&", def_value: None }]
constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo(____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo& operator=(____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo&& o) noexcept = default;
  constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo& operator=(____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo const& o) noexcept = default;
                


// Fields

 ::System::Reflection::ParameterInfo __declspec(property(get=__get_ParameterInfo, put=__set_ParameterInfo))  ParameterInfo;

constexpr void __set_ParameterInfo(::System::Reflection::ParameterInfo value) ;

constexpr ::System::Reflection::ParameterInfo __get_ParameterInfo() const;

 ::Zenject::InjectableInfo __declspec(property(get=__get_InjectableInfo, put=__set_InjectableInfo))  InjectableInfo;

constexpr void __set_InjectableInfo(::Zenject::InjectableInfo value) ;

constexpr ::Zenject::InjectableInfo __get_InjectableInfo() const;


// Methods

// Ctor Parameters [CppParam { name: "parameterInfo", ty: "::System::Reflection::ParameterInfo", modifiers: "", def_value: None }, CppParam { name: "injectableInfo", ty: "::Zenject::InjectableInfo", modifiers: "", def_value: None }]
explicit ____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo(::System::Reflection::ParameterInfo parameterInfo, ::Zenject::InjectableInfo injectableInfo) ;

/// @brief Method .ctor addr 0x2da9cec size 0x2c virtual false final false
 void _ctor(::System::Reflection::ParameterInfo parameterInfo, ::Zenject::InjectableInfo injectableInfo) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject::Internal
// Type: ::InjectPropertyInfo
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11322))
// CS Name: Zenject.Internal.ReflectionTypeInfo::InjectPropertyInfo
class CORDL_TYPE ____Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo", modifiers: " const&", def_value: None }]
constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo(____Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo", modifiers: "&&", def_value: None }]
constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo(____Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo& operator=(____Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo&& o) noexcept = default;
  constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo& operator=(____Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo const& o) noexcept = default;
                


// Fields

 ::System::Reflection::PropertyInfo __declspec(property(get=__get_PropertyInfo, put=__set_PropertyInfo))  PropertyInfo;

constexpr void __set_PropertyInfo(::System::Reflection::PropertyInfo value) ;

constexpr ::System::Reflection::PropertyInfo __get_PropertyInfo() const;

 ::Zenject::InjectableInfo __declspec(property(get=__get_InjectableInfo, put=__set_InjectableInfo))  InjectableInfo;

constexpr void __set_InjectableInfo(::Zenject::InjectableInfo value) ;

constexpr ::Zenject::InjectableInfo __get_InjectableInfo() const;


// Methods

// Ctor Parameters [CppParam { name: "propertyInfo", ty: "::System::Reflection::PropertyInfo", modifiers: "", def_value: None }, CppParam { name: "injectableInfo", ty: "::Zenject::InjectableInfo", modifiers: "", def_value: None }]
explicit ____Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo(::System::Reflection::PropertyInfo propertyInfo, ::Zenject::InjectableInfo injectableInfo) ;

/// @brief Method .ctor addr 0x2da9d18 size 0x2c virtual false final false
 void _ctor(::System::Reflection::PropertyInfo propertyInfo, ::Zenject::InjectableInfo injectableInfo) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject::Internal
// Type: ::InjectMethodInfo
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11323))
// CS Name: Zenject.Internal.ReflectionTypeInfo::InjectMethodInfo
class CORDL_TYPE ____Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo", modifiers: " const&", def_value: None }]
constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo(____Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo", modifiers: "&&", def_value: None }]
constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo(____Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo& operator=(____Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo&& o) noexcept = default;
  constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo& operator=(____Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo const& o) noexcept = default;
                


// Fields

 ::System::Reflection::MethodInfo __declspec(property(get=__get_MethodInfo, put=__set_MethodInfo))  MethodInfo;

constexpr void __set_MethodInfo(::System::Reflection::MethodInfo value) ;

constexpr ::System::Reflection::MethodInfo __get_MethodInfo() const;

 ::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo> __declspec(property(get=__get_Parameters, put=__set_Parameters))  Parameters;

constexpr void __set_Parameters(::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo> value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo> __get_Parameters() const;


// Methods

// Ctor Parameters [CppParam { name: "methodInfo", ty: "::System::Reflection::MethodInfo", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo>", modifiers: "", def_value: None }]
explicit ____Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo(::System::Reflection::MethodInfo methodInfo, ::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo> parameters) ;

/// @brief Method .ctor addr 0x2da9d44 size 0x2c virtual false final false
 void _ctor(::System::Reflection::MethodInfo methodInfo, ::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo> parameters) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject::Internal
// Type: ::InjectConstructorInfo
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11324))
// CS Name: Zenject.Internal.ReflectionTypeInfo::InjectConstructorInfo
class CORDL_TYPE ____Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo", modifiers: " const&", def_value: None }]
constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo(____Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo", modifiers: "&&", def_value: None }]
constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo(____Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo& operator=(____Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo&& o) noexcept = default;
  constexpr ____Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo& operator=(____Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo const& o) noexcept = default;
                


// Fields

 ::System::Reflection::ConstructorInfo __declspec(property(get=__get_ConstructorInfo, put=__set_ConstructorInfo))  ConstructorInfo;

constexpr void __set_ConstructorInfo(::System::Reflection::ConstructorInfo value) ;

constexpr ::System::Reflection::ConstructorInfo __get_ConstructorInfo() const;

 ::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo> __declspec(property(get=__get_Parameters, put=__set_Parameters))  Parameters;

constexpr void __set_Parameters(::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo> value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo> __get_Parameters() const;


// Methods

// Ctor Parameters [CppParam { name: "constructorInfo", ty: "::System::Reflection::ConstructorInfo", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo>", modifiers: "", def_value: None }]
explicit ____Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo(::System::Reflection::ConstructorInfo constructorInfo, ::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo> parameters) ;

/// @brief Method .ctor addr 0x2da9d70 size 0x2c virtual false final false
 void _ctor(::System::Reflection::ConstructorInfo constructorInfo, ::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo> parameters) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject::Internal
// Type: Zenject.Internal::ReflectionTypeInfo
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11325))
// CS Name: Zenject.Internal.ReflectionTypeInfo
class CORDL_TYPE ReflectionTypeInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using InjectConstructorInfo = ::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo;

using InjectMethodInfo = ::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo;

using InjectPropertyInfo = ::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo;

using InjectParameterInfo = ::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo;

using InjectFieldInfo = ::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ReflectionTypeInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeInfo", modifiers: " const&", def_value: None }]
constexpr ReflectionTypeInfo(ReflectionTypeInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeInfo", modifiers: "&&", def_value: None }]
constexpr ReflectionTypeInfo(ReflectionTypeInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReflectionTypeInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ReflectionTypeInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReflectionTypeInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReflectionTypeInfo& operator=(ReflectionTypeInfo&& o) noexcept = default;
  constexpr ReflectionTypeInfo& operator=(ReflectionTypeInfo const& o) noexcept = default;
                


// Fields

 ::System::Type __declspec(property(get=__get_Type, put=__set_Type))  Type;

constexpr void __set_Type(::System::Type value) ;

constexpr ::System::Type __get_Type() const;

 ::System::Type __declspec(property(get=__get_BaseType, put=__set_BaseType))  BaseType;

constexpr void __set_BaseType(::System::Type value) ;

constexpr ::System::Type __get_BaseType() const;

 ::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo> __declspec(property(get=__get_InjectProperties, put=__set_InjectProperties))  InjectProperties;

constexpr void __set_InjectProperties(::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo> value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo> __get_InjectProperties() const;

 ::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo> __declspec(property(get=__get_InjectFields, put=__set_InjectFields))  InjectFields;

constexpr void __set_InjectFields(::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo> value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo> __get_InjectFields() const;

 ::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo __declspec(property(get=__get_InjectConstructor, put=__set_InjectConstructor))  InjectConstructor;

constexpr void __set_InjectConstructor(::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo value) ;

constexpr ::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo __get_InjectConstructor() const;

 ::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo> __declspec(property(get=__get_InjectMethods, put=__set_InjectMethods))  InjectMethods;

constexpr void __set_InjectMethods(::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo> value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo> __get_InjectMethods() const;


// Methods

// Ctor Parameters [CppParam { name: "type", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "baseType", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "injectConstructor", ty: "::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo", modifiers: "", def_value: None }, CppParam { name: "injectMethods", ty: "::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo>", modifiers: "", def_value: None }, CppParam { name: "injectFields", ty: "::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo>", modifiers: "", def_value: None }, CppParam { name: "injectProperties", ty: "::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo>", modifiers: "", def_value: None }]
explicit ReflectionTypeInfo(::System::Type type, ::System::Type baseType, ::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo injectConstructor, ::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo> injectMethods, ::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo> injectFields, ::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo> injectProperties) ;

/// @brief Method .ctor addr 0x2da9c6c size 0x54 virtual false final false
 void _ctor(::System::Type type, ::System::Type baseType, ::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo injectConstructor, ::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo> injectMethods, ::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo> injectFields, ::System::Collections::Generic::List_1<::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo> injectProperties) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject::Internal
} // end anonymous namespace
NEED_NO_BOX(::Zenject::Internal::ReflectionTypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionTypeInfo, "Zenject.Internal", "ReflectionTypeInfo");
NEED_NO_BOX(::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo, "Zenject.Internal", "ReflectionTypeInfo/InjectConstructorInfo");
NEED_NO_BOX(::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo, "Zenject.Internal", "ReflectionTypeInfo/InjectFieldInfo");
NEED_NO_BOX(::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo, "Zenject.Internal", "ReflectionTypeInfo/InjectMethodInfo");
NEED_NO_BOX(::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo, "Zenject.Internal", "ReflectionTypeInfo/InjectParameterInfo");
NEED_NO_BOX(::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::____Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo, "Zenject.Internal", "ReflectionTypeInfo/InjectPropertyInfo");
