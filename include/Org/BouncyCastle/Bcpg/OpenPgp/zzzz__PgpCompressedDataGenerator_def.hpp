#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Apache/Bzip2/zzzz__CBZip2OutputStream_def.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__ZOutputStream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg {
struct CompressionAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class IStreamGenerator;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpCompressedDataGenerator;
}
// Type: ::SafeCBZip2OutputStream
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1634))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1630))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpCompressedDataGenerator::SafeCBZip2OutputStream
class CORDL_TYPE Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream : public Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf8};

virtual ~Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream(Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream(Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream(void* ptr) noexcept : Org::BouncyCastle::Apache::Bzip2::CBZip2OutputStream(ptr) {
}


  constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream& operator=(Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream&& o) noexcept = default;
  constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream& operator=(Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "output", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream(System::IO::Stream output) ;

/// @brief Method .ctor addr 0x101999c size 0x8 virtual false final false
 void _ctor(System::IO::Stream output) ;

/// @brief Method Close addr 0x1019a50 size 0x4 virtual true final false
 void Close() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
// Type: ::SafeZOutputStream
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1297))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1631))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpCompressedDataGenerator::SafeZOutputStream
class CORDL_TYPE Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream : public Org::BouncyCastle::Utilities::Zlib::ZOutputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream(Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream(Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream(void* ptr) noexcept : Org::BouncyCastle::Utilities::Zlib::ZOutputStream(ptr) {
}


  constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream& operator=(Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream&& o) noexcept = default;
  constexpr Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream& operator=(Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "output", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "level", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nowrap", ty: "bool", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream(System::IO::Stream output, int32_t level, bool nowrap) ;

/// @brief Method .ctor addr 0x1019990 size 0xc virtual false final false
 void _ctor(System::IO::Stream output, int32_t level, bool nowrap) ;

/// @brief Method Close addr 0x1019ab8 size 0x30 virtual true final false
 void Close() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpCompressedDataGenerator
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1632))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpCompressedDataGenerator
class CORDL_TYPE PgpCompressedDataGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SafeZOutputStream = Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream;

using SafeCBZip2OutputStream = Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream;

/// @brief Convert operator to Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator
constexpr operator  Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PgpCompressedDataGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpCompressedDataGenerator", modifiers: " const&", def_value: None }]
constexpr PgpCompressedDataGenerator(PgpCompressedDataGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpCompressedDataGenerator", modifiers: "&&", def_value: None }]
constexpr PgpCompressedDataGenerator(PgpCompressedDataGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpCompressedDataGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PgpCompressedDataGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpCompressedDataGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpCompressedDataGenerator& operator=(PgpCompressedDataGenerator&& o) noexcept = default;
  constexpr PgpCompressedDataGenerator& operator=(PgpCompressedDataGenerator const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Bcpg::CompressionAlgorithmTag __declspec(property(get=__get_algorithm, put=__set_algorithm))  algorithm;

constexpr void __set_algorithm(Org::BouncyCastle::Bcpg::CompressionAlgorithmTag value) ;

constexpr Org::BouncyCastle::Bcpg::CompressionAlgorithmTag __get_algorithm() const;

 int32_t __declspec(property(get=__get_compression, put=__set_compression))  compression;

constexpr void __set_compression(int32_t value) ;

constexpr int32_t __get_compression() const;

 System::IO::Stream __declspec(property(get=__get_dOut, put=__set_dOut))  dOut;

constexpr void __set_dOut(System::IO::Stream value) ;

constexpr System::IO::Stream __get_dOut() const;

 Org::BouncyCastle::Bcpg::BcpgOutputStream __declspec(property(get=__get_pkOut, put=__set_pkOut))  pkOut;

constexpr void __set_pkOut(Org::BouncyCastle::Bcpg::BcpgOutputStream value) ;

constexpr Org::BouncyCastle::Bcpg::BcpgOutputStream __get_pkOut() const;


// Methods

// Ctor Parameters [CppParam { name: "algorithm", ty: "Org::BouncyCastle::Bcpg::CompressionAlgorithmTag", modifiers: "", def_value: None }]
explicit PgpCompressedDataGenerator(Org::BouncyCastle::Bcpg::CompressionAlgorithmTag algorithm) ;

/// @brief Method .ctor addr 0x101943c size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::CompressionAlgorithmTag algorithm) ;

// Ctor Parameters [CppParam { name: "algorithm", ty: "Org::BouncyCastle::Bcpg::CompressionAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "compression", ty: "int32_t", modifiers: "", def_value: None }]
explicit PgpCompressedDataGenerator(Org::BouncyCastle::Bcpg::CompressionAlgorithmTag algorithm, int32_t compression) ;

/// @brief Method .ctor addr 0x1019444 size 0x124 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::CompressionAlgorithmTag algorithm, int32_t compression) ;

/// @brief Method Open addr 0x1019568 size 0x148 virtual false final false
 System::IO::Stream Open(System::IO::Stream outStr) ;

/// @brief Method Open addr 0x1019818 size 0x178 virtual false final false
 System::IO::Stream Open(System::IO::Stream outStr, ::ArrayW<uint8_t> buffer) ;

/// @brief Method doOpen addr 0x10196b0 size 0x168 virtual false final false
 void doOpen() ;

/// @brief Method Close addr 0x10199a4 size 0xa4 virtual true final true
 void Close() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeCBZip2OutputStream, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpCompressedDataGenerator/SafeCBZip2OutputStream");
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__PgpCompressedDataGenerator__SafeZOutputStream, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpCompressedDataGenerator/SafeZOutputStream");
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpCompressedDataGenerator");
