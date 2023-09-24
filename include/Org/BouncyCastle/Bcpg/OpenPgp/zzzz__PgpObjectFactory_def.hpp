#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections {
class IList;
}
namespace System {
class Type;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpObject;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpObjectFactory;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpObjectFactory
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1653))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpObjectFactory
class CORDL_TYPE PgpObjectFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PgpObjectFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpObjectFactory", modifiers: " const&", def_value: None }]
constexpr PgpObjectFactory(PgpObjectFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpObjectFactory", modifiers: "&&", def_value: None }]
constexpr PgpObjectFactory(PgpObjectFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpObjectFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PgpObjectFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpObjectFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpObjectFactory& operator=(PgpObjectFactory&& o) noexcept = default;
  constexpr PgpObjectFactory& operator=(PgpObjectFactory const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Bcpg::BcpgInputStream __declspec(property(get=__get_bcpgIn, put=__set_bcpgIn))  bcpgIn;

constexpr void __set_bcpgIn(Org::BouncyCastle::Bcpg::BcpgInputStream value) ;

constexpr Org::BouncyCastle::Bcpg::BcpgInputStream __get_bcpgIn() const;


// Methods

static Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory New_ctor(System::IO::Stream inputStream) ;

/// @brief Method .ctor addr 0x1024680 size 0x34 virtual false final false
 void _ctor(System::IO::Stream inputStream) ;

static Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory New_ctor(::ArrayW<uint8_t> bytes) ;

/// @brief Method .ctor addr 0x10246b4 size 0x8c virtual false final false
 void _ctor(::ArrayW<uint8_t> bytes) ;

/// @brief Method NextPgpObject addr 0x1024740 size 0xa48 virtual false final false
 Org::BouncyCastle::Bcpg::OpenPgp::PgpObject NextPgpObject() ;

/// @brief Method NextObject addr 0x1025270 size 0x4 virtual false final false
 ::bs_hook::Il2CppWrapperType NextObject() ;

/// @brief Method AllPgpObjects addr 0x1025274 size 0x104 virtual false final false
 System::Collections::IList AllPgpObjects() ;

/// @brief Method FilterPgpObjects addr 0x1025378 size 0x134 virtual false final false
 System::Collections::IList FilterPgpObjects(System::Type type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpObjectFactory");
