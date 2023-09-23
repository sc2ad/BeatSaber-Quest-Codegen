#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryCrossAppDomainMap;
}
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryCrossAppDomainMap
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3262))
// CS Name: System.Runtime.Serialization.Formatters.Binary.BinaryCrossAppDomainMap
class CORDL_TYPE BinaryCrossAppDomainMap : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BinaryCrossAppDomainMap() = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryCrossAppDomainMap", modifiers: " const&", def_value: None }]
constexpr BinaryCrossAppDomainMap(BinaryCrossAppDomainMap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryCrossAppDomainMap", modifiers: "&&", def_value: None }]
constexpr BinaryCrossAppDomainMap(BinaryCrossAppDomainMap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BinaryCrossAppDomainMap(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BinaryCrossAppDomainMap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BinaryCrossAppDomainMap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BinaryCrossAppDomainMap& operator=(BinaryCrossAppDomainMap&& o) noexcept = default;
  constexpr BinaryCrossAppDomainMap& operator=(BinaryCrossAppDomainMap const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_crossAppDomainArrayIndex, put=__set_crossAppDomainArrayIndex))  crossAppDomainArrayIndex;

constexpr void __set_crossAppDomainArrayIndex(int32_t value) ;

constexpr int32_t __get_crossAppDomainArrayIndex() const;


// Methods

// Ctor Parameters []
explicit BinaryCrossAppDomainMap() ;

/// @brief Method .ctor addr 0x23561ec size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Read addr 0x23561f4 size 0x28 virtual true final true
 void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser input) ;

/// @brief Method Dump addr 0x235621c size 0x4 virtual false final false
 void Dump() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainMap);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainMap, "System.Runtime.Serialization.Formatters.Binary", "BinaryCrossAppDomainMap");
