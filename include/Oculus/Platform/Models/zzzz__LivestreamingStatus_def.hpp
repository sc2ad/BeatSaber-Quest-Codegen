#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class LivestreamingStatus;
}
// Type: Oculus.Platform.Models::LivestreamingStatus
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13435))
// CS Name: Oculus.Platform.Models.LivestreamingStatus
class CORDL_TYPE LivestreamingStatus : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LivestreamingStatus() = default;

// Ctor Parameters [CppParam { name: "", ty: "LivestreamingStatus", modifiers: " const&", def_value: None }]
constexpr LivestreamingStatus(LivestreamingStatus const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LivestreamingStatus", modifiers: "&&", def_value: None }]
constexpr LivestreamingStatus(LivestreamingStatus&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LivestreamingStatus(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LivestreamingStatus& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LivestreamingStatus& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LivestreamingStatus& operator=(LivestreamingStatus&& o) noexcept = default;
  constexpr LivestreamingStatus& operator=(LivestreamingStatus const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_CommentsVisible, put=__set_CommentsVisible))  CommentsVisible;

constexpr void __set_CommentsVisible(bool value) ;

constexpr bool __get_CommentsVisible() const;

 bool __declspec(property(get=__get_IsPaused, put=__set_IsPaused))  IsPaused;

constexpr void __set_IsPaused(bool value) ;

constexpr bool __get_IsPaused() const;

 bool __declspec(property(get=__get_LivestreamingEnabled, put=__set_LivestreamingEnabled))  LivestreamingEnabled;

constexpr void __set_LivestreamingEnabled(bool value) ;

constexpr bool __get_LivestreamingEnabled() const;

 int32_t __declspec(property(get=__get_LivestreamingType, put=__set_LivestreamingType))  LivestreamingType;

constexpr void __set_LivestreamingType(int32_t value) ;

constexpr int32_t __get_LivestreamingType() const;

 bool __declspec(property(get=__get_MicEnabled, put=__set_MicEnabled))  MicEnabled;

constexpr void __set_MicEnabled(bool value) ;

constexpr bool __get_MicEnabled() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit LivestreamingStatus(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a0074 size 0xc8 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::LivestreamingStatus);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LivestreamingStatus, "Oculus.Platform.Models", "LivestreamingStatus");
