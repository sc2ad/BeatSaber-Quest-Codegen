#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsReplayWindow;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsEpoch;
}
// Type: Org.BouncyCastle.Crypto.Tls::DtlsEpoch
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1225))
// CS Name: Org.BouncyCastle.Crypto.Tls.DtlsEpoch
class CORDL_TYPE DtlsEpoch : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DtlsEpoch() = default;

// Ctor Parameters [CppParam { name: "", ty: "DtlsEpoch", modifiers: " const&", def_value: None }]
constexpr DtlsEpoch(DtlsEpoch const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DtlsEpoch", modifiers: "&&", def_value: None }]
constexpr DtlsEpoch(DtlsEpoch&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DtlsEpoch(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DtlsEpoch& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DtlsEpoch& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DtlsEpoch& operator=(DtlsEpoch&& o) noexcept = default;
  constexpr DtlsEpoch& operator=(DtlsEpoch const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow __declspec(property(get=__get_mReplayWindow, put=__set_mReplayWindow))  mReplayWindow;

constexpr void __set_mReplayWindow(Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow value) ;

constexpr Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow __get_mReplayWindow() const;

 int32_t __declspec(property(get=__get_mEpoch, put=__set_mEpoch))  mEpoch;

constexpr void __set_mEpoch(int32_t value) ;

constexpr int32_t __get_mEpoch() const;

 Org::BouncyCastle::Crypto::Tls::TlsCipher __declspec(property(get=__get_mCipher, put=__set_mCipher))  mCipher;

constexpr void __set_mCipher(Org::BouncyCastle::Crypto::Tls::TlsCipher value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsCipher __get_mCipher() const;

 int64_t __declspec(property(get=__get_mSequenceNumber, put=__set_mSequenceNumber))  mSequenceNumber;

constexpr void __set_mSequenceNumber(int64_t value) ;

constexpr int64_t __get_mSequenceNumber() const;


// Properties

 Org::BouncyCastle::Crypto::Tls::TlsCipher __declspec(property(get=get_Cipher))  Cipher;

 int32_t __declspec(property(get=get_Epoch))  Epoch;

 Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow __declspec(property(get=get_ReplayWindow))  ReplayWindow;

 int64_t __declspec(property(get=get_SequenceNumber))  SequenceNumber;


// Methods

// Ctor Parameters [CppParam { name: "epoch", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cipher", ty: "Org::BouncyCastle::Crypto::Tls::TlsCipher", modifiers: "", def_value: None }]
explicit DtlsEpoch(int32_t epoch, Org::BouncyCastle::Crypto::Tls::TlsCipher cipher) ;

/// @brief Method .ctor addr 0xede27c size 0x134 virtual false final false
 void _ctor(int32_t epoch, Org::BouncyCastle::Crypto::Tls::TlsCipher cipher) ;

/// @brief Method AllocateSequenceNumber addr 0xede3c4 size 0xf4 virtual false final false
 int64_t AllocateSequenceNumber() ;

/// @brief Method get_Cipher addr 0xede4b8 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::Tls::TlsCipher get_Cipher() ;

/// @brief Method get_Epoch addr 0xede4c0 size 0x8 virtual false final false
 int32_t get_Epoch() ;

/// @brief Method get_ReplayWindow addr 0xede4c8 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow get_ReplayWindow() ;

/// @brief Method get_SequenceNumber addr 0xede4d0 size 0x34 virtual false final false
 int64_t get_SequenceNumber() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::DtlsEpoch);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::DtlsEpoch, "Org.BouncyCastle.Crypto.Tls", "DtlsEpoch");
