#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDeleteResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class AssetFileDeleteResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAssetFileDeleteResult;
}
// Type: Oculus.Platform::MessageWithAssetFileDeleteResult
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), TypeDefinitionIndex(TypeDefinitionIndex(13390)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4430 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13216))
// CS Name: Oculus.Platform.MessageWithAssetFileDeleteResult
class CORDL_TYPE MessageWithAssetFileDeleteResult : public Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDeleteResult> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithAssetFileDeleteResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetFileDeleteResult", modifiers: " const&", def_value: None }]
constexpr MessageWithAssetFileDeleteResult(MessageWithAssetFileDeleteResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetFileDeleteResult", modifiers: "&&", def_value: None }]
constexpr MessageWithAssetFileDeleteResult(MessageWithAssetFileDeleteResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithAssetFileDeleteResult(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDeleteResult>(ptr) {
}


  constexpr MessageWithAssetFileDeleteResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithAssetFileDeleteResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithAssetFileDeleteResult& operator=(MessageWithAssetFileDeleteResult&& o) noexcept = default;
  constexpr MessageWithAssetFileDeleteResult& operator=(MessageWithAssetFileDeleteResult const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithAssetFileDeleteResult(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257e008 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetAssetFileDeleteResult addr 0x2580218 size 0x3c virtual true final false
 Oculus::Platform::Models::AssetFileDeleteResult GetAssetFileDeleteResult() ;

/// @brief Method GetDataFromMessage addr 0x2580254 size 0x9c virtual true final false
 Oculus::Platform::Models::AssetFileDeleteResult GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithAssetFileDeleteResult);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithAssetFileDeleteResult, "Oculus.Platform", "MessageWithAssetFileDeleteResult");
