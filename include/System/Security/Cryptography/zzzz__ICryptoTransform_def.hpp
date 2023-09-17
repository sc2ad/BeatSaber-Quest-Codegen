#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Security::Cryptography {
class ICryptoTransform;
}
// Type: System.Security.Cryptography::ICryptoTransform
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2937))
// CS Name: System.Security.Cryptography.ICryptoTransform
class CORDL_TYPE ICryptoTransform : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

~ICryptoTransform() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICryptoTransform(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_InputBlockSize))  InputBlockSize;

 int32_t __declspec(property(get=get_OutputBlockSize))  OutputBlockSize;

 bool __declspec(property(get=get_CanTransformMultipleBlocks))  CanTransformMultipleBlocks;


// Methods

/// @brief Method get_InputBlockSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_InputBlockSize() ;

/// @brief Method get_OutputBlockSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_OutputBlockSize() ;

/// @brief Method get_CanTransformMultipleBlocks addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_CanTransformMultipleBlocks() ;

/// @brief Method TransformBlock addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t TransformBlock(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount, ::ArrayW<uint8_t> outputBuffer, int32_t outputOffset) ;

/// @brief Method TransformFinalBlock addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> TransformFinalBlock(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::ICryptoTransform);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::ICryptoTransform, "System.Security.Cryptography", "ICryptoTransform");
