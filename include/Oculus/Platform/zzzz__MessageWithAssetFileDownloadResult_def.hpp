#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class AssetFileDownloadResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAssetFileDownloadResult;
}
// Type: Oculus.Platform::MessageWithAssetFileDownloadResult
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4432 }), TypeDefinitionIndex(TypeDefinitionIndex(13203)), TypeDefinitionIndex(TypeDefinitionIndex(13392))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13218))
// CS Name: Oculus.Platform.MessageWithAssetFileDownloadResult
class CORDL_TYPE MessageWithAssetFileDownloadResult : public Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadResult> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithAssetFileDownloadResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetFileDownloadResult", modifiers: " const&", def_value: None }]
constexpr MessageWithAssetFileDownloadResult(MessageWithAssetFileDownloadResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetFileDownloadResult", modifiers: "&&", def_value: None }]
constexpr MessageWithAssetFileDownloadResult(MessageWithAssetFileDownloadResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithAssetFileDownloadResult(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadResult>(ptr) {
}


  constexpr MessageWithAssetFileDownloadResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithAssetFileDownloadResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithAssetFileDownloadResult& operator=(MessageWithAssetFileDownloadResult&& o) noexcept = default;
  constexpr MessageWithAssetFileDownloadResult& operator=(MessageWithAssetFileDownloadResult const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithAssetFileDownloadResult(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257e0b8 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetAssetFileDownloadResult addr 0x25803c8 size 0x3c virtual true final false
 Oculus::Platform::Models::AssetFileDownloadResult GetAssetFileDownloadResult() ;

/// @brief Method GetDataFromMessage addr 0x2580404 size 0x9c virtual true final false
 Oculus::Platform::Models::AssetFileDownloadResult GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithAssetFileDownloadResult);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithAssetFileDownloadResult, "Oculus.Platform", "MessageWithAssetFileDownloadResult");
