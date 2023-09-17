#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform {
class IVoipPCMSource;
}
// Type: Oculus.Platform::IVoipPCMSource
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13187))
// CS Name: Oculus.Platform.IVoipPCMSource
class CORDL_TYPE IVoipPCMSource : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IVoipPCMSource() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IVoipPCMSource(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetPCM addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetPCM(::ArrayW<float_t> dest, int32_t length) ;

/// @brief Method SetSenderID addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetSenderID(uint64_t senderID) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
 void Update() ;

/// @brief Method PeekSizeElements addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t PeekSizeElements() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::IVoipPCMSource);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::IVoipPCMSource, "Oculus.Platform", "IVoipPCMSource");
