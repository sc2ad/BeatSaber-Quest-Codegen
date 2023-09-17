#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class VmpcMac;
}
// Type: Org.BouncyCastle.Crypto.Macs::VmpcMac
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(948))
// CS Name: Org.BouncyCastle.Crypto.Macs.VmpcMac
class CORDL_TYPE VmpcMac : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IMac
constexpr operator  ::Org::BouncyCastle::Crypto::IMac() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~VmpcMac() = default;

// Ctor Parameters [CppParam { name: "", ty: "VmpcMac", modifiers: " const&", def_value: None }]
constexpr VmpcMac(VmpcMac const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VmpcMac", modifiers: "&&", def_value: None }]
constexpr VmpcMac(VmpcMac&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VmpcMac(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr VmpcMac& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VmpcMac& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VmpcMac& operator=(VmpcMac&& o) noexcept = default;
  constexpr VmpcMac& operator=(VmpcMac const& o) noexcept = default;
                


// Fields

 uint8_t __declspec(property(get=__get_g, put=__set_g))  g;

constexpr void __set_g(uint8_t value) ;

constexpr uint8_t __get_g() const;

 uint8_t __declspec(property(get=__get_n, put=__set_n))  n;

constexpr void __set_n(uint8_t value) ;

constexpr uint8_t __get_n() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_P, put=__set_P))  P;

constexpr void __set_P(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_P() const;

 uint8_t __declspec(property(get=__get_s, put=__set_s))  s;

constexpr void __set_s(uint8_t value) ;

constexpr uint8_t __get_s() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_T, put=__set_T))  T;

constexpr void __set_T(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_T() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_workingIV, put=__set_workingIV))  workingIV;

constexpr void __set_workingIV(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_workingIV() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_workingKey, put=__set_workingKey))  workingKey;

constexpr void __set_workingKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_workingKey() const;

 uint8_t __declspec(property(get=__get_x1, put=__set_x1))  x1;

constexpr void __set_x1(uint8_t value) ;

constexpr uint8_t __get_x1() const;

 uint8_t __declspec(property(get=__get_x2, put=__set_x2))  x2;

constexpr void __set_x2(uint8_t value) ;

constexpr uint8_t __get_x2() const;

 uint8_t __declspec(property(get=__get_x3, put=__set_x3))  x3;

constexpr void __set_x3(uint8_t value) ;

constexpr uint8_t __get_x3() const;

 uint8_t __declspec(property(get=__get_x4, put=__set_x4))  x4;

constexpr void __set_x4(uint8_t value) ;

constexpr uint8_t __get_x4() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method DoFinal addr 0xe85338 size 0x448 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method get_AlgorithmName addr 0xe85780 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetMacSize addr 0xe857c0 size 0x8 virtual true final false
 int32_t GetMacSize() ;

/// @brief Method Init addr 0xe857c8 size 0x1b0 virtual true final false
 void Init(::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method initKey addr 0xe85978 size 0x1fc virtual false final false
 void initKey(::ArrayW<uint8_t> keyBytes, ::ArrayW<uint8_t> ivBytes) ;

/// @brief Method Reset addr 0xe85b74 size 0x9c virtual true final false
 void Reset() ;

/// @brief Method Update addr 0xe85c10 size 0x24c virtual true final false
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0xe85e5c size 0xf4 virtual true final false
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t len) ;

// Ctor Parameters []
explicit VmpcMac() ;

/// @brief Method .ctor addr 0xe85f50 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Macs
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::VmpcMac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::VmpcMac, "Org.BouncyCastle.Crypto.Macs", "VmpcMac");
