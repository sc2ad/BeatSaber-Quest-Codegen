#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__MD5_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Security::Cryptography {
class MD5CryptoServiceProvider;
}
// Type: System.Security.Cryptography::MD5CryptoServiceProvider
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2941))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2976))
// CS Name: System.Security.Cryptography.MD5CryptoServiceProvider
class CORDL_TYPE MD5CryptoServiceProvider : public System::Security::Cryptography::MD5 {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MD5CryptoServiceProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "MD5CryptoServiceProvider", modifiers: " const&", def_value: None }]
constexpr MD5CryptoServiceProvider(MD5CryptoServiceProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MD5CryptoServiceProvider", modifiers: "&&", def_value: None }]
constexpr MD5CryptoServiceProvider(MD5CryptoServiceProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MD5CryptoServiceProvider(void* ptr) noexcept : System::Security::Cryptography::MD5(ptr) {
}


  constexpr MD5CryptoServiceProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MD5CryptoServiceProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MD5CryptoServiceProvider& operator=(MD5CryptoServiceProvider&& o) noexcept = default;
  constexpr MD5CryptoServiceProvider& operator=(MD5CryptoServiceProvider const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint32_t> __declspec(property(get=__get__H, put=__set__H))  _H;

constexpr void __set__H(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get__H() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_buff, put=__set_buff))  buff;

constexpr void __set_buff(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_buff() const;

 uint64_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(uint64_t value) ;

constexpr uint64_t __get_count() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__ProcessingBuffer, put=__set__ProcessingBuffer))  _ProcessingBuffer;

constexpr void __set__ProcessingBuffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__ProcessingBuffer() const;

 int32_t __declspec(property(get=__get__ProcessingBufferCount, put=__set__ProcessingBufferCount))  _ProcessingBufferCount;

constexpr void __set__ProcessingBufferCount(int32_t value) ;

constexpr int32_t __get__ProcessingBufferCount() const;

static ::ArrayW<uint32_t> __declspec(property(get=__get_K, put=__set_K))  K;

static void __set_K(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_K() ;


// Methods

static System::Security::Cryptography::MD5CryptoServiceProvider New_ctor() ;

/// @brief Method .ctor addr 0x23031dc size 0xa8 virtual false final false
 void _ctor() ;

/// @brief Method Finalize addr 0x2305880 size 0xa0 virtual true final false
 void Finalize() ;

/// @brief Method Dispose addr 0x2305920 size 0x70 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method HashCore addr 0x2305990 size 0x100 virtual true final false
 void HashCore(::ArrayW<uint8_t> rgb, int32_t ibStart, int32_t cbSize) ;

/// @brief Method HashFinal addr 0x2306708 size 0xd8 virtual true final false
 ::ArrayW<uint8_t> HashFinal() ;

/// @brief Method Initialize addr 0x230698c size 0x74 virtual true final false
 void Initialize() ;

/// @brief Method ProcessBlock addr 0x2305a90 size 0xc78 virtual false final false
 void ProcessBlock(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset) ;

/// @brief Method ProcessFinalBlock addr 0x23067e0 size 0x1ac virtual false final false
 void ProcessFinalBlock(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount) ;

/// @brief Method AddLength addr 0x2306a00 size 0xf0 virtual false final false
 void AddLength(uint64_t length, ::ArrayW<uint8_t> buffer, int32_t position) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::MD5CryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::MD5CryptoServiceProvider, "System.Security.Cryptography", "MD5CryptoServiceProvider");
