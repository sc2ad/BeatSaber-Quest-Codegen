#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
struct Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm;
}
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
class Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt;
}
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
class Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp;
}
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
class Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
struct Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm;
}
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
class Ed25519;
}
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
class Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum;
}
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
class Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt;
}
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
class Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp;
}
// Type: ::Algorithm
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1556))
// CS Name: Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::Algorithm
struct CORDL_TYPE Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm(int32_t value__) noexcept;


                    constexpr Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm(Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm const&) = default;
                    constexpr Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm(Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm&&) = default;
                    constexpr Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm& operator=(Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm& operator=(Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm_Unwrapped : int32_t {
__Ed25519 = 0,
__Ed25519ctx = 1,
__Ed25519ph = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm_Unwrapped () const noexcept {
return std::bit_cast<__Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Ed25519 offset 0
static Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm const Ed25519;

/// @brief Field Ed25519ctx offset 0
static Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm const Ed25519ctx;

/// @brief Field Ed25519ph offset 0
static Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm const Ed25519ph;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Rfc8032
// Type: ::PointAccum
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1557))
// CS Name: Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointAccum
class CORDL_TYPE Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum(Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum(Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum& operator=(Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum&& o) noexcept = default;
  constexpr Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum& operator=(Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum const& o) noexcept = default;
                


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_x() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_y() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_z, put=__set_z))  z;

constexpr void __set_z(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_z() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_u, put=__set_u))  u;

constexpr void __set_u(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_u() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_v, put=__set_v))  v;

constexpr void __set_v(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_v() const;


// Methods

static Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum New_ctor() ;

/// @brief Method .ctor addr 0xfb7eb8 size 0x94 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Rfc8032
// Type: ::PointExt
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1558))
// CS Name: Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointExt
class CORDL_TYPE Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt(Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt(Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt& operator=(Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt&& o) noexcept = default;
  constexpr Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt& operator=(Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt const& o) noexcept = default;
                


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_x() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_y() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_z, put=__set_z))  z;

constexpr void __set_z(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_z() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_t, put=__set_t))  t;

constexpr void __set_t(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_t() const;


// Methods

static Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt New_ctor() ;

/// @brief Method .ctor addr 0xfb7f4c size 0x88 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Rfc8032
// Type: ::PointPrecomp
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1559))
// CS Name: Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointPrecomp
class CORDL_TYPE Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp(Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp(Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp& operator=(Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp&& o) noexcept = default;
  constexpr Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp& operator=(Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp const& o) noexcept = default;
                


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get_ypx_h, put=__set_ypx_h))  ypx_h;

constexpr void __set_ypx_h(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_ypx_h() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_ymx_h, put=__set_ymx_h))  ymx_h;

constexpr void __set_ymx_h(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_ymx_h() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_xyd, put=__set_xyd))  xyd;

constexpr void __set_xyd(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_xyd() const;


// Methods

static Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp New_ctor() ;

/// @brief Method .ctor addr 0xfb7fd4 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Rfc8032
// Type: Org.BouncyCastle.Math.EC.Rfc8032::Ed25519
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1560))
// CS Name: Org.BouncyCastle.Math.EC.Rfc8032.Ed25519
class CORDL_TYPE Ed25519 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using PointPrecomp = Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp;

using PointExt = Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt;

using PointAccum = Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum;

using Algorithm = Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Ed25519() = default;

