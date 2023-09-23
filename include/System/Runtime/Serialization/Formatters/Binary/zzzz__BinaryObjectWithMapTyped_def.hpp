#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryHeaderEnum;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryTypeEnum;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryObjectWithMapTyped;
}
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryObjectWithMapTyped
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3265))
// CS Name: System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMapTyped
class CORDL_TYPE BinaryObjectWithMapTyped : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~BinaryObjectWithMapTyped() = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryObjectWithMapTyped", modifiers: " const&", def_value: None }]
constexpr BinaryObjectWithMapTyped(BinaryObjectWithMapTyped const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryObjectWithMapTyped", modifiers: "&&", def_value: None }]
constexpr BinaryObjectWithMapTyped(BinaryObjectWithMapTyped&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BinaryObjectWithMapTyped(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BinaryObjectWithMapTyped& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BinaryObjectWithMapTyped& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BinaryObjectWithMapTyped& operator=(BinaryObjectWithMapTyped&& o) noexcept = default;
  constexpr BinaryObjectWithMapTyped& operator=(BinaryObjectWithMapTyped const& o) noexcept = default;
                


// Fields

 System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum __declspec(property(get=__get_binaryHeaderEnum, put=__set_binaryHeaderEnum))  binaryHeaderEnum;

constexpr void __set_binaryHeaderEnum(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum __get_binaryHeaderEnum() const;

 int32_t __declspec(property(get=__get_objectId, put=__set_objectId))  objectId;

constexpr void __set_objectId(int32_t value) ;

constexpr int32_t __get_objectId() const;

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 int32_t __declspec(property(get=__get_numMembers, put=__set_numMembers))  numMembers;

constexpr void __set_numMembers(int32_t value) ;

constexpr int32_t __get_numMembers() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_memberNames, put=__set_memberNames))  memberNames;

constexpr void __set_memberNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_memberNames() const;

 ::ArrayW<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> __declspec(property(get=__get_binaryTypeEnumA, put=__set_binaryTypeEnumA))  binaryTypeEnumA;

constexpr void __set_binaryTypeEnumA(::ArrayW<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> value) ;

constexpr ::ArrayW<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> __get_binaryTypeEnumA() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_typeInformationA, put=__set_typeInformationA))  typeInformationA;

constexpr void __set_typeInformationA(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_typeInformationA() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_memberAssemIds, put=__set_memberAssemIds))  memberAssemIds;

constexpr void __set_memberAssemIds(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_memberAssemIds() const;

 int32_t __declspec(property(get=__get_assemId, put=__set_assemId))  assemId;

constexpr void __set_assemId(int32_t value) ;

constexpr int32_t __get_assemId() const;


// Methods

// Ctor Parameters []
explicit BinaryObjectWithMapTyped() ;

/// @brief Method .ctor addr 0x2356588 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "binaryHeaderEnum", ty: "System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum", modifiers: "", def_value: None }]
explicit BinaryObjectWithMapTyped(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) ;

/// @brief Method .ctor addr 0x2356590 size 0x28 virtual false final false
 void _ctor(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) ;

/// @brief Method Set addr 0x23565b8 size 0x2c virtual false final false
 void Set(int32_t objectId, ::StringW name, int32_t numMembers, ::ArrayW<::StringW> memberNames, ::ArrayW<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> binaryTypeEnumA, ::ArrayW<::bs_hook::Il2CppWrapperType> typeInformationA, ::ArrayW<int32_t> memberAssemIds, int32_t assemId) ;

/// @brief Method Write addr 0x23565e4 size 0x1d8 virtual true final true
 void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter sout) ;

/// @brief Method Read addr 0x23567bc size 0x2a4 virtual true final true
 void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped, "System.Runtime.Serialization.Formatters.Binary", "BinaryObjectWithMapTyped");
