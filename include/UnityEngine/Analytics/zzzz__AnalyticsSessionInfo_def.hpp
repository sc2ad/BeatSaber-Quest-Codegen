#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine::Analytics {
struct AnalyticsSessionState;
}
// Forward declare root types
namespace UnityEngine::Analytics {
class AnalyticsSessionInfo;
}
namespace UnityEngine::Analytics {
class UnityEngine__Analytics__AnalyticsSessionInfo__IdentityTokenChanged;
}
namespace UnityEngine::Analytics {
class UnityEngine__Analytics__AnalyticsSessionInfo__SessionStateChanged;
}
namespace {
// Type: ::SessionStateChanged
namespace UnityEngine::Analytics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15939))
// CS Name: UnityEngine.Analytics.AnalyticsSessionInfo::SessionStateChanged
class CORDL_TYPE UnityEngine__Analytics__AnalyticsSessionInfo__SessionStateChanged : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__Analytics__AnalyticsSessionInfo__SessionStateChanged() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Analytics__AnalyticsSessionInfo__SessionStateChanged", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Analytics__AnalyticsSessionInfo__SessionStateChanged(UnityEngine__Analytics__AnalyticsSessionInfo__SessionStateChanged const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Analytics__AnalyticsSessionInfo__SessionStateChanged", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Analytics__AnalyticsSessionInfo__SessionStateChanged(UnityEngine__Analytics__AnalyticsSessionInfo__SessionStateChanged&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Analytics__AnalyticsSessionInfo__SessionStateChanged(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__Analytics__AnalyticsSessionInfo__SessionStateChanged& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Analytics__AnalyticsSessionInfo__SessionStateChanged& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Analytics__AnalyticsSessionInfo__SessionStateChanged& operator=(UnityEngine__Analytics__AnalyticsSessionInfo__SessionStateChanged&& o) noexcept = default;
  constexpr UnityEngine__Analytics__AnalyticsSessionInfo__SessionStateChanged& operator=(UnityEngine__Analytics__AnalyticsSessionInfo__SessionStateChanged const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityEngine__Analytics__AnalyticsSessionInfo__SessionStateChanged(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2d429cc size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2d42a90 size 0x18 virtual true final false
 void Invoke(UnityEngine::Analytics::AnalyticsSessionState sessionState, int64_t sessionId, int64_t sessionElapsedTime, bool sessionChanged) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Analytics
// Type: ::IdentityTokenChanged
namespace UnityEngine::Analytics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15940))
// CS Name: UnityEngine.Analytics.AnalyticsSessionInfo::IdentityTokenChanged
class CORDL_TYPE UnityEngine__Analytics__AnalyticsSessionInfo__IdentityTokenChanged : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__Analytics__AnalyticsSessionInfo__IdentityTokenChanged() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Analytics__AnalyticsSessionInfo__IdentityTokenChanged", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Analytics__AnalyticsSessionInfo__IdentityTokenChanged(UnityEngine__Analytics__AnalyticsSessionInfo__IdentityTokenChanged const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Analytics__AnalyticsSessionInfo__IdentityTokenChanged", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Analytics__AnalyticsSessionInfo__IdentityTokenChanged(UnityEngine__Analytics__AnalyticsSessionInfo__IdentityTokenChanged&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Analytics__AnalyticsSessionInfo__IdentityTokenChanged(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__Analytics__AnalyticsSessionInfo__IdentityTokenChanged& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Analytics__AnalyticsSessionInfo__IdentityTokenChanged& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Analytics__AnalyticsSessionInfo__IdentityTokenChanged& operator=(UnityEngine__Analytics__AnalyticsSessionInfo__IdentityTokenChanged&& o) noexcept = default;
  constexpr UnityEngine__Analytics__AnalyticsSessionInfo__IdentityTokenChanged& operator=(UnityEngine__Analytics__AnalyticsSessionInfo__IdentityTokenChanged const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityEngine__Analytics__AnalyticsSessionInfo__IdentityTokenChanged(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2d42aa8 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2d42b7c size 0x14 virtual true final false
 void Invoke(::StringW token) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Analytics
// Type: UnityEngine.Analytics::AnalyticsSessionInfo
namespace UnityEngine::Analytics {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15941))
// CS Name: UnityEngine.Analytics.AnalyticsSessionInfo
class CORDL_TYPE AnalyticsSessionInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using IdentityTokenChanged = UnityEngine::Analytics::UnityEngine__Analytics__AnalyticsSessionInfo__IdentityTokenChanged;

using SessionStateChanged = UnityEngine::Analytics::UnityEngine__Analytics__AnalyticsSessionInfo__SessionStateChanged;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AnalyticsSessionInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnalyticsSessionInfo", modifiers: " const&", def_value: None }]
constexpr AnalyticsSessionInfo(AnalyticsSessionInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnalyticsSessionInfo", modifiers: "&&", def_value: None }]
constexpr AnalyticsSessionInfo(AnalyticsSessionInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnalyticsSessionInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AnalyticsSessionInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnalyticsSessionInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnalyticsSessionInfo& operator=(AnalyticsSessionInfo&& o) noexcept = default;
  constexpr AnalyticsSessionInfo& operator=(AnalyticsSessionInfo const& o) noexcept = default;
                


// Fields

static UnityEngine::Analytics::UnityEngine__Analytics__AnalyticsSessionInfo__SessionStateChanged __declspec(property(get=__get_sessionStateChanged, put=__set_sessionStateChanged))  sessionStateChanged;

static void __set_sessionStateChanged(UnityEngine::Analytics::UnityEngine__Analytics__AnalyticsSessionInfo__SessionStateChanged value) ;

static UnityEngine::Analytics::UnityEngine__Analytics__AnalyticsSessionInfo__SessionStateChanged __get_sessionStateChanged() ;

static UnityEngine::Analytics::UnityEngine__Analytics__AnalyticsSessionInfo__IdentityTokenChanged __declspec(property(get=__get_identityTokenChanged, put=__set_identityTokenChanged))  identityTokenChanged;

static void __set_identityTokenChanged(UnityEngine::Analytics::UnityEngine__Analytics__AnalyticsSessionInfo__IdentityTokenChanged value) ;

static UnityEngine::Analytics::UnityEngine__Analytics__AnalyticsSessionInfo__IdentityTokenChanged __get_identityTokenChanged() ;


// Methods

/// @brief Method CallSessionStateChanged addr 0x2d428c4 size 0x9c virtual false final false
static void CallSessionStateChanged(UnityEngine::Analytics::AnalyticsSessionState sessionState, int64_t sessionId, int64_t sessionElapsedTime, bool sessionChanged) ;

/// @brief Method CallIdentityTokenChanged addr 0x2d42960 size 0x6c virtual false final false
static void CallIdentityTokenChanged(::StringW token) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Analytics
NEED_NO_BOX(::UnityEngine::Analytics::AnalyticsSessionInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::AnalyticsSessionInfo, "UnityEngine.Analytics", "AnalyticsSessionInfo");
NEED_NO_BOX(::UnityEngine::Analytics::UnityEngine__Analytics__AnalyticsSessionInfo__IdentityTokenChanged);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::UnityEngine__Analytics__AnalyticsSessionInfo__IdentityTokenChanged, "UnityEngine.Analytics", "AnalyticsSessionInfo/IdentityTokenChanged");
NEED_NO_BOX(::UnityEngine::Analytics::UnityEngine__Analytics__AnalyticsSessionInfo__SessionStateChanged);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::UnityEngine__Analytics__AnalyticsSessionInfo__SessionStateChanged, "UnityEngine.Analytics", "AnalyticsSessionInfo/SessionStateChanged");
} // end anonymous namespace
