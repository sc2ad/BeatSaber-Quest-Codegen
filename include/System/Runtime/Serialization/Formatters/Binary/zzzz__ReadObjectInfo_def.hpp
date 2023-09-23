#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ObjectManager;
}
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SerObjectInfoCache;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Runtime::Serialization {
class IFormatterConverter;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SerObjectInfoInit;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class ReadObjectInfo;
}
// Type: System.Runtime.Serialization.Formatters.Binary::ReadObjectInfo
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3278))
// CS Name: System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo
class CORDL_TYPE ReadObjectInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~ReadObjectInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReadObjectInfo", modifiers: " const&", def_value: None }]
constexpr ReadObjectInfo(ReadObjectInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReadObjectInfo", modifiers: "&&", def_value: None }]
constexpr ReadObjectInfo(ReadObjectInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReadObjectInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ReadObjectInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReadObjectInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReadObjectInfo& operator=(ReadObjectInfo&& o) noexcept = default;
  constexpr ReadObjectInfo& operator=(ReadObjectInfo const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_objectInfoId, put=__set_objectInfoId))  objectInfoId;

constexpr void __set_objectInfoId(int32_t value) ;

constexpr int32_t __get_objectInfoId() const;

static int32_t __declspec(property(get=__get_readObjectInfoCounter, put=__set_readObjectInfoCounter))  readObjectInfoCounter;

static void __set_readObjectInfoCounter(int32_t value) ;

static int32_t __get_readObjectInfoCounter() ;

 System::Type __declspec(property(get=__get_objectType, put=__set_objectType))  objectType;

constexpr void __set_objectType(System::Type value) ;

constexpr System::Type __get_objectType() const;

 System::Runtime::Serialization::ObjectManager __declspec(property(get=__get_objectManager, put=__set_objectManager))  objectManager;

constexpr void __set_objectManager(System::Runtime::Serialization::ObjectManager value) ;

constexpr System::Runtime::Serialization::ObjectManager __get_objectManager() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 bool __declspec(property(get=__get_isSi, put=__set_isSi))  isSi;

constexpr void __set_isSi(bool value) ;

constexpr bool __get_isSi() const;

 bool __declspec(property(get=__get_isNamed, put=__set_isNamed))  isNamed;

constexpr void __set_isNamed(bool value) ;

constexpr bool __get_isNamed() const;

 bool __declspec(property(get=__get_isTyped, put=__set_isTyped))  isTyped;

constexpr void __set_isTyped(bool value) ;

constexpr bool __get_isTyped() const;

 bool __declspec(property(get=__get_bSimpleAssembly, put=__set_bSimpleAssembly))  bSimpleAssembly;

constexpr void __set_bSimpleAssembly(bool value) ;

constexpr bool __get_bSimpleAssembly() const;

 System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache __declspec(property(get=__get_cache, put=__set_cache))  cache;

constexpr void __set_cache(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache __get_cache() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_wireMemberNames, put=__set_wireMemberNames))  wireMemberNames;

constexpr void __set_wireMemberNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_wireMemberNames() const;

 ::ArrayW<System::Type> __declspec(property(get=__get_wireMemberTypes, put=__set_wireMemberTypes))  wireMemberTypes;

constexpr void __set_wireMemberTypes(::ArrayW<System::Type> value) ;

constexpr ::ArrayW<System::Type> __get_wireMemberTypes() const;

 int32_t __declspec(property(get=__get_lastPosition, put=__set_lastPosition))  lastPosition;

constexpr void __set_lastPosition(int32_t value) ;

constexpr int32_t __get_lastPosition() const;

 System::Runtime::Serialization::ISerializationSurrogate __declspec(property(get=__get_serializationSurrogate, put=__set_serializationSurrogate))  serializationSurrogate;

constexpr void __set_serializationSurrogate(System::Runtime::Serialization::ISerializationSurrogate value) ;

constexpr System::Runtime::Serialization::ISerializationSurrogate __get_serializationSurrogate() const;

 System::Runtime::Serialization::StreamingContext __declspec(property(get=__get_context, put=__set_context))  context;

constexpr void __set_context(System::Runtime::Serialization::StreamingContext value) ;

constexpr System::Runtime::Serialization::StreamingContext __get_context() const;

 System::Collections::Generic::List_1<System::Type> __declspec(property(get=__get_memberTypesList, put=__set_memberTypesList))  memberTypesList;

constexpr void __set_memberTypesList(System::Collections::Generic::List_1<System::Type> value) ;

constexpr System::Collections::Generic::List_1<System::Type> __get_memberTypesList() const;

 System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit __declspec(property(get=__get_serObjectInfoInit, put=__set_serObjectInfoInit))  serObjectInfoInit;

