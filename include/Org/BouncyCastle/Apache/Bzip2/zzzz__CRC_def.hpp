#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Apache::Bzip2 {
class CRC;
}
// Type: Org.BouncyCastle.Apache.Bzip2::CRC
namespace Org::BouncyCastle::Apache::Bzip2 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1878))
// CS Name: Org.BouncyCastle.Apache.Bzip2.CRC
class CORDL_TYPE CRC : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CRC() = default;

// Ctor Parameters [CppParam { name: "", ty: "CRC", modifiers: " const&", def_value: None }]
constexpr CRC(CRC const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CRC", modifiers: "&&", def_value: None }]
constexpr CRC(CRC&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CRC(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CRC& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CRC& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CRC& operator=(CRC&& o) noexcept = default;
  constexpr CRC& operator=(CRC const& o) noexcept = default;
                


// Fields

static ::ArrayW<int32_t> __declspec(property(get=__get_crc32Table, put=__set_crc32Table))  crc32Table;

static void __set_crc32Table(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_crc32Table() ;

 int32_t __declspec(property(get=__get_globalCrc, put=__set_globalCrc))  globalCrc;

constexpr void __set_globalCrc(int32_t value) ;

constexpr int32_t __get_globalCrc() const;


// Methods

// Ctor Parameters []
explicit CRC() ;

/// @brief Method .ctor addr 0x10fd750 size 0x20 virtual false final false
 void _ctor() ;

/// @brief Method InitialiseCRC addr 0x10fec74 size 0xc virtual false final false
 void InitialiseCRC() ;

/// @brief Method GetFinalCRC addr 0x10fecac size 0xc virtual false final false
 int32_t GetFinalCRC() ;

/// @brief Method GetGlobalCRC addr 0x10ff780 size 0x8 virtual false final false
 int32_t GetGlobalCRC() ;

/// @brief Method SetGlobalCRC addr 0x10ff788 size 0x8 virtual false final false
 void SetGlobalCRC(int32_t newCrc) ;

/// @brief Method UpdateCRC addr 0x10ff5f8 size 0xa4 virtual false final false
 void UpdateCRC(int32_t inCh) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Apache::Bzip2
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Apache::Bzip2::CRC);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Apache::Bzip2::CRC, "Org.BouncyCastle.Apache.Bzip2", "CRC");
