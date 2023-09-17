#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryObjectString;
}
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryObjectString
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3260))
// CS Name: System.Runtime.Serialization.Formatters.Binary.BinaryObjectString
class CORDL_TYPE BinaryObjectString : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BinaryObjectString() = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryObjectString", modifiers: " const&", def_value: None }]
constexpr BinaryObjectString(BinaryObjectString const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryObjectString", modifiers: "&&", def_value: None }]
constexpr BinaryObjectString(BinaryObjectString&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BinaryObjectString(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BinaryObjectString& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BinaryObjectString& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BinaryObjectString& operator=(BinaryObjectString&& o) noexcept = default;
  constexpr BinaryObjectString& operator=(BinaryObjectString const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_objectId, put=__set_objectId))  objectId;

constexpr void __set_objectId(int32_t value) ;

constexpr int32_t __get_objectId() const;

 ::StringW __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::StringW value) ;

constexpr ::StringW __get_value() const;


// Methods

// Ctor Parameters []
explicit BinaryObjectString() ;

/// @brief Method .ctor addr 0x23560d0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Set addr 0x23560d8 size 0xc virtual false final false
 void Set(int32_t objectId, ::StringW value) ;

/// @brief Method Write addr 0x23560e4 size 0x70 virtual true final true
 void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter sout) ;

/// @brief Method Read addr 0x2356154 size 0x44 virtual true final true
 void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser input) ;

/// @brief Method Dump addr 0x2356198 size 0x4 virtual false final false
 void Dump() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString, "System.Runtime.Serialization.Formatters.Binary", "BinaryObjectString");
