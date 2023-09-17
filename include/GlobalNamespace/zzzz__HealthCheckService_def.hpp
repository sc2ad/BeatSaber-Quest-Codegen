#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
class IHealthCheckService;
}
namespace System::Threading {
class Thread;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class IPollable;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System::Net {
class HttpListener;
}
// Forward declare root types
namespace GlobalNamespace {
class HealthCheckService;
}
// Type: ::HealthCheckService
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12715))
// CS Name: HealthCheckService
class CORDL_TYPE HealthCheckService : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IHealthCheckService
constexpr operator  ::GlobalNamespace::IHealthCheckService() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::IPollable
constexpr operator  ::GlobalNamespace::IPollable() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~HealthCheckService() = default;

// Ctor Parameters [CppParam { name: "", ty: "HealthCheckService", modifiers: " const&", def_value: None }]
constexpr HealthCheckService(HealthCheckService const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HealthCheckService", modifiers: "&&", def_value: None }]
constexpr HealthCheckService(HealthCheckService&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HealthCheckService(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HealthCheckService& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HealthCheckService& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HealthCheckService& operator=(HealthCheckService&& o) noexcept = default;
  constexpr HealthCheckService& operator=(HealthCheckService const& o) noexcept = default;
                


// Fields

/// @brief Field kTimeoutLengthMs offset 0
static constexpr int32_t  kTimeoutLengthMs{1000};

 int32_t __declspec(property(get=__get__port, put=__set__port))  _port;

constexpr void __set__port(int32_t value) ;

constexpr int32_t __get__port() const;

 ::System::Threading::Thread __declspec(property(get=__get__runThread, put=__set__runThread))  _runThread;

constexpr void __set__runThread(::System::Threading::Thread value) ;

constexpr ::System::Threading::Thread __get__runThread() const;

 bool __declspec(property(get=__get__disposed, put=__set__disposed))  _disposed;

constexpr void __set__disposed(bool value) ;

constexpr bool __get__disposed() const;

 ::System::Threading::ManualResetEvent __declspec(property(get=__get__manualResetEvent, put=__set__manualResetEvent))  _manualResetEvent;

constexpr void __set__manualResetEvent(::System::Threading::ManualResetEvent value) ;

constexpr ::System::Threading::ManualResetEvent __get__manualResetEvent() const;

 ::System::Net::HttpListener __declspec(property(get=__get__listener, put=__set__listener))  _listener;

constexpr void __set__listener(::System::Net::HttpListener value) ;

constexpr ::System::Net::HttpListener __get__listener() const;


// Methods

// Ctor Parameters [CppParam { name: "port", ty: "int32_t", modifiers: "", def_value: None }]
explicit HealthCheckService(int32_t port) ;

/// @brief Method .ctor addr 0xdaf44c size 0x104 virtual false final false
 void _ctor(int32_t port) ;

/// @brief Method Dispose addr 0xdaf550 size 0xa4 virtual true final true
 void Dispose() ;

/// @brief Method PollUpdate addr 0xdaf5f4 size 0x94 virtual true final true
 void PollUpdate() ;

/// @brief Method Run addr 0xdaf688 size 0x498 virtual false final false
 void Run() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::HealthCheckService);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthCheckService, "", "HealthCheckService");
