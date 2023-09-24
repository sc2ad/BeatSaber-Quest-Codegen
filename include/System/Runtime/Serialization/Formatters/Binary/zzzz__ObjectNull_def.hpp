#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryHeaderEnum;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectNull;
}
// Type: System.Runtime.Serialization.Formatters.Binary::ObjectNull
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3269))
// CS Name: System.Runtime.Serialization.Formatters.Binary.ObjectNull
class CORDL_TYPE ObjectNull : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ObjectNull() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectNull", modifiers: " const&", def_value: None }]
constexpr ObjectNull(ObjectNull const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectNull", modifiers: "&&", def_value: None }]
constexpr ObjectNull(ObjectNull&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObjectNull(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ObjectNull& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObjectNull& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObjectNull& operator=(ObjectNull&& o) noexcept = default;
  constexpr ObjectNull& operator=(ObjectNull const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_nullCount, put=__set_nullCount))  nullCount;

constexpr void __set_nullCount(int32_t value) ;

constexpr int32_t __get_nullCount() const;


// Methods

static System::Runtime::Serialization::Formatters::Binary::ObjectNull New_ctor() ;

/// @brief Method .ctor addr 0x23571c0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method SetNullCount addr 0x23571c8 size 0x8 virtual false final false
 void SetNullCount(int32_t nullCount) ;

/// @brief Method Write addr 0x23571d0 size 0xac virtual true final true
 void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter sout) ;

/// @brief Method Read addr 0x235727c size 0x60 virtual false final false
 void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser input, System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) ;

/// @brief Method Dump addr 0x23572dc size 0x4 virtual false final false
 void Dump() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::ObjectNull);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::ObjectNull, "System.Runtime.Serialization.Formatters.Binary", "ObjectNull");
