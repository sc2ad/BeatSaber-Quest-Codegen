#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryTypeEnum;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ParseRecord;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalObjectTypeE;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalMemberTypeE;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalMemberValueE;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectProgress;
}
// Type: System.Runtime.Serialization.Formatters.Binary::ObjectProgress
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3272))
// CS Name: System.Runtime.Serialization.Formatters.Binary.ObjectProgress
class CORDL_TYPE ObjectProgress : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~ObjectProgress() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectProgress", modifiers: " const&", def_value: None }]
constexpr ObjectProgress(ObjectProgress const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectProgress", modifiers: "&&", def_value: None }]
constexpr ObjectProgress(ObjectProgress&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObjectProgress(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ObjectProgress& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObjectProgress& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObjectProgress& operator=(ObjectProgress&& o) noexcept = default;
  constexpr ObjectProgress& operator=(ObjectProgress const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_opRecordIdCount, put=__set_opRecordIdCount))  opRecordIdCount;

static void __set_opRecordIdCount(int32_t value) ;

static int32_t __get_opRecordIdCount() ;

 bool __declspec(property(get=__get_isInitial, put=__set_isInitial))  isInitial;

constexpr void __set_isInitial(bool value) ;

constexpr bool __get_isInitial() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum __declspec(property(get=__get_expectedType, put=__set_expectedType))  expectedType;

constexpr void __set_expectedType(System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum __get_expectedType() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_expectedTypeInformation, put=__set_expectedTypeInformation))  expectedTypeInformation;

constexpr void __set_expectedTypeInformation(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_expectedTypeInformation() const;

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE __declspec(property(get=__get_objectTypeEnum, put=__set_objectTypeEnum))  objectTypeEnum;

constexpr void __set_objectTypeEnum(System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE __get_objectTypeEnum() const;

 System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE __declspec(property(get=__get_memberTypeEnum, put=__set_memberTypeEnum))  memberTypeEnum;

constexpr void __set_memberTypeEnum(System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE __get_memberTypeEnum() const;

 System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE __declspec(property(get=__get_memberValueEnum, put=__set_memberValueEnum))  memberValueEnum;

constexpr void __set_memberValueEnum(System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE __get_memberValueEnum() const;

 System::Type __declspec(property(get=__get_dtType, put=__set_dtType))  dtType;

constexpr void __set_dtType(System::Type value) ;

constexpr System::Type __get_dtType() const;

 int32_t __declspec(property(get=__get_numItems, put=__set_numItems))  numItems;

constexpr void __set_numItems(int32_t value) ;

constexpr int32_t __get_numItems() const;

 System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum __declspec(property(get=__get_binaryTypeEnum, put=__set_binaryTypeEnum))  binaryTypeEnum;

constexpr void __set_binaryTypeEnum(System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum __get_binaryTypeEnum() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_typeInformation, put=__set_typeInformation))  typeInformation;

constexpr void __set_typeInformation(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_typeInformation() const;

 int32_t __declspec(property(get=__get_nullCount, put=__set_nullCount))  nullCount;

constexpr void __set_nullCount(int32_t value) ;

constexpr int32_t __get_nullCount() const;

 int32_t __declspec(property(get=__get_memberLength, put=__set_memberLength))  memberLength;

constexpr void __set_memberLength(int32_t value) ;

constexpr int32_t __get_memberLength() const;

 ::ArrayW<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> __declspec(property(get=__get_binaryTypeEnumA, put=__set_binaryTypeEnumA))  binaryTypeEnumA;

constexpr void __set_binaryTypeEnumA(::ArrayW<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> value) ;

constexpr ::ArrayW<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> __get_binaryTypeEnumA() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_typeInformationA, put=__set_typeInformationA))  typeInformationA;

constexpr void __set_typeInformationA(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_typeInformationA() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_memberNames, put=__set_memberNames))  memberNames;

constexpr void __set_memberNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_memberNames() const;

 ::ArrayW<System::Type> __declspec(property(get=__get_memberTypes, put=__set_memberTypes))  memberTypes;

constexpr void __set_memberTypes(::ArrayW<System::Type> value) ;

constexpr ::ArrayW<System::Type> __get_memberTypes() const;

 System::Runtime::Serialization::Formatters::Binary::ParseRecord __declspec(property(get=__get_pr, put=__set_pr))  pr;

constexpr void __set_pr(System::Runtime::Serialization::Formatters::Binary::ParseRecord value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::ParseRecord __get_pr() const;


// Methods

// Ctor Parameters []
explicit ObjectProgress() ;

/// @brief Method .ctor addr 0x2357efc size 0x70 virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x2357f6c size 0x50 virtual false final false
 void Init() ;

/// @brief Method ArrayCountIncrement addr 0x2357fbc size 0x10 virtual false final false
 void ArrayCountIncrement(int32_t value) ;

/// @brief Method GetNext addr 0x2357fcc size 0x114 virtual false final false
 bool GetNext(ByRef<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> outBinaryTypeEnum, ByRef<::bs_hook::Il2CppWrapperType> outTypeInformation) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::ObjectProgress);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::ObjectProgress, "System.Runtime.Serialization.Formatters.Binary", "ObjectProgress");
