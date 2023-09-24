#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
class IFormatterConverter;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SerObjectInfoCache;
}
namespace System::Runtime::Serialization {
class SerializationBinder;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectWriter;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SerObjectInfoInit;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class WriteObjectInfo;
}
// Type: System.Runtime.Serialization.Formatters.Binary::WriteObjectInfo
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3277))
// CS Name: System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo
class CORDL_TYPE WriteObjectInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~WriteObjectInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "WriteObjectInfo", modifiers: " const&", def_value: None }]
constexpr WriteObjectInfo(WriteObjectInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WriteObjectInfo", modifiers: "&&", def_value: None }]
constexpr WriteObjectInfo(WriteObjectInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WriteObjectInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WriteObjectInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WriteObjectInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WriteObjectInfo& operator=(WriteObjectInfo&& o) noexcept = default;
  constexpr WriteObjectInfo& operator=(WriteObjectInfo const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_objectInfoId, put=__set_objectInfoId))  objectInfoId;

constexpr void __set_objectInfoId(int32_t value) ;

constexpr int32_t __get_objectInfoId() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_obj, put=__set_obj))  obj;

constexpr void __set_obj(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_obj() const;

 System::Type __declspec(property(get=__get_objectType, put=__set_objectType))  objectType;

constexpr void __set_objectType(System::Type value) ;

constexpr System::Type __get_objectType() const;

 bool __declspec(property(get=__get_isSi, put=__set_isSi))  isSi;

constexpr void __set_isSi(bool value) ;

constexpr bool __get_isSi() const;

 bool __declspec(property(get=__get_isNamed, put=__set_isNamed))  isNamed;

constexpr void __set_isNamed(bool value) ;

constexpr bool __get_isNamed() const;

 bool __declspec(property(get=__get_isTyped, put=__set_isTyped))  isTyped;

constexpr void __set_isTyped(bool value) ;

constexpr bool __get_isTyped() const;

 bool __declspec(property(get=__get_isArray, put=__set_isArray))  isArray;

constexpr void __set_isArray(bool value) ;

constexpr bool __get_isArray() const;

 System::Runtime::Serialization::SerializationInfo __declspec(property(get=__get_si, put=__set_si))  si;

constexpr void __set_si(System::Runtime::Serialization::SerializationInfo value) ;

constexpr System::Runtime::Serialization::SerializationInfo __get_si() const;

 System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache __declspec(property(get=__get_cache, put=__set_cache))  cache;

constexpr void __set_cache(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache __get_cache() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_memberData, put=__set_memberData))  memberData;

