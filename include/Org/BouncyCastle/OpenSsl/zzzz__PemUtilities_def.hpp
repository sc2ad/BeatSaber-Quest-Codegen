#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::OpenSsl {
struct ____Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg;
}
namespace Org::BouncyCastle::OpenSsl {
struct ____Org__BouncyCastle__OpenSsl__PemUtilities__PemMode;
}
namespace Org::BouncyCastle::OpenSsl {
class PemUtilities;
}
// Type: ::PemBaseAlg
namespace Org::BouncyCastle::OpenSsl {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1687))
// CS Name: Org.BouncyCastle.OpenSsl.PemUtilities::PemBaseAlg
struct CORDL_TYPE ____Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg(int32_t value__) noexcept;


                    constexpr ____Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg(____Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg const&) = default;
                    constexpr ____Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg(____Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg&&) = default;
                    constexpr ____Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg& operator=(____Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg& operator=(____Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg_Unwrapped : int32_t {
__AES_128 = 0,
__AES_192 = 1,
__AES_256 = 2,
__BF = 3,
__DES = 4,
__DES_EDE = 5,
__DES_EDE3 = 6,
__RC2 = 7,
__RC2_40 = 8,
__RC2_64 = 9,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg_Unwrapped () const noexcept {
return std::bit_cast<______Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field AES_128 offset 0
static ::Org::BouncyCastle::OpenSsl::____Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg const AES_128;

/// @brief Field AES_192 offset 0
static ::Org::BouncyCastle::OpenSsl::____Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg const AES_192;

/// @brief Field AES_256 offset 0
static ::Org::BouncyCastle::OpenSsl::____Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg const AES_256;

/// @brief Field BF offset 0
static ::Org::BouncyCastle::OpenSsl::____Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg const BF;

/// @brief Field DES offset 0
static ::Org::BouncyCastle::OpenSsl::____Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg const DES;

/// @brief Field DES_EDE offset 0
static ::Org::BouncyCastle::OpenSsl::____Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg const DES_EDE;

/// @brief Field DES_EDE3 offset 0
static ::Org::BouncyCastle::OpenSsl::____Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg const DES_EDE3;

/// @brief Field RC2 offset 0
static ::Org::BouncyCastle::OpenSsl::____Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg const RC2;

/// @brief Field RC2_40 offset 0
static ::Org::BouncyCastle::OpenSsl::____Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg const RC2_40;

/// @brief Field RC2_64 offset 0
static ::Org::BouncyCastle::OpenSsl::____Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg const RC2_64;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::OpenSsl
// Type: ::PemMode
namespace Org::BouncyCastle::OpenSsl {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1688))
// CS Name: Org.BouncyCastle.OpenSsl.PemUtilities::PemMode
struct CORDL_TYPE ____Org__BouncyCastle__OpenSsl__PemUtilities__PemMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____Org__BouncyCastle__OpenSsl__PemUtilities__PemMode(int32_t value__) noexcept;


                    constexpr ____Org__BouncyCastle__OpenSsl__PemUtilities__PemMode(____Org__BouncyCastle__OpenSsl__PemUtilities__PemMode const&) = default;
                    constexpr ____Org__BouncyCastle__OpenSsl__PemUtilities__PemMode(____Org__BouncyCastle__OpenSsl__PemUtilities__PemMode&&) = default;
                    constexpr ____Org__BouncyCastle__OpenSsl__PemUtilities__PemMode& operator=(____Org__BouncyCastle__OpenSsl__PemUtilities__PemMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____Org__BouncyCastle__OpenSsl__PemUtilities__PemMode& operator=(____Org__BouncyCastle__OpenSsl__PemUtilities__PemMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____Org__BouncyCastle__OpenSsl__PemUtilities__PemMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______Org__BouncyCastle__OpenSsl__PemUtilities__PemMode_Unwrapped : int32_t {
__CBC = 0,
__CFB = 1,
__ECB = 2,
__OFB = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______Org__BouncyCastle__OpenSsl__PemUtilities__PemMode_Unwrapped () const noexcept {
return std::bit_cast<______Org__BouncyCastle__OpenSsl__PemUtilities__PemMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field CBC offset 0
static ::Org::BouncyCastle::OpenSsl::____Org__BouncyCastle__OpenSsl__PemUtilities__PemMode const CBC;

/// @brief Field CFB offset 0
static ::Org::BouncyCastle::OpenSsl::____Org__BouncyCastle__OpenSsl__PemUtilities__PemMode const CFB;

/// @brief Field ECB offset 0
static ::Org::BouncyCastle::OpenSsl::____Org__BouncyCastle__OpenSsl__PemUtilities__PemMode const ECB;

/// @brief Field OFB offset 0
static ::Org::BouncyCastle::OpenSsl::____Org__BouncyCastle__OpenSsl__PemUtilities__PemMode const OFB;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::OpenSsl
// Type: Org.BouncyCastle.OpenSsl::PemUtilities
namespace Org::BouncyCastle::OpenSsl {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1689))
// CS Name: Org.BouncyCastle.OpenSsl.PemUtilities
class CORDL_TYPE PemUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using PemMode = ::Org::BouncyCastle::OpenSsl::____Org__BouncyCastle__OpenSsl__PemUtilities__PemMode;

using PemBaseAlg = ::Org::BouncyCastle::OpenSsl::____Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PemUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "PemUtilities", modifiers: " const&", def_value: None }]
constexpr PemUtilities(PemUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PemUtilities", modifiers: "&&", def_value: None }]
constexpr PemUtilities(PemUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PemUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PemUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PemUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PemUtilities& operator=(PemUtilities&& o) noexcept = default;
  constexpr PemUtilities& operator=(PemUtilities const& o) noexcept = default;
                


// Methods

/// @brief Method ParseDekAlgName addr 0x1047a3c size 0x358 virtual false final false
static void ParseDekAlgName(::StringW dekAlgName, ByRef<::Org::BouncyCastle::OpenSsl::____Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg> baseAlg, ByRef<::Org::BouncyCastle::OpenSsl::____Org__BouncyCastle__OpenSsl__PemUtilities__PemMode> mode) ;

/// @brief Method Crypt addr 0x1044de8 size 0x4fc virtual false final false
static ::ArrayW<uint8_t> Crypt(bool encrypt, ::ArrayW<uint8_t> bytes, ::ArrayW<char16_t> password, ::StringW dekAlgName, ::ArrayW<uint8_t> iv) ;

/// @brief Method GetCipherParameters addr 0x1047d94 size 0x140 virtual false final false
static ::Org::BouncyCastle::Crypto::ICipherParameters GetCipherParameters(::ArrayW<char16_t> password, ::Org::BouncyCastle::OpenSsl::____Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg baseAlg, ::ArrayW<uint8_t> salt) ;

// Ctor Parameters []
explicit PemUtilities() ;

/// @brief Method .ctor addr 0x1047ed4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::OpenSsl
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::OpenSsl::____Org__BouncyCastle__OpenSsl__PemUtilities__PemBaseAlg, "Org.BouncyCastle.OpenSsl", "PemUtilities/PemBaseAlg");
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::OpenSsl::____Org__BouncyCastle__OpenSsl__PemUtilities__PemMode, "Org.BouncyCastle.OpenSsl", "PemUtilities/PemMode");
NEED_NO_BOX(::Org::BouncyCastle::OpenSsl::PemUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::OpenSsl::PemUtilities, "Org.BouncyCastle.OpenSsl", "PemUtilities");
