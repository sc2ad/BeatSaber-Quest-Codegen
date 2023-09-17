#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
class IDisposable;
}
namespace System::Security::Cryptography {
class ICryptoTransform;
}
// Forward declare root types
namespace System::Security::Cryptography {
class HashAlgorithm;
}
// Type: System.Security.Cryptography::HashAlgorithm
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2912))
// CS Name: System.Security.Cryptography.HashAlgorithm
class CORDL_TYPE HashAlgorithm : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief Convert operator to ::System::Security::Cryptography::ICryptoTransform
constexpr operator  ::System::Security::Cryptography::ICryptoTransform() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HashAlgorithm() = default;

// Ctor Parameters [CppParam { name: "", ty: "HashAlgorithm", modifiers: " const&", def_value: None }]
constexpr HashAlgorithm(HashAlgorithm const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HashAlgorithm", modifiers: "&&", def_value: None }]
constexpr HashAlgorithm(HashAlgorithm&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HashAlgorithm(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HashAlgorithm& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HashAlgorithm& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HashAlgorithm& operator=(HashAlgorithm&& o) noexcept = default;
  constexpr HashAlgorithm& operator=(HashAlgorithm const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__disposed, put=__set__disposed))  _disposed;

constexpr void __set__disposed(bool value) ;

constexpr bool __get__disposed() const;

 int32_t __declspec(property(get=__get_HashSizeValue, put=__set_HashSizeValue))  HashSizeValue;

constexpr void __set_HashSizeValue(int32_t value) ;

constexpr int32_t __get_HashSizeValue() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_HashValue, put=__set_HashValue))  HashValue;

constexpr void __set_HashValue(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_HashValue() const;

 int32_t __declspec(property(get=__get_State, put=__set_State))  State;

constexpr void __set_State(int32_t value) ;

constexpr int32_t __get_State() const;


// Properties

 int32_t __declspec(property(get=get_HashSize))  HashSize;

 ::ArrayW<uint8_t> __declspec(property(get=get_Hash))  Hash;

 int32_t __declspec(property(get=get_InputBlockSize))  InputBlockSize;

 int32_t __declspec(property(get=get_OutputBlockSize))  OutputBlockSize;

 bool __declspec(property(get=get_CanTransformMultipleBlocks))  CanTransformMultipleBlocks;


// Methods

// Ctor Parameters []
explicit HashAlgorithm() ;

/// @brief Method .ctor addr 0x22ef0b0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Create addr 0x22ef0b8 size 0x80 virtual false final false
static ::System::Security::Cryptography::HashAlgorithm Create(::StringW hashName) ;

/// @brief Method get_HashSize addr 0x22ef138 size 0x8 virtual true final false
 int32_t get_HashSize() ;

/// @brief Method get_Hash addr 0x22ef140 size 0xf8 virtual true final false
 ::ArrayW<uint8_t> get_Hash() ;

/// @brief Method ComputeHash addr 0x22ef280 size 0xb0 virtual false final false
 ::ArrayW<uint8_t> ComputeHash(::ArrayW<uint8_t> buffer) ;

/// @brief Method ComputeHash addr 0x22ef3d8 size 0x178 virtual false final false
 ::ArrayW<uint8_t> ComputeHash(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method CaptureHashCodeAndReinitialize addr 0x22ef330 size 0xa8 virtual false final false
 ::ArrayW<uint8_t> CaptureHashCodeAndReinitialize() ;

/// @brief Method Dispose addr 0x22ef550 size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Clear addr 0x22ef5bc size 0x94 virtual false final false
 void Clear() ;

/// @brief Method Dispose addr 0x22ef650 size 0x10 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method get_InputBlockSize addr 0x22ef660 size 0x8 virtual true final false
 int32_t get_InputBlockSize() ;

/// @brief Method get_OutputBlockSize addr 0x22ef668 size 0x8 virtual true final false
 int32_t get_OutputBlockSize() ;

/// @brief Method get_CanTransformMultipleBlocks addr 0x22ef670 size 0x8 virtual true final false
 bool get_CanTransformMultipleBlocks() ;

/// @brief Method TransformBlock addr 0x22ef678 size 0x9c virtual true final true
 int32_t TransformBlock(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount, ::ArrayW<uint8_t> outputBuffer, int32_t outputOffset) ;

/// @brief Method TransformFinalBlock addr 0x22ef870 size 0x124 virtual true final true
 ::ArrayW<uint8_t> TransformFinalBlock(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount) ;

/// @brief Method ValidateTransformBlock addr 0x22ef714 size 0x15c virtual false final false
 void ValidateTransformBlock(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount) ;

/// @brief Method HashCore addr 0x0 size 0xffffffffffffffff virtual true final false
 void HashCore(::ArrayW<uint8_t> array, int32_t ibStart, int32_t cbSize) ;

/// @brief Method HashFinal addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> HashFinal() ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Initialize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::HashAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::HashAlgorithm, "System.Security.Cryptography", "HashAlgorithm");
