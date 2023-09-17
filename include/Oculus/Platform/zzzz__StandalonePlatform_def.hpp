#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
namespace Oculus::Platform {
struct InitConfigOptions;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace Oculus::Platform {
class StandalonePlatform;
}
namespace Oculus::Platform {
class ____Oculus__Platform__StandalonePlatform__UnityLogDelegate;
}
// Type: ::UnityLogDelegate
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13361))
// CS Name: Oculus.Platform.StandalonePlatform::UnityLogDelegate
class CORDL_TYPE ____Oculus__Platform__StandalonePlatform__UnityLogDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____Oculus__Platform__StandalonePlatform__UnityLogDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Oculus__Platform__StandalonePlatform__UnityLogDelegate", modifiers: " const&", def_value: None }]
constexpr ____Oculus__Platform__StandalonePlatform__UnityLogDelegate(____Oculus__Platform__StandalonePlatform__UnityLogDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Oculus__Platform__StandalonePlatform__UnityLogDelegate", modifiers: "&&", def_value: None }]
constexpr ____Oculus__Platform__StandalonePlatform__UnityLogDelegate(____Oculus__Platform__StandalonePlatform__UnityLogDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Oculus__Platform__StandalonePlatform__UnityLogDelegate(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____Oculus__Platform__StandalonePlatform__UnityLogDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Oculus__Platform__StandalonePlatform__UnityLogDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Oculus__Platform__StandalonePlatform__UnityLogDelegate& operator=(____Oculus__Platform__StandalonePlatform__UnityLogDelegate&& o) noexcept = default;
  constexpr ____Oculus__Platform__StandalonePlatform__UnityLogDelegate& operator=(____Oculus__Platform__StandalonePlatform__UnityLogDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____Oculus__Platform__StandalonePlatform__UnityLogDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x259a1f4 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x259a2b8 size 0x14 virtual true final false
 void Invoke(::cordl_internals::intptr_t tag, ::cordl_internals::intptr_t msg) ;

/// @brief Method BeginInvoke addr 0x259a2cc size 0x98 virtual true final false
 ::System::IAsyncResult BeginInvoke(::cordl_internals::intptr_t tag, ::cordl_internals::intptr_t msg, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x259a364 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: Oculus.Platform::StandalonePlatform
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13362))
// CS Name: Oculus.Platform.StandalonePlatform
class CORDL_TYPE StandalonePlatform : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using UnityLogDelegate = ::Oculus::Platform::____Oculus__Platform__StandalonePlatform__UnityLogDelegate;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StandalonePlatform() = default;

// Ctor Parameters [CppParam { name: "", ty: "StandalonePlatform", modifiers: " const&", def_value: None }]
constexpr StandalonePlatform(StandalonePlatform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StandalonePlatform", modifiers: "&&", def_value: None }]
constexpr StandalonePlatform(StandalonePlatform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StandalonePlatform(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StandalonePlatform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StandalonePlatform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StandalonePlatform& operator=(StandalonePlatform&& o) noexcept = default;
  constexpr StandalonePlatform& operator=(StandalonePlatform const& o) noexcept = default;
                


// Methods

/// @brief Method InitializeInEditor addr 0x2599f7c size 0x128 virtual false final false
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize> InitializeInEditor() ;

/// @brief Method AsyncInitialize addr 0x2598aec size 0xf0 virtual false final false
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize> AsyncInitialize(uint64_t appID, ::StringW accessToken) ;

/// @brief Method AsyncInitializeWithAccessTokenAndOptions addr 0x259a0a4 size 0x150 virtual false final false
 ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize> AsyncInitializeWithAccessTokenAndOptions(::StringW appId, ::StringW accessToken, ::System::Collections::Generic::Dictionary_2<::Oculus::Platform::InitConfigOptions,bool> initConfigOptions) ;

// Ctor Parameters []
explicit StandalonePlatform() ;

/// @brief Method .ctor addr 0x2598ae4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::StandalonePlatform);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::StandalonePlatform, "Oculus.Platform", "StandalonePlatform");
NEED_NO_BOX(::Oculus::Platform::____Oculus__Platform__StandalonePlatform__UnityLogDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::____Oculus__Platform__StandalonePlatform__UnityLogDelegate, "Oculus.Platform", "StandalonePlatform/UnityLogDelegate");
