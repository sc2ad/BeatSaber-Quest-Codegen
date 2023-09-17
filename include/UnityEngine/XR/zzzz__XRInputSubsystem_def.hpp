#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/XR/zzzz__XRInputSubsystemDescriptor_def.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystem_1_def.hpp"
#include <cstdint>
namespace {
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR {
struct TrackingOriginModeFlags;
}
// Forward declare root types
namespace UnityEngine::XR {
class XRInputSubsystem;
}
// Type: UnityEngine.XR::XRInputSubsystem
namespace UnityEngine::XR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15579)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15849), inst: 3779 }), TypeDefinitionIndex(TypeDefinitionIndex(15849))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15581))
// CS Name: UnityEngine.XR.XRInputSubsystem
class CORDL_TYPE XRInputSubsystem : public ::UnityEngine::IntegratedSubsystem_1<::UnityEngine::XR::XRInputSubsystemDescriptor> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~XRInputSubsystem() = default;

// Ctor Parameters [CppParam { name: "", ty: "XRInputSubsystem", modifiers: " const&", def_value: None }]
constexpr XRInputSubsystem(XRInputSubsystem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XRInputSubsystem", modifiers: "&&", def_value: None }]
constexpr XRInputSubsystem(XRInputSubsystem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XRInputSubsystem(void* ptr) noexcept : ::UnityEngine::IntegratedSubsystem_1<::UnityEngine::XR::XRInputSubsystemDescriptor>(ptr) {
}


  constexpr XRInputSubsystem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XRInputSubsystem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XRInputSubsystem& operator=(XRInputSubsystem&& o) noexcept = default;
  constexpr XRInputSubsystem& operator=(XRInputSubsystem const& o) noexcept = default;
                


// Fields

 ::System::Action_1<::UnityEngine::XR::XRInputSubsystem> __declspec(property(get=__get_trackingOriginUpdated, put=__set_trackingOriginUpdated))  trackingOriginUpdated;

constexpr void __set_trackingOriginUpdated(::System::Action_1<::UnityEngine::XR::XRInputSubsystem> value) ;

constexpr ::System::Action_1<::UnityEngine::XR::XRInputSubsystem> __get_trackingOriginUpdated() const;

 ::System::Action_1<::UnityEngine::XR::XRInputSubsystem> __declspec(property(get=__get_boundaryChanged, put=__set_boundaryChanged))  boundaryChanged;

constexpr void __set_boundaryChanged(::System::Action_1<::UnityEngine::XR::XRInputSubsystem> value) ;

constexpr ::System::Action_1<::UnityEngine::XR::XRInputSubsystem> __get_boundaryChanged() const;

 ::System::Collections::Generic::List_1<uint64_t> __declspec(property(get=__get_m_DeviceIdsCache, put=__set_m_DeviceIdsCache))  m_DeviceIdsCache;

constexpr void __set_m_DeviceIdsCache(::System::Collections::Generic::List_1<uint64_t> value) ;

constexpr ::System::Collections::Generic::List_1<uint64_t> __get_m_DeviceIdsCache() const;


// Methods

/// @brief Method TryRecenter addr 0x2d39c5c size 0x3c virtual false final false
 bool TryRecenter() ;

/// @brief Method TrySetTrackingOriginMode addr 0x2d39c98 size 0x44 virtual false final false
 bool TrySetTrackingOriginMode(::UnityEngine::XR::TrackingOriginModeFlags origin) ;

/// @brief Method add_trackingOriginUpdated addr 0x2d39cdc size 0xb0 virtual false final false
 void add_trackingOriginUpdated(::System::Action_1<::UnityEngine::XR::XRInputSubsystem> value) ;

/// @brief Method remove_trackingOriginUpdated addr 0x2d39d8c size 0xb0 virtual false final false
 void remove_trackingOriginUpdated(::System::Action_1<::UnityEngine::XR::XRInputSubsystem> value) ;

/// @brief Method add_boundaryChanged addr 0x2d39e3c size 0xb0 virtual false final false
 void add_boundaryChanged(::System::Action_1<::UnityEngine::XR::XRInputSubsystem> value) ;

/// @brief Method remove_boundaryChanged addr 0x2d39eec size 0xb0 virtual false final false
 void remove_boundaryChanged(::System::Action_1<::UnityEngine::XR::XRInputSubsystem> value) ;

/// @brief Method InvokeTrackingOriginUpdatedEvent addr 0x2d39f9c size 0xc4 virtual false final false
static void InvokeTrackingOriginUpdatedEvent(::cordl_internals::intptr_t internalPtr) ;

/// @brief Method InvokeBoundaryChangedEvent addr 0x2d3a060 size 0xc4 virtual false final false
static void InvokeBoundaryChangedEvent(::cordl_internals::intptr_t internalPtr) ;

// Ctor Parameters []
explicit XRInputSubsystem() ;

/// @brief Method .ctor addr 0x2d3a124 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::XR::XRInputSubsystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRInputSubsystem, "UnityEngine.XR", "XRInputSubsystem");
