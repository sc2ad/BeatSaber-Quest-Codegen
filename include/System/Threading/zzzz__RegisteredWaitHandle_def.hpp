#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Threading {
class WaitOrTimerCallback;
}
namespace System {
struct TimeSpan;
}
namespace System::Threading {
class WaitHandle;
}
namespace System::Threading {
class ManualResetEvent;
}
// Forward declare root types
namespace System::Threading {
class RegisteredWaitHandle;
}
// Type: System.Threading::RegisteredWaitHandle
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2745))
// CS Name: System.Threading.RegisteredWaitHandle
class CORDL_TYPE RegisteredWaitHandle : public System::MarshalByRefObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~RegisteredWaitHandle() = default;

// Ctor Parameters [CppParam { name: "", ty: "RegisteredWaitHandle", modifiers: " const&", def_value: None }]
constexpr RegisteredWaitHandle(RegisteredWaitHandle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RegisteredWaitHandle", modifiers: "&&", def_value: None }]
constexpr RegisteredWaitHandle(RegisteredWaitHandle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RegisteredWaitHandle(void* ptr) noexcept : System::MarshalByRefObject(ptr) {
}


  constexpr RegisteredWaitHandle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RegisteredWaitHandle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RegisteredWaitHandle& operator=(RegisteredWaitHandle&& o) noexcept = default;
  constexpr RegisteredWaitHandle& operator=(RegisteredWaitHandle const& o) noexcept = default;
                


// Fields

 System::Threading::WaitHandle __declspec(property(get=__get__waitObject, put=__set__waitObject))  _waitObject;

constexpr void __set__waitObject(System::Threading::WaitHandle value) ;

constexpr System::Threading::WaitHandle __get__waitObject() const;

 System::Threading::WaitOrTimerCallback __declspec(property(get=__get__callback, put=__set__callback))  _callback;

constexpr void __set__callback(System::Threading::WaitOrTimerCallback value) ;

constexpr System::Threading::WaitOrTimerCallback __get__callback() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__state, put=__set__state))  _state;

constexpr void __set__state(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__state() const;

 System::Threading::WaitHandle __declspec(property(get=__get__finalEvent, put=__set__finalEvent))  _finalEvent;

constexpr void __set__finalEvent(System::Threading::WaitHandle value) ;

constexpr System::Threading::WaitHandle __get__finalEvent() const;

 System::Threading::ManualResetEvent __declspec(property(get=__get__cancelEvent, put=__set__cancelEvent))  _cancelEvent;

constexpr void __set__cancelEvent(System::Threading::ManualResetEvent value) ;

constexpr System::Threading::ManualResetEvent __get__cancelEvent() const;

 System::TimeSpan __declspec(property(get=__get__timeout, put=__set__timeout))  _timeout;

constexpr void __set__timeout(System::TimeSpan value) ;

constexpr System::TimeSpan __get__timeout() const;

 int32_t __declspec(property(get=__get__callsInProcess, put=__set__callsInProcess))  _callsInProcess;

constexpr void __set__callsInProcess(int32_t value) ;

constexpr int32_t __get__callsInProcess() const;

 bool __declspec(property(get=__get__executeOnlyOnce, put=__set__executeOnlyOnce))  _executeOnlyOnce;

constexpr void __set__executeOnlyOnce(bool value) ;

constexpr bool __get__executeOnlyOnce() const;

 bool __declspec(property(get=__get__unregistered, put=__set__unregistered))  _unregistered;

constexpr void __set__unregistered(bool value) ;

constexpr bool __get__unregistered() const;


// Methods

static System::Threading::RegisteredWaitHandle New_ctor(System::Threading::WaitHandle waitObject, System::Threading::WaitOrTimerCallback callback, ::bs_hook::Il2CppWrapperType state, System::TimeSpan timeout, bool executeOnlyOnce) ;

/// @brief Method .ctor addr 0x24af278 size 0xb4 virtual false final false
 void _ctor(System::Threading::WaitHandle waitObject, System::Threading::WaitOrTimerCallback callback, ::bs_hook::Il2CppWrapperType state, System::TimeSpan timeout, bool executeOnlyOnce) ;

/// @brief Method Wait addr 0x24b1be8 size 0x530 virtual false final false
 void Wait(::bs_hook::Il2CppWrapperType state) ;

/// @brief Method DoCallBack addr 0x24b2118 size 0x104 virtual false final false
 void DoCallBack(::bs_hook::Il2CppWrapperType timedOut) ;

/// @brief Method Unregister addr 0x24b221c size 0xf4 virtual false final false
 bool Unregister(System::Threading::WaitHandle waitObject) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(System::Threading::RegisteredWaitHandle);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::RegisteredWaitHandle, "System.Threading", "RegisteredWaitHandle");
