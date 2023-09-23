#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class NetSyncSession;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class NetSyncSetSessionPropertyResult;
}
// Type: Oculus.Platform.Models::NetSyncSetSessionPropertyResult
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13451))
// CS Name: Oculus.Platform.Models.NetSyncSetSessionPropertyResult
class CORDL_TYPE NetSyncSetSessionPropertyResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~NetSyncSetSessionPropertyResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetSyncSetSessionPropertyResult", modifiers: " const&", def_value: None }]
constexpr NetSyncSetSessionPropertyResult(NetSyncSetSessionPropertyResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetSyncSetSessionPropertyResult", modifiers: "&&", def_value: None }]
constexpr NetSyncSetSessionPropertyResult(NetSyncSetSessionPropertyResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetSyncSetSessionPropertyResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetSyncSetSessionPropertyResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetSyncSetSessionPropertyResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetSyncSetSessionPropertyResult& operator=(NetSyncSetSessionPropertyResult&& o) noexcept = default;
  constexpr NetSyncSetSessionPropertyResult& operator=(NetSyncSetSessionPropertyResult const& o) noexcept = default;
                


// Fields

 Oculus::Platform::Models::NetSyncSession __declspec(property(get=__get_Session, put=__set_Session))  Session;

constexpr void __set_Session(Oculus::Platform::Models::NetSyncSession value) ;

constexpr Oculus::Platform::Models::NetSyncSession __get_Session() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit NetSyncSetSessionPropertyResult(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a17e0 size 0xb0 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::NetSyncSetSessionPropertyResult);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::NetSyncSetSessionPropertyResult, "Oculus.Platform.Models", "NetSyncSetSessionPropertyResult");