constexpr void __set_serObjectInfoInit(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit __get_serObjectInfoInit() const;

 System::Runtime::Serialization::IFormatterConverter __declspec(property(get=__get_formatterConverter, put=__set_formatterConverter))  formatterConverter;

constexpr void __set_formatterConverter(System::Runtime::Serialization::IFormatterConverter value) ;

constexpr System::Runtime::Serialization::IFormatterConverter __get_formatterConverter() const;


// Methods

// Ctor Parameters []
explicit ReadObjectInfo() ;

/// @brief Method .ctor addr 0x235d120 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method ObjectEnd addr 0x235d128 size 0x4 virtual false final false
 void ObjectEnd() ;

/// @brief Method PrepareForReuse addr 0x2357d90 size 0x8 virtual false final false
 void PrepareForReuse() ;

/// @brief Method Create addr 0x235d12c size 0x88 virtual false final false
static System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo Create(System::Type objectType, System::Runtime::Serialization::ISurrogateSelector surrogateSelector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::ObjectManager objectManager, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit serObjectInfoInit, System::Runtime::Serialization::IFormatterConverter converter, bool bSimpleAssembly) ;

/// @brief Method Init addr 0x235d224 size 0x1c virtual false final false
 void Init(System::Type objectType, System::Runtime::Serialization::ISurrogateSelector surrogateSelector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::ObjectManager objectManager, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit serObjectInfoInit, System::Runtime::Serialization::IFormatterConverter converter, bool bSimpleAssembly) ;

/// @brief Method Create addr 0x235d3dc size 0x9c virtual false final false
static System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo Create(System::Type objectType, ::ArrayW<::StringW> memberNames, ::ArrayW<System::Type> memberTypes, System::Runtime::Serialization::ISurrogateSelector surrogateSelector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::ObjectManager objectManager, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit serObjectInfoInit, System::Runtime::Serialization::IFormatterConverter converter, bool bSimpleAssembly) ;

/// @brief Method Init addr 0x235d478 size 0x50 virtual false final false
 void Init(System::Type objectType, ::ArrayW<::StringW> memberNames, ::ArrayW<System::Type> memberTypes, System::Runtime::Serialization::ISurrogateSelector surrogateSelector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::ObjectManager objectManager, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit serObjectInfoInit, System::Runtime::Serialization::IFormatterConverter converter, bool bSimpleAssembly) ;

/// @brief Method InitReadConstructor addr 0x235d240 size 0x19c virtual false final false
 void InitReadConstructor(System::Type objectType, System::Runtime::Serialization::ISurrogateSelector surrogateSelector, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method InitSiRead addr 0x235d530 size 0x80 virtual false final false
 void InitSiRead() ;

/// @brief Method InitNoMembers addr 0x235d4c8 size 0x68 virtual false final false
 void InitNoMembers() ;

/// @brief Method InitMemberInfo addr 0x235d5b0 size 0x210 virtual false final false
 void InitMemberInfo() ;

/// @brief Method GetMemberInfo addr 0x235d92c size 0x1b8 virtual false final false
 System::Reflection::MemberInfo GetMemberInfo(::StringW name) ;

/// @brief Method GetType addr 0x235dc18 size 0x1ac virtual false final false
 System::Type GetType(::StringW name) ;

/// @brief Method AddValue addr 0x235ddc4 size 0x94 virtual false final false
 void AddValue(::StringW name, ::bs_hook::Il2CppWrapperType value, ByRef<System::Runtime::Serialization::SerializationInfo> si, ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>> memberData) ;

/// @brief Method InitDataStore addr 0x2357cc0 size 0xd0 virtual false final false
 void InitDataStore(ByRef<System::Runtime::Serialization::SerializationInfo> si, ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>> memberData) ;

/// @brief Method RecordFixup addr 0x235de58 size 0xa4 virtual false final false
 void RecordFixup(int64_t objectId, ::StringW name, int64_t idRef) ;

/// @brief Method PopulateObjectMembers addr 0x235defc size 0x1098 virtual false final false
 void PopulateObjectMembers(::bs_hook::Il2CppWrapperType obj, ::ArrayW<::bs_hook::Il2CppWrapperType> memberData) ;

/// @brief Method Position addr 0x235dae4 size 0x134 virtual false final false
 int32_t Position(::StringW name) ;

/// @brief Method GetMemberTypes addr 0x23574d0 size 0x4cc virtual false final false
 ::ArrayW<System::Type> GetMemberTypes(::ArrayW<::StringW> inMemberNames, System::Type objectType) ;

/// @brief Method GetMemberType addr 0x235d7c0 size 0x16c virtual false final false
 System::Type GetMemberType(System::Reflection::MemberInfo objMember) ;

/// @brief Method GetObjectInfo addr 0x235d1b4 size 0x70 virtual false final false
static System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo GetObjectInfo(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit serObjectInfoInit) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo, "System.Runtime.Serialization.Formatters.Binary", "ReadObjectInfo");
