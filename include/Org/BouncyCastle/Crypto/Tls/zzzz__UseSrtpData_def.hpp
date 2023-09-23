#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class UseSrtpData;
}
// Type: Org.BouncyCastle.Crypto.Tls::UseSrtpData
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1335))
// CS Name: Org.BouncyCastle.Crypto.Tls.UseSrtpData
class CORDL_TYPE UseSrtpData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UseSrtpData() = default;

// Ctor Parameters [CppParam { name: "", ty: "UseSrtpData", modifiers: " const&", def_value: None }]
constexpr UseSrtpData(UseSrtpData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UseSrtpData", modifiers: "&&", def_value: None }]
constexpr UseSrtpData(UseSrtpData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UseSrtpData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UseSrtpData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UseSrtpData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UseSrtpData& operator=(UseSrtpData&& o) noexcept = default;
  constexpr UseSrtpData& operator=(UseSrtpData const& o) noexcept = default;
                


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get_mProtectionProfiles, put=__set_mProtectionProfiles))  mProtectionProfiles;

constexpr void __set_mProtectionProfiles(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_mProtectionProfiles() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mMki, put=__set_mMki))  mMki;

constexpr void __set_mMki(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mMki() const;


// Properties

 ::ArrayW<int32_t> __declspec(property(get=get_ProtectionProfiles))  ProtectionProfiles;

 ::ArrayW<uint8_t> __declspec(property(get=get_Mki))  Mki;


// Methods

// Ctor Parameters [CppParam { name: "protectionProfiles", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "mki", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit UseSrtpData(::ArrayW<int32_t> protectionProfiles, ::ArrayW<uint8_t> mki) ;

/// @brief Method .ctor addr 0xf2c0ec size 0x138 virtual false final false
 void _ctor(::ArrayW<int32_t> protectionProfiles, ::ArrayW<uint8_t> mki) ;

/// @brief Method get_ProtectionProfiles addr 0xf32f54 size 0x8 virtual true final false
 ::ArrayW<int32_t> get_ProtectionProfiles() ;

/// @brief Method get_Mki addr 0xf32f5c size 0x8 virtual true final false
 ::ArrayW<uint8_t> get_Mki() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::UseSrtpData);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::UseSrtpData, "Org.BouncyCastle.Crypto.Tls", "UseSrtpData");
