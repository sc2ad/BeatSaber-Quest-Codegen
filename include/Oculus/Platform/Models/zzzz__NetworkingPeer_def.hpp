#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform {
struct PeerConnectionState;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class NetworkingPeer;
}
// Type: Oculus.Platform.Models::NetworkingPeer
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13454))
// CS Name: Oculus.Platform.Models.NetworkingPeer
class CORDL_TYPE NetworkingPeer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~NetworkingPeer() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkingPeer", modifiers: " const&", def_value: None }]
constexpr NetworkingPeer(NetworkingPeer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkingPeer", modifiers: "&&", def_value: None }]
constexpr NetworkingPeer(NetworkingPeer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetworkingPeer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetworkingPeer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetworkingPeer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetworkingPeer& operator=(NetworkingPeer&& o) noexcept = default;
  constexpr NetworkingPeer& operator=(NetworkingPeer const& o) noexcept = default;
                


// Fields

 uint64_t __declspec(property(get=__get__ID_k__BackingField, put=__set__ID_k__BackingField))  _ID_k__BackingField;

constexpr void __set__ID_k__BackingField(uint64_t value) ;

constexpr uint64_t __get__ID_k__BackingField() const;

 ::Oculus::Platform::PeerConnectionState __declspec(property(get=__get__State_k__BackingField, put=__set__State_k__BackingField))  _State_k__BackingField;

constexpr void __set__State_k__BackingField(::Oculus::Platform::PeerConnectionState value) ;

constexpr ::Oculus::Platform::PeerConnectionState __get__State_k__BackingField() const;


// Properties

 uint64_t __declspec(property(get=get_ID, put=set_ID))  ID;

 ::Oculus::Platform::PeerConnectionState __declspec(property(get=get_State, put=set_State))  State;


// Methods

// Ctor Parameters [CppParam { name: "id", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::Oculus::Platform::PeerConnectionState", modifiers: "", def_value: None }]
explicit NetworkingPeer(uint64_t id, ::Oculus::Platform::PeerConnectionState state) ;

/// @brief Method .ctor addr 0x25a1b54 size 0x30 virtual false final false
 void _ctor(uint64_t id, ::Oculus::Platform::PeerConnectionState state) ;

/// @brief Method get_ID addr 0x25a1b84 size 0x8 virtual false final false
 uint64_t get_ID() ;

/// @brief Method set_ID addr 0x25a1b8c size 0x8 virtual false final false
 void set_ID(uint64_t value) ;

/// @brief Method get_State addr 0x25a1b94 size 0x8 virtual false final false
 ::Oculus::Platform::PeerConnectionState get_State() ;

/// @brief Method set_State addr 0x25a1b9c size 0x8 virtual false final false
 void set_State(::Oculus::Platform::PeerConnectionState value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Models::NetworkingPeer);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::NetworkingPeer, "Oculus.Platform.Models", "NetworkingPeer");
