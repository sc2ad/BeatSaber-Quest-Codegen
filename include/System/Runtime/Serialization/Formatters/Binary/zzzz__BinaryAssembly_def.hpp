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
class BinaryAssembly;
}
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryAssembly
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3255))
// CS Name: System.Runtime.Serialization.Formatters.Binary.BinaryAssembly
class CORDL_TYPE BinaryAssembly : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BinaryAssembly() = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryAssembly", modifiers: " const&", def_value: None }]
constexpr BinaryAssembly(BinaryAssembly const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryAssembly", modifiers: "&&", def_value: None }]
constexpr BinaryAssembly(BinaryAssembly&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BinaryAssembly(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BinaryAssembly& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BinaryAssembly& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BinaryAssembly& operator=(BinaryAssembly&& o) noexcept = default;
  constexpr BinaryAssembly& operator=(BinaryAssembly const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_assemId, put=__set_assemId))  assemId;

constexpr void __set_assemId(int32_t value) ;

constexpr int32_t __get_assemId() const;

 ::StringW __declspec(property(get=__get_assemblyString, put=__set_assemblyString))  assemblyString;

constexpr void __set_assemblyString(::StringW value) ;

constexpr ::StringW __get_assemblyString() const;


// Methods

// Ctor Parameters []
explicit BinaryAssembly() ;

/// @brief Method .ctor addr 0x2355b8c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Set addr 0x2355b94 size 0xc virtual false final false
 void Set(int32_t assemId, ::StringW assemblyString) ;

/// @brief Method Write addr 0x2355ba0 size 0x70 virtual true final true
 void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter sout) ;

/// @brief Method Read addr 0x2355c10 size 0x44 virtual true final true
 void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser input) ;

/// @brief Method Dump addr 0x2355c54 size 0x4 virtual false final false
 void Dump() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly, "System.Runtime.Serialization.Formatters.Binary", "BinaryAssembly");
