#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish1024Cipher;
}
namespace Org::BouncyCastle::Crypto::Engines {
class Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish256Cipher;
}
namespace Org::BouncyCastle::Crypto::Engines {
class Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish512Cipher;
}
namespace Org::BouncyCastle::Crypto::Engines {
class Org__BouncyCastle__Crypto__Engines__ThreefishEngine__ThreefishCipher;
}
namespace Org::BouncyCastle::Crypto::Engines {
class ThreefishEngine;
}
// Type: ::ThreefishCipher
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(875))
// CS Name: Org.BouncyCastle.Crypto.Engines.ThreefishEngine::ThreefishCipher
class CORDL_TYPE Org__BouncyCastle__Crypto__Engines__ThreefishEngine__ThreefishCipher : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Org__BouncyCastle__Crypto__Engines__ThreefishEngine__ThreefishCipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Engines__ThreefishEngine__ThreefishCipher", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Engines__ThreefishEngine__ThreefishCipher(Org__BouncyCastle__Crypto__Engines__ThreefishEngine__ThreefishCipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Engines__ThreefishEngine__ThreefishCipher", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Engines__ThreefishEngine__ThreefishCipher(Org__BouncyCastle__Crypto__Engines__ThreefishEngine__ThreefishCipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Crypto__Engines__ThreefishEngine__ThreefishCipher(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Crypto__Engines__ThreefishEngine__ThreefishCipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Engines__ThreefishEngine__ThreefishCipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Engines__ThreefishEngine__ThreefishCipher& operator=(Org__BouncyCastle__Crypto__Engines__ThreefishEngine__ThreefishCipher&& o) noexcept = default;
  constexpr Org__BouncyCastle__Crypto__Engines__ThreefishEngine__ThreefishCipher& operator=(Org__BouncyCastle__Crypto__Engines__ThreefishEngine__ThreefishCipher const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint64_t> __declspec(property(get=__get_t, put=__set_t))  t;

constexpr void __set_t(::ArrayW<uint64_t> value) ;

constexpr ::ArrayW<uint64_t> __get_t() const;

 ::ArrayW<uint64_t> __declspec(property(get=__get_kw, put=__set_kw))  kw;

constexpr void __set_kw(::ArrayW<uint64_t> value) ;

constexpr ::ArrayW<uint64_t> __get_kw() const;


// Methods

// Ctor Parameters [CppParam { name: "kw", ty: "::ArrayW<uint64_t>", modifiers: "", def_value: None }, CppParam { name: "t", ty: "::ArrayW<uint64_t>", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Crypto__Engines__ThreefishEngine__ThreefishCipher(::ArrayW<uint64_t> kw, ::ArrayW<uint64_t> t) ;

/// @brief Method .ctor addr 0xe5f788 size 0x2c virtual false final false
 void _ctor(::ArrayW<uint64_t> kw, ::ArrayW<uint64_t> t) ;

/// @brief Method EncryptBlock addr 0x0 size 0xffffffffffffffff virtual true final false
 void EncryptBlock(::ArrayW<uint64_t> block, ::ArrayW<uint64_t> outWords) ;

/// @brief Method DecryptBlock addr 0x0 size 0xffffffffffffffff virtual true final false
 void DecryptBlock(::ArrayW<uint64_t> block, ::ArrayW<uint64_t> outWords) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
// Type: ::Threefish256Cipher
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(876))
// CS Name: Org.BouncyCastle.Crypto.Engines.ThreefishEngine::Threefish256Cipher
class CORDL_TYPE Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish256Cipher : public Org::BouncyCastle::Crypto::Engines::Org__BouncyCastle__Crypto__Engines__ThreefishEngine__ThreefishCipher {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish256Cipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish256Cipher", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish256Cipher(Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish256Cipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish256Cipher", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish256Cipher(Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish256Cipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish256Cipher(void* ptr) noexcept : Org::BouncyCastle::Crypto::Engines::Org__BouncyCastle__Crypto__Engines__ThreefishEngine__ThreefishCipher(ptr) {
}


  constexpr Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish256Cipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish256Cipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish256Cipher& operator=(Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish256Cipher&& o) noexcept = default;
  constexpr Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish256Cipher& operator=(Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish256Cipher const& o) noexcept = default;
                


// Fields

/// @brief Field ROTATION_0_0 offset 0
static constexpr int32_t  ROTATION_0_0{14};

/// @brief Field ROTATION_0_1 offset 0
static constexpr int32_t  ROTATION_0_1{16};

/// @brief Field ROTATION_1_0 offset 0
static constexpr int32_t  ROTATION_1_0{52};

/// @brief Field ROTATION_1_1 offset 0
static constexpr int32_t  ROTATION_1_1{57};

/// @brief Field ROTATION_2_0 offset 0
static constexpr int32_t  ROTATION_2_0{23};

/// @brief Field ROTATION_2_1 offset 0
static constexpr int32_t  ROTATION_2_1{40};

/// @brief Field ROTATION_3_0 offset 0
static constexpr int32_t  ROTATION_3_0{5};

/// @brief Field ROTATION_3_1 offset 0
static constexpr int32_t  ROTATION_3_1{37};

/// @brief Field ROTATION_4_0 offset 0
static constexpr int32_t  ROTATION_4_0{25};

/// @brief Field ROTATION_4_1 offset 0
static constexpr int32_t  ROTATION_4_1{33};

/// @brief Field ROTATION_5_0 offset 0
static constexpr int32_t  ROTATION_5_0{46};

/// @brief Field ROTATION_5_1 offset 0
static constexpr int32_t  ROTATION_5_1{12};

/// @brief Field ROTATION_6_0 offset 0
static constexpr int32_t  ROTATION_6_0{58};

/// @brief Field ROTATION_6_1 offset 0
static constexpr int32_t  ROTATION_6_1{22};

/// @brief Field ROTATION_7_0 offset 0
static constexpr int32_t  ROTATION_7_0{32};

/// @brief Field ROTATION_7_1 offset 0
static constexpr int32_t  ROTATION_7_1{32};


// Methods

// Ctor Parameters [CppParam { name: "kw", ty: "::ArrayW<uint64_t>", modifiers: "", def_value: None }, CppParam { name: "t", ty: "::ArrayW<uint64_t>", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish256Cipher(::ArrayW<uint64_t> kw, ::ArrayW<uint64_t> t) ;

/// @brief Method .ctor addr 0xe5eb04 size 0x2c virtual false final false
 void _ctor(::ArrayW<uint64_t> kw, ::ArrayW<uint64_t> t) ;

/// @brief Method EncryptBlock addr 0xe5f7b4 size 0x3d4 virtual true final false
 void EncryptBlock(::ArrayW<uint64_t> block, ::ArrayW<uint64_t> outWords) ;

/// @brief Method DecryptBlock addr 0xe5fb88 size 0x434 virtual true final false
 void DecryptBlock(::ArrayW<uint64_t> block, ::ArrayW<uint64_t> state) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
// Type: ::Threefish512Cipher
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(877))
// CS Name: Org.BouncyCastle.Crypto.Engines.ThreefishEngine::Threefish512Cipher
class CORDL_TYPE Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish512Cipher : public Org::BouncyCastle::Crypto::Engines::Org__BouncyCastle__Crypto__Engines__ThreefishEngine__ThreefishCipher {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish512Cipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish512Cipher", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish512Cipher(Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish512Cipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish512Cipher", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish512Cipher(Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish512Cipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish512Cipher(void* ptr) noexcept : Org::BouncyCastle::Crypto::Engines::Org__BouncyCastle__Crypto__Engines__ThreefishEngine__ThreefishCipher(ptr) {
}


  constexpr Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish512Cipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish512Cipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish512Cipher& operator=(Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish512Cipher&& o) noexcept = default;
  constexpr Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish512Cipher& operator=(Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish512Cipher const& o) noexcept = default;
                


// Fields

/// @brief Field ROTATION_0_0 offset 0
static constexpr int32_t  ROTATION_0_0{46};

/// @brief Field ROTATION_0_1 offset 0
static constexpr int32_t  ROTATION_0_1{36};

/// @brief Field ROTATION_0_2 offset 0
static constexpr int32_t  ROTATION_0_2{19};

/// @brief Field ROTATION_0_3 offset 0
static constexpr int32_t  ROTATION_0_3{37};

/// @brief Field ROTATION_1_0 offset 0
static constexpr int32_t  ROTATION_1_0{33};

/// @brief Field ROTATION_1_1 offset 0
static constexpr int32_t  ROTATION_1_1{27};

/// @brief Field ROTATION_1_2 offset 0
static constexpr int32_t  ROTATION_1_2{14};

/// @brief Field ROTATION_1_3 offset 0
static constexpr int32_t  ROTATION_1_3{42};

/// @brief Field ROTATION_2_0 offset 0
static constexpr int32_t  ROTATION_2_0{17};

/// @brief Field ROTATION_2_1 offset 0
static constexpr int32_t  ROTATION_2_1{49};

/// @brief Field ROTATION_2_2 offset 0
static constexpr int32_t  ROTATION_2_2{36};

/// @brief Field ROTATION_2_3 offset 0
static constexpr int32_t  ROTATION_2_3{39};

/// @brief Field ROTATION_3_0 offset 0
static constexpr int32_t  ROTATION_3_0{44};

/// @brief Field ROTATION_3_1 offset 0
static constexpr int32_t  ROTATION_3_1{9};

/// @brief Field ROTATION_3_2 offset 0
static constexpr int32_t  ROTATION_3_2{54};

/// @brief Field ROTATION_3_3 offset 0
static constexpr int32_t  ROTATION_3_3{56};

/// @brief Field ROTATION_4_0 offset 0
static constexpr int32_t  ROTATION_4_0{39};

/// @brief Field ROTATION_4_1 offset 0
static constexpr int32_t  ROTATION_4_1{30};

/// @brief Field ROTATION_4_2 offset 0
static constexpr int32_t  ROTATION_4_2{34};

/// @brief Field ROTATION_4_3 offset 0
static constexpr int32_t  ROTATION_4_3{24};

/// @brief Field ROTATION_5_0 offset 0
static constexpr int32_t  ROTATION_5_0{13};

/// @brief Field ROTATION_5_1 offset 0
static constexpr int32_t  ROTATION_5_1{50};

/// @brief Field ROTATION_5_2 offset 0
static constexpr int32_t  ROTATION_5_2{10};

/// @brief Field ROTATION_5_3 offset 0
static constexpr int32_t  ROTATION_5_3{17};

/// @brief Field ROTATION_6_0 offset 0
static constexpr int32_t  ROTATION_6_0{25};

/// @brief Field ROTATION_6_1 offset 0
static constexpr int32_t  ROTATION_6_1{29};

/// @brief Field ROTATION_6_2 offset 0
static constexpr int32_t  ROTATION_6_2{39};

/// @brief Field ROTATION_6_3 offset 0
static constexpr int32_t  ROTATION_6_3{43};

/// @brief Field ROTATION_7_0 offset 0
static constexpr int32_t  ROTATION_7_0{8};

/// @brief Field ROTATION_7_1 offset 0
static constexpr int32_t  ROTATION_7_1{35};

/// @brief Field ROTATION_7_2 offset 0
static constexpr int32_t  ROTATION_7_2{56};

/// @brief Field ROTATION_7_3 offset 0
static constexpr int32_t  ROTATION_7_3{22};


// Methods

// Ctor Parameters [CppParam { name: "kw", ty: "::ArrayW<uint64_t>", modifiers: "", def_value: None }, CppParam { name: "t", ty: "::ArrayW<uint64_t>", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish512Cipher(::ArrayW<uint64_t> kw, ::ArrayW<uint64_t> t) ;

/// @brief Method .ctor addr 0xe5eb30 size 0x2c virtual false final false
 void _ctor(::ArrayW<uint64_t> kw, ::ArrayW<uint64_t> t) ;

/// @brief Method EncryptBlock addr 0xe5ffbc size 0x584 virtual true final false
 void EncryptBlock(::ArrayW<uint64_t> block, ::ArrayW<uint64_t> outWords) ;

/// @brief Method DecryptBlock addr 0xe60540 size 0x6b0 virtual true final false
 void DecryptBlock(::ArrayW<uint64_t> block, ::ArrayW<uint64_t> state) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
// Type: ::Threefish1024Cipher
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(878))
// CS Name: Org.BouncyCastle.Crypto.Engines.ThreefishEngine::Threefish1024Cipher
class CORDL_TYPE Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish1024Cipher : public Org::BouncyCastle::Crypto::Engines::Org__BouncyCastle__Crypto__Engines__ThreefishEngine__ThreefishCipher {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish1024Cipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish1024Cipher", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish1024Cipher(Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish1024Cipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish1024Cipher", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish1024Cipher(Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish1024Cipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish1024Cipher(void* ptr) noexcept : Org::BouncyCastle::Crypto::Engines::Org__BouncyCastle__Crypto__Engines__ThreefishEngine__ThreefishCipher(ptr) {
}


  constexpr Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish1024Cipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish1024Cipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish1024Cipher& operator=(Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish1024Cipher&& o) noexcept = default;
  constexpr Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish1024Cipher& operator=(Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish1024Cipher const& o) noexcept = default;
                


// Fields

/// @brief Field ROTATION_0_0 offset 0
static constexpr int32_t  ROTATION_0_0{24};

/// @brief Field ROTATION_0_1 offset 0
static constexpr int32_t  ROTATION_0_1{13};

/// @brief Field ROTATION_0_2 offset 0
static constexpr int32_t  ROTATION_0_2{8};

/// @brief Field ROTATION_0_3 offset 0
static constexpr int32_t  ROTATION_0_3{47};

/// @brief Field ROTATION_0_4 offset 0
static constexpr int32_t  ROTATION_0_4{8};

/// @brief Field ROTATION_0_5 offset 0
static constexpr int32_t  ROTATION_0_5{17};

/// @brief Field ROTATION_0_6 offset 0
static constexpr int32_t  ROTATION_0_6{22};

/// @brief Field ROTATION_0_7 offset 0
static constexpr int32_t  ROTATION_0_7{37};

/// @brief Field ROTATION_1_0 offset 0
static constexpr int32_t  ROTATION_1_0{38};

/// @brief Field ROTATION_1_1 offset 0
static constexpr int32_t  ROTATION_1_1{19};

/// @brief Field ROTATION_1_2 offset 0
static constexpr int32_t  ROTATION_1_2{10};

/// @brief Field ROTATION_1_3 offset 0
static constexpr int32_t  ROTATION_1_3{55};

/// @brief Field ROTATION_1_4 offset 0
static constexpr int32_t  ROTATION_1_4{49};

/// @brief Field ROTATION_1_5 offset 0
static constexpr int32_t  ROTATION_1_5{18};

/// @brief Field ROTATION_1_6 offset 0
static constexpr int32_t  ROTATION_1_6{23};

/// @brief Field ROTATION_1_7 offset 0
static constexpr int32_t  ROTATION_1_7{52};

/// @brief Field ROTATION_2_0 offset 0
static constexpr int32_t  ROTATION_2_0{33};

/// @brief Field ROTATION_2_1 offset 0
static constexpr int32_t  ROTATION_2_1{4};

/// @brief Field ROTATION_2_2 offset 0
static constexpr int32_t  ROTATION_2_2{51};

/// @brief Field ROTATION_2_3 offset 0
static constexpr int32_t  ROTATION_2_3{13};

/// @brief Field ROTATION_2_4 offset 0
static constexpr int32_t  ROTATION_2_4{34};

/// @brief Field ROTATION_2_5 offset 0
static constexpr int32_t  ROTATION_2_5{41};

/// @brief Field ROTATION_2_6 offset 0
static constexpr int32_t  ROTATION_2_6{59};

/// @brief Field ROTATION_2_7 offset 0
static constexpr int32_t  ROTATION_2_7{17};

/// @brief Field ROTATION_3_0 offset 0
static constexpr int32_t  ROTATION_3_0{5};

/// @brief Field ROTATION_3_1 offset 0
static constexpr int32_t  ROTATION_3_1{20};

/// @brief Field ROTATION_3_2 offset 0
static constexpr int32_t  ROTATION_3_2{48};

/// @brief Field ROTATION_3_3 offset 0
static constexpr int32_t  ROTATION_3_3{41};

/// @brief Field ROTATION_3_4 offset 0
static constexpr int32_t  ROTATION_3_4{47};

/// @brief Field ROTATION_3_5 offset 0
static constexpr int32_t  ROTATION_3_5{28};

/// @brief Field ROTATION_3_6 offset 0
static constexpr int32_t  ROTATION_3_6{16};

/// @brief Field ROTATION_3_7 offset 0
static constexpr int32_t  ROTATION_3_7{25};

/// @brief Field ROTATION_4_0 offset 0
static constexpr int32_t  ROTATION_4_0{41};

/// @brief Field ROTATION_4_1 offset 0
static constexpr int32_t  ROTATION_4_1{9};

/// @brief Field ROTATION_4_2 offset 0
static constexpr int32_t  ROTATION_4_2{37};

/// @brief Field ROTATION_4_3 offset 0
static constexpr int32_t  ROTATION_4_3{31};

/// @brief Field ROTATION_4_4 offset 0
static constexpr int32_t  ROTATION_4_4{12};

/// @brief Field ROTATION_4_5 offset 0
static constexpr int32_t  ROTATION_4_5{47};

/// @brief Field ROTATION_4_6 offset 0
static constexpr int32_t  ROTATION_4_6{44};

/// @brief Field ROTATION_4_7 offset 0
static constexpr int32_t  ROTATION_4_7{30};

/// @brief Field ROTATION_5_0 offset 0
static constexpr int32_t  ROTATION_5_0{16};

/// @brief Field ROTATION_5_1 offset 0
static constexpr int32_t  ROTATION_5_1{34};

/// @brief Field ROTATION_5_2 offset 0
static constexpr int32_t  ROTATION_5_2{56};

/// @brief Field ROTATION_5_3 offset 0
static constexpr int32_t  ROTATION_5_3{51};

/// @brief Field ROTATION_5_4 offset 0
static constexpr int32_t  ROTATION_5_4{4};

/// @brief Field ROTATION_5_5 offset 0
static constexpr int32_t  ROTATION_5_5{53};

/// @brief Field ROTATION_5_6 offset 0
static constexpr int32_t  ROTATION_5_6{42};

/// @brief Field ROTATION_5_7 offset 0
static constexpr int32_t  ROTATION_5_7{41};

/// @brief Field ROTATION_6_0 offset 0
static constexpr int32_t  ROTATION_6_0{31};

/// @brief Field ROTATION_6_1 offset 0
static constexpr int32_t  ROTATION_6_1{44};

/// @brief Field ROTATION_6_2 offset 0
static constexpr int32_t  ROTATION_6_2{47};

/// @brief Field ROTATION_6_3 offset 0
static constexpr int32_t  ROTATION_6_3{46};

/// @brief Field ROTATION_6_4 offset 0
static constexpr int32_t  ROTATION_6_4{19};

/// @brief Field ROTATION_6_5 offset 0
static constexpr int32_t  ROTATION_6_5{42};

/// @brief Field ROTATION_6_6 offset 0
static constexpr int32_t  ROTATION_6_6{44};

/// @brief Field ROTATION_6_7 offset 0
static constexpr int32_t  ROTATION_6_7{25};

/// @brief Field ROTATION_7_0 offset 0
static constexpr int32_t  ROTATION_7_0{9};

/// @brief Field ROTATION_7_1 offset 0
static constexpr int32_t  ROTATION_7_1{48};

/// @brief Field ROTATION_7_2 offset 0
static constexpr int32_t  ROTATION_7_2{35};

/// @brief Field ROTATION_7_3 offset 0
static constexpr int32_t  ROTATION_7_3{52};

/// @brief Field ROTATION_7_4 offset 0
static constexpr int32_t  ROTATION_7_4{23};

/// @brief Field ROTATION_7_5 offset 0
static constexpr int32_t  ROTATION_7_5{31};

/// @brief Field ROTATION_7_6 offset 0
static constexpr int32_t  ROTATION_7_6{37};

/// @brief Field ROTATION_7_7 offset 0
static constexpr int32_t  ROTATION_7_7{20};


// Methods

// Ctor Parameters [CppParam { name: "kw", ty: "::ArrayW<uint64_t>", modifiers: "", def_value: None }, CppParam { name: "t", ty: "::ArrayW<uint64_t>", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish1024Cipher(::ArrayW<uint64_t> kw, ::ArrayW<uint64_t> t) ;

/// @brief Method .ctor addr 0xe5eb5c size 0x2c virtual false final false
 void _ctor(::ArrayW<uint64_t> kw, ::ArrayW<uint64_t> t) ;

/// @brief Method EncryptBlock addr 0xe60bf0 size 0x99c virtual true final false
 void EncryptBlock(::ArrayW<uint64_t> block, ::ArrayW<uint64_t> outWords) ;

/// @brief Method DecryptBlock addr 0xe6158c size 0xbe4 virtual true final false
 void DecryptBlock(::ArrayW<uint64_t> block, ::ArrayW<uint64_t> state) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
// Type: Org.BouncyCastle.Crypto.Engines::ThreefishEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(879))
// CS Name: Org.BouncyCastle.Crypto.Engines.ThreefishEngine
class CORDL_TYPE ThreefishEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Threefish1024Cipher = Org::BouncyCastle::Crypto::Engines::Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish1024Cipher;

using Threefish512Cipher = Org::BouncyCastle::Crypto::Engines::Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish512Cipher;

using Threefish256Cipher = Org::BouncyCastle::Crypto::Engines::Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish256Cipher;

using ThreefishCipher = Org::BouncyCastle::Crypto::Engines::Org__BouncyCastle__Crypto__Engines__ThreefishEngine__ThreefishCipher;

/// @brief Convert operator to Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ThreefishEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreefishEngine", modifiers: " const&", def_value: None }]
constexpr ThreefishEngine(ThreefishEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreefishEngine", modifiers: "&&", def_value: None }]
constexpr ThreefishEngine(ThreefishEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ThreefishEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ThreefishEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ThreefishEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ThreefishEngine& operator=(ThreefishEngine&& o) noexcept = default;
  constexpr ThreefishEngine& operator=(ThreefishEngine const& o) noexcept = default;
                


// Fields

/// @brief Field BLOCKSIZE_256 offset 0
static constexpr int32_t  BLOCKSIZE_256{256};

/// @brief Field BLOCKSIZE_512 offset 0
static constexpr int32_t  BLOCKSIZE_512{512};

/// @brief Field BLOCKSIZE_1024 offset 0
static constexpr int32_t  BLOCKSIZE_1024{1024};

/// @brief Field TWEAK_SIZE_BYTES offset 0
static constexpr int32_t  TWEAK_SIZE_BYTES{16};

/// @brief Field TWEAK_SIZE_WORDS offset 0
static constexpr int32_t  TWEAK_SIZE_WORDS{2};

/// @brief Field ROUNDS_256 offset 0
static constexpr int32_t  ROUNDS_256{72};

/// @brief Field ROUNDS_512 offset 0
static constexpr int32_t  ROUNDS_512{72};

/// @brief Field ROUNDS_1024 offset 0
static constexpr int32_t  ROUNDS_1024{80};

/// @brief Field MAX_ROUNDS offset 0
static constexpr int32_t  MAX_ROUNDS{80};

/// @brief Field C_240 offset 0
static constexpr uint64_t  C_240{2004413935125273122u};

static ::ArrayW<int32_t> __declspec(property(get=__get_MOD9, put=__set_MOD9))  MOD9;

static void __set_MOD9(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_MOD9() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_MOD17, put=__set_MOD17))  MOD17;

static void __set_MOD17(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_MOD17() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_MOD5, put=__set_MOD5))  MOD5;

static void __set_MOD5(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_MOD5() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_MOD3, put=__set_MOD3))  MOD3;

static void __set_MOD3(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_MOD3() ;

 int32_t __declspec(property(get=__get_blocksizeBytes, put=__set_blocksizeBytes))  blocksizeBytes;

constexpr void __set_blocksizeBytes(int32_t value) ;

constexpr int32_t __get_blocksizeBytes() const;

 int32_t __declspec(property(get=__get_blocksizeWords, put=__set_blocksizeWords))  blocksizeWords;

constexpr void __set_blocksizeWords(int32_t value) ;

constexpr int32_t __get_blocksizeWords() const;

 ::ArrayW<uint64_t> __declspec(property(get=__get_currentBlock, put=__set_currentBlock))  currentBlock;

constexpr void __set_currentBlock(::ArrayW<uint64_t> value) ;

constexpr ::ArrayW<uint64_t> __get_currentBlock() const;

 ::ArrayW<uint64_t> __declspec(property(get=__get_t, put=__set_t))  t;

constexpr void __set_t(::ArrayW<uint64_t> value) ;

constexpr ::ArrayW<uint64_t> __get_t() const;

 ::ArrayW<uint64_t> __declspec(property(get=__get_kw, put=__set_kw))  kw;

constexpr void __set_kw(::ArrayW<uint64_t> value) ;

constexpr ::ArrayW<uint64_t> __get_kw() const;

 Org::BouncyCastle::Crypto::Engines::Org__BouncyCastle__Crypto__Engines__ThreefishEngine__ThreefishCipher __declspec(property(get=__get_cipher, put=__set_cipher))  cipher;

constexpr void __set_cipher(Org::BouncyCastle::Crypto::Engines::Org__BouncyCastle__Crypto__Engines__ThreefishEngine__ThreefishCipher value) ;

constexpr Org::BouncyCastle::Crypto::Engines::Org__BouncyCastle__Crypto__Engines__ThreefishEngine__ThreefishCipher __get_cipher() const;

 bool __declspec(property(get=__get_forEncryption, put=__set_forEncryption))  forEncryption;

constexpr void __set_forEncryption(bool value) ;

constexpr bool __get_forEncryption() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(get=get_IsPartialBlockOkay))  IsPartialBlockOkay;


// Methods

// Ctor Parameters [CppParam { name: "blocksizeBits", ty: "int32_t", modifiers: "", def_value: None }]
explicit ThreefishEngine(int32_t blocksizeBits) ;

/// @brief Method .ctor addr 0xe5e984 size 0x180 virtual false final false
 void _ctor(int32_t blocksizeBits) ;

/// @brief Method Init addr 0xe5eb88 size 0x340 virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method Init addr 0xe5efc8 size 0x4c virtual false final false
 void Init(bool forEncryption, ::ArrayW<uint64_t> key, ::ArrayW<uint64_t> tweak) ;

/// @brief Method SetKey addr 0xe5f014 size 0x164 virtual false final false
 void SetKey(::ArrayW<uint64_t> key) ;

/// @brief Method SetTweak addr 0xe5f178 size 0x11c virtual false final false
 void SetTweak(::ArrayW<uint64_t> tweak) ;

/// @brief Method get_AlgorithmName addr 0xe5f294 size 0x88 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe5f31c size 0x8 virtual true final false
 bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xe5f324 size 0x8 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method Reset addr 0xe5f32c size 0x4 virtual true final false
 void Reset() ;

/// @brief Method ProcessBlock addr 0xe5f330 size 0x1d8 virtual true final false
 int32_t ProcessBlock(::ArrayW<uint8_t> inBytes, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method ProcessBlock addr 0xe5f508 size 0x12c virtual false final false
 int32_t ProcessBlock(::ArrayW<uint64_t> inWords, ::ArrayW<uint64_t> outWords) ;

/// @brief Method BytesToWord addr 0xe5eec8 size 0x100 virtual false final false
static uint64_t BytesToWord(::ArrayW<uint8_t> bytes, int32_t off) ;

/// @brief Method WordToBytes addr 0xe5f634 size 0x138 virtual false final false
static void WordToBytes(uint64_t word, ::ArrayW<uint8_t> bytes, int32_t off) ;

/// @brief Method RotlXor addr 0xe5f76c size 0x10 virtual false final false
static uint64_t RotlXor(uint64_t x, int32_t n, uint64_t xor) ;

/// @brief Method XorRotr addr 0xe5f77c size 0xc virtual false final false
static uint64_t XorRotr(uint64_t x, int32_t n, uint64_t xor) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish1024Cipher);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish1024Cipher, "Org.BouncyCastle.Crypto.Engines", "ThreefishEngine/Threefish1024Cipher");
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish256Cipher);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish256Cipher, "Org.BouncyCastle.Crypto.Engines", "ThreefishEngine/Threefish256Cipher");
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish512Cipher);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::Org__BouncyCastle__Crypto__Engines__ThreefishEngine__Threefish512Cipher, "Org.BouncyCastle.Crypto.Engines", "ThreefishEngine/Threefish512Cipher");
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::Org__BouncyCastle__Crypto__Engines__ThreefishEngine__ThreefishCipher);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::Org__BouncyCastle__Crypto__Engines__ThreefishEngine__ThreefishCipher, "Org.BouncyCastle.Crypto.Engines", "ThreefishEngine/ThreefishCipher");
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::ThreefishEngine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::ThreefishEngine, "Org.BouncyCastle.Crypto.Engines", "ThreefishEngine");
