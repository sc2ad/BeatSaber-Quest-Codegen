#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace UnityEngine {
class Transform;
}
namespace RootMotion {
class RootMotion__Warning__Logger;
}
// Forward declare root types
namespace RootMotion {
class RootMotion__Warning__Logger;
}
namespace RootMotion {
class Warning;
}
// Type: ::Logger
namespace RootMotion {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12444))
// CS Name: RootMotion.Warning::Logger
class CORDL_TYPE RootMotion__Warning__Logger : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~RootMotion__Warning__Logger() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__Warning__Logger", modifiers: " const&", def_value: None }]
constexpr RootMotion__Warning__Logger(RootMotion__Warning__Logger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__Warning__Logger", modifiers: "&&", def_value: None }]
constexpr RootMotion__Warning__Logger(RootMotion__Warning__Logger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__Warning__Logger(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr RootMotion__Warning__Logger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__Warning__Logger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__Warning__Logger& operator=(RootMotion__Warning__Logger&& o) noexcept = default;
  constexpr RootMotion__Warning__Logger& operator=(RootMotion__Warning__Logger const& o) noexcept = default;
                


// Methods

static RootMotion::RootMotion__Warning__Logger New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x11b6710 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x11b67e4 size 0x14 virtual true final false
 void Invoke(::StringW message) ;

/// @brief Method BeginInvoke addr 0x11b67f8 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW message, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x11b6818 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion
// Type: RootMotion::Warning
namespace RootMotion {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12445))
// CS Name: RootMotion.Warning
class CORDL_TYPE Warning : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Logger = RootMotion::RootMotion__Warning__Logger;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Warning() = default;

// Ctor Parameters [CppParam { name: "", ty: "Warning", modifiers: " const&", def_value: None }]
constexpr Warning(Warning const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Warning", modifiers: "&&", def_value: None }]
constexpr Warning(Warning&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Warning(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Warning& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Warning& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Warning& operator=(Warning&& o) noexcept = default;
  constexpr Warning& operator=(Warning const& o) noexcept = default;
                


// Fields

static bool __declspec(property(get=__get_logged, put=__set_logged))  logged;

static void __set_logged(bool value) ;

static bool __get_logged() ;


// Methods

/// @brief Method Log addr 0x11b6678 size 0x98 virtual false final false
static void Log(::StringW message, RootMotion::RootMotion__Warning__Logger logger, bool logInEditMode) ;

/// @brief Method Log addr 0x11b0918 size 0xb4 virtual false final false
static void Log(::StringW message, UnityEngine::Transform context, bool logInEditMode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion
NEED_NO_BOX(RootMotion::RootMotion__Warning__Logger);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::RootMotion__Warning__Logger, "RootMotion", "Warning/Logger");
NEED_NO_BOX(RootMotion::Warning);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::Warning, "RootMotion", "Warning");
