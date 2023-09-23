#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__SHA1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Security::Cryptography {
class SHA1Managed;
}
// Type: System.Security.Cryptography::SHA1Managed
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2954))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2955))
// CS Name: System.Security.Cryptography.SHA1Managed
class CORDL_TYPE SHA1Managed : public System::Security::Cryptography::SHA1 {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~SHA1Managed() = default;

// Ctor Parameters [CppParam { name: "", ty: "SHA1Managed", modifiers: " const&", def_value: None }]
constexpr SHA1Managed(SHA1Managed const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SHA1Managed", modifiers: "&&", def_value: None }]
constexpr SHA1Managed(SHA1Managed&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SHA1Managed(void* ptr) noexcept : System::Security::Cryptography::SHA1(ptr) {
}


  constexpr SHA1Managed& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SHA1Managed& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SHA1Managed& operator=(SHA1Managed&& o) noexcept = default;
  constexpr SHA1Managed& operator=(SHA1Managed const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get__buffer, put=__set__buffer))  _buffer;

constexpr void __set__buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__buffer() const;

 int64_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int64_t value) ;

constexpr int64_t __get__count() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get__stateSHA1, put=__set__stateSHA1))  _stateSHA1;

constexpr void __set__stateSHA1(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get__stateSHA1() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get__expandedBuffer, put=__set__expandedBuffer))  _expandedBuffer;

constexpr void __set__expandedBuffer(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get__expandedBuffer() const;


// Methods

// Ctor Parameters []
explicit SHA1Managed() ;

/// @brief Method .ctor addr 0x22f3b10 size 0x124 virtual false final false
 void _ctor() ;

/// @brief Method Initialize addr 0x22fba6c size 0x44 virtual true final false
 void Initialize() ;

/// @brief Method HashCore addr 0x22fbab0 size 0x4 virtual true final false
 void HashCore(::ArrayW<uint8_t> rgb, int32_t ibStart, int32_t cbSize) ;

/// @brief Method HashFinal addr 0x22fbc30 size 0x4 virtual true final false
 ::ArrayW<uint8_t> HashFinal() ;

/// @brief Method InitializeState addr 0x22fb9e8 size 0x84 virtual false final false
 void InitializeState() ;

/// @brief Method _HashData addr 0x22fbab4 size 0x17c virtual false final false
 void _HashData(::ArrayW<uint8_t> partIn, int32_t ibStart, int32_t cbSize) ;

/// @brief Method _EndHash addr 0x22fbc34 size 0x1a8 virtual false final false
 ::ArrayW<uint8_t> _EndHash() ;

/// @brief Method SHATransform addr 0x22fbddc size 0x3f4 virtual false final false
static void SHATransform(void* expandedBuffer, void* state, void* block) ;

/// @brief Method SHAExpand addr 0x22fc1d0 size 0x3c virtual false final false
static void SHAExpand(void* x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::SHA1Managed);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::SHA1Managed, "System.Security.Cryptography", "SHA1Managed");
