#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Mono/Security/Cryptography/zzzz__RC4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System {
class IDisposable;
}
namespace System::Security::Cryptography {
class ICryptoTransform;
}
// Forward declare root types
namespace Mono::Security::Cryptography {
class ARC4Managed;
}
// Type: Mono.Security.Cryptography::ARC4Managed
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14009))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13998))
// CS Name: Mono.Security.Cryptography.ARC4Managed
class CORDL_TYPE ARC4Managed : public Mono::Security::Cryptography::RC4 {
public:
// Declarations
/// @brief Convert operator to System::Security::Cryptography::ICryptoTransform
constexpr operator  System::Security::Cryptography::ICryptoTransform() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ARC4Managed() = default;

// Ctor Parameters [CppParam { name: "", ty: "ARC4Managed", modifiers: " const&", def_value: None }]
constexpr ARC4Managed(ARC4Managed const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ARC4Managed", modifiers: "&&", def_value: None }]
constexpr ARC4Managed(ARC4Managed&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ARC4Managed(void* ptr) noexcept : Mono::Security::Cryptography::RC4(ptr) {
}


  constexpr ARC4Managed& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ARC4Managed& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ARC4Managed& operator=(ARC4Managed&& o) noexcept = default;
  constexpr ARC4Managed& operator=(ARC4Managed const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_key() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_state, put=__set_state))  state;

constexpr void __set_state(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_state() const;

 uint8_t __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(uint8_t value) ;

constexpr uint8_t __get_x() const;

 uint8_t __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(uint8_t value) ;

constexpr uint8_t __get_y() const;

 bool __declspec(property(get=__get_m_disposed, put=__set_m_disposed))  m_disposed;

constexpr void __set_m_disposed(bool value) ;

constexpr bool __get_m_disposed() const;


// Properties

 ::ArrayW<uint8_t> __declspec(property(get=get_Key, put=set_Key))  Key;

 bool __declspec(property(get=get_CanTransformMultipleBlocks))  CanTransformMultipleBlocks;

 int32_t __declspec(property(get=get_InputBlockSize))  InputBlockSize;

 int32_t __declspec(property(get=get_OutputBlockSize))  OutputBlockSize;


// Methods

// Ctor Parameters []
explicit ARC4Managed() ;

/// @brief Method .ctor addr 0x2295c88 size 0x80 virtual false final false
 void _ctor() ;

/// @brief Method Finalize addr 0x2295d84 size 0xa0 virtual true final false
 void Finalize() ;

/// @brief Method Dispose addr 0x2295e24 size 0xac virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method get_Key addr 0x2295ed0 size 0x94 virtual true final false
 ::ArrayW<uint8_t> get_Key() ;

/// @brief Method set_Key addr 0x2295f64 size 0xd8 virtual true final false
 void set_Key(::ArrayW<uint8_t> value) ;

/// @brief Method CreateEncryptor addr 0x229611c size 0x20 virtual true final false
 System::Security::Cryptography::ICryptoTransform CreateEncryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgvIV) ;

/// @brief Method CreateDecryptor addr 0x229613c size 0x2c virtual true final false
 System::Security::Cryptography::ICryptoTransform CreateDecryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgvIV) ;

/// @brief Method GenerateIV addr 0x2296168 size 0x5c virtual true final false
 void GenerateIV() ;

/// @brief Method GenerateKey addr 0x22961c4 size 0x20 virtual true final false
 void GenerateKey() ;

/// @brief Method get_CanTransformMultipleBlocks addr 0x2296254 size 0x8 virtual true final true
 bool get_CanTransformMultipleBlocks() ;

/// @brief Method get_InputBlockSize addr 0x229625c size 0x8 virtual true final true
 int32_t get_InputBlockSize() ;

/// @brief Method get_OutputBlockSize addr 0x2296264 size 0x8 virtual true final true
 int32_t get_OutputBlockSize() ;

/// @brief Method KeySetup addr 0x229603c size 0xe0 virtual false final false
 void KeySetup(::ArrayW<uint8_t> key) ;

/// @brief Method CheckInput addr 0x229626c size 0x154 virtual false final false
 void CheckInput(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount) ;

/// @brief Method TransformBlock addr 0x22963c0 size 0x170 virtual true final true
 int32_t TransformBlock(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount, ::ArrayW<uint8_t> outputBuffer, int32_t outputOffset) ;

/// @brief Method InternalTransformBlock addr 0x2296530 size 0x130 virtual false final false
 int32_t InternalTransformBlock(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount, ::ArrayW<uint8_t> outputBuffer, int32_t outputOffset) ;

/// @brief Method TransformFinalBlock addr 0x2296660 size 0x9c virtual true final true
 ::ArrayW<uint8_t> TransformFinalBlock(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Cryptography
NEED_NO_BOX(Mono::Security::Cryptography::ARC4Managed);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::ARC4Managed, "Mono.Security.Cryptography", "ARC4Managed");
