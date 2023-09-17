#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Encoders {
class IEncoder;
}
// Type: Org.BouncyCastle.Utilities.Encoders::IEncoder
namespace Org::BouncyCastle::Utilities::Encoders {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1794))
// CS Name: Org.BouncyCastle.Utilities.Encoders.IEncoder
class CORDL_TYPE IEncoder : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IEncoder() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IEncoder(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Encode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Encode(::ArrayW<uint8_t> data, int32_t off, int32_t length, ::System::IO::Stream outStream) ;

/// @brief Method Decode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Decode(::ArrayW<uint8_t> data, int32_t off, int32_t length, ::System::IO::Stream outStream) ;

/// @brief Method DecodeString addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t DecodeString(::StringW data, ::System::IO::Stream outStream) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Encoders
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Encoders::IEncoder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Encoders::IEncoder, "Org.BouncyCastle.Utilities.Encoders", "IEncoder");
