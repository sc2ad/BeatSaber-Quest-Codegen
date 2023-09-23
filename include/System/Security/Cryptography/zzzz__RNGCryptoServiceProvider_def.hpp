#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Security::Cryptography {
class RNGCryptoServiceProvider;
}
// Type: System.Security.Cryptography::RNGCryptoServiceProvider
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2942))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2978))
// CS Name: System.Security.Cryptography.RNGCryptoServiceProvider
class CORDL_TYPE RNGCryptoServiceProvider : public System::Security::Cryptography::RandomNumberGenerator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RNGCryptoServiceProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "RNGCryptoServiceProvider", modifiers: " const&", def_value: None }]
constexpr RNGCryptoServiceProvider(RNGCryptoServiceProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RNGCryptoServiceProvider", modifiers: "&&", def_value: None }]
constexpr RNGCryptoServiceProvider(RNGCryptoServiceProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RNGCryptoServiceProvider(void* ptr) noexcept : System::Security::Cryptography::RandomNumberGenerator(ptr) {
}


  constexpr RNGCryptoServiceProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RNGCryptoServiceProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RNGCryptoServiceProvider& operator=(RNGCryptoServiceProvider&& o) noexcept = default;
  constexpr RNGCryptoServiceProvider& operator=(RNGCryptoServiceProvider const& o) noexcept = default;
                


// Fields

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__lock, put=__set__lock))  _lock;

static void __set__lock(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get__lock() ;

 ::cordl_internals::intptr_t __declspec(property(get=__get__handle, put=__set__handle))  _handle;

constexpr void __set__handle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get__handle() const;


// Methods

// Ctor Parameters []
explicit RNGCryptoServiceProvider() ;

/// @brief Method .ctor addr 0x2300be4 size 0x98 virtual false final false
 void _ctor() ;

/// @brief Method Check addr 0x2307b18 size 0xb4 virtual false final false
 void Check() ;

/// @brief Method RngOpen addr 0x2307b10 size 0x4 virtual false final false
static bool RngOpen() ;

/// @brief Method RngInitialize addr 0x2307b14 size 0x4 virtual false final false
static ::cordl_internals::intptr_t RngInitialize(void* seed, ::cordl_internals::intptr_t seed_length) ;

/// @brief Method RngGetBytes addr 0x2307bcc size 0x4 virtual false final false
static ::cordl_internals::intptr_t RngGetBytes(::cordl_internals::intptr_t handle, void* data, ::cordl_internals::intptr_t data_length) ;

/// @brief Method RngClose addr 0x2307bd0 size 0x4 virtual false final false
static void RngClose(::cordl_internals::intptr_t handle) ;

/// @brief Method GetBytes addr 0x2307bd4 size 0x21c virtual true final false
 void GetBytes(::ArrayW<uint8_t> data) ;

/// @brief Method Finalize addr 0x2307df0 size 0x118 virtual true final false
 void Finalize() ;

/// @brief Method Dispose addr 0x2307f08 size 0xc virtual true final false
 void Dispose(bool disposing) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::RNGCryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RNGCryptoServiceProvider, "System.Security.Cryptography", "RNGCryptoServiceProvider");
