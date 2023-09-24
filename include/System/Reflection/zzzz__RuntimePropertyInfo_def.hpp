#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Reflection {
class System__Reflection__RuntimePropertyInfo__GetterAdapter;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Reflection {
template<typename R>
class System__Reflection__RuntimePropertyInfo__StaticGetter_1;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System::Reflection {
class RuntimeModule;
}
namespace System::Reflection {
class Binder;
}
namespace Mono {
struct RuntimePropertyHandle;
}
namespace System {
class RuntimeType;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
template<typename T,typename R>
class System__Reflection__RuntimePropertyInfo__Getter_2;
}
namespace System::Reflection {
class Module;
}
namespace System {
class Type;
}
namespace System::Reflection {
struct MonoPropertyInfo;
}
namespace System::Reflection {
struct PInfo;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
struct RuntimeTypeHandle;
}
// Forward declare root types
namespace System::Reflection {
template<typename T,typename R>
class System__Reflection__RuntimePropertyInfo__Getter_2;
}
namespace System::Reflection {
template<typename R>
class System__Reflection__RuntimePropertyInfo__StaticGetter_1;
}
namespace System::Reflection {
class RuntimePropertyInfo;
}
namespace System::Reflection {
class System__Reflection__RuntimePropertyInfo__GetterAdapter;
}
namespace System::Reflection {
template<::cordl_internals::il2cpp_reference_type T,::cordl_internals::il2cpp_reference_type R>
class System__Reflection__RuntimePropertyInfo__Getter_2<T,R>;
}
namespace System::Reflection {
template<::cordl_internals::il2cpp_reference_type R>
class System__Reflection__RuntimePropertyInfo__StaticGetter_1<R>;
}
// Type: ::GetterAdapter
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3521))
// CS Name: System.Reflection.RuntimePropertyInfo::GetterAdapter
class CORDL_TYPE System__Reflection__RuntimePropertyInfo__GetterAdapter : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~System__Reflection__RuntimePropertyInfo__GetterAdapter() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Reflection__RuntimePropertyInfo__GetterAdapter", modifiers: " const&", def_value: None }]
constexpr System__Reflection__RuntimePropertyInfo__GetterAdapter(System__Reflection__RuntimePropertyInfo__GetterAdapter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Reflection__RuntimePropertyInfo__GetterAdapter", modifiers: "&&", def_value: None }]
constexpr System__Reflection__RuntimePropertyInfo__GetterAdapter(System__Reflection__RuntimePropertyInfo__GetterAdapter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Reflection__RuntimePropertyInfo__GetterAdapter(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr System__Reflection__RuntimePropertyInfo__GetterAdapter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Reflection__RuntimePropertyInfo__GetterAdapter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Reflection__RuntimePropertyInfo__GetterAdapter& operator=(System__Reflection__RuntimePropertyInfo__GetterAdapter&& o) noexcept = default;
  constexpr System__Reflection__RuntimePropertyInfo__GetterAdapter& operator=(System__Reflection__RuntimePropertyInfo__GetterAdapter const& o) noexcept = default;
                


// Methods

static System::Reflection::System__Reflection__RuntimePropertyInfo__GetterAdapter New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x238c188 size 0x12c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x238c2b4 size 0x14 virtual true final false
 ::bs_hook::Il2CppWrapperType Invoke(::bs_hook::Il2CppWrapperType _this) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
// Type: ::Getter`2
// Type: ::StaticGetter`1
// Type: System.Reflection::RuntimePropertyInfo
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3524))
// CS Name: System.Reflection.RuntimePropertyInfo
class CORDL_TYPE RuntimePropertyInfo : public System::Reflection::PropertyInfo {
public:
// Declarations
template<typename R>
using StaticGetter_1 = System::Reflection::System__Reflection__RuntimePropertyInfo__StaticGetter_1<R>;

template<typename T,typename R>
using Getter_2 = System::Reflection::System__Reflection__RuntimePropertyInfo__Getter_2<T, R>;

using GetterAdapter = System::Reflection::System__Reflection__RuntimePropertyInfo__GetterAdapter;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~RuntimePropertyInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimePropertyInfo", modifiers: " const&", def_value: None }]
constexpr RuntimePropertyInfo(RuntimePropertyInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimePropertyInfo", modifiers: "&&", def_value: None }]
constexpr RuntimePropertyInfo(RuntimePropertyInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RuntimePropertyInfo(void* ptr) noexcept : System::Reflection::PropertyInfo(ptr) {
}


  constexpr RuntimePropertyInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RuntimePropertyInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RuntimePropertyInfo& operator=(RuntimePropertyInfo&& o) noexcept = default;
  constexpr RuntimePropertyInfo& operator=(RuntimePropertyInfo const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_klass, put=__set_klass))  klass;

constexpr void __set_klass(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_klass() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_prop, put=__set_prop))  prop;

constexpr void __set_prop(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_prop() const;

 System::Reflection::MonoPropertyInfo __declspec(property(get=__get_info, put=__set_info))  info;

constexpr void __set_info(System::Reflection::MonoPropertyInfo value) ;

constexpr System::Reflection::MonoPropertyInfo __get_info() const;

 System::Reflection::PInfo __declspec(property(get=__get_cached, put=__set_cached))  cached;

constexpr void __set_cached(System::Reflection::PInfo value) ;

constexpr System::Reflection::PInfo __get_cached() const;

 System::Reflection::System__Reflection__RuntimePropertyInfo__GetterAdapter __declspec(property(get=__get_cached_getter, put=__set_cached_getter))  cached_getter;

constexpr void __set_cached_getter(System::Reflection::System__Reflection__RuntimePropertyInfo__GetterAdapter value) ;

constexpr System::Reflection::System__Reflection__RuntimePropertyInfo__GetterAdapter __get_cached_getter() const;


// Properties

 System::Reflection::BindingFlags __declspec(property(get=get_BindingFlags))  BindingFlags;

 System::Reflection::Module __declspec(property(get=get_Module))  Module;

 System::RuntimeType __declspec(property(get=get_ReflectedTypeInternal))  ReflectedTypeInternal;

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 System::Type __declspec(property(get=get_PropertyType))  PropertyType;

 System::Type __declspec(property(get=get_ReflectedType))  ReflectedType;

 System::Type __declspec(property(get=get_DeclaringType))  DeclaringType;

 ::StringW __declspec(property(get=get_Name))  Name;

 int32_t __declspec(property(get=get_MetadataToken))  MetadataToken;


// Methods

/// @brief Method get_property_info addr 0x238a374 size 0x4 virtual false final false
static void get_property_info(System::Reflection::RuntimePropertyInfo prop, ByRef<System::Reflection::MonoPropertyInfo> info, System::Reflection::PInfo req_info) ;

/// @brief Method get_BindingFlags addr 0x238a378 size 0x8 virtual false final false
 System::Reflection::BindingFlags get_BindingFlags() ;

/// @brief Method get_Module addr 0x238a380 size 0x4 virtual true final false
 System::Reflection::Module get_Module() ;

/// @brief Method GetDeclaringTypeInternal addr 0x238a3a0 size 0x84 virtual false final false
 System::RuntimeType GetDeclaringTypeInternal() ;

/// @brief Method get_ReflectedTypeInternal addr 0x238a424 size 0x84 virtual false final false
 System::RuntimeType get_ReflectedTypeInternal() ;

/// @brief Method GetRuntimeModule addr 0x238a384 size 0x1c virtual false final false
 System::Reflection::RuntimeModule GetRuntimeModule() ;

/// @brief Method ToString addr 0x238a4a8 size 0x8 virtual true final false
 ::StringW ToString() ;

/// @brief Method FormatNameAndSig addr 0x238a4b0 size 0x170 virtual false final false
 ::StringW FormatNameAndSig(bool serialization) ;

/// @brief Method GetObjectData addr 0x238a620 size 0xcc virtual true final true
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method SerializationToString addr 0x2381b9c size 0x8 virtual false final false
 ::StringW SerializationToString() ;

/// @brief Method CachePropertyInfo addr 0x238a6ec size 0x40 virtual false final false
 void CachePropertyInfo(System::Reflection::PInfo flags) ;

/// @brief Method get_CanRead addr 0x238a72c size 0x40 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanWrite addr 0x238a76c size 0x40 virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_PropertyType addr 0x238a7ac size 0x9c virtual true final false
 System::Type get_PropertyType() ;

/// @brief Method get_ReflectedType addr 0x238a848 size 0x38 virtual true final false
 System::Type get_ReflectedType() ;

/// @brief Method get_DeclaringType addr 0x238a880 size 0x38 virtual true final false
 System::Type get_DeclaringType() ;

/// @brief Method get_Name addr 0x238a8b8 size 0x38 virtual true final false
 ::StringW get_Name() ;

/// @brief Method GetGetMethod addr 0x238a8f0 size 0x74 virtual true final false
 System::Reflection::MethodInfo GetGetMethod(bool nonPublic) ;

/// @brief Method GetIndexParameters addr 0x238a964 size 0x19c virtual true final false
 ::ArrayW<System::Reflection::ParameterInfo> GetIndexParameters() ;

/// @brief Method GetSetMethod addr 0x238ab00 size 0x74 virtual true final false
 System::Reflection::MethodInfo GetSetMethod(bool nonPublic) ;

/// @brief Method IsDefined addr 0x238ab74 size 0x6c virtual true final false
 bool IsDefined(System::Type attributeType, bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x238abe0 size 0x5c virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x238ac3c size 0x6c virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(System::Type attributeType, bool inherit) ;

/// @brief Method GetterAdapterFrame addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T,typename R>
static ::bs_hook::Il2CppWrapperType GetterAdapterFrame(System::Reflection::System__Reflection__RuntimePropertyInfo__Getter_2<T,R> getter, ::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method StaticGetterAdapterFrame addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename R>
static ::bs_hook::Il2CppWrapperType StaticGetterAdapterFrame(System::Reflection::System__Reflection__RuntimePropertyInfo__StaticGetter_1<R> getter, ::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetValue addr 0x238aca8 size 0x20 virtual true final false
 ::bs_hook::Il2CppWrapperType GetValue(::bs_hook::Il2CppWrapperType obj, ::ArrayW<::bs_hook::Il2CppWrapperType> index) ;

/// @brief Method GetValue addr 0x238acc8 size 0x1d0 virtual true final false
 ::bs_hook::Il2CppWrapperType GetValue(::bs_hook::Il2CppWrapperType obj, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder binder, ::ArrayW<::bs_hook::Il2CppWrapperType> index, System::Globalization::CultureInfo culture) ;

/// @brief Method SetValue addr 0x238ae98 size 0x1f4 virtual true final false
 void SetValue(::bs_hook::Il2CppWrapperType obj, ::bs_hook::Il2CppWrapperType value, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder binder, ::ArrayW<::bs_hook::Il2CppWrapperType> index, System::Globalization::CultureInfo culture) ;

/// @brief Method get_MetadataToken addr 0x238b08c size 0x4 virtual true final false
 int32_t get_MetadataToken() ;

/// @brief Method get_metadata_token addr 0x238b090 size 0x4 virtual false final false
static int32_t get_metadata_token(System::Reflection::RuntimePropertyInfo monoProperty) ;

/// @brief Method internal_from_handle_type addr 0x238b094 size 0x4 virtual false final false
static System::Reflection::PropertyInfo internal_from_handle_type(::cordl_internals::intptr_t event_handle, ::cordl_internals::intptr_t type_handle) ;

/// @brief Method GetPropertyFromHandle addr 0x238b098 size 0xe8 virtual false final false
static System::Reflection::PropertyInfo GetPropertyFromHandle(Mono::RuntimePropertyHandle handle, System::RuntimeTypeHandle reflectedType) ;

static System::Reflection::RuntimePropertyInfo New_ctor() ;

/// @brief Method .ctor addr 0x238b180 size 0x1008 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
// Type: ::Getter`2
namespace System::Reflection {
// cpp template
template<::cordl_internals::il2cpp_reference_type T,::cordl_internals::il2cpp_reference_type R>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(3522))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3522), inst: 80 })
// CS Name: System.Reflection.RuntimePropertyInfo::Getter`2
class CORDL_TYPE System__Reflection__RuntimePropertyInfo__Getter_2<T,R> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~System__Reflection__RuntimePropertyInfo__Getter_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Reflection__RuntimePropertyInfo__Getter_2", modifiers: " const&", def_value: None }]
constexpr System__Reflection__RuntimePropertyInfo__Getter_2(System__Reflection__RuntimePropertyInfo__Getter_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Reflection__RuntimePropertyInfo__Getter_2", modifiers: "&&", def_value: None }]
constexpr System__Reflection__RuntimePropertyInfo__Getter_2(System__Reflection__RuntimePropertyInfo__Getter_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Reflection__RuntimePropertyInfo__Getter_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr System__Reflection__RuntimePropertyInfo__Getter_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Reflection__RuntimePropertyInfo__Getter_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Reflection__RuntimePropertyInfo__Getter_2& operator=(System__Reflection__RuntimePropertyInfo__Getter_2&& o) noexcept = default;
  constexpr System__Reflection__RuntimePropertyInfo__Getter_2& operator=(System__Reflection__RuntimePropertyInfo__Getter_2 const& o) noexcept = default;
                


// Methods

static System::Reflection::System__Reflection__RuntimePropertyInfo__Getter_2<T,R> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 R Invoke(T _this) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
// Type: ::StaticGetter`1
namespace System::Reflection {
// cpp template
template<::cordl_internals::il2cpp_reference_type R>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3523)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3523), inst: 2 })
// CS Name: System.Reflection.RuntimePropertyInfo::StaticGetter`1
class CORDL_TYPE System__Reflection__RuntimePropertyInfo__StaticGetter_1<R> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~System__Reflection__RuntimePropertyInfo__StaticGetter_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Reflection__RuntimePropertyInfo__StaticGetter_1", modifiers: " const&", def_value: None }]
constexpr System__Reflection__RuntimePropertyInfo__StaticGetter_1(System__Reflection__RuntimePropertyInfo__StaticGetter_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Reflection__RuntimePropertyInfo__StaticGetter_1", modifiers: "&&", def_value: None }]
constexpr System__Reflection__RuntimePropertyInfo__StaticGetter_1(System__Reflection__RuntimePropertyInfo__StaticGetter_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Reflection__RuntimePropertyInfo__StaticGetter_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr System__Reflection__RuntimePropertyInfo__StaticGetter_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Reflection__RuntimePropertyInfo__StaticGetter_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Reflection__RuntimePropertyInfo__StaticGetter_1& operator=(System__Reflection__RuntimePropertyInfo__StaticGetter_1&& o) noexcept = default;
  constexpr System__Reflection__RuntimePropertyInfo__StaticGetter_1& operator=(System__Reflection__RuntimePropertyInfo__StaticGetter_1 const& o) noexcept = default;
                


// Methods

static System::Reflection::System__Reflection__RuntimePropertyInfo__StaticGetter_1<R> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 R Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Reflection::System__Reflection__RuntimePropertyInfo__Getter_2, "System.Reflection", "RuntimePropertyInfo/Getter`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Reflection::System__Reflection__RuntimePropertyInfo__StaticGetter_1, "System.Reflection", "RuntimePropertyInfo/StaticGetter`1");
NEED_NO_BOX(System::Reflection::RuntimePropertyInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::RuntimePropertyInfo, "System.Reflection", "RuntimePropertyInfo");
NEED_NO_BOX(System::Reflection::System__Reflection__RuntimePropertyInfo__GetterAdapter);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::System__Reflection__RuntimePropertyInfo__GetterAdapter, "System.Reflection", "RuntimePropertyInfo/GetterAdapter");
