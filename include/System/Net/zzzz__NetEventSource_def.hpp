#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventSource_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class FormattableString;
}
namespace System::Diagnostics::Tracing {
struct EventKeywords;
}
// Forward declare root types
namespace System::Net {
class NetEventSource;
}
namespace System::Net {
class System__Net__NetEventSource__Keywords;
}
// Type: ::Keywords
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7874))
// CS Name: System.Net.NetEventSource::Keywords
class CORDL_TYPE System__Net__NetEventSource__Keywords : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Net__NetEventSource__Keywords() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__NetEventSource__Keywords", modifiers: " const&", def_value: None }]
constexpr System__Net__NetEventSource__Keywords(System__Net__NetEventSource__Keywords const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__NetEventSource__Keywords", modifiers: "&&", def_value: None }]
constexpr System__Net__NetEventSource__Keywords(System__Net__NetEventSource__Keywords&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__NetEventSource__Keywords(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__NetEventSource__Keywords& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__NetEventSource__Keywords& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__NetEventSource__Keywords& operator=(System__Net__NetEventSource__Keywords&& o) noexcept = default;
  constexpr System__Net__NetEventSource__Keywords& operator=(System__Net__NetEventSource__Keywords const& o) noexcept = default;
                


// Fields

/// @brief Field Default offset 0
static System::Diagnostics::Tracing::EventKeywords const Default;

/// @brief Field Debug offset 0
static System::Diagnostics::Tracing::EventKeywords const Debug;

/// @brief Field EnterExit offset 0
static System::Diagnostics::Tracing::EventKeywords const EnterExit;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::NetEventSource
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3732))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7875))
// CS Name: System.Net.NetEventSource
class CORDL_TYPE NetEventSource : public System::Diagnostics::Tracing::EventSource {
public:
// Declarations
using Keywords = System::Net::System__Net__NetEventSource__Keywords;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~NetEventSource() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetEventSource", modifiers: " const&", def_value: None }]
constexpr NetEventSource(NetEventSource const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetEventSource", modifiers: "&&", def_value: None }]
constexpr NetEventSource(NetEventSource&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetEventSource(void* ptr) noexcept : System::Diagnostics::Tracing::EventSource(ptr) {
}


  constexpr NetEventSource& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetEventSource& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetEventSource& operator=(NetEventSource&& o) noexcept = default;
  constexpr NetEventSource& operator=(NetEventSource const& o) noexcept = default;
                


// Fields

static System::Net::NetEventSource __declspec(property(get=__get_Log, put=__set_Log))  Log;

static void __set_Log(System::Net::NetEventSource value) ;

static System::Net::NetEventSource __get_Log() ;


// Properties

static bool __declspec(property(get=get_IsEnabled))  IsEnabled;


// Methods

/// @brief Method Enter addr 0x27f77b4 size 0xf0 virtual false final false
static void Enter(::bs_hook::Il2CppWrapperType thisOrContextObject, System::FormattableString formattableString, ::StringW memberName) ;

/// @brief Method Enter addr 0x27f7d4c size 0xe8 virtual false final false
static void Enter(::bs_hook::Il2CppWrapperType thisOrContextObject, ::bs_hook::Il2CppWrapperType arg0, ::StringW memberName) ;

/// @brief Method Enter addr 0x27f8214 size 0x11c virtual false final false
static void Enter(::bs_hook::Il2CppWrapperType thisOrContextObject, ::bs_hook::Il2CppWrapperType arg0, ::bs_hook::Il2CppWrapperType arg1, ::bs_hook::Il2CppWrapperType arg2, ::StringW memberName) ;

/// @brief Method Enter addr 0x27f7cd0 size 0x7c virtual false final false
 void Enter(::StringW thisOrContextObject, ::StringW memberName, ::StringW parameters) ;

/// @brief Method Exit addr 0x27f8330 size 0xf0 virtual false final false
static void Exit(::bs_hook::Il2CppWrapperType thisOrContextObject, System::FormattableString formattableString, ::StringW memberName) ;

/// @brief Method Exit addr 0x27f849c size 0xd0 virtual false final false
static void Exit(::bs_hook::Il2CppWrapperType thisOrContextObject, ::bs_hook::Il2CppWrapperType arg0, ::StringW memberName) ;

/// @brief Method Exit addr 0x27f8420 size 0x7c virtual false final false
 void Exit(::StringW thisOrContextObject, ::StringW memberName, ::StringW result) ;

/// @brief Method Info addr 0x27f6920 size 0xf0 virtual false final false
static void Info(::bs_hook::Il2CppWrapperType thisOrContextObject, System::FormattableString formattableString, ::StringW memberName) ;

/// @brief Method Info addr 0x27f6a10 size 0xd0 virtual false final false
static void Info(::bs_hook::Il2CppWrapperType thisOrContextObject, ::bs_hook::Il2CppWrapperType message, ::StringW memberName) ;

/// @brief Method Info addr 0x27f856c size 0x7c virtual false final false
 void Info(::StringW thisOrContextObject, ::StringW memberName, ::StringW message) ;

/// @brief Method Error addr 0x27f85e8 size 0xd0 virtual false final false
static void Error(::bs_hook::Il2CppWrapperType thisOrContextObject, ::bs_hook::Il2CppWrapperType message, ::StringW memberName) ;

/// @brief Method ErrorMessage addr 0x27f86b8 size 0x7c virtual false final false
 void ErrorMessage(::StringW thisOrContextObject, ::StringW memberName, ::StringW message) ;

/// @brief Method Fail addr 0x27f6330 size 0xd0 virtual false final false
static void Fail(::bs_hook::Il2CppWrapperType thisOrContextObject, ::bs_hook::Il2CppWrapperType message, ::StringW memberName) ;

/// @brief Method CriticalFailure addr 0x27f8734 size 0x7c virtual false final false
 void CriticalFailure(::StringW thisOrContextObject, ::StringW memberName, ::StringW message) ;

/// @brief Method Associate addr 0x27f87b0 size 0xd0 virtual false final false
static void Associate(::bs_hook::Il2CppWrapperType first, ::bs_hook::Il2CppWrapperType second, ::StringW memberName) ;

/// @brief Method Associate addr 0x27f8880 size 0x88 virtual false final false
 void Associate(::StringW thisOrContextObject, ::StringW memberName, ::StringW first, ::StringW second) ;

/// @brief Method get_IsEnabled addr 0x27f68bc size 0x64 virtual false final false
static bool get_IsEnabled() ;

/// @brief Method IdOf addr 0x27f78a4 size 0xec virtual false final false
static ::StringW IdOf(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetHashCode addr 0x27f8b14 size 0x14 virtual false final false
static int32_t GetHashCode(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Format addr 0x27f7e34 size 0x3e0 virtual false final false
static ::bs_hook::Il2CppWrapperType Format(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Format addr 0x27f7990 size 0x340 virtual false final false
static ::StringW Format(System::FormattableString s) ;

/// @brief Method WriteEvent addr 0x27f8908 size 0x20c virtual false final false
 void WriteEvent(int32_t eventId, ::StringW arg1, ::StringW arg2, ::StringW arg3, ::StringW arg4) ;

// Ctor Parameters []
explicit NetEventSource() ;

/// @brief Method .ctor addr 0x27f8b28 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::NetEventSource);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetEventSource, "System.Net", "NetEventSource");
NEED_NO_BOX(System::Net::System__Net__NetEventSource__Keywords);
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__NetEventSource__Keywords, "System.Net", "NetEventSource/Keywords");
