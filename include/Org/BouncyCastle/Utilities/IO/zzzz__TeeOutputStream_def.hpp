#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO {
class TeeOutputStream;
}
// Type: Org.BouncyCastle.Utilities.IO::TeeOutputStream
namespace Org::BouncyCastle::Utilities::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(484))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1815))
// CS Name: Org.BouncyCastle.Utilities.IO.TeeOutputStream
class CORDL_TYPE TeeOutputStream : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~TeeOutputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "TeeOutputStream", modifiers: " const&", def_value: None }]
constexpr TeeOutputStream(TeeOutputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TeeOutputStream", modifiers: "&&", def_value: None }]
constexpr TeeOutputStream(TeeOutputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TeeOutputStream(void* ptr) noexcept : ::Org::BouncyCastle::Utilities::IO::BaseOutputStream(ptr) {
}


  constexpr TeeOutputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TeeOutputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TeeOutputStream& operator=(TeeOutputStream&& o) noexcept = default;
  constexpr TeeOutputStream& operator=(TeeOutputStream const& o) noexcept = default;
                


// Fields

 ::System::IO::Stream __declspec(property(get=__get_output, put=__set_output))  output;

constexpr void __set_output(::System::IO::Stream value) ;

constexpr ::System::IO::Stream __get_output() const;

 ::System::IO::Stream __declspec(property(get=__get_tee, put=__set_tee))  tee;

constexpr void __set_tee(::System::IO::Stream value) ;

constexpr ::System::IO::Stream __get_tee() const;


// Methods

// Ctor Parameters [CppParam { name: "output", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "tee", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
explicit TeeOutputStream(::System::IO::Stream output, ::System::IO::Stream tee) ;

/// @brief Method .ctor addr 0x10d4264 size 0x2c virtual false final false
 void _ctor(::System::IO::Stream output, ::System::IO::Stream tee) ;

/// @brief Method Close addr 0x10d4290 size 0x74 virtual true final false
 void Close() ;

/// @brief Method Write addr 0x10d4304 size 0x68 virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method WriteByte addr 0x10d436c size 0x50 virtual true final false
 void WriteByte(uint8_t b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::IO
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::TeeOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::TeeOutputStream, "Org.BouncyCastle.Utilities.IO", "TeeOutputStream");
