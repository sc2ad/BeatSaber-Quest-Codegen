#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryHeaderEnum;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryObjectWithMap;
}
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryObjectWithMap
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3264))
// CS Name: System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMap
class CORDL_TYPE BinaryObjectWithMap : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~BinaryObjectWithMap() = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryObjectWithMap", modifiers: " const&", def_value: None }]
constexpr BinaryObjectWithMap(BinaryObjectWithMap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryObjectWithMap", modifiers: "&&", def_value: None }]
constexpr BinaryObjectWithMap(BinaryObjectWithMap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BinaryObjectWithMap(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BinaryObjectWithMap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BinaryObjectWithMap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BinaryObjectWithMap& operator=(BinaryObjectWithMap&& o) noexcept = default;
  constexpr BinaryObjectWithMap& operator=(BinaryObjectWithMap const& o) noexcept = default;
                


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

 int32_t __declspec(property(get=__get_assemId, put=__set_assemId))  assemId;

constexpr void __set_assemId(int32_t value) ;

constexpr int32_t __get_assemId() const;


// Methods

static System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap New_ctor() ;

/// @brief Method .ctor addr 0x23562e0 size 0x8 virtual false final false
 void _ctor() ;

static System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap New_ctor(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) ;

/// @brief Method .ctor addr 0x23562e8 size 0x28 virtual false final false
 void _ctor(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) ;

/// @brief Method Set addr 0x2356310 size 0x24 virtual false final false
 void Set(int32_t objectId, ::StringW name, int32_t numMembers, ::ArrayW<::StringW> memberNames, int32_t assemId) ;

/// @brief Method Write addr 0x2356334 size 0x114 virtual true final true
 void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter sout) ;

/// @brief Method Read addr 0x2356448 size 0x13c virtual true final true
 void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser input) ;

/// @brief Method Dump addr 0x2356584 size 0x4 virtual false final false
 void Dump() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap, "System.Runtime.Serialization.Formatters.Binary", "BinaryObjectWithMap");
