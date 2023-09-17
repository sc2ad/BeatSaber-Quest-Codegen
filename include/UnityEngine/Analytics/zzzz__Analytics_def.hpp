#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine::Analytics {
struct AnalyticsResult;
}
// Forward declare root types
namespace UnityEngine::Analytics {
class Analytics;
}
namespace {
// Type: UnityEngine.Analytics::Analytics
namespace UnityEngine::Analytics {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15936))
// CS Name: UnityEngine.Analytics.Analytics
class CORDL_TYPE Analytics : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Analytics() = default;

// Ctor Parameters [CppParam { name: "", ty: "Analytics", modifiers: " const&", def_value: None }]
constexpr Analytics(Analytics const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Analytics", modifiers: "&&", def_value: None }]
constexpr Analytics(Analytics&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Analytics(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Analytics& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Analytics& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Analytics& operator=(Analytics&& o) noexcept = default;
  constexpr Analytics& operator=(Analytics const& o) noexcept = default;
                


// Methods

/// @brief Method IsInitialized addr 0x2d424e8 size 0x28 virtual false final false
static bool IsInitialized() ;

/// @brief Method RegisterEventWithLimit addr 0x2d42510 size 0x8c virtual false final false
static UnityEngine::Analytics::AnalyticsResult RegisterEventWithLimit(::StringW eventName, int32_t maxEventPerHour, int32_t maxItems, ::StringW vendorKey, int32_t ver, ::StringW prefix, ::StringW assemblyInfo, bool notifyServer) ;

/// @brief Method SendEventWithLimit addr 0x2d4259c size 0x5c virtual false final false
static UnityEngine::Analytics::AnalyticsResult SendEventWithLimit(::StringW eventName, ::bs_hook::Il2CppWrapperType parameters, int32_t ver, ::StringW prefix) ;

/// @brief Method RegisterEvent addr 0x2d425f8 size 0x90 virtual false final false
static UnityEngine::Analytics::AnalyticsResult RegisterEvent(::StringW eventName, int32_t maxEventPerHour, int32_t maxItems, ::StringW vendorKey, ::StringW prefix) ;

/// @brief Method RegisterEvent addr 0x2d42688 size 0x124 virtual false final false
static UnityEngine::Analytics::AnalyticsResult RegisterEvent(::StringW eventName, int32_t maxEventPerHour, int32_t maxItems, ::StringW vendorKey, int32_t ver, ::StringW prefix, ::StringW assemblyInfo) ;

/// @brief Method SendEvent addr 0x2d427ac size 0x118 virtual false final false
static UnityEngine::Analytics::AnalyticsResult SendEvent(::StringW eventName, ::bs_hook::Il2CppWrapperType parameters, int32_t ver, ::StringW prefix) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Analytics
NEED_NO_BOX(::UnityEngine::Analytics::Analytics);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::Analytics, "UnityEngine.Analytics", "Analytics");
} // end anonymous namespace
