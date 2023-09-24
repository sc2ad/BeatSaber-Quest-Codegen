#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__InputStreamPacket_def.hpp"
namespace Org::BouncyCastle::Bcpg {
struct CompressionAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class CompressedDataPacket;
}
// Type: Org.BouncyCastle.Bcpg::CompressedDataPacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(558))
// CS Name: Org.BouncyCastle.Bcpg.CompressedDataPacket
class CORDL_TYPE CompressedDataPacket : public Org::BouncyCastle::Bcpg::InputStreamPacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CompressedDataPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "CompressedDataPacket", modifiers: " const&", def_value: None }]
constexpr CompressedDataPacket(CompressedDataPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CompressedDataPacket", modifiers: "&&", def_value: None }]
constexpr CompressedDataPacket(CompressedDataPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CompressedDataPacket(void* ptr) noexcept : Org::BouncyCastle::Bcpg::InputStreamPacket(ptr) {
}


  constexpr CompressedDataPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CompressedDataPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CompressedDataPacket& operator=(CompressedDataPacket&& o) noexcept = default;
  constexpr CompressedDataPacket& operator=(CompressedDataPacket const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Bcpg::CompressionAlgorithmTag __declspec(property(get=__get_algorithm, put=__set_algorithm))  algorithm;

constexpr void __set_algorithm(Org::BouncyCastle::Bcpg::CompressionAlgorithmTag value) ;

constexpr Org::BouncyCastle::Bcpg::CompressionAlgorithmTag __get_algorithm() const;


// Properties

 Org::BouncyCastle::Bcpg::CompressionAlgorithmTag __declspec(property(get=get_Algorithm))  Algorithm;


// Methods

static Org::BouncyCastle::Bcpg::CompressedDataPacket New_ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x11448dc size 0x48 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method get_Algorithm addr 0x1146260 size 0x8 virtual false final false
 Org::BouncyCastle::Bcpg::CompressionAlgorithmTag get_Algorithm() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(Org::BouncyCastle::Bcpg::CompressedDataPacket);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::CompressedDataPacket, "Org.BouncyCastle.Bcpg", "CompressedDataPacket");
