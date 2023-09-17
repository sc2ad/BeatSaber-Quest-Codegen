#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSession_def.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform::Models {
class NetSyncSessionList;
}
// Type: Oculus.Platform.Models::NetSyncSessionList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13410), inst: 1143 }), TypeDefinitionIndex(TypeDefinitionIndex(13448)), TypeDefinitionIndex(TypeDefinitionIndex(13410))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13449))
// CS Name: Oculus.Platform.Models.NetSyncSessionList
class CORDL_TYPE NetSyncSessionList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::NetSyncSession> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~NetSyncSessionList() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetSyncSessionList", modifiers: " const&", def_value: None }]
constexpr NetSyncSessionList(NetSyncSessionList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetSyncSessionList", modifiers: "&&", def_value: None }]
constexpr NetSyncSessionList(NetSyncSessionList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetSyncSessionList(void* ptr) noexcept : ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::NetSyncSession>(ptr) {
}


  constexpr NetSyncSessionList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetSyncSessionList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetSyncSessionList& operator=(NetSyncSessionList&& o) noexcept = default;
  constexpr NetSyncSessionList& operator=(NetSyncSessionList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "a", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit NetSyncSessionList(::cordl_internals::intptr_t a) ;

/// @brief Method .ctor addr 0x25a14e4 size 0x23c virtual false final false
 void _ctor(::cordl_internals::intptr_t a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Models::NetSyncSessionList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::NetSyncSessionList, "Oculus.Platform.Models", "NetSyncSessionList");
