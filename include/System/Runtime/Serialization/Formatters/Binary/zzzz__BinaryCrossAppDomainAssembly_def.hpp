#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryCrossAppDomainAssembly;
}
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryCrossAppDomainAssembly
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3256))
// CS Name: System.Runtime.Serialization.Formatters.Binary.BinaryCrossAppDomainAssembly
class CORDL_TYPE BinaryCrossAppDomainAssembly : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BinaryCrossAppDomainAssembly() = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryCrossAppDomainAssembly", modifiers: " const&", def_value: None }]
constexpr BinaryCrossAppDomainAssembly(BinaryCrossAppDomainAssembly const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryCrossAppDomainAssembly", modifiers: "&&", def_value: None }]
constexpr BinaryCrossAppDomainAssembly(BinaryCrossAppDomainAssembly&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BinaryCrossAppDomainAssembly(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BinaryCrossAppDomainAssembly& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BinaryCrossAppDomainAssembly& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BinaryCrossAppDomainAssembly& operator=(BinaryCrossAppDomainAssembly&& o) noexcept = default;
  constexpr BinaryCrossAppDomainAssembly& operator=(BinaryCrossAppDomainAssembly const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_assemId, put=__set_assemId))  assemId;

constexpr void __set_assemId(int32_t value) ;

constexpr int32_t __get_assemId() const;

 int32_t __declspec(property(get=__get_assemblyIndex, put=__set_assemblyIndex))  assemblyIndex;

constexpr void __set_assemblyIndex(int32_t value) ;

constexpr int32_t __get_assemblyIndex() const;


// Methods

static System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly New_ctor() ;

/// @brief Method .ctor addr 0x2355c58 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Read addr 0x2355c60 size 0x44 virtual true final true
 void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser input) ;

/// @brief Method Dump addr 0x2355ca4 size 0x4 virtual false final false
 void Dump() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly, "System.Runtime.Serialization.Formatters.Binary", "BinaryCrossAppDomainAssembly");
