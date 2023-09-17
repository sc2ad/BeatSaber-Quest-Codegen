#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::Networking::PlayerConnection {
class MessageEventArgs;
}
// Type: UnityEngine.Networking.PlayerConnection::MessageEventArgs
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10248))
// CS Name: UnityEngine.Networking.PlayerConnection.MessageEventArgs
class CORDL_TYPE MessageEventArgs : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MessageEventArgs() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageEventArgs", modifiers: " const&", def_value: None }]
constexpr MessageEventArgs(MessageEventArgs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageEventArgs", modifiers: "&&", def_value: None }]
constexpr MessageEventArgs(MessageEventArgs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageEventArgs(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MessageEventArgs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageEventArgs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageEventArgs& operator=(MessageEventArgs&& o) noexcept = default;
  constexpr MessageEventArgs& operator=(MessageEventArgs const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_playerId, put=__set_playerId))  playerId;

constexpr void __set_playerId(int32_t value) ;

constexpr int32_t __get_playerId() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_data() const;


// Methods

// Ctor Parameters []
explicit MessageEventArgs() ;

/// @brief Method .ctor addr 0x2b6f378 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Networking::PlayerConnection
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::MessageEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::MessageEventArgs, "UnityEngine.Networking.PlayerConnection", "MessageEventArgs");
