#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1Generator;
}
// Type: Org.BouncyCastle.Asn1::Asn1Generator
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(451))
// CS Name: Org.BouncyCastle.Asn1.Asn1Generator
class CORDL_TYPE Asn1Generator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Asn1Generator() = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1Generator", modifiers: " const&", def_value: None }]
constexpr Asn1Generator(Asn1Generator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1Generator", modifiers: "&&", def_value: None }]
constexpr Asn1Generator(Asn1Generator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Asn1Generator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Asn1Generator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Asn1Generator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Asn1Generator& operator=(Asn1Generator&& o) noexcept = default;
  constexpr Asn1Generator& operator=(Asn1Generator const& o) noexcept = default;
                


// Fields

 System::IO::Stream __declspec(property(get=__get__out, put=__set__out))  _out;

constexpr void __set__out(System::IO::Stream value) ;

constexpr System::IO::Stream __get__out() const;


// Properties

 System::IO::Stream __declspec(property(get=get_Out))  Out;


// Methods

// Ctor Parameters [CppParam { name: "outStream", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit Asn1Generator(System::IO::Stream outStream) ;

/// @brief Method .ctor addr 0x1128bc8 size 0x28 virtual false final false
 void _ctor(System::IO::Stream outStream) ;

/// @brief Method get_Out addr 0x1128bf0 size 0x8 virtual false final false
 System::IO::Stream get_Out() ;

/// @brief Method AddObject addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddObject(Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

/// @brief Method GetRawOutputStream addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IO::Stream GetRawOutputStream() ;

/// @brief Method Close addr 0x0 size 0xffffffffffffffff virtual true final false
 void Close() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::Asn1Generator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1Generator, "Org.BouncyCastle.Asn1", "Asn1Generator");
