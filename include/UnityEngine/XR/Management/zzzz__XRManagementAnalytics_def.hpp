#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::XR::Management {
struct UnityEngine__XR__Management__XRManagementAnalytics__BuildEvent;
}
// Forward declare root types
namespace UnityEngine::XR::Management {
class XRManagementAnalytics;
}
namespace UnityEngine::XR::Management {
struct UnityEngine__XR__Management__XRManagementAnalytics__BuildEvent;
}
// Type: ::BuildEvent
namespace UnityEngine::XR::Management {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15893))
// CS Name: UnityEngine.XR.Management.XRManagementAnalytics::BuildEvent
struct CORDL_TYPE UnityEngine__XR__Management__XRManagementAnalytics__BuildEvent : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "buildGuid", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "buildTarget", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "buildTargetGroup", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "assigned_loaders", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }]
constexpr UnityEngine__XR__Management__XRManagementAnalytics__BuildEvent(::StringW buildGuid, ::StringW buildTarget, ::StringW buildTargetGroup, ::ArrayW<::StringW> assigned_loaders) noexcept;


                    constexpr UnityEngine__XR__Management__XRManagementAnalytics__BuildEvent(UnityEngine__XR__Management__XRManagementAnalytics__BuildEvent const&) = default;
                    constexpr UnityEngine__XR__Management__XRManagementAnalytics__BuildEvent(UnityEngine__XR__Management__XRManagementAnalytics__BuildEvent&&) = default;
                    constexpr UnityEngine__XR__Management__XRManagementAnalytics__BuildEvent& operator=(UnityEngine__XR__Management__XRManagementAnalytics__BuildEvent const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__XR__Management__XRManagementAnalytics__BuildEvent& operator=(UnityEngine__XR__Management__XRManagementAnalytics__BuildEvent&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__Management__XRManagementAnalytics__BuildEvent(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_buildGuid, put=__set_buildGuid))  buildGuid;

constexpr void __set_buildGuid(::StringW value) ;

constexpr ::StringW __get_buildGuid() const;

 ::StringW __declspec(property(get=__get_buildTarget, put=__set_buildTarget))  buildTarget;

constexpr void __set_buildTarget(::StringW value) ;

constexpr ::StringW __get_buildTarget() const;

 ::StringW __declspec(property(get=__get_buildTargetGroup, put=__set_buildTargetGroup))  buildTargetGroup;

constexpr void __set_buildTargetGroup(::StringW value) ;

constexpr ::StringW __get_buildTargetGroup() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_assigned_loaders, put=__set_assigned_loaders))  assigned_loaders;

constexpr void __set_assigned_loaders(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_assigned_loaders() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Management
// Type: UnityEngine.XR.Management::XRManagementAnalytics
namespace UnityEngine::XR::Management {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15894))
// CS Name: UnityEngine.XR.Management.XRManagementAnalytics
class CORDL_TYPE XRManagementAnalytics : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using BuildEvent = UnityEngine::XR::Management::UnityEngine__XR__Management__XRManagementAnalytics__BuildEvent;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XRManagementAnalytics() = default;

// Ctor Parameters [CppParam { name: "", ty: "XRManagementAnalytics", modifiers: " const&", def_value: None }]
constexpr XRManagementAnalytics(XRManagementAnalytics const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XRManagementAnalytics", modifiers: "&&", def_value: None }]
constexpr XRManagementAnalytics(XRManagementAnalytics&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XRManagementAnalytics(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XRManagementAnalytics& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XRManagementAnalytics& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XRManagementAnalytics& operator=(XRManagementAnalytics&& o) noexcept = default;
  constexpr XRManagementAnalytics& operator=(XRManagementAnalytics const& o) noexcept = default;
                


// Fields

/// @brief Field kMaxEventsPerHour offset 0
static constexpr int32_t  kMaxEventsPerHour{1000};

/// @brief Field kMaxNumberOfElements offset 0
static constexpr int32_t  kMaxNumberOfElements{1000};

/// @brief Field kVendorKey offset 0
static constexpr ::ConstString  kVendorKey{u"unity.xrmanagement"};

/// @brief Field kEventBuild offset 0
static constexpr ::ConstString  kEventBuild{u"xrmanagment_build"};


// Methods

/// @brief Method Initialize addr 0x2addc6c size 0x8 virtual false final false
static bool Initialize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Management
NEED_NO_BOX(UnityEngine::XR::Management::XRManagementAnalytics);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::Management::XRManagementAnalytics, "UnityEngine.XR.Management", "XRManagementAnalytics");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::Management::UnityEngine__XR__Management__XRManagementAnalytics__BuildEvent, "UnityEngine.XR.Management", "XRManagementAnalytics/BuildEvent");
