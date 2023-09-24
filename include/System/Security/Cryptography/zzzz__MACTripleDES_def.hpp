#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__KeyedHashAlgorithm_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
class CryptoStream;
}
namespace System::Security::Cryptography {
class TailStream;
}
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System::Security::Cryptography {
class TripleDES;
}
// Forward declare root types
namespace System::Security::Cryptography {
class MACTripleDES;
}
// Type: System.Security.Cryptography::MACTripleDES
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2938))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2939))
// CS Name: System.Security.Cryptography.MACTripleDES
class CORDL_TYPE MACTripleDES : public System::Security::Cryptography::KeyedHashAlgorithm {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~MACTripleDES() = default;

// Ctor Parameters [CppParam { name: "", ty: "MACTripleDES", modifiers: " const&", def_value: None }]
constexpr MACTripleDES(MACTripleDES const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MACTripleDES", modifiers: "&&", def_value: None }]
constexpr MACTripleDES(MACTripleDES&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MACTripleDES(void* ptr) noexcept : System::Security::Cryptography::KeyedHashAlgorithm(ptr) {
}


  constexpr MACTripleDES& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MACTripleDES& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MACTripleDES& operator=(MACTripleDES&& o) noexcept = default;
  constexpr MACTripleDES& operator=(MACTripleDES const& o) noexcept = default;
                


// Fields

 System::Security::Cryptography::ICryptoTransform __declspec(property(get=__get_m_encryptor, put=__set_m_encryptor))  m_encryptor;

constexpr void __set_m_encryptor(System::Security::Cryptography::ICryptoTransform value) ;

constexpr System::Security::Cryptography::ICryptoTransform __get_m_encryptor() const;

 System::Security::Cryptography::CryptoStream __declspec(property(get=__get__cs, put=__set__cs))  _cs;

constexpr void __set__cs(System::Security::Cryptography::CryptoStream value) ;

constexpr System::Security::Cryptography::CryptoStream __get__cs() const;

 System::Security::Cryptography::TailStream __declspec(property(get=__get__ts, put=__set__ts))  _ts;

constexpr void __set__ts(System::Security::Cryptography::TailStream value) ;

constexpr System::Security::Cryptography::TailStream __get__ts() const;

 int32_t __declspec(property(get=__get_m_bytesPerBlock, put=__set_m_bytesPerBlock))  m_bytesPerBlock;

constexpr void __set_m_bytesPerBlock(int32_t value) ;

constexpr int32_t __get_m_bytesPerBlock() const;

 System::Security::Cryptography::TripleDES __declspec(property(get=__get_des, put=__set_des))  des;

constexpr void __set_des(System::Security::Cryptography::TripleDES value) ;

constexpr System::Security::Cryptography::TripleDES __get_des() const;


// Methods

static System::Security::Cryptography::MACTripleDES New_ctor() ;

/// @brief Method .ctor addr 0x22f4218 size 0x130 virtual false final false
 void _ctor() ;

/// @brief Method Initialize addr 0x22f4348 size 0x8 virtual true final false
 void Initialize() ;

/// @brief Method HashCore addr 0x22f4350 size 0x170 virtual true final false
 void HashCore(::ArrayW<uint8_t> rgbData, int32_t ibStart, int32_t cbSize) ;

/// @brief Method HashFinal addr 0x22f4550 size 0x14c virtual true final false
 ::ArrayW<uint8_t> HashFinal() ;

/// @brief Method Dispose addr 0x22f4714 size 0xe8 virtual true final false
 void Dispose(bool disposing) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::MACTripleDES);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::MACTripleDES, "System.Security.Cryptography", "MACTripleDES");
