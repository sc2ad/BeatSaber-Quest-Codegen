#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryTypeEnum;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryArrayTypeEnum;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryHeaderEnum;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryArray;
}
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryArray
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3266))
// CS Name: System.Runtime.Serialization.Formatters.Binary.BinaryArray
class CORDL_TYPE BinaryArray : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~BinaryArray() = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryArray", modifiers: " const&", def_value: None }]
constexpr BinaryArray(BinaryArray const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryArray", modifiers: "&&", def_value: None }]
constexpr BinaryArray(BinaryArray&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BinaryArray(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BinaryArray& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BinaryArray& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BinaryArray& operator=(BinaryArray&& o) noexcept = default;
  constexpr BinaryArray& operator=(BinaryArray const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_objectId, put=__set_objectId))  objectId;

constexpr void __set_objectId(int32_t value) ;

constexpr int32_t __get_objectId() const;

 int32_t __declspec(property(get=__get_rank, put=__set_rank))  rank;

constexpr void __set_rank(int32_t value) ;

constexpr int32_t __get_rank() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_lengthA, put=__set_lengthA))  lengthA;

constexpr void __set_lengthA(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_lengthA() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_lowerBoundA, put=__set_lowerBoundA))  lowerBoundA;

constexpr void __set_lowerBoundA(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_lowerBoundA() const;

 System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum __declspec(property(get=__get_binaryTypeEnum, put=__set_binaryTypeEnum))  binaryTypeEnum;

constexpr void __set_binaryTypeEnum(System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum __get_binaryTypeEnum() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_typeInformation, put=__set_typeInformation))  typeInformation;

constexpr void __set_typeInformation(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_typeInformation() const;

 int32_t __declspec(property(get=__get_assemId, put=__set_assemId))  assemId;

constexpr void __set_assemId(int32_t value) ;

constexpr int32_t __get_assemId() const;

 System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum __declspec(property(get=__get_binaryHeaderEnum, put=__set_binaryHeaderEnum))  binaryHeaderEnum;

constexpr void __set_binaryHeaderEnum(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum __get_binaryHeaderEnum() const;

 System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum __declspec(property(get=__get_binaryArrayTypeEnum, put=__set_binaryArrayTypeEnum))  binaryArrayTypeEnum;

constexpr void __set_binaryArrayTypeEnum(System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum __get_binaryArrayTypeEnum() const;


// Methods

static System::Runtime::Serialization::Formatters::Binary::BinaryArray New_ctor() ;

/// @brief Method .ctor addr 0x2356a60 size 0x8 virtual false final false
 void _ctor() ;

static System::Runtime::Serialization::Formatters::Binary::BinaryArray New_ctor(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) ;

/// @brief Method .ctor addr 0x2356a68 size 0x28 virtual false final false
 void _ctor(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) ;

/// @brief Method Set addr 0x2356a90 size 0x54 virtual false final false
 void Set(int32_t objectId, int32_t rank, ::ArrayW<int32_t> lengthA, ::ArrayW<int32_t> lowerBoundA, System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, ::bs_hook::Il2CppWrapperType typeInformation, System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum binaryArrayTypeEnum, int32_t assemId) ;

/// @brief Method Write addr 0x2356ae4 size 0x2d8 virtual true final true
 void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter sout) ;

/// @brief Method Read addr 0x2356dbc size 0x300 virtual true final true
 void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::BinaryArray);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryArray, "System.Runtime.Serialization.Formatters.Binary", "BinaryArray");
