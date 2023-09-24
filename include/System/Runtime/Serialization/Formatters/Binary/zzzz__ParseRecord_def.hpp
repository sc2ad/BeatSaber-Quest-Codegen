#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalArrayTypeE;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalMemberTypeE;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalParseTypeE;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalObjectPositionE;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalPrimitiveTypeE;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalMemberValueE;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalObjectTypeE;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class PrimitiveArray;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ReadObjectInfo;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class ParseRecord;
}
// Type: System.Runtime.Serialization.Formatters.Binary::ParseRecord
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3287))
// CS Name: System.Runtime.Serialization.Formatters.Binary.ParseRecord
class CORDL_TYPE ParseRecord : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x120};

virtual ~ParseRecord() = default;

// Ctor Parameters [CppParam { name: "", ty: "ParseRecord", modifiers: " const&", def_value: None }]
constexpr ParseRecord(ParseRecord const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ParseRecord", modifiers: "&&", def_value: None }]
constexpr ParseRecord(ParseRecord&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ParseRecord(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ParseRecord& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ParseRecord& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ParseRecord& operator=(ParseRecord&& o) noexcept = default;
  constexpr ParseRecord& operator=(ParseRecord const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_parseRecordIdCount, put=__set_parseRecordIdCount))  parseRecordIdCount;

static void __set_parseRecordIdCount(int32_t value) ;

static int32_t __get_parseRecordIdCount() ;

 System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE __declspec(property(get=__get_PRparseTypeEnum, put=__set_PRparseTypeEnum))  PRparseTypeEnum;

constexpr void __set_PRparseTypeEnum(System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE __get_PRparseTypeEnum() const;

 System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE __declspec(property(get=__get_PRobjectTypeEnum, put=__set_PRobjectTypeEnum))  PRobjectTypeEnum;

constexpr void __set_PRobjectTypeEnum(System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE __get_PRobjectTypeEnum() const;

 System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE __declspec(property(get=__get_PRarrayTypeEnum, put=__set_PRarrayTypeEnum))  PRarrayTypeEnum;

constexpr void __set_PRarrayTypeEnum(System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE __get_PRarrayTypeEnum() const;

 System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE __declspec(property(get=__get_PRmemberTypeEnum, put=__set_PRmemberTypeEnum))  PRmemberTypeEnum;

constexpr void __set_PRmemberTypeEnum(System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE __get_PRmemberTypeEnum() const;

 System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE __declspec(property(get=__get_PRmemberValueEnum, put=__set_PRmemberValueEnum))  PRmemberValueEnum;

constexpr void __set_PRmemberValueEnum(System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE __get_PRmemberValueEnum() const;

 System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE __declspec(property(get=__get_PRobjectPositionEnum, put=__set_PRobjectPositionEnum))  PRobjectPositionEnum;

constexpr void __set_PRobjectPositionEnum(System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE __get_PRobjectPositionEnum() const;

 ::StringW __declspec(property(get=__get_PRname, put=__set_PRname))  PRname;

constexpr void __set_PRname(::StringW value) ;

constexpr ::StringW __get_PRname() const;

 ::StringW __declspec(property(get=__get_PRvalue, put=__set_PRvalue))  PRvalue;

constexpr void __set_PRvalue(::StringW value) ;

constexpr ::StringW __get_PRvalue() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_PRvarValue, put=__set_PRvarValue))  PRvarValue;

constexpr void __set_PRvarValue(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_PRvarValue() const;

 ::StringW __declspec(property(get=__get_PRkeyDt, put=__set_PRkeyDt))  PRkeyDt;

constexpr void __set_PRkeyDt(::StringW value) ;

constexpr ::StringW __get_PRkeyDt() const;

 System::Type __declspec(property(get=__get_PRdtType, put=__set_PRdtType))  PRdtType;

constexpr void __set_PRdtType(System::Type value) ;

constexpr System::Type __get_PRdtType() const;

 System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE __declspec(property(get=__get_PRdtTypeCode, put=__set_PRdtTypeCode))  PRdtTypeCode;

constexpr void __set_PRdtTypeCode(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE __get_PRdtTypeCode() const;

 bool __declspec(property(get=__get_PRisEnum, put=__set_PRisEnum))  PRisEnum;

constexpr void __set_PRisEnum(bool value) ;

constexpr bool __get_PRisEnum() const;

 int64_t __declspec(property(get=__get_PRobjectId, put=__set_PRobjectId))  PRobjectId;

constexpr void __set_PRobjectId(int64_t value) ;

constexpr int64_t __get_PRobjectId() const;

 int64_t __declspec(property(get=__get_PRidRef, put=__set_PRidRef))  PRidRef;

constexpr void __set_PRidRef(int64_t value) ;

constexpr int64_t __get_PRidRef() const;

 ::StringW __declspec(property(get=__get_PRarrayElementTypeString, put=__set_PRarrayElementTypeString))  PRarrayElementTypeString;

constexpr void __set_PRarrayElementTypeString(::StringW value) ;

constexpr ::StringW __get_PRarrayElementTypeString() const;

 System::Type __declspec(property(get=__get_PRarrayElementType, put=__set_PRarrayElementType))  PRarrayElementType;

constexpr void __set_PRarrayElementType(System::Type value) ;

constexpr System::Type __get_PRarrayElementType() const;

 bool __declspec(property(get=__get_PRisArrayVariant, put=__set_PRisArrayVariant))  PRisArrayVariant;

constexpr void __set_PRisArrayVariant(bool value) ;

constexpr bool __get_PRisArrayVariant() const;

 System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE __declspec(property(get=__get_PRarrayElementTypeCode, put=__set_PRarrayElementTypeCode))  PRarrayElementTypeCode;

constexpr void __set_PRarrayElementTypeCode(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE __get_PRarrayElementTypeCode() const;

 int32_t __declspec(property(get=__get_PRrank, put=__set_PRrank))  PRrank;

constexpr void __set_PRrank(int32_t value) ;

constexpr int32_t __get_PRrank() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_PRlengthA, put=__set_PRlengthA))  PRlengthA;

constexpr void __set_PRlengthA(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_PRlengthA() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_PRpositionA, put=__set_PRpositionA))  PRpositionA;

constexpr void __set_PRpositionA(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_PRpositionA() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_PRlowerBoundA, put=__set_PRlowerBoundA))  PRlowerBoundA;

constexpr void __set_PRlowerBoundA(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_PRlowerBoundA() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_PRupperBoundA, put=__set_PRupperBoundA))  PRupperBoundA;

constexpr void __set_PRupperBoundA(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_PRupperBoundA() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_PRindexMap, put=__set_PRindexMap))  PRindexMap;

constexpr void __set_PRindexMap(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_PRindexMap() const;

 int32_t __declspec(property(get=__get_PRmemberIndex, put=__set_PRmemberIndex))  PRmemberIndex;

constexpr void __set_PRmemberIndex(int32_t value) ;

constexpr int32_t __get_PRmemberIndex() const;

 int32_t __declspec(property(get=__get_PRlinearlength, put=__set_PRlinearlength))  PRlinearlength;

constexpr void __set_PRlinearlength(int32_t value) ;

constexpr int32_t __get_PRlinearlength() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_PRrectangularMap, put=__set_PRrectangularMap))  PRrectangularMap;

constexpr void __set_PRrectangularMap(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_PRrectangularMap() const;

 bool __declspec(property(get=__get_PRisLowerBound, put=__set_PRisLowerBound))  PRisLowerBound;

constexpr void __set_PRisLowerBound(bool value) ;

constexpr bool __get_PRisLowerBound() const;

 int64_t __declspec(property(get=__get_PRtopId, put=__set_PRtopId))  PRtopId;

constexpr void __set_PRtopId(int64_t value) ;

constexpr int64_t __get_PRtopId() const;

 int64_t __declspec(property(get=__get_PRheaderId, put=__set_PRheaderId))  PRheaderId;

constexpr void __set_PRheaderId(int64_t value) ;

constexpr int64_t __get_PRheaderId() const;

 System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo __declspec(property(get=__get_PRobjectInfo, put=__set_PRobjectInfo))  PRobjectInfo;

constexpr void __set_PRobjectInfo(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo __get_PRobjectInfo() const;

 bool __declspec(property(get=__get_PRisValueTypeFixup, put=__set_PRisValueTypeFixup))  PRisValueTypeFixup;

constexpr void __set_PRisValueTypeFixup(bool value) ;

constexpr bool __get_PRisValueTypeFixup() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_PRnewObj, put=__set_PRnewObj))  PRnewObj;

constexpr void __set_PRnewObj(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_PRnewObj() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_PRobjectA, put=__set_PRobjectA))  PRobjectA;

constexpr void __set_PRobjectA(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_PRobjectA() const;

 System::Runtime::Serialization::Formatters::Binary::PrimitiveArray __declspec(property(get=__get_PRprimitiveArray, put=__set_PRprimitiveArray))  PRprimitiveArray;

constexpr void __set_PRprimitiveArray(System::Runtime::Serialization::Formatters::Binary::PrimitiveArray value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::PrimitiveArray __get_PRprimitiveArray() const;

 bool __declspec(property(get=__get_PRisRegistered, put=__set_PRisRegistered))  PRisRegistered;

constexpr void __set_PRisRegistered(bool value) ;

constexpr bool __get_PRisRegistered() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_PRmemberData, put=__set_PRmemberData))  PRmemberData;

constexpr void __set_PRmemberData(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_PRmemberData() const;

 System::Runtime::Serialization::SerializationInfo __declspec(property(get=__get_PRsi, put=__set_PRsi))  PRsi;

constexpr void __set_PRsi(System::Runtime::Serialization::SerializationInfo value) ;

constexpr System::Runtime::Serialization::SerializationInfo __get_PRsi() const;

 int32_t __declspec(property(get=__get_PRnullCount, put=__set_PRnullCount))  PRnullCount;

constexpr void __set_PRnullCount(int32_t value) ;

constexpr int32_t __get_PRnullCount() const;


// Methods

static System::Runtime::Serialization::Formatters::Binary::ParseRecord New_ctor() ;

/// @brief Method .ctor addr 0x2365fe0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x2368018 size 0x58 virtual false final false
 void Init() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::ParseRecord);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::ParseRecord, "System.Runtime.Serialization.Formatters.Binary", "ParseRecord");
