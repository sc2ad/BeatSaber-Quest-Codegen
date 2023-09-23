#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
// Forward declare root types
namespace Oculus::Platform {
class Oculus__Platform__WindowsPlatform__UnityLogDelegate;
}
namespace Oculus::Platform {
class WindowsPlatform;
}
// Type: ::UnityLogDelegate
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13377))
// CS Name: Oculus.Platform.WindowsPlatform::UnityLogDelegate
class CORDL_TYPE Oculus__Platform__WindowsPlatform__UnityLogDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Oculus__Platform__WindowsPlatform__UnityLogDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "Oculus__Platform__WindowsPlatform__UnityLogDelegate", modifiers: " const&", def_value: None }]
constexpr Oculus__Platform__WindowsPlatform__UnityLogDelegate(Oculus__Platform__WindowsPlatform__UnityLogDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Oculus__Platform__WindowsPlatform__UnityLogDelegate", modifiers: "&&", def_value: None }]
constexpr Oculus__Platform__WindowsPlatform__UnityLogDelegate(Oculus__Platform__WindowsPlatform__UnityLogDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Oculus__Platform__WindowsPlatform__UnityLogDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Oculus__Platform__WindowsPlatform__UnityLogDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Oculus__Platform__WindowsPlatform__UnityLogDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Oculus__Platform__WindowsPlatform__UnityLogDelegate& operator=(Oculus__Platform__WindowsPlatform__UnityLogDelegate&& o) noexcept = default;
  constexpr Oculus__Platform__WindowsPlatform__UnityLogDelegate& operator=(Oculus__Platform__WindowsPlatform__UnityLogDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Oculus__Platform__WindowsPlatform__UnityLogDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x259ba84 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x259bb48 size 0x14 virtual true final false
 void Invoke(::cordl_internals::intptr_t tag, ::cordl_internals::intptr_t msg) ;

/// @brief Method BeginInvoke addr 0x259bb5c size 0x98 virtual true final false
 System::IAsyncResult BeginInvoke(::cordl_internals::intptr_t tag, ::cordl_internals::intptr_t msg, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x259bbf4 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: Oculus.Platform::WindowsPlatform
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13378))
// CS Name: Oculus.Platform.WindowsPlatform
class CORDL_TYPE WindowsPlatform : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using UnityLogDelegate = Oculus::Platform::Oculus__Platform__WindowsPlatform__UnityLogDelegate;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~WindowsPlatform() = default;

// Ctor Parameters [CppParam { name: "", ty: "WindowsPlatform", modifiers: " const&", def_value: None }]
constexpr WindowsPlatform(WindowsPlatform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WindowsPlatform", modifiers: "&&", def_value: None }]
constexpr WindowsPlatform(WindowsPlatform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WindowsPlatform(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WindowsPlatform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WindowsPlatform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WindowsPlatform& operator=(WindowsPlatform&& o) noexcept = default;
  constexpr WindowsPlatform& operator=(WindowsPlatform const& o) noexcept = default;
                


// Methods

/// @brief Method CPPLogCallback addr 0x259b724 size 0xd8 virtual false final false
 void CPPLogCallback(::cordl_internals::intptr_t tag, ::cordl_internals::intptr_t message) ;

/// @brief Method getCallbackPointer addr 0x259b7fc size 0x48 virtual false final false
 ::cordl_internals::intptr_t getCallbackPointer() ;

/// @brief Method Initialize addr 0x259b844 size 0xf4 virtual false final false
 bool Initialize(::StringW appId) ;

/// @brief Method AsyncInitialize addr 0x259b938 size 0x144 virtual false final false
 Oculus::Platform::Request_1<Oculus::Platform::Models::PlatformInitialize> AsyncInitialize(::StringW appId) ;

// Ctor Parameters []
explicit WindowsPlatform() ;

/// @brief Method .ctor addr 0x259ba7c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::Oculus__Platform__WindowsPlatform__UnityLogDelegate);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Oculus__Platform__WindowsPlatform__UnityLogDelegate, "Oculus.Platform", "WindowsPlatform/UnityLogDelegate");
NEED_NO_BOX(Oculus::Platform::WindowsPlatform);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::WindowsPlatform, "Oculus.Platform", "WindowsPlatform");
