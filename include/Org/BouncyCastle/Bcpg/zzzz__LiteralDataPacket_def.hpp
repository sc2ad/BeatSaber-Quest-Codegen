#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__InputStreamPacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class LiteralDataPacket;
}
// Type: Org.BouncyCastle.Bcpg::LiteralDataPacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(573))
// CS Name: Org.BouncyCastle.Bcpg.LiteralDataPacket
class CORDL_TYPE LiteralDataPacket : public ::Org::BouncyCastle::Bcpg::InputStreamPacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~LiteralDataPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteralDataPacket", modifiers: " const&", def_value: None }]
constexpr LiteralDataPacket(LiteralDataPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteralDataPacket", modifiers: "&&", def_value: None }]
constexpr LiteralDataPacket(LiteralDataPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteralDataPacket(void* ptr) noexcept : ::Org::BouncyCastle::Bcpg::InputStreamPacket(ptr) {
}


  constexpr LiteralDataPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteralDataPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteralDataPacket& operator=(LiteralDataPacket&& o) noexcept = default;
  constexpr LiteralDataPacket& operator=(LiteralDataPacket const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_format, put=__set_format))  format;

constexpr void __set_format(int32_t value) ;

constexpr int32_t __get_format() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_fileName, put=__set_fileName))  fileName;

constexpr void __set_fileName(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_fileName() const;

 int64_t __declspec(property(get=__get_modDate, put=__set_modDate))  modDate;

constexpr void __set_modDate(int64_t value) ;

constexpr int64_t __get_modDate() const;


// Properties

 int32_t __declspec(property(get=get_Format))  Format;

 int64_t __declspec(property(get=get_ModificationTime))  ModificationTime;

 ::StringW __declspec(property(get=get_FileName))  FileName;


// Methods

// Ctor Parameters [CppParam { name: "bcpgIn", ty: "::Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
explicit LiteralDataPacket(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x11449e8 size 0x1bc virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method get_Format addr 0x1147ad8 size 0x8 virtual false final false
 int32_t get_Format() ;

/// @brief Method get_ModificationTime addr 0x1147ae0 size 0x8 virtual false final false
 int64_t get_ModificationTime() ;

/// @brief Method get_FileName addr 0x1147ae8 size 0xc virtual false final false
 ::StringW get_FileName() ;

/// @brief Method GetRawFileName addr 0x1147af4 size 0x5c virtual false final false
 ::ArrayW<uint8_t> GetRawFileName() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::LiteralDataPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::LiteralDataPacket, "Org.BouncyCastle.Bcpg", "LiteralDataPacket");
