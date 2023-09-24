#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObject;
}
namespace System::IO {
class TextReader;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemReader;
}
// Type: Org.BouncyCastle.Utilities.IO.Pem::PemReader
namespace Org::BouncyCastle::Utilities::IO::Pem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1685))
// CS Name: Org.BouncyCastle.Utilities.IO.Pem.PemReader
class CORDL_TYPE PemReader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PemReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "PemReader", modifiers: " const&", def_value: None }]
constexpr PemReader(PemReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PemReader", modifiers: "&&", def_value: None }]
constexpr PemReader(PemReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PemReader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PemReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PemReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PemReader& operator=(PemReader&& o) noexcept = default;
  constexpr PemReader& operator=(PemReader const& o) noexcept = default;
                


// Fields

/// @brief Field BeginString offset 0
static constexpr ::ConstString  BeginString{u"-----BEGIN "};

/// @brief Field EndString offset 0
static constexpr ::ConstString  EndString{u"-----END "};

 System::IO::TextReader __declspec(property(get=__get_reader, put=__set_reader))  reader;

constexpr void __set_reader(System::IO::TextReader value) ;

constexpr System::IO::TextReader __get_reader() const;


// Properties

 System::IO::TextReader __declspec(property(get=get_Reader))  Reader;


// Methods

static Org::BouncyCastle::Utilities::IO::Pem::PemReader New_ctor(System::IO::TextReader reader) ;

/// @brief Method .ctor addr 0x10453f8 size 0x78 virtual false final false
 void _ctor(System::IO::TextReader reader) ;

/// @brief Method get_Reader addr 0x1045470 size 0x8 virtual false final false
 System::IO::TextReader get_Reader() ;

/// @brief Method ReadPemObject addr 0x1045478 size 0x154 virtual false final false
 Org::BouncyCastle::Utilities::IO::Pem::PemObject ReadPemObject() ;

/// @brief Method LoadObject addr 0x10455cc size 0x3d8 virtual false final false
 Org::BouncyCastle::Utilities::IO::Pem::PemObject LoadObject(::StringW type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::IO::Pem
NEED_NO_BOX(Org::BouncyCastle::Utilities::IO::Pem::PemReader);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::IO::Pem::PemReader, "Org.BouncyCastle.Utilities.IO.Pem", "PemReader");
