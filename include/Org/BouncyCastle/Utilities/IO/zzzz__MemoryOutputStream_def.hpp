#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO {
class MemoryOutputStream;
}
// Type: Org.BouncyCastle.Utilities.IO::MemoryOutputStream
namespace Org::BouncyCastle::Utilities::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1809))
// CS Name: Org.BouncyCastle.Utilities.IO.MemoryOutputStream
class CORDL_TYPE MemoryOutputStream : public System::IO::MemoryStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MemoryOutputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryOutputStream", modifiers: " const&", def_value: None }]
constexpr MemoryOutputStream(MemoryOutputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryOutputStream", modifiers: "&&", def_value: None }]
constexpr MemoryOutputStream(MemoryOutputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemoryOutputStream(void* ptr) noexcept : System::IO::MemoryStream(ptr) {
}


  constexpr MemoryOutputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemoryOutputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemoryOutputStream& operator=(MemoryOutputStream&& o) noexcept = default;
  constexpr MemoryOutputStream& operator=(MemoryOutputStream const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;


// Methods

/// @brief Method get_CanRead addr 0x10d39e4 size 0x8 virtual true final true
 bool get_CanRead() ;

// Ctor Parameters []
explicit MemoryOutputStream() ;

/// @brief Method .ctor addr 0x10d39ec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::IO
NEED_NO_BOX(Org::BouncyCastle::Utilities::IO::MemoryOutputStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::IO::MemoryOutputStream, "Org.BouncyCastle.Utilities.IO", "MemoryOutputStream");