// Ctor Parameters [CppParam { name: "", ty: "Ed25519", modifiers: " const&", def_value: None }]
constexpr Ed25519(Ed25519 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Ed25519", modifiers: "&&", def_value: None }]
constexpr Ed25519(Ed25519&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Ed25519(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Ed25519& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Ed25519& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Ed25519& operator=(Ed25519&& o) noexcept = default;
  constexpr Ed25519& operator=(Ed25519 const& o) noexcept = default;
                


// Fields

/// @brief Field M28L offset 0
static constexpr int64_t  M28L{268435455};

/// @brief Field M32L offset 0
static constexpr int64_t  M32L{4294967295};

/// @brief Field PointBytes offset 0
static constexpr int32_t  PointBytes{32};

/// @brief Field ScalarUints offset 0
static constexpr int32_t  ScalarUints{8};

/// @brief Field ScalarBytes offset 0
static constexpr int32_t  ScalarBytes{32};

/// @brief Field L0 offset 0
static constexpr int32_t  L0{-50998291};

/// @brief Field L1 offset 0
static constexpr int32_t  L1{19280294};

/// @brief Field L2 offset 0
static constexpr int32_t  L2{127719000};

/// @brief Field L3 offset 0
static constexpr int32_t  L3{-6428113};

/// @brief Field L4 offset 0
static constexpr int32_t  L4{5343};

/// @brief Field WnafWidthBase offset 0
static constexpr int32_t  WnafWidthBase{7};

/// @brief Field PrecompBlocks offset 0
static constexpr int32_t  PrecompBlocks{8};

/// @brief Field PrecompTeeth offset 0
static constexpr int32_t  PrecompTeeth{4};

/// @brief Field PrecompSpacing offset 0
static constexpr int32_t  PrecompSpacing{8};

/// @brief Field PrecompPoints offset 0
static constexpr int32_t  PrecompPoints{8};

/// @brief Field PrecompMask offset 0
static constexpr int32_t  PrecompMask{7};

static int32_t __declspec(property(get=__get_PrehashSize, put=__set_PrehashSize))  PrehashSize;

static void __set_PrehashSize(int32_t value) ;

static int32_t __get_PrehashSize() ;

static int32_t __declspec(property(get=__get_PublicKeySize, put=__set_PublicKeySize))  PublicKeySize;

static void __set_PublicKeySize(int32_t value) ;

static int32_t __get_PublicKeySize() ;

static int32_t __declspec(property(get=__get_SecretKeySize, put=__set_SecretKeySize))  SecretKeySize;

static void __set_SecretKeySize(int32_t value) ;

static int32_t __get_SecretKeySize() ;

static int32_t __declspec(property(get=__get_SignatureSize, put=__set_SignatureSize))  SignatureSize;

static void __set_SignatureSize(int32_t value) ;

static int32_t __get_SignatureSize() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_Dom2Prefix, put=__set_Dom2Prefix))  Dom2Prefix;

static void __set_Dom2Prefix(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_Dom2Prefix() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_P, put=__set_P))  P;

static void __set_P(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_P() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_L, put=__set_L))  L;

static void __set_L(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_L() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_B_x, put=__set_B_x))  B_x;

static void __set_B_x(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_B_x() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_B_y, put=__set_B_y))  B_y;

static void __set_B_y(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_B_y() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_C_d, put=__set_C_d))  C_d;

static void __set_C_d(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_C_d() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_C_d2, put=__set_C_d2))  C_d2;

static void __set_C_d2(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_C_d2() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_C_d4, put=__set_C_d4))  C_d4;

static void __set_C_d4(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_C_d4() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_precompLock, put=__set_precompLock))  precompLock;

static void __set_precompLock(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_precompLock() ;

static ::ArrayW<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt> __declspec(property(get=__get_precompBaseTable, put=__set_precompBaseTable))  precompBaseTable;

static void __set_precompBaseTable(::ArrayW<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt> value) ;

static ::ArrayW<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt> __get_precompBaseTable() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_precompBase, put=__set_precompBase))  precompBase;

