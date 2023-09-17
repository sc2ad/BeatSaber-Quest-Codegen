#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
// Forward declare root types
namespace Mono::Math {
struct ____Mono__Math__BigInteger__Sign;
}
namespace Mono::Math {
class BigInteger;
}
namespace Mono::Math {
class ____Mono__Math__BigInteger__Kernel;
}
namespace Mono::Math {
class ____Mono__Math__BigInteger__ModulusRing;
}
// Type: ::Sign
namespace Mono::Math {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2287))
// CS Name: Mono.Math.BigInteger::Sign
struct CORDL_TYPE ____Mono__Math__BigInteger__Sign : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____Mono__Math__BigInteger__Sign(int32_t value__) noexcept;


                    constexpr ____Mono__Math__BigInteger__Sign(____Mono__Math__BigInteger__Sign const&) = default;
                    constexpr ____Mono__Math__BigInteger__Sign(____Mono__Math__BigInteger__Sign&&) = default;
                    constexpr ____Mono__Math__BigInteger__Sign& operator=(____Mono__Math__BigInteger__Sign const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____Mono__Math__BigInteger__Sign& operator=(____Mono__Math__BigInteger__Sign&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____Mono__Math__BigInteger__Sign(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______Mono__Math__BigInteger__Sign_Unwrapped : int32_t {
__Negative = -1,
__Zero = 0,
__Positive = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______Mono__Math__BigInteger__Sign_Unwrapped () const noexcept {
return std::bit_cast<______Mono__Math__BigInteger__Sign_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Negative offset 0
static ::Mono::Math::____Mono__Math__BigInteger__Sign const Negative;

/// @brief Field Zero offset 0
static ::Mono::Math::____Mono__Math__BigInteger__Sign const Zero;

/// @brief Field Positive offset 0
static ::Mono::Math::____Mono__Math__BigInteger__Sign const Positive;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Math
// Type: ::ModulusRing
namespace Mono::Math {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2288))
// CS Name: Mono.Math.BigInteger::ModulusRing
class CORDL_TYPE ____Mono__Math__BigInteger__ModulusRing : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____Mono__Math__BigInteger__ModulusRing() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Mono__Math__BigInteger__ModulusRing", modifiers: " const&", def_value: None }]
constexpr ____Mono__Math__BigInteger__ModulusRing(____Mono__Math__BigInteger__ModulusRing const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Mono__Math__BigInteger__ModulusRing", modifiers: "&&", def_value: None }]
constexpr ____Mono__Math__BigInteger__ModulusRing(____Mono__Math__BigInteger__ModulusRing&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Mono__Math__BigInteger__ModulusRing(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Mono__Math__BigInteger__ModulusRing& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Mono__Math__BigInteger__ModulusRing& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Mono__Math__BigInteger__ModulusRing& operator=(____Mono__Math__BigInteger__ModulusRing&& o) noexcept = default;
  constexpr ____Mono__Math__BigInteger__ModulusRing& operator=(____Mono__Math__BigInteger__ModulusRing const& o) noexcept = default;
                


// Fields

 ::Mono::Math::BigInteger __declspec(property(get=__get_mod, put=__set_mod))  mod;

constexpr void __set_mod(::Mono::Math::BigInteger value) ;

constexpr ::Mono::Math::BigInteger __get_mod() const;

 ::Mono::Math::BigInteger __declspec(property(get=__get_constant, put=__set_constant))  constant;

constexpr void __set_constant(::Mono::Math::BigInteger value) ;

constexpr ::Mono::Math::BigInteger __get_constant() const;


// Methods

// Ctor Parameters [CppParam { name: "modulus", ty: "::Mono::Math::BigInteger", modifiers: "", def_value: None }]
explicit ____Mono__Math__BigInteger__ModulusRing(::Mono::Math::BigInteger modulus) ;

/// @brief Method .ctor addr 0x22bcd78 size 0xd0 virtual false final false
 void _ctor(::Mono::Math::BigInteger modulus) ;

/// @brief Method BarrettReduction addr 0x22bd0bc size 0x25c virtual false final false
 void BarrettReduction(::Mono::Math::BigInteger x) ;

/// @brief Method Multiply addr 0x22bd6c0 size 0x17c virtual false final false
 ::Mono::Math::BigInteger Multiply(::Mono::Math::BigInteger a, ::Mono::Math::BigInteger b) ;

/// @brief Method Difference addr 0x22bd83c size 0x1bc virtual false final false
 ::Mono::Math::BigInteger Difference(::Mono::Math::BigInteger a, ::Mono::Math::BigInteger b) ;

/// @brief Method Pow addr 0x22bce48 size 0x108 virtual false final false
 ::Mono::Math::BigInteger Pow(::Mono::Math::BigInteger a, ::Mono::Math::BigInteger k) ;

/// @brief Method Pow addr 0x22bd9f8 size 0x78 virtual false final false
 ::Mono::Math::BigInteger Pow(uint32_t b, ::Mono::Math::BigInteger exp) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Math
// Type: ::Kernel
namespace Mono::Math {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2289))
// CS Name: Mono.Math.BigInteger::Kernel
class CORDL_TYPE ____Mono__Math__BigInteger__Kernel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____Mono__Math__BigInteger__Kernel() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Mono__Math__BigInteger__Kernel", modifiers: " const&", def_value: None }]
constexpr ____Mono__Math__BigInteger__Kernel(____Mono__Math__BigInteger__Kernel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Mono__Math__BigInteger__Kernel", modifiers: "&&", def_value: None }]
constexpr ____Mono__Math__BigInteger__Kernel(____Mono__Math__BigInteger__Kernel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Mono__Math__BigInteger__Kernel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Mono__Math__BigInteger__Kernel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Mono__Math__BigInteger__Kernel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Mono__Math__BigInteger__Kernel& operator=(____Mono__Math__BigInteger__Kernel&& o) noexcept = default;
  constexpr ____Mono__Math__BigInteger__Kernel& operator=(____Mono__Math__BigInteger__Kernel const& o) noexcept = default;
                


// Methods

/// @brief Method Subtract addr 0x22bb2e8 size 0x1a4 virtual false final false
static ::Mono::Math::BigInteger Subtract(::Mono::Math::BigInteger big, ::Mono::Math::BigInteger small) ;

/// @brief Method MinusEq addr 0x22bd448 size 0x100 virtual false final false
static void MinusEq(::Mono::Math::BigInteger big, ::Mono::Math::BigInteger small) ;

/// @brief Method PlusEq addr 0x22bd548 size 0x178 virtual false final false
static void PlusEq(::Mono::Math::BigInteger bi1, ::Mono::Math::BigInteger bi2) ;

/// @brief Method Compare addr 0x22bb1a4 size 0x144 virtual false final false
static ::Mono::Math::____Mono__Math__BigInteger__Sign Compare(::Mono::Math::BigInteger bi1, ::Mono::Math::BigInteger bi2) ;

/// @brief Method SingleByteDivideInPlace addr 0x22bc630 size 0x7c virtual false final false
static uint32_t SingleByteDivideInPlace(::Mono::Math::BigInteger n, uint32_t d) ;

/// @brief Method DwordMod addr 0x22bb48c size 0x6c virtual false final false
static uint32_t DwordMod(::Mono::Math::BigInteger n, uint32_t d) ;

/// @brief Method DwordDivMod addr 0x22bda70 size 0x190 virtual false final false
static ::ArrayW<::Mono::Math::BigInteger> DwordDivMod(::Mono::Math::BigInteger n, uint32_t d) ;

/// @brief Method multiByteDivide addr 0x22bb4f8 size 0x454 virtual false final false
static ::ArrayW<::Mono::Math::BigInteger> multiByteDivide(::Mono::Math::BigInteger bi1, ::Mono::Math::BigInteger bi2) ;

/// @brief Method LeftShift addr 0x22bbb3c size 0x1d0 virtual false final false
static ::Mono::Math::BigInteger LeftShift(::Mono::Math::BigInteger bi, int32_t n) ;

/// @brief Method RightShift addr 0x22bbd10 size 0x17c virtual false final false
static ::Mono::Math::BigInteger RightShift(::Mono::Math::BigInteger bi, int32_t n) ;

/// @brief Method MultiplyByDword addr 0x22bba48 size 0xf0 virtual false final false
static ::Mono::Math::BigInteger MultiplyByDword(::Mono::Math::BigInteger n, uint32_t f) ;

/// @brief Method Multiply addr 0x22bb94c size 0xfc virtual false final false
static void Multiply(::ArrayW<uint32_t> x, uint32_t xOffset, uint32_t xLen, ::ArrayW<uint32_t> y, uint32_t yOffset, uint32_t yLen, ::ArrayW<uint32_t> d, uint32_t dOffset) ;

/// @brief Method MultiplyMod2p32pmod addr 0x22bd318 size 0x130 virtual false final false
static void MultiplyMod2p32pmod(::ArrayW<uint32_t> x, int32_t xOffset, int32_t xLen, ::ArrayW<uint32_t> y, int32_t yOffest, int32_t yLen, ::ArrayW<uint32_t> d, int32_t dOffset, int32_t mod) ;

/// @brief Method modInverse addr 0x22bdc00 size 0xc0 virtual false final false
static uint32_t modInverse(::Mono::Math::BigInteger bi, uint32_t modulus) ;

/// @brief Method modInverse addr 0x22bc888 size 0x4f0 virtual false final false
static ::Mono::Math::BigInteger modInverse(::Mono::Math::BigInteger bi, ::Mono::Math::BigInteger modulus) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Math
// Type: Mono.Math::BigInteger
namespace Mono::Math {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2290))
// CS Name: Mono.Math.BigInteger
class CORDL_TYPE BigInteger : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Kernel = ::Mono::Math::____Mono__Math__BigInteger__Kernel;

using ModulusRing = ::Mono::Math::____Mono__Math__BigInteger__ModulusRing;

using Sign = ::Mono::Math::____Mono__Math__BigInteger__Sign;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BigInteger() = default;

// Ctor Parameters [CppParam { name: "", ty: "BigInteger", modifiers: " const&", def_value: None }]
constexpr BigInteger(BigInteger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BigInteger", modifiers: "&&", def_value: None }]
constexpr BigInteger(BigInteger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BigInteger(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BigInteger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BigInteger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BigInteger& operator=(BigInteger&& o) noexcept = default;
  constexpr BigInteger& operator=(BigInteger const& o) noexcept = default;
                


// Fields

 uint32_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(uint32_t value) ;

constexpr uint32_t __get_length() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_data() const;

static ::ArrayW<uint32_t> __declspec(property(get=__get_smallPrimes, put=__set_smallPrimes))  smallPrimes;

static void __set_smallPrimes(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_smallPrimes() ;

static ::System::Security::Cryptography::RandomNumberGenerator __declspec(property(get=__get_rng, put=__set_rng))  rng;

static void __set_rng(::System::Security::Cryptography::RandomNumberGenerator value) ;

static ::System::Security::Cryptography::RandomNumberGenerator __get_rng() ;


// Properties

static ::System::Security::Cryptography::RandomNumberGenerator __declspec(property(get=get_Rng))  Rng;


// Methods

// Ctor Parameters [CppParam { name: "sign", ty: "::Mono::Math::____Mono__Math__BigInteger__Sign", modifiers: "", def_value: None }, CppParam { name: "len", ty: "uint32_t", modifiers: "", def_value: None }]
explicit BigInteger(::Mono::Math::____Mono__Math__BigInteger__Sign sign, uint32_t len) ;

/// @brief Method .ctor addr 0x22baebc size 0x74 virtual false final false
 void _ctor(::Mono::Math::____Mono__Math__BigInteger__Sign sign, uint32_t len) ;

// Ctor Parameters [CppParam { name: "bi", ty: "::Mono::Math::BigInteger", modifiers: "", def_value: None }]
explicit BigInteger(::Mono::Math::BigInteger bi) ;

/// @brief Method .ctor addr 0x22baf30 size 0xc0 virtual false final false
 void _ctor(::Mono::Math::BigInteger bi) ;

// Ctor Parameters [CppParam { name: "bi", ty: "::Mono::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "len", ty: "uint32_t", modifiers: "", def_value: None }]
explicit BigInteger(::Mono::Math::BigInteger bi, uint32_t len) ;

/// @brief Method .ctor addr 0x22baff0 size 0xd4 virtual false final false
 void _ctor(::Mono::Math::BigInteger bi, uint32_t len) ;

// Ctor Parameters [CppParam { name: "inData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit BigInteger(::ArrayW<uint8_t> inData) ;

/// @brief Method .ctor addr 0x22b6234 size 0x23c virtual false final false
 void _ctor(::ArrayW<uint8_t> inData) ;

// Ctor Parameters [CppParam { name: "ui", ty: "uint32_t", modifiers: "", def_value: None }]
explicit BigInteger(uint32_t ui) ;

/// @brief Method .ctor addr 0x22bb11c size 0x88 virtual false final false
 void _ctor(uint32_t ui) ;

/// @brief Method op_Implicit addr 0x22b5924 size 0x60 virtual false final false
static ::Mono::Math::BigInteger op_Implicit___Mono__Math__BigInteger(uint32_t value) ;

/// @brief Method op_Implicit addr 0x22b5cd4 size 0xb0 virtual false final false
static ::Mono::Math::BigInteger op_Implicit___Mono__Math__BigInteger(int32_t value) ;

/// @brief Method op_Subtraction addr 0x22b5d84 size 0x180 virtual false final false
static ::Mono::Math::BigInteger op_Subtraction(::Mono::Math::BigInteger bi1, ::Mono::Math::BigInteger bi2) ;

/// @brief Method op_Modulus addr 0x22b59f0 size 0x4 virtual false final false
static uint32_t op_Modulus(::Mono::Math::BigInteger bi, uint32_t ui) ;

/// @brief Method op_Modulus addr 0x22b5f08 size 0x2c virtual false final false
static ::Mono::Math::BigInteger op_Modulus(::Mono::Math::BigInteger bi1, ::Mono::Math::BigInteger bi2) ;

/// @brief Method op_Division addr 0x22b9ea0 size 0x28 virtual false final false
static ::Mono::Math::BigInteger op_Division(::Mono::Math::BigInteger bi1, ::Mono::Math::BigInteger bi2) ;

/// @brief Method op_Multiply addr 0x22b5aa4 size 0x1b0 virtual false final false
static ::Mono::Math::BigInteger op_Multiply(::Mono::Math::BigInteger bi1, ::Mono::Math::BigInteger bi2) ;

/// @brief Method op_Multiply addr 0x22b9d68 size 0xf4 virtual false final false
static ::Mono::Math::BigInteger op_Multiply(::Mono::Math::BigInteger bi, int32_t i) ;

/// @brief Method op_LeftShift addr 0x22bbb38 size 0x4 virtual false final false
static ::Mono::Math::BigInteger op_LeftShift(::Mono::Math::BigInteger bi1, int32_t shiftVal) ;

/// @brief Method op_RightShift addr 0x22bbd0c size 0x4 virtual false final false
static ::Mono::Math::BigInteger op_RightShift(::Mono::Math::BigInteger bi1, int32_t shiftVal) ;

/// @brief Method get_Rng addr 0x22bbe8c size 0xa8 virtual false final false
static ::System::Security::Cryptography::RandomNumberGenerator get_Rng() ;

/// @brief Method GenerateRandom addr 0x22bbf34 size 0x164 virtual false final false
static ::Mono::Math::BigInteger GenerateRandom(int32_t bits, ::System::Security::Cryptography::RandomNumberGenerator rng) ;

/// @brief Method GenerateRandom addr 0x22b99cc size 0x5c virtual false final false
static ::Mono::Math::BigInteger GenerateRandom(int32_t bits) ;

/// @brief Method Randomize addr 0x22bc098 size 0x184 virtual false final false
 void Randomize(::System::Security::Cryptography::RandomNumberGenerator rng) ;

/// @brief Method Randomize addr 0x22b9a28 size 0x5c virtual false final false
 void Randomize() ;

/// @brief Method BitCount addr 0x22b5c54 size 0x6c virtual false final false
 int32_t BitCount() ;

/// @brief Method TestBit addr 0x22b9e5c size 0x44 virtual false final false
 bool TestBit(uint32_t bitNum) ;

/// @brief Method TestBit addr 0x22bc21c size 0x98 virtual false final false
 bool TestBit(int32_t bitNum) ;

/// @brief Method SetBit addr 0x22bc2b4 size 0x8 virtual false final false
 void SetBit(uint32_t bitNum) ;

/// @brief Method SetBit addr 0x22bc2bc size 0x5c virtual false final false
 void SetBit(uint32_t bitNum, bool value) ;

/// @brief Method LowestSetBit addr 0x22bc318 size 0x7c virtual false final false
 int32_t LowestSetBit() ;

/// @brief Method GetBytes addr 0x22b691c size 0x12c virtual false final false
 ::ArrayW<uint8_t> GetBytes() ;

/// @brief Method op_Equality addr 0x22b9a84 size 0x6c virtual false final false
static bool op_Equality(::Mono::Math::BigInteger bi1, uint32_t ui) ;

/// @brief Method op_Inequality addr 0x22ba29c size 0x6c virtual false final false
static bool op_Inequality(::Mono::Math::BigInteger bi1, uint32_t ui) ;

/// @brief Method op_Equality addr 0x22b6078 size 0xb0 virtual false final false
static bool op_Equality(::Mono::Math::BigInteger bi1, ::Mono::Math::BigInteger bi2) ;

/// @brief Method op_Inequality addr 0x22b59f4 size 0xb0 virtual false final false
static bool op_Inequality(::Mono::Math::BigInteger bi1, ::Mono::Math::BigInteger bi2) ;

/// @brief Method op_GreaterThan addr 0x22bc394 size 0x18 virtual false final false
static bool op_GreaterThan(::Mono::Math::BigInteger bi1, ::Mono::Math::BigInteger bi2) ;

/// @brief Method op_LessThan addr 0x22b5cc0 size 0x14 virtual false final false
static bool op_LessThan(::Mono::Math::BigInteger bi1, ::Mono::Math::BigInteger bi2) ;

/// @brief Method op_GreaterThanOrEqual addr 0x22b9af0 size 0x18 virtual false final false
static bool op_GreaterThanOrEqual(::Mono::Math::BigInteger bi1, ::Mono::Math::BigInteger bi2) ;

/// @brief Method op_LessThanOrEqual addr 0x22b9ec8 size 0x18 virtual false final false
static bool op_LessThanOrEqual(::Mono::Math::BigInteger bi1, ::Mono::Math::BigInteger bi2) ;

/// @brief Method ToString addr 0x22bc3ac size 0x58 virtual false final false
 ::StringW ToString(uint32_t radix) ;

/// @brief Method ToString addr 0x22bc404 size 0x22c virtual false final false
 ::StringW ToString(uint32_t radix, ::StringW characterSet) ;

/// @brief Method Normalize addr 0x22bb0c4 size 0x58 virtual false final false
 void Normalize() ;

/// @brief Method Clear addr 0x22b6598 size 0x50 virtual false final false
 void Clear() ;

/// @brief Method GetHashCode addr 0x22bc6e8 size 0x58 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x22bc740 size 0x8 virtual true final false
 ::StringW ToString() ;

/// @brief Method Equals addr 0x22bc748 size 0x140 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method ModInverse addr 0x22b5f04 size 0x4 virtual false final false
 ::Mono::Math::BigInteger ModInverse(::Mono::Math::BigInteger modulus) ;

/// @brief Method ModPow addr 0x22b6470 size 0x78 virtual false final false
 ::Mono::Math::BigInteger ModPow(::Mono::Math::BigInteger exp, ::Mono::Math::BigInteger n) ;

/// @brief Method IsProbablePrime addr 0x22b9bcc size 0x19c virtual false final false
 bool IsProbablePrime() ;

/// @brief Method GeneratePseudoPrime addr 0x22b5984 size 0x6c virtual false final false
static ::Mono::Math::BigInteger GeneratePseudoPrime(int32_t bits) ;

/// @brief Method Incr2 addr 0x22bcfa4 size 0x84 virtual false final false
 void Incr2() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Math
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Mono::Math::____Mono__Math__BigInteger__Sign, "Mono.Math", "BigInteger/Sign");
NEED_NO_BOX(::Mono::Math::BigInteger);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Math::BigInteger, "Mono.Math", "BigInteger");
NEED_NO_BOX(::Mono::Math::____Mono__Math__BigInteger__Kernel);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Math::____Mono__Math__BigInteger__Kernel, "Mono.Math", "BigInteger/Kernel");
NEED_NO_BOX(::Mono::Math::____Mono__Math__BigInteger__ModulusRing);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Math::____Mono__Math__BigInteger__ModulusRing, "Mono.Math", "BigInteger/ModulusRing");
