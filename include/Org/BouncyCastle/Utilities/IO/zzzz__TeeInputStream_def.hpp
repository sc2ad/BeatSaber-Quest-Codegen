#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO {
class TeeInputStream;
}
// Type: Org.BouncyCastle.Utilities.IO::TeeInputStream
namespace Org::BouncyCastle::Utilities::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(498))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1814))
// CS Name: Org.BouncyCastle.Utilities.IO.TeeInputStream
class CORDL_TYPE TeeInputStream : public Org::BouncyCastle::Utilities::IO::BaseInputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~TeeInputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "TeeInputStream", modifiers: " const&", def_value: None }]
constexpr TeeInputStream(TeeInputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TeeInputStream", modifiers: "&&", def_value: None }]
constexpr TeeInputStream(TeeInputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TeeInputStream(void* ptr) noexcept : Org::BouncyCastle::Utilities::IO::BaseInputStream(ptr) {
}


  constexpr TeeInputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TeeInputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TeeInputStream& operator=(TeeInputStream&& o) noexcept = default;
  constexpr TeeInputStream& operator=(TeeInputStream const& o) noexcept = default;
                


// Fields

 System::IO::Stream __declspec(property(get=__get_input, put=__set_input))  input;

constexpr void __set_input(System::IO::Stream value) ;

constexpr System::IO::Stream __get_input() const;

 System::IO::Stream __declspec(property(get=__get_tee, put=__set_tee))  tee;

constexpr void __set_tee(System::IO::Stream value) ;

constexpr System::IO::Stream __get_tee() const;


// Methods

static Org::BouncyCastle::Utilities::IO::TeeInputStream New_ctor(System::IO::Stream input, System::IO::Stream tee) ;

/// @brief Method .ctor addr 0x10d40f0 size 0x2c virtual false final false
 void _ctor(System::IO::Stream input, System::IO::Stream tee) ;

/// @brief Method Close addr 0x10d411c size 0x74 virtual true final false
 void Close() ;

/// @brief Method Read addr 0x10d4190 size 0x78 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method ReadByte addr 0x10d4208 size 0x5c virtual true final false
 int32_t ReadByte() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::IO
NEED_NO_BOX(Org::BouncyCastle::Utilities::IO::TeeInputStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::IO::TeeInputStream, "Org.BouncyCastle.Utilities.IO", "TeeInputStream");