constexpr void __set_memberData(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_memberData() const;

 System::Runtime::Serialization::ISerializationSurrogate __declspec(property(get=__get_serializationSurrogate, put=__set_serializationSurrogate))  serializationSurrogate;

constexpr void __set_serializationSurrogate(System::Runtime::Serialization::ISerializationSurrogate value) ;

constexpr System::Runtime::Serialization::ISerializationSurrogate __get_serializationSurrogate() const;

 System::Runtime::Serialization::StreamingContext __declspec(property(get=__get_context, put=__set_context))  context;

constexpr void __set_context(System::Runtime::Serialization::StreamingContext value) ;

constexpr System::Runtime::Serialization::StreamingContext __get_context() const;

 System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit __declspec(property(get=__get_serObjectInfoInit, put=__set_serObjectInfoInit))  serObjectInfoInit;

constexpr void __set_serObjectInfoInit(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit __get_serObjectInfoInit() const;

 int64_t __declspec(property(get=__get_objectId, put=__set_objectId))  objectId;

constexpr void __set_objectId(int64_t value) ;

constexpr int64_t __get_objectId() const;

 int64_t __declspec(property(get=__get_assemId, put=__set_assemId))  assemId;

constexpr void __set_assemId(int64_t value) ;

constexpr int64_t __get_assemId() const;

 ::StringW __declspec(property(get=__get_binderTypeName, put=__set_binderTypeName))  binderTypeName;

constexpr void __set_binderTypeName(::StringW value) ;

constexpr ::StringW __get_binderTypeName() const;

 ::StringW __declspec(property(get=__get_binderAssemblyString, put=__set_binderAssemblyString))  binderAssemblyString;

constexpr void __set_binderAssemblyString(::StringW value) ;

constexpr ::StringW __get_binderAssemblyString() const;


// Methods

static System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo New_ctor() ;

/// @brief Method .ctor addr 0x235bce0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method ObjectEnd addr 0x235bce8 size 0xc virtual false final false
 void ObjectEnd() ;

/// @brief Method InternalInit addr 0x235bd14 size 0x20 virtual false final false
 void InternalInit() ;

/// @brief Method Serialize addr 0x235bd34 size 0x90 virtual false final false
static System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo Serialize(::bs_hook::Il2CppWrapperType obj, System::Runtime::Serialization::ISurrogateSelector surrogateSelector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit serObjectInfoInit, System::Runtime::Serialization::IFormatterConverter converter, System::Runtime::Serialization::Formatters::Binary::ObjectWriter objectWriter, System::Runtime::Serialization::SerializationBinder binder) ;

/// @brief Method InitSerialize addr 0x235be9c size 0x4d8 virtual false final false
 void InitSerialize(::bs_hook::Il2CppWrapperType obj, System::Runtime::Serialization::ISurrogateSelector surrogateSelector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit serObjectInfoInit, System::Runtime::Serialization::IFormatterConverter converter, System::Runtime::Serialization::Formatters::Binary::ObjectWriter objectWriter, System::Runtime::Serialization::SerializationBinder binder) ;

/// @brief Method Serialize addr 0x235cbac size 0x88 virtual false final false
static System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo Serialize(System::Type objectType, System::Runtime::Serialization::ISurrogateSelector surrogateSelector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit serObjectInfoInit, System::Runtime::Serialization::IFormatterConverter converter, System::Runtime::Serialization::SerializationBinder binder) ;

/// @brief Method InitSerialize addr 0x235cc34 size 0x2dc virtual false final false
 void InitSerialize(System::Type objectType, System::Runtime::Serialization::ISurrogateSelector surrogateSelector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit serObjectInfoInit, System::Runtime::Serialization::IFormatterConverter converter, System::Runtime::Serialization::SerializationBinder binder) ;

/// @brief Method InitSiWrite addr 0x235c484 size 0x2f8 virtual false final false
 void InitSiWrite() ;

/// @brief Method CheckTypeForwardedFrom addr 0x235c77c size 0x158 virtual false final false
static void CheckTypeForwardedFrom(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache cache, System::Type objectType, ::StringW binderAssemblyString) ;

/// @brief Method InitNoMembers addr 0x235c374 size 0xe8 virtual false final false
 void InitNoMembers() ;

/// @brief Method InitMemberInfo addr 0x235c8d4 size 0x2d8 virtual false final false
 void InitMemberInfo() ;

/// @brief Method GetTypeFullName addr 0x2354280 size 0x28 virtual false final false
 ::StringW GetTypeFullName() ;

/// @brief Method GetAssemblyString addr 0x2354258 size 0x28 virtual false final false
 ::StringW GetAssemblyString() ;

/// @brief Method InvokeSerializationBinder addr 0x235c45c size 0x28 virtual false final false
 void InvokeSerializationBinder(System::Runtime::Serialization::SerializationBinder binder) ;

/// @brief Method GetMemberType addr 0x235cf10 size 0x16c virtual false final false
 System::Type GetMemberType(System::Reflection::MemberInfo objMember) ;

/// @brief Method GetMemberInfo addr 0x235d07c size 0xa4 virtual false final false
 void GetMemberInfo(ByRef<::ArrayW<::StringW>> outMemberNames, ByRef<::ArrayW<System::Type>> outMemberTypes, ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>> outMemberData) ;

/// @brief Method GetObjectInfo addr 0x235bdc4 size 0xd8 virtual false final false
static System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo GetObjectInfo(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit serObjectInfoInit) ;

/// @brief Method PutObjectInfo addr 0x235bcf4 size 0x20 virtual false final false
static void PutObjectInfo(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit serObjectInfoInit, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, "System.Runtime.Serialization.Formatters.Binary", "WriteObjectInfo");
