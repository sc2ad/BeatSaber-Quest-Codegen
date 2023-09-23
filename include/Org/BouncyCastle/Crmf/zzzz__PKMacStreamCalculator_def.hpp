#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCalculator;
}
namespace Org::BouncyCastle::Crypto::IO {
class MacSink;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class PKMacStreamCalculator;
}
// Type: Org.BouncyCastle.Crmf::PKMacStreamCalculator
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(706))
// CS Name: Org.BouncyCastle.Crmf.PKMacStreamCalculator
class CORDL_TYPE PKMacStreamCalculator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IStreamCalculator
constexpr operator  Org::BouncyCastle::Crypto::IStreamCalculator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PKMacStreamCalculator() = default;

// Ctor Parameters [CppParam { name: "", ty: "PKMacStreamCalculator", modifiers: " const&", def_value: None }]
constexpr PKMacStreamCalculator(PKMacStreamCalculator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PKMacStreamCalculator", modifiers: "&&", def_value: None }]
constexpr PKMacStreamCalculator(PKMacStreamCalculator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PKMacStreamCalculator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PKMacStreamCalculator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PKMacStreamCalculator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PKMacStreamCalculator& operator=(PKMacStreamCalculator&& o) noexcept = default;
  constexpr PKMacStreamCalculator& operator=(PKMacStreamCalculator const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::IO::MacSink __declspec(property(get=__get__stream, put=__set__stream))  _stream;

constexpr void __set__stream(Org::BouncyCastle::Crypto::IO::MacSink value) ;

constexpr Org::BouncyCastle::Crypto::IO::MacSink __get__stream() const;


// Properties

 System::IO::Stream __declspec(property(get=get_Stream))  Stream;


// Methods

// Ctor Parameters [CppParam { name: "mac", ty: "Org::BouncyCastle::Crypto::IMac", modifiers: "", def_value: None }]
explicit PKMacStreamCalculator(Org::BouncyCastle::Crypto::IMac mac) ;

/// @brief Method .ctor addr 0x1186cf8 size 0x7c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IMac mac) ;

/// @brief Method get_Stream addr 0x1186d74 size 0x8 virtual true final true
 System::IO::Stream get_Stream() ;

/// @brief Method GetResult addr 0x1186d7c size 0x84 virtual true final true
 ::bs_hook::Il2CppWrapperType GetResult() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crmf
NEED_NO_BOX(Org::BouncyCastle::Crmf::PKMacStreamCalculator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crmf::PKMacStreamCalculator, "Org.BouncyCastle.Crmf", "PKMacStreamCalculator");
