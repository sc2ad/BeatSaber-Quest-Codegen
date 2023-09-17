#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Security::Cryptography {
class SHA1Internal;
}
// Type: System.Security.Cryptography::SHA1Internal
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2981))
// CS Name: System.Security.Cryptography.SHA1Internal
class CORDL_TYPE SHA1Internal : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~SHA1Internal() = default;

// Ctor Parameters [CppParam { name: "", ty: "SHA1Internal", modifiers: " const&", def_value: None }]
constexpr SHA1Internal(SHA1Internal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SHA1Internal", modifiers: "&&", def_value: None }]
constexpr SHA1Internal(SHA1Internal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SHA1Internal(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SHA1Internal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SHA1Internal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SHA1Internal& operator=(SHA1Internal&& o) noexcept = default;
  constexpr SHA1Internal& operator=(SHA1Internal const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint32_t> __declspec(property(get=__get__H, put=__set__H))  _H;

constexpr void __set__H(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get__H() const;

 uint64_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(uint64_t value) ;

constexpr uint64_t __get_count() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__ProcessingBuffer, put=__set__ProcessingBuffer))  _ProcessingBuffer;

constexpr void __set__ProcessingBuffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__ProcessingBuffer() const;

 int32_t __declspec(property(get=__get__ProcessingBufferCount, put=__set__ProcessingBufferCount))  _ProcessingBufferCount;

constexpr void __set__ProcessingBufferCount(int32_t value) ;

constexpr int32_t __get__ProcessingBufferCount() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_buff, put=__set_buff))  buff;

constexpr void __set_buff(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_buff() const;


// Methods

// Ctor Parameters []
explicit SHA1Internal() ;

/// @brief Method .ctor addr 0x23081f4 size 0x9c virtual false final false
 void _ctor() ;

/// @brief Method HashCore addr 0x2308318 size 0x100 virtual false final false
 void HashCore(::ArrayW<uint8_t> rgb, int32_t ibStart, int32_t cbSize) ;

/// @brief Method HashFinal addr 0x2308930 size 0xd8 virtual false final false
 ::ArrayW<uint8_t> HashFinal() ;

/// @brief Method Initialize addr 0x2308290 size 0x88 virtual false final false
 void Initialize() ;

/// @brief Method ProcessBlock addr 0x2308418 size 0x518 virtual false final false
 void ProcessBlock(::ArrayW<uint8_t> inputBuffer, uint32_t inputOffset) ;

/// @brief Method InitialiseBuff addr 0x2308bc4 size 0x6a0 virtual false final false
static void InitialiseBuff(::ArrayW<uint32_t> buff, ::ArrayW<uint8_t> input, uint32_t inputOffset) ;

/// @brief Method FillBuff addr 0x2309264 size 0x234 virtual false final false
static void FillBuff(::ArrayW<uint32_t> buff) ;

/// @brief Method ProcessFinalBlock addr 0x2308a08 size 0x1bc virtual false final false
 void ProcessFinalBlock(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount) ;

/// @brief Method AddLength addr 0x2309498 size 0xf0 virtual false final false
 void AddLength(uint64_t length, ::ArrayW<uint8_t> buffer, int32_t position) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::SHA1Internal);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::SHA1Internal, "System.Security.Cryptography", "SHA1Internal");
