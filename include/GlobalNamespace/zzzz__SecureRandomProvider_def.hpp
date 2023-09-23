#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
class RNGCryptoServiceProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__SecureRandomProvider__SecureRandomState;
}
namespace GlobalNamespace {
class SecureRandomProvider;
}
// Type: ::SecureRandomState
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12895))
// CS Name: SecureRandomProvider::SecureRandomState
class CORDL_TYPE GlobalNamespace__SecureRandomProvider__SecureRandomState : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__SecureRandomProvider__SecureRandomState() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SecureRandomProvider__SecureRandomState", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SecureRandomProvider__SecureRandomState(GlobalNamespace__SecureRandomProvider__SecureRandomState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SecureRandomProvider__SecureRandomState", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SecureRandomProvider__SecureRandomState(GlobalNamespace__SecureRandomProvider__SecureRandomState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SecureRandomProvider__SecureRandomState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SecureRandomProvider__SecureRandomState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SecureRandomProvider__SecureRandomState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SecureRandomProvider__SecureRandomState& operator=(GlobalNamespace__SecureRandomProvider__SecureRandomState&& o) noexcept = default;
  constexpr GlobalNamespace__SecureRandomProvider__SecureRandomState& operator=(GlobalNamespace__SecureRandomProvider__SecureRandomState const& o) noexcept = default;
                


// Fields

 System::Security::Cryptography::RNGCryptoServiceProvider __declspec(property(get=__get__random, put=__set__random))  _random;

constexpr void __set__random(System::Security::Cryptography::RNGCryptoServiceProvider value) ;

constexpr System::Security::Cryptography::RNGCryptoServiceProvider __get__random() const;

/// @brief Field kBufferSize offset 0
static constexpr int32_t  kBufferSize{16384};

 ::ArrayW<uint8_t> __declspec(property(get=__get__randomBuffer0, put=__set__randomBuffer0))  _randomBuffer0;

constexpr void __set__randomBuffer0(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__randomBuffer0() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__randomBuffer1, put=__set__randomBuffer1))  _randomBuffer1;

constexpr void __set__randomBuffer1(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__randomBuffer1() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;


// Methods

/// @brief Method GetBytes addr 0xdc96b8 size 0xb8 virtual false final false
 void GetBytes(::ArrayW<uint8_t> buffer, int32_t offset, int32_t length) ;

/// @brief Method GetByte addr 0xdc97d0 size 0xa8 virtual false final false
 uint8_t GetByte() ;

/// @brief Method FillBuffer addr 0xdc9a84 size 0x114 virtual false final false
 void FillBuffer() ;

// Ctor Parameters []
explicit GlobalNamespace__SecureRandomProvider__SecureRandomState() ;

/// @brief Method .ctor addr 0xdc99e0 size 0xa4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SecureRandomProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12896))
// CS Name: SecureRandomProvider
class CORDL_TYPE SecureRandomProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SecureRandomState = GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SecureRandomProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecureRandomProvider", modifiers: " const&", def_value: None }]
constexpr SecureRandomProvider(SecureRandomProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecureRandomProvider", modifiers: "&&", def_value: None }]
constexpr SecureRandomProvider(SecureRandomProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecureRandomProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SecureRandomProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecureRandomProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecureRandomProvider& operator=(SecureRandomProvider&& o) noexcept = default;
  constexpr SecureRandomProvider& operator=(SecureRandomProvider const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState __declspec(property(get=__get__secureRandomState, put=__set__secureRandomState))  _secureRandomState;

static void __set__secureRandomState(GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState value) ;

static GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState __get__secureRandomState() ;


// Methods

/// @brief Method GetBytes addr 0xdc9610 size 0xa8 virtual false final false
static ::ArrayW<uint8_t> GetBytes(int32_t length) ;

/// @brief Method GetByte addr 0xdc9770 size 0x60 virtual false final false
static uint8_t GetByte() ;

/// @brief Method GetBytes addr 0xdc9878 size 0x80 virtual false final false
static void GetBytes(::ArrayW<uint8_t> buffer, int32_t offset, int32_t length) ;

/// @brief Method GetBytes addr 0xdc98f8 size 0x74 virtual false final false
static void GetBytes(::ArrayW<uint8_t> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState, "", "SecureRandomProvider/SecureRandomState");
NEED_NO_BOX(GlobalNamespace::SecureRandomProvider);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SecureRandomProvider, "", "SecureRandomProvider");
