#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System::Diagnostics {
class Stopwatch;
}
// Forward declare root types
namespace GlobalNamespace {
class AsyncComputeOperation;
}
// Type: ::AsyncComputeOperation
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12621))
// CS Name: AsyncComputeOperation
class CORDL_TYPE AsyncComputeOperation : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AsyncComputeOperation() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncComputeOperation", modifiers: " const&", def_value: None }]
constexpr AsyncComputeOperation(AsyncComputeOperation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncComputeOperation", modifiers: "&&", def_value: None }]
constexpr AsyncComputeOperation(AsyncComputeOperation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsyncComputeOperation(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AsyncComputeOperation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsyncComputeOperation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsyncComputeOperation& operator=(AsyncComputeOperation&& o) noexcept = default;
  constexpr AsyncComputeOperation& operator=(AsyncComputeOperation const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__timeoutMs, put=__set__timeoutMs))  _timeoutMs;

constexpr void __set__timeoutMs(int32_t value) ;

constexpr int32_t __get__timeoutMs() const;

 ::System::Diagnostics::Stopwatch __declspec(property(get=__get__stopwatch, put=__set__stopwatch))  _stopwatch;

constexpr void __set__stopwatch(::System::Diagnostics::Stopwatch value) ;

constexpr ::System::Diagnostics::Stopwatch __get__stopwatch() const;


// Properties

 double_t __declspec(property(get=get_elapsedTime))  elapsedTime;

 bool __declspec(property(get=get_hasTimedOut))  hasTimedOut;


// Methods

/// @brief Method get_elapsedTime addr 0xd9c430 size 0x84 virtual false final false
 double_t get_elapsedTime() ;

/// @brief Method get_hasTimedOut addr 0xd9c4b4 size 0x30 virtual false final false
 bool get_hasTimedOut() ;

// Ctor Parameters [CppParam { name: "timeoutMs", ty: "int32_t", modifiers: "", def_value: None }]
explicit AsyncComputeOperation(int32_t timeoutMs) ;

/// @brief Method .ctor addr 0xd9c4e4 size 0x88 virtual false final false
 void _ctor(int32_t timeoutMs) ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final false
 void Execute(bool disposed) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::AsyncComputeOperation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AsyncComputeOperation, "", "AsyncComputeOperation");
