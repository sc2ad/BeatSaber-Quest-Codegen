#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObject;
}
namespace System::IO {
class TextWriter;
}
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObjectGenerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemWriter;
}
// Type: Org.BouncyCastle.Utilities.IO.Pem::PemWriter
namespace Org::BouncyCastle::Utilities::IO::Pem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1690))
// CS Name: Org.BouncyCastle.Utilities.IO.Pem.PemWriter
class CORDL_TYPE PemWriter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PemWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "PemWriter", modifiers: " const&", def_value: None }]
constexpr PemWriter(PemWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PemWriter", modifiers: "&&", def_value: None }]
constexpr PemWriter(PemWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PemWriter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PemWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PemWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PemWriter& operator=(PemWriter&& o) noexcept = default;
  constexpr PemWriter& operator=(PemWriter const& o) noexcept = default;
                


// Fields

/// @brief Field LineLength offset 0
static constexpr int32_t  LineLength{64};

 System::IO::TextWriter __declspec(property(get=__get_writer, put=__set_writer))  writer;

constexpr void __set_writer(System::IO::TextWriter value) ;

constexpr System::IO::TextWriter __get_writer() const;

 int32_t __declspec(property(get=__get_nlLength, put=__set_nlLength))  nlLength;

constexpr void __set_nlLength(int32_t value) ;

constexpr int32_t __get_nlLength() const;

 ::ArrayW<char16_t> __declspec(property(get=__get_buf, put=__set_buf))  buf;

constexpr void __set_buf(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_buf() const;


// Properties

 System::IO::TextWriter __declspec(property(get=get_Writer))  Writer;


// Methods

static Org::BouncyCastle::Utilities::IO::Pem::PemWriter New_ctor(System::IO::TextWriter writer) ;

/// @brief Method .ctor addr 0x1047edc size 0xfc virtual false final false
 void _ctor(System::IO::TextWriter writer) ;

/// @brief Method get_Writer addr 0x1047fd8 size 0x8 virtual false final false
 System::IO::TextWriter get_Writer() ;

/// @brief Method GetOutputSize addr 0x1047fe0 size 0x4d8 virtual false final false
 int32_t GetOutputSize(Org::BouncyCastle::Utilities::IO::Pem::PemObject obj) ;

/// @brief Method WriteObject addr 0x10484b8 size 0x54c virtual false final false
 void WriteObject(Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator objGen) ;

/// @brief Method WriteEncoded addr 0x1048a98 size 0xe0 virtual false final false
 void WriteEncoded(::ArrayW<uint8_t> bytes) ;

/// @brief Method WritePreEncapsulationBoundary addr 0x1048a04 size 0x94 virtual false final false
 void WritePreEncapsulationBoundary(::StringW type) ;

/// @brief Method WritePostEncapsulationBoundary addr 0x1048b78 size 0x94 virtual false final false
 void WritePostEncapsulationBoundary(::StringW type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::IO::Pem
NEED_NO_BOX(Org::BouncyCastle::Utilities::IO::Pem::PemWriter);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::IO::Pem::PemWriter, "Org.BouncyCastle.Utilities.IO.Pem", "PemWriter");
