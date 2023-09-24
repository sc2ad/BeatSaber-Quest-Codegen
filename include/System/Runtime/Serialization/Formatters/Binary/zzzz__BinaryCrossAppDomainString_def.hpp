#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryCrossAppDomainString;
}
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryCrossAppDomainString
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3261))
// CS Name: System.Runtime.Serialization.Formatters.Binary.BinaryCrossAppDomainString
class CORDL_TYPE BinaryCrossAppDomainString : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BinaryCrossAppDomainString() = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryCrossAppDomainString", modifiers: " const&", def_value: None }]
constexpr BinaryCrossAppDomainString(BinaryCrossAppDomainString const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryCrossAppDomainString", modifiers: "&&", def_value: None }]
constexpr BinaryCrossAppDomainString(BinaryCrossAppDomainString&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BinaryCrossAppDomainString(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BinaryCrossAppDomainString& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BinaryCrossAppDomainString& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BinaryCrossAppDomainString& operator=(BinaryCrossAppDomainString&& o) noexcept = default;
  constexpr BinaryCrossAppDomainString& operator=(BinaryCrossAppDomainString const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_objectId, put=__set_objectId))  objectId;

constexpr void __set_objectId(int32_t value) ;

constexpr int32_t __get_objectId() const;

 int32_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(int32_t value) ;

constexpr int32_t __get_value() const;


// Methods

static System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString New_ctor() ;

/// @brief Method .ctor addr 0x235619c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Read addr 0x23561a4 size 0x44 virtual true final true
 void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser input) ;

/// @brief Method Dump addr 0x23561e8 size 0x4 virtual false final false
 void Dump() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString, "System.Runtime.Serialization.Formatters.Binary", "BinaryCrossAppDomainString");
