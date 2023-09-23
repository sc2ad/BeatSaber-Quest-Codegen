#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadUpdate_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class AssetFileDownloadUpdate;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAssetFileDownloadUpdate;
}
// Type: Oculus.Platform::MessageWithAssetFileDownloadUpdate
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13393)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 939 }), TypeDefinitionIndex(TypeDefinitionIndex(13203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13219))
// CS Name: Oculus.Platform.MessageWithAssetFileDownloadUpdate
class CORDL_TYPE MessageWithAssetFileDownloadUpdate : public Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadUpdate> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithAssetFileDownloadUpdate() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetFileDownloadUpdate", modifiers: " const&", def_value: None }]
constexpr MessageWithAssetFileDownloadUpdate(MessageWithAssetFileDownloadUpdate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetFileDownloadUpdate", modifiers: "&&", def_value: None }]
constexpr MessageWithAssetFileDownloadUpdate(MessageWithAssetFileDownloadUpdate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithAssetFileDownloadUpdate(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadUpdate>(ptr) {
}


  constexpr MessageWithAssetFileDownloadUpdate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithAssetFileDownloadUpdate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithAssetFileDownloadUpdate& operator=(MessageWithAssetFileDownloadUpdate&& o) noexcept = default;
  constexpr MessageWithAssetFileDownloadUpdate& operator=(MessageWithAssetFileDownloadUpdate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithAssetFileDownloadUpdate(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257e110 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetAssetFileDownloadUpdate addr 0x25804a0 size 0x3c virtual true final false
 Oculus::Platform::Models::AssetFileDownloadUpdate GetAssetFileDownloadUpdate() ;

/// @brief Method GetDataFromMessage addr 0x25804dc size 0x9c virtual true final false
 Oculus::Platform::Models::AssetFileDownloadUpdate GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithAssetFileDownloadUpdate);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithAssetFileDownloadUpdate, "Oculus.Platform", "MessageWithAssetFileDownloadUpdate");