static void __set_precompBase(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_precompBase() ;


// Methods

/// @brief Method CalculateS addr 0xfb34bc size 0x194 virtual false final false
static ::ArrayW<uint8_t> CalculateS(::ArrayW<uint8_t> r, ::ArrayW<uint8_t> k, ::ArrayW<uint8_t> s) ;

/// @brief Method CheckContextVar addr 0xfb3bd8 size 0x2c virtual false final false
static bool CheckContextVar(::ArrayW<uint8_t> ctx, uint8_t phflag) ;

/// @brief Method CheckPoint addr 0xfb3c04 size 0x114 virtual false final false
static int32_t CheckPoint(::ArrayW<int32_t> x, ::ArrayW<int32_t> y) ;

/// @brief Method CheckPoint addr 0xfb3d18 size 0x158 virtual false final false
static int32_t CheckPoint(::ArrayW<int32_t> x, ::ArrayW<int32_t> y, ::ArrayW<int32_t> z) ;

/// @brief Method CheckPointVar addr 0xfb3e70 size 0xdc virtual false final false
static bool CheckPointVar(::ArrayW<uint8_t> p) ;

/// @brief Method CheckScalarVar addr 0xfb401c size 0xb0 virtual false final false
static bool CheckScalarVar(::ArrayW<uint8_t> s) ;

/// @brief Method CreateDigest addr 0xfb40cc size 0x5c virtual false final false
static Org::BouncyCastle::Crypto::IDigest CreateDigest() ;

/// @brief Method CreatePrehash addr 0xfb4128 size 0x4c virtual false final false
static Org::BouncyCastle::Crypto::IDigest CreatePrehash() ;

/// @brief Method Decode24 addr 0xfb4174 size 0x54 virtual false final false
static uint32_t Decode24(::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method Decode32 addr 0xfb41c8 size 0x68 virtual false final false
static uint32_t Decode32(::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method Decode32 addr 0xfb3f4c size 0xd0 virtual false final false
static void Decode32(::ArrayW<uint8_t> bs, int32_t bsOff, ::ArrayW<uint32_t> n, int32_t nOff, int32_t nLen) ;

/// @brief Method DecodePointVar addr 0xfb4230 size 0x234 virtual false final false
static bool DecodePointVar(::ArrayW<uint8_t> p, int32_t pOff, bool negate, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt r) ;

/// @brief Method DecodeScalar addr 0xfb3650 size 0x74 virtual false final false
static void DecodeScalar(::ArrayW<uint8_t> k, int32_t kOff, ::ArrayW<uint32_t> n) ;

/// @brief Method Dom2 addr 0xfb44d0 size 0x244 virtual false final false
static void Dom2(Org::BouncyCastle::Crypto::IDigest d, uint8_t phflag, ::ArrayW<uint8_t> ctx) ;

/// @brief Method Encode24 addr 0xfb4714 size 0x64 virtual false final false
static void Encode24(uint32_t n, ::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method Encode32 addr 0xfb36c4 size 0x80 virtual false final false
static void Encode32(uint32_t n, ::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method Encode56 addr 0xfb4778 size 0x7c virtual false final false
static void Encode56(uint64_t n, ::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method EncodePoint addr 0xfb47f4 size 0x140 virtual false final false
static int32_t EncodePoint(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum p, ::ArrayW<uint8_t> r, int32_t rOff) ;

/// @brief Method GeneratePrivateKey addr 0xfb4934 size 0x1c virtual false final false
static void GeneratePrivateKey(Org::BouncyCastle::Security::SecureRandom random, ::ArrayW<uint8_t> k) ;

/// @brief Method GeneratePublicKey addr 0xfb4950 size 0x220 virtual false final false
static void GeneratePublicKey(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> pk, int32_t pkOff) ;

/// @brief Method GetWnafVar addr 0xfb4cb4 size 0x1b8 virtual false final false
static ::ArrayW<int8_t> GetWnafVar(::ArrayW<uint32_t> n, int32_t width) ;

/// @brief Method ImplSign addr 0xfb4e6c size 0x450 virtual false final false
static void ImplSign(Org::BouncyCastle::Crypto::IDigest d, ::ArrayW<uint8_t> h, ::ArrayW<uint8_t> s, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, uint8_t phflag, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t> sig, int32_t sigOff) ;

/// @brief Method ImplSign addr 0xfb52bc size 0x31c virtual false final false
static void ImplSign(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> ctx, uint8_t phflag, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t> sig, int32_t sigOff) ;

/// @brief Method ImplSign addr 0xfb55d8 size 0x328 virtual false final false
static void ImplSign(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, uint8_t phflag, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t> sig, int32_t sigOff) ;

/// @brief Method ImplVerify addr 0xfb5900 size 0x584 virtual false final false
static bool ImplVerify(::ArrayW<uint8_t> sig, int32_t sigOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, uint8_t phflag, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen) ;

/// @brief Method PointAddVar addr 0xfb6040 size 0x220 virtual false final false
static void PointAddVar(bool negate, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt p, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum r) ;

/// @brief Method PointAddVar addr 0xfb6260 size 0x22c virtual false final false
static void PointAddVar(bool negate, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt p, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt q, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt r) ;

/// @brief Method PointAddPrecomp addr 0xfb648c size 0x154 virtual false final false
static void PointAddPrecomp(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp p, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum r) ;

/// @brief Method PointCopy addr 0xfb65e0 size 0xe0 virtual false final false
static Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt PointCopy(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum p) ;

/// @brief Method PointCopy addr 0xfb66c0 size 0xe8 virtual false final false
static Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt PointCopy(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt p) ;

/// @brief Method PointDouble addr 0xfb67a8 size 0x158 virtual false final false
static void PointDouble(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum r) ;

/// @brief Method PointExtendXY addr 0xfb6900 size 0x88 virtual false final false
static void PointExtendXY(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum p) ;

/// @brief Method PointExtendXY addr 0xfb4464 size 0x6c virtual false final false
static void PointExtendXY(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt p) ;

/// @brief Method PointLookup addr 0xfb6988 size 0x12c virtual false final false
static void PointLookup(int32_t block, int32_t index, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp p) ;

/// @brief Method PointPrecompVar addr 0xfb6ab4 size 0x1c0 virtual false final false
static ::ArrayW<Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt> PointPrecompVar(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt p, int32_t count) ;

/// @brief Method PointSetNeutral addr 0xfb6c74 size 0x80 virtual false final false
static void PointSetNeutral(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum p) ;

/// @brief Method PointSetNeutral addr 0xfb6cf4 size 0x78 virtual false final false
static void PointSetNeutral(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt p) ;

/// @brief Method Precompute addr 0xfaf1b8 size 0x804 virtual false final false
static void Precompute() ;

/// @brief Method PruneScalar addr 0xfb4b70 size 0x58 virtual false final false
static void PruneScalar(::ArrayW<uint8_t> n, int32_t nOff, ::ArrayW<uint8_t> r) ;

/// @brief Method ReduceScalar addr 0xfb3744 size 0x494 virtual false final false
static ::ArrayW<uint8_t> ReduceScalar(::ArrayW<uint8_t> n) ;

/// @brief Method ScalarMultBase addr 0xfb6d6c size 0x254 virtual false final false
static void ScalarMultBase(::ArrayW<uint8_t> k, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum r) ;

/// @brief Method ScalarMultBaseEncoded addr 0xfb4bc8 size 0xec virtual false final false
static void ScalarMultBaseEncoded(::ArrayW<uint8_t> k, ::ArrayW<uint8_t> r, int32_t rOff) ;

/// @brief Method ScalarMultBaseYZ addr 0xfafce8 size 0x178 virtual false final false
static void ScalarMultBaseYZ(::ArrayW<uint8_t> k, int32_t kOff, ::ArrayW<int32_t> y, ::ArrayW<int32_t> z) ;

/// @brief Method ScalarMultStrausVar addr 0xfb5e84 size 0x1bc virtual false final false
static void ScalarMultStrausVar(::ArrayW<uint32_t> nb, ::ArrayW<uint32_t> np, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt p, Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum r) ;

/// @brief Method Sign addr 0xfb6fc0 size 0xb0 virtual false final false
static void Sign(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t> sig, int32_t sigOff) ;

/// @brief Method Sign addr 0xfb7070 size 0xc8 virtual false final false
static void Sign(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t> sig, int32_t sigOff) ;

/// @brief Method Sign addr 0xfb7138 size 0xbc virtual false final false
static void Sign(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t> sig, int32_t sigOff) ;

/// @brief Method Sign addr 0xfb71f4 size 0xcc virtual false final false
static void Sign(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t> sig, int32_t sigOff) ;

/// @brief Method SignPrehash addr 0xfb72c0 size 0xb8 virtual false final false
static void SignPrehash(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> ph, int32_t phOff, ::ArrayW<uint8_t> sig, int32_t sigOff) ;

/// @brief Method SignPrehash addr 0xfb7378 size 0xd4 virtual false final false
static void SignPrehash(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> ph, int32_t phOff, ::ArrayW<uint8_t> sig, int32_t sigOff) ;

/// @brief Method SignPrehash addr 0xfb744c size 0x1cc virtual false final false
static void SignPrehash(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> ctx, Org::BouncyCastle::Crypto::IDigest ph, ::ArrayW<uint8_t> sig, int32_t sigOff) ;

/// @brief Method SignPrehash addr 0xfb7618 size 0x1e8 virtual false final false
static void SignPrehash(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, Org::BouncyCastle::Crypto::IDigest ph, ::ArrayW<uint8_t> sig, int32_t sigOff) ;

/// @brief Method Verify addr 0xfb7800 size 0xb4 virtual false final false
static bool Verify(::ArrayW<uint8_t> sig, int32_t sigOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen) ;

/// @brief Method Verify addr 0xfb78b4 size 0xc0 virtual false final false
static bool Verify(::ArrayW<uint8_t> sig, int32_t sigOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen) ;

/// @brief Method VerifyPrehash addr 0xfb7974 size 0xc0 virtual false final false
static bool VerifyPrehash(::ArrayW<uint8_t> sig, int32_t sigOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> ph, int32_t phOff) ;

/// @brief Method VerifyPrehash addr 0xfb7a34 size 0x1d4 virtual false final false
static bool VerifyPrehash(::ArrayW<uint8_t> sig, int32_t sigOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, Org::BouncyCastle::Crypto::IDigest ph) ;

static Org::BouncyCastle::Math::EC::Rfc8032::Ed25519 New_ctor() ;

/// @brief Method .ctor addr 0xfb7eb0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Rfc8032
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm, "Org.BouncyCastle.Math.EC.Rfc8032", "Ed25519/Algorithm");
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Rfc8032::Ed25519);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Rfc8032::Ed25519, "Org.BouncyCastle.Math.EC.Rfc8032", "Ed25519");
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointAccum, "Org.BouncyCastle.Math.EC.Rfc8032", "Ed25519/PointAccum");
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointExt, "Org.BouncyCastle.Math.EC.Rfc8032", "Ed25519/PointExt");
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Rfc8032::Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__PointPrecomp, "Org.BouncyCastle.Math.EC.Rfc8032", "Ed25519/PointPrecomp");
