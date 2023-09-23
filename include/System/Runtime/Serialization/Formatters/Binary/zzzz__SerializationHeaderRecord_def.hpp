#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class SerializationHeaderRecord;
}
// Type: System.Runtime.Serialization.Formatters.Binary::SerializationHeaderRecord
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3254))
// CS Name: System.Runtime.Serialization.Formatters.Binary.SerializationHeaderRecord
class CORDL_TYPE SerializationHeaderRecord : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SerializationHeaderRecord() = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializationHeaderRecord", modifiers: " const&", def_value: None }]
constexpr SerializationHeaderRecord(SerializationHeaderRecord const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializationHeaderRecord", modifiers: "&&", def_value: None }]
constexpr SerializationHeaderRecord(SerializationHeaderRecord&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SerializationHeaderRecord(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SerializationHeaderRecord& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SerializationHeaderRecord& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SerializationHeaderRecord& operator=(SerializationHeaderRecord&& o) noexcept = default;
  constexpr SerializationHeaderRecord& operator=(SerializationHeaderRecord const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_binaryFormatterMajorVersion, put=__set_binaryFormatterMajorVersion))  binaryFormatterMajorVersion;

constexpr void __set_binaryFormatterMajorVersion(int32_t value) ;

constexpr int32_t __get_binaryFormatterMajorVersion() const;

 int32_t __declspec(property(get=__get_binaryFormatterMinorVersion, put=__set_binaryFormatterMinorVersion))  binaryFormatterMinorVersion;

constexpr void __set_binaryFormatterMinorVersion(int32_t value) ;

constexpr int32_t __get_binaryFormatterMinorVersion() const;

 System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum __declspec(property(get=__get_binaryHeaderEnum, put=__set_binaryHeaderEnum))  binaryHeaderEnum;

constexpr void __set_binaryHeaderEnum(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum __get_binaryHeaderEnum() const;

 int32_t __declspec(property(get=__get_topId, put=__set_topId))  topId;

constexpr void __set_topId(int32_t value) ;

constexpr int32_t __get_topId() const;

 int32_t __declspec(property(get=__get_headerId, put=__set_headerId))  headerId;

constexpr void __set_headerId(int32_t value) ;

constexpr int32_t __get_headerId() const;

 int32_t __declspec(property(get=__get_majorVersion, put=__set_majorVersion))  majorVersion;

constexpr void __set_majorVersion(int32_t value) ;

constexpr int32_t __get_majorVersion() const;

 int32_t __declspec(property(get=__get_minorVersion, put=__set_minorVersion))  minorVersion;

constexpr void __set_minorVersion(int32_t value) ;

constexpr int32_t __get_minorVersion() const;


// Methods

// Ctor Parameters []
explicit SerializationHeaderRecord() ;

/// @brief Method .ctor addr 0x2355898 size 0x10 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "binaryHeaderEnum", ty: "System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum", modifiers: "", def_value: None }, CppParam { name: "topId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "headerId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "majorVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minorVersion", ty: "int32_t", modifiers: "", def_value: None }]
explicit SerializationHeaderRecord(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum, int32_t topId, int32_t headerId, int32_t majorVersion, int32_t minorVersion) ;

/// @brief Method .ctor addr 0x23558a8 size 0x58 virtual false final false
 void _ctor(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum, int32_t topId, int32_t headerId, int32_t majorVersion, int32_t minorVersion) ;

/// @brief Method Write addr 0x2355900 size 0xb0 virtual true final true
 void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter sout) ;

/// @brief Method GetInt32 addr 0x23559b0 size 0x74 virtual false final false
static int32_t GetInt32(::ArrayW<uint8_t> buffer, int32_t index) ;

/// @brief Method Read addr 0x2355a24 size 0x164 virtual true final true
 void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser input) ;

/// @brief Method Dump addr 0x2355b88 size 0x4 virtual false final false
 void Dump() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord, "System.Runtime.Serialization.Formatters.Binary", "SerializationHeaderRecord");
