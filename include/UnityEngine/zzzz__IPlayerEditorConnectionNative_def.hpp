#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System {
struct Guid;
}
// Forward declare root types
namespace UnityEngine {
class IPlayerEditorConnectionNative;
}
// Type: UnityEngine::IPlayerEditorConnectionNative
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10083))
// CS Name: UnityEngine.IPlayerEditorConnectionNative
class CORDL_TYPE IPlayerEditorConnectionNative : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IPlayerEditorConnectionNative() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPlayerEditorConnectionNative(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Initialize() ;

/// @brief Method DisconnectAll addr 0x0 size 0xffffffffffffffff virtual true final false
 void DisconnectAll() ;

/// @brief Method SendMessage addr 0x0 size 0xffffffffffffffff virtual true final false
 void SendMessage(::System::Guid messageId, ::ArrayW<uint8_t> data, int32_t playerId) ;

/// @brief Method TrySendMessage addr 0x0 size 0xffffffffffffffff virtual true final false
 bool TrySendMessage(::System::Guid messageId, ::ArrayW<uint8_t> data, int32_t playerId) ;

/// @brief Method Poll addr 0x0 size 0xffffffffffffffff virtual true final false
 void Poll() ;

/// @brief Method RegisterInternal addr 0x0 size 0xffffffffffffffff virtual true final false
 void RegisterInternal(::System::Guid messageId) ;

/// @brief Method UnregisterInternal addr 0x0 size 0xffffffffffffffff virtual true final false
 void UnregisterInternal(::System::Guid messageId) ;

/// @brief Method IsConnected addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsConnected() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::IPlayerEditorConnectionNative);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::IPlayerEditorConnectionNative, "UnityEngine", "IPlayerEditorConnectionNative");
