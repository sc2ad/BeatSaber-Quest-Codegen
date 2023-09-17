#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsReplayWindow;
}
// Type: Org.BouncyCastle.Crypto.Tls::DtlsReplayWindow
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1234))
// CS Name: Org.BouncyCastle.Crypto.Tls.DtlsReplayWindow
class CORDL_TYPE DtlsReplayWindow : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DtlsReplayWindow() = default;

// Ctor Parameters [CppParam { name: "", ty: "DtlsReplayWindow", modifiers: " const&", def_value: None }]
constexpr DtlsReplayWindow(DtlsReplayWindow const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DtlsReplayWindow", modifiers: "&&", def_value: None }]
constexpr DtlsReplayWindow(DtlsReplayWindow&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DtlsReplayWindow(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DtlsReplayWindow& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DtlsReplayWindow& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DtlsReplayWindow& operator=(DtlsReplayWindow&& o) noexcept = default;
  constexpr DtlsReplayWindow& operator=(DtlsReplayWindow const& o) noexcept = default;
                


// Fields

/// @brief Field VALID_SEQ_MASK offset 0
static constexpr int64_t  VALID_SEQ_MASK{281474976710655};

/// @brief Field WINDOW_SIZE offset 0
static constexpr int64_t  WINDOW_SIZE{64};

 int64_t __declspec(property(get=__get_mLatestConfirmedSeq, put=__set_mLatestConfirmedSeq))  mLatestConfirmedSeq;

constexpr void __set_mLatestConfirmedSeq(int64_t value) ;

constexpr int64_t __get_mLatestConfirmedSeq() const;

 int64_t __declspec(property(get=__get_mBitmap, put=__set_mBitmap))  mBitmap;

constexpr void __set_mBitmap(int64_t value) ;

constexpr int64_t __get_mBitmap() const;


// Methods

/// @brief Method ShouldDiscard addr 0xee0718 size 0x44 virtual false final false
 bool ShouldDiscard(int64_t seq) ;

/// @brief Method ReportAuthenticated addr 0xee0764 size 0xcc virtual false final false
 void ReportAuthenticated(int64_t seq) ;

/// @brief Method Reset addr 0xee2180 size 0x10 virtual false final false
 void Reset() ;

// Ctor Parameters []
explicit DtlsReplayWindow() ;

/// @brief Method .ctor addr 0xede3b0 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow, "Org.BouncyCastle.Crypto.Tls", "DtlsReplayWindow");
