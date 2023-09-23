#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class IVerboseLogger;
}
namespace System {
class IDisposable;
}
namespace System::Diagnostics {
class Stopwatch;
}
// Forward declare root types
namespace GlobalNamespace {
class GenericLogger;
}
namespace GlobalNamespace {
class GlobalNamespace__GenericLogger__ScopedStopwatch;
}
// Type: ::ScopedStopwatch
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13741))
// CS Name: GenericLogger::ScopedStopwatch
class CORDL_TYPE GlobalNamespace__GenericLogger__ScopedStopwatch : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__GenericLogger__ScopedStopwatch() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GenericLogger__ScopedStopwatch", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GenericLogger__ScopedStopwatch(GlobalNamespace__GenericLogger__ScopedStopwatch const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GenericLogger__ScopedStopwatch", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GenericLogger__ScopedStopwatch(GlobalNamespace__GenericLogger__ScopedStopwatch&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GenericLogger__ScopedStopwatch(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__GenericLogger__ScopedStopwatch& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GenericLogger__ScopedStopwatch& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GenericLogger__ScopedStopwatch& operator=(GlobalNamespace__GenericLogger__ScopedStopwatch&& o) noexcept = default;
  constexpr GlobalNamespace__GenericLogger__ScopedStopwatch& operator=(GlobalNamespace__GenericLogger__ScopedStopwatch const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__processName, put=__set__processName))  _processName;

constexpr void __set__processName(::StringW value) ;

constexpr ::StringW __get__processName() const;

 System::Diagnostics::Stopwatch __declspec(property(get=__get__stopwatch, put=__set__stopwatch))  _stopwatch;

constexpr void __set__stopwatch(System::Diagnostics::Stopwatch value) ;

constexpr System::Diagnostics::Stopwatch __get__stopwatch() const;


// Methods

// Ctor Parameters [CppParam { name: "processName", ty: "::StringW", modifiers: "", def_value: None }]
explicit GlobalNamespace__GenericLogger__ScopedStopwatch(::StringW processName) ;

/// @brief Method .ctor addr 0x1f7226c size 0xb8 virtual false final false
 void _ctor(::StringW processName) ;

/// @brief Method Dispose addr 0x1f72324 size 0xc8 virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GenericLogger
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13742))
// CS Name: GenericLogger
class CORDL_TYPE GenericLogger : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ScopedStopwatch = GlobalNamespace::GlobalNamespace__GenericLogger__ScopedStopwatch;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericLogger() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericLogger", modifiers: " const&", def_value: None }]
constexpr GenericLogger(GenericLogger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericLogger", modifiers: "&&", def_value: None }]
constexpr GenericLogger(GenericLogger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericLogger(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GenericLogger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericLogger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericLogger& operator=(GenericLogger&& o) noexcept = default;
  constexpr GenericLogger& operator=(GenericLogger const& o) noexcept = default;
                


// Fields

/// @brief Field kVerboseLogDefineSymbol offset 0
static constexpr ::ConstString  kVerboseLogDefineSymbol{u"VERBOSE_LOGGING"};


// Methods

/// @brief Method Format addr 0x1f71fc4 size 0xec virtual false final false
static ::StringW Format(GlobalNamespace::IVerboseLogger logger, ::StringW message) ;

/// @brief Method Log addr 0x1f720b0 size 0x78 virtual false final false
static void Log(GlobalNamespace::IVerboseLogger logger, ::StringW message) ;

/// @brief Method Log addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void Log(T logger, ::StringW message) ;

/// @brief Method LogWithTimestamp addr 0x1f72128 size 0x144 virtual false final false
static void LogWithTimestamp(::StringW message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GenericLogger);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GenericLogger, "", "GenericLogger");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GenericLogger__ScopedStopwatch);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GenericLogger__ScopedStopwatch, "", "GenericLogger/ScopedStopwatch");
