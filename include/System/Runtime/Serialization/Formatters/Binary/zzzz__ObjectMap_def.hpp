#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryAssemblyInfo;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ReadObjectInfo;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SizedArray;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryTypeEnum;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectReader;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectMap;
}
// Type: System.Runtime.Serialization.Formatters.Binary::ObjectMap
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3271))
// CS Name: System.Runtime.Serialization.Formatters.Binary.ObjectMap
class CORDL_TYPE ObjectMap : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~ObjectMap() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectMap", modifiers: " const&", def_value: None }]
constexpr ObjectMap(ObjectMap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectMap", modifiers: "&&", def_value: None }]
constexpr ObjectMap(ObjectMap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObjectMap(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ObjectMap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObjectMap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObjectMap& operator=(ObjectMap&& o) noexcept = default;
  constexpr ObjectMap& operator=(ObjectMap const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_objectName, put=__set_objectName))  objectName;

constexpr void __set_objectName(::StringW value) ;

constexpr ::StringW __get_objectName() const;

 ::System::Type __declspec(property(get=__get_objectType, put=__set_objectType))  objectType;

constexpr void __set_objectType(::System::Type value) ;

constexpr ::System::Type __get_objectType() const;

 ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> __declspec(property(get=__get_binaryTypeEnumA, put=__set_binaryTypeEnumA))  binaryTypeEnumA;

constexpr void __set_binaryTypeEnumA(::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> value) ;

constexpr ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> __get_binaryTypeEnumA() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_typeInformationA, put=__set_typeInformationA))  typeInformationA;

constexpr void __set_typeInformationA(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_typeInformationA() const;

 ::ArrayW<::System::Type> __declspec(property(get=__get_memberTypes, put=__set_memberTypes))  memberTypes;

constexpr void __set_memberTypes(::ArrayW<::System::Type> value) ;

constexpr ::ArrayW<::System::Type> __get_memberTypes() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_memberNames, put=__set_memberNames))  memberNames;

constexpr void __set_memberNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_memberNames() const;

 ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo __declspec(property(get=__get_objectInfo, put=__set_objectInfo))  objectInfo;

constexpr void __set_objectInfo(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo value) ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo __get_objectInfo() const;

 bool __declspec(property(get=__get_isInitObjectInfo, put=__set_isInitObjectInfo))  isInitObjectInfo;

constexpr void __set_isInitObjectInfo(bool value) ;

constexpr bool __get_isInitObjectInfo() const;

 ::System::Runtime::Serialization::Formatters::Binary::ObjectReader __declspec(property(get=__get_objectReader, put=__set_objectReader))  objectReader;

constexpr void __set_objectReader(::System::Runtime::Serialization::Formatters::Binary::ObjectReader value) ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectReader __get_objectReader() const;

 int32_t __declspec(property(get=__get_objectId, put=__set_objectId))  objectId;

constexpr void __set_objectId(int32_t value) ;

constexpr int32_t __get_objectId() const;

 ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo __declspec(property(get=__get_assemblyInfo, put=__set_assemblyInfo))  assemblyInfo;

constexpr void __set_assemblyInfo(::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo value) ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo __get_assemblyInfo() const;


// Methods

// Ctor Parameters [CppParam { name: "objectName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "objectType", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "memberNames", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "objectReader", ty: "::System::Runtime::Serialization::Formatters::Binary::ObjectReader", modifiers: "", def_value: None }, CppParam { name: "objectId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "assemblyInfo", ty: "::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo", modifiers: "", def_value: None }]
explicit ObjectMap(::StringW objectName, ::System::Type objectType, ::ArrayW<::StringW> memberNames, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader objectReader, int32_t objectId, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo assemblyInfo) ;

/// @brief Method .ctor addr 0x235731c size 0x1b4 virtual false final false
 void _ctor(::StringW objectName, ::System::Type objectType, ::ArrayW<::StringW> memberNames, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader objectReader, int32_t objectId, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo assemblyInfo) ;

// Ctor Parameters [CppParam { name: "objectName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "memberNames", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "binaryTypeEnumA", ty: "::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>", modifiers: "", def_value: None }, CppParam { name: "typeInformationA", ty: "::ArrayW<::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }, CppParam { name: "memberAssemIds", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "objectReader", ty: "::System::Runtime::Serialization::Formatters::Binary::ObjectReader", modifiers: "", def_value: None }, CppParam { name: "objectId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "assemblyInfo", ty: "::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo", modifiers: "", def_value: None }, CppParam { name: "assemIdToAssemblyTable", ty: "::System::Runtime::Serialization::Formatters::Binary::SizedArray", modifiers: "", def_value: None }]
explicit ObjectMap(::StringW objectName, ::ArrayW<::StringW> memberNames, ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> binaryTypeEnumA, ::ArrayW<::bs_hook::Il2CppWrapperType> typeInformationA, ::ArrayW<int32_t> memberAssemIds, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader objectReader, int32_t objectId, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo assemblyInfo, ::System::Runtime::Serialization::Formatters::Binary::SizedArray assemIdToAssemblyTable) ;

/// @brief Method .ctor addr 0x235799c size 0x2e4 virtual false final false
 void _ctor(::StringW objectName, ::ArrayW<::StringW> memberNames, ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> binaryTypeEnumA, ::ArrayW<::bs_hook::Il2CppWrapperType> typeInformationA, ::ArrayW<int32_t> memberAssemIds, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader objectReader, int32_t objectId, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo assemblyInfo, ::System::Runtime::Serialization::Formatters::Binary::SizedArray assemIdToAssemblyTable) ;

/// @brief Method CreateObjectInfo addr 0x2357c80 size 0x40 virtual false final false
 ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo CreateObjectInfo(ByRef<::System::Runtime::Serialization::SerializationInfo> si, ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>> memberData) ;

/// @brief Method Create addr 0x2357d98 size 0xa0 virtual false final false
static ::System::Runtime::Serialization::Formatters::Binary::ObjectMap Create(::StringW name, ::System::Type objectType, ::ArrayW<::StringW> memberNames, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader objectReader, int32_t objectId, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo assemblyInfo) ;

/// @brief Method Create addr 0x2357e38 size 0xc4 virtual false final false
static ::System::Runtime::Serialization::Formatters::Binary::ObjectMap Create(::StringW name, ::ArrayW<::StringW> memberNames, ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> binaryTypeEnumA, ::ArrayW<::bs_hook::Il2CppWrapperType> typeInformationA, ::ArrayW<int32_t> memberAssemIds, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader objectReader, int32_t objectId, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo assemblyInfo, ::System::Runtime::Serialization::Formatters::Binary::SizedArray assemIdToAssemblyTable) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::ObjectMap);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ObjectMap, "System.Runtime.Serialization.Formatters.Binary", "ObjectMap");
