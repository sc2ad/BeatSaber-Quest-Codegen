#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Runtime::Serialization {
class SerializationInfoEnumerator;
}
namespace System {
struct DateTime;
}
namespace System::Runtime::Serialization {
class IFormatterConverter;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Type: System.Runtime.Serialization::SerializationInfo
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3230))
// CS Name: System.Runtime.Serialization.SerializationInfo
class CORDL_TYPE SerializationInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~SerializationInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializationInfo", modifiers: " const&", def_value: None }]
constexpr SerializationInfo(SerializationInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializationInfo", modifiers: "&&", def_value: None }]
constexpr SerializationInfo(SerializationInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SerializationInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SerializationInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SerializationInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SerializationInfo& operator=(SerializationInfo&& o) noexcept = default;
  constexpr SerializationInfo& operator=(SerializationInfo const& o) noexcept = default;
                


// Fields

/// @brief Field defaultSize offset 0
static constexpr int32_t  defaultSize{4};

/// @brief Field s_mscorlibAssemblySimpleName offset 0
static constexpr ::ConstString  s_mscorlibAssemblySimpleName{u"mscorlib"};

/// @brief Field s_mscorlibFileName offset 0
static constexpr ::ConstString  s_mscorlibFileName{u"mscorlib.dll"};

 ::ArrayW<::StringW> __declspec(property(get=__get_m_members, put=__set_m_members))  m_members;

constexpr void __set_m_members(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_m_members() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_m_data, put=__set_m_data))  m_data;

constexpr void __set_m_data(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_m_data() const;

 ::ArrayW<::System::Type> __declspec(property(get=__get_m_types, put=__set_m_types))  m_types;

constexpr void __set_m_types(::ArrayW<::System::Type> value) ;

constexpr ::ArrayW<::System::Type> __get_m_types() const;

 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t> __declspec(property(get=__get_m_nameToIndex, put=__set_m_nameToIndex))  m_nameToIndex;

constexpr void __set_m_nameToIndex(::System::Collections::Generic::Dictionary_2<::StringW,int32_t> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t> __get_m_nameToIndex() const;

 int32_t __declspec(property(get=__get_m_currMember, put=__set_m_currMember))  m_currMember;

constexpr void __set_m_currMember(int32_t value) ;

constexpr int32_t __get_m_currMember() const;

 ::System::Runtime::Serialization::IFormatterConverter __declspec(property(get=__get_m_converter, put=__set_m_converter))  m_converter;

constexpr void __set_m_converter(::System::Runtime::Serialization::IFormatterConverter value) ;

constexpr ::System::Runtime::Serialization::IFormatterConverter __get_m_converter() const;

 ::StringW __declspec(property(get=__get_m_fullTypeName, put=__set_m_fullTypeName))  m_fullTypeName;

constexpr void __set_m_fullTypeName(::StringW value) ;

constexpr ::StringW __get_m_fullTypeName() const;

 ::StringW __declspec(property(get=__get_m_assemName, put=__set_m_assemName))  m_assemName;

constexpr void __set_m_assemName(::StringW value) ;

constexpr ::StringW __get_m_assemName() const;

 ::System::Type __declspec(property(get=__get_objectType, put=__set_objectType))  objectType;

constexpr void __set_objectType(::System::Type value) ;

constexpr ::System::Type __get_objectType() const;

 bool __declspec(property(get=__get_isFullTypeNameSetExplicit, put=__set_isFullTypeNameSetExplicit))  isFullTypeNameSetExplicit;

constexpr void __set_isFullTypeNameSetExplicit(bool value) ;

constexpr bool __get_isFullTypeNameSetExplicit() const;

 bool __declspec(property(get=__get_isAssemblyNameSetExplicit, put=__set_isAssemblyNameSetExplicit))  isAssemblyNameSetExplicit;

constexpr void __set_isAssemblyNameSetExplicit(bool value) ;

constexpr bool __get_isAssemblyNameSetExplicit() const;

 bool __declspec(property(get=__get_requireSameTokenInPartialTrust, put=__set_requireSameTokenInPartialTrust))  requireSameTokenInPartialTrust;

constexpr void __set_requireSameTokenInPartialTrust(bool value) ;

constexpr bool __get_requireSameTokenInPartialTrust() const;


// Properties

 ::StringW __declspec(property(get=get_FullTypeName))  FullTypeName;

 ::StringW __declspec(property(get=get_AssemblyName))  AssemblyName;

 int32_t __declspec(property(get=get_MemberCount))  MemberCount;

 ::System::Type __declspec(property(get=get_ObjectType))  ObjectType;

 bool __declspec(property(get=get_IsFullTypeNameSetExplicit))  IsFullTypeNameSetExplicit;

 bool __declspec(property(get=get_IsAssemblyNameSetExplicit))  IsAssemblyNameSetExplicit;


// Methods

// Ctor Parameters [CppParam { name: "type", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "converter", ty: "::System::Runtime::Serialization::IFormatterConverter", modifiers: "", def_value: None }]
explicit SerializationInfo(::System::Type type, ::System::Runtime::Serialization::IFormatterConverter converter) ;

/// @brief Method .ctor addr 0x2351e70 size 0x8 virtual false final false
 void _ctor(::System::Type type, ::System::Runtime::Serialization::IFormatterConverter converter) ;

// Ctor Parameters [CppParam { name: "type", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "converter", ty: "::System::Runtime::Serialization::IFormatterConverter", modifiers: "", def_value: None }, CppParam { name: "requireSameTokenInPartialTrust", ty: "bool", modifiers: "", def_value: None }]
explicit SerializationInfo(::System::Type type, ::System::Runtime::Serialization::IFormatterConverter converter, bool requireSameTokenInPartialTrust) ;

/// @brief Method .ctor addr 0x2351e78 size 0x1e0 virtual false final false
 void _ctor(::System::Type type, ::System::Runtime::Serialization::IFormatterConverter converter, bool requireSameTokenInPartialTrust) ;

/// @brief Method get_FullTypeName addr 0x2352058 size 0x8 virtual false final false
 ::StringW get_FullTypeName() ;

/// @brief Method get_AssemblyName addr 0x2352060 size 0x8 virtual false final false
 ::StringW get_AssemblyName() ;

/// @brief Method SetType addr 0x2351328 size 0x138 virtual false final false
 void SetType(::System::Type type) ;

/// @brief Method Compare addr 0x235206c size 0x88 virtual false final false
static bool Compare(::ArrayW<uint8_t> a, ::ArrayW<uint8_t> b) ;

/// @brief Method DemandForUnsafeAssemblyNameAssignments addr 0x2352068 size 0x4 virtual false final false
static void DemandForUnsafeAssemblyNameAssignments(::StringW originalAssemblyName, ::StringW newAssemblyName) ;

/// @brief Method IsAssemblyNameAssignmentSafe addr 0x23520f4 size 0x134 virtual false final false
static bool IsAssemblyNameAssignmentSafe(::StringW originalAssemblyName, ::StringW newAssemblyName) ;

/// @brief Method get_MemberCount addr 0x2352228 size 0x8 virtual false final false
 int32_t get_MemberCount() ;

/// @brief Method get_ObjectType addr 0x2352230 size 0x8 virtual false final false
 ::System::Type get_ObjectType() ;

/// @brief Method get_IsFullTypeNameSetExplicit addr 0x2352238 size 0x8 virtual false final false
 bool get_IsFullTypeNameSetExplicit() ;

/// @brief Method get_IsAssemblyNameSetExplicit addr 0x2352240 size 0x8 virtual false final false
 bool get_IsAssemblyNameSetExplicit() ;

/// @brief Method GetEnumerator addr 0x2352248 size 0x94 virtual false final false
 ::System::Runtime::Serialization::SerializationInfoEnumerator GetEnumerator() ;

/// @brief Method ExpandArrays addr 0x23522dc size 0x10c virtual false final false
 void ExpandArrays() ;

/// @brief Method AddValue addr 0x23512a4 size 0x84 virtual false final false
 void AddValue(::StringW name, ::bs_hook::Il2CppWrapperType value, ::System::Type type) ;

/// @brief Method AddValue addr 0x23525c4 size 0xb8 virtual false final false
 void AddValue(::StringW name, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method AddValue addr 0x235267c size 0xd4 virtual false final false
 void AddValue(::StringW name, bool value) ;

/// @brief Method AddValue addr 0x2352750 size 0xd4 virtual false final false
 void AddValue(::StringW name, uint8_t value) ;

/// @brief Method AddValue addr 0x2352824 size 0xd4 virtual false final false
 void AddValue(::StringW name, int16_t value) ;

/// @brief Method AddValue addr 0x23528f8 size 0xd4 virtual false final false
 void AddValue(::StringW name, int32_t value) ;

/// @brief Method AddValue addr 0x23529cc size 0xd4 virtual false final false
 void AddValue(::StringW name, int64_t value) ;

/// @brief Method AddValue addr 0x2352aa0 size 0xd4 virtual false final false
 void AddValue(::StringW name, uint64_t value) ;

/// @brief Method AddValue addr 0x2352b74 size 0xdc virtual false final false
 void AddValue(::StringW name, float_t value) ;

/// @brief Method AddValue addr 0x2352c50 size 0xd4 virtual false final false
 void AddValue(::StringW name, ::System::DateTime value) ;

/// @brief Method AddValueInternal addr 0x23523e8 size 0x1dc virtual false final false
 void AddValueInternal(::StringW name, ::bs_hook::Il2CppWrapperType value, ::System::Type type) ;

/// @brief Method UpdateValue addr 0x234e6e8 size 0xe4 virtual false final false
 void UpdateValue(::StringW name, ::bs_hook::Il2CppWrapperType value, ::System::Type type) ;

/// @brief Method FindElement addr 0x2352d24 size 0xc8 virtual false final false
 int32_t FindElement(::StringW name) ;

/// @brief Method GetElement addr 0x2352dec size 0x104 virtual false final false
 ::bs_hook::Il2CppWrapperType GetElement(::StringW name, ByRef<::System::Type> foundType) ;

/// @brief Method GetElementNoThrow addr 0x2352ef0 size 0x7c virtual false final false
 ::bs_hook::Il2CppWrapperType GetElementNoThrow(::StringW name, ByRef<::System::Type> foundType) ;

/// @brief Method GetValue addr 0x2350f0c size 0x214 virtual false final false
 ::bs_hook::Il2CppWrapperType GetValue(::StringW name, ::System::Type type) ;

/// @brief Method GetValueNoThrow addr 0x2350e04 size 0x108 virtual false final false
 ::bs_hook::Il2CppWrapperType GetValueNoThrow(::StringW name, ::System::Type type) ;

/// @brief Method GetBoolean addr 0x2352f6c size 0x180 virtual false final false
 bool GetBoolean(::StringW name) ;

/// @brief Method GetInt32 addr 0x23530ec size 0x174 virtual false final false
 int32_t GetInt32(::StringW name) ;

/// @brief Method GetInt64 addr 0x2353260 size 0x174 virtual false final false
 int64_t GetInt64(::StringW name) ;

/// @brief Method GetSingle addr 0x23533d4 size 0x174 virtual false final false
 float_t GetSingle(::StringW name) ;

/// @brief Method GetString addr 0x2353548 size 0x16c virtual false final false
 ::StringW GetString(::StringW name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Serialization::SerializationInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SerializationInfo, "System.Runtime.Serialization", "SerializationInfo");
