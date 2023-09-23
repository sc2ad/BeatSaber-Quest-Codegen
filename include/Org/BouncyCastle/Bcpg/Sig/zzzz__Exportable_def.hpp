#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class Exportable;
}
// Type: Org.BouncyCastle.Bcpg.Sig::Exportable
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(531))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(533))
// CS Name: Org.BouncyCastle.Bcpg.Sig.Exportable
class CORDL_TYPE Exportable : public Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Exportable() = default;

// Ctor Parameters [CppParam { name: "", ty: "Exportable", modifiers: " const&", def_value: None }]
constexpr Exportable(Exportable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Exportable", modifiers: "&&", def_value: None }]
constexpr Exportable(Exportable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Exportable(void* ptr) noexcept : Org::BouncyCastle::Bcpg::SignatureSubpacket(ptr) {
}


  constexpr Exportable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Exportable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Exportable& operator=(Exportable&& o) noexcept = default;
  constexpr Exportable& operator=(Exportable const& o) noexcept = default;
                


// Methods

/// @brief Method BooleanToByteArray addr 0x113d2ac size 0x6c virtual false final false
static ::ArrayW<uint8_t> BooleanToByteArray(bool val) ;

// Ctor Parameters [CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isLongLength", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit Exportable(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x113d318 size 0x48 virtual false final false
 void _ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) ;

// Ctor Parameters [CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isExportable", ty: "bool", modifiers: "", def_value: None }]
explicit Exportable(bool critical, bool isExportable) ;

/// @brief Method .ctor addr 0x113d360 size 0x4c virtual false final false
 void _ctor(bool critical, bool isExportable) ;

/// @brief Method IsExportable addr 0x113d3ac size 0x30 virtual false final false
 bool IsExportable() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::Sig
NEED_NO_BOX(Org::BouncyCastle::Bcpg::Sig::Exportable);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::Sig::Exportable, "Org.BouncyCastle.Bcpg.Sig", "Exportable");
