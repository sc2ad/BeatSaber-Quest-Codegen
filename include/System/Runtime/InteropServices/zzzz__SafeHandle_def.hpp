#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class SafeHandle;
}
// Type: System.Runtime.InteropServices::SafeHandle
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3347))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3328))
// CS Name: System.Runtime.InteropServices.SafeHandle
class CORDL_TYPE SafeHandle : public System::Runtime::ConstrainedExecution::CriticalFinalizerObject {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SafeHandle() = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeHandle", modifiers: " const&", def_value: None }]
constexpr SafeHandle(SafeHandle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeHandle", modifiers: "&&", def_value: None }]
constexpr SafeHandle(SafeHandle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SafeHandle(void* ptr) noexcept : System::Runtime::ConstrainedExecution::CriticalFinalizerObject(ptr) {
}


  constexpr SafeHandle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SafeHandle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SafeHandle& operator=(SafeHandle&& o) noexcept = default;
  constexpr SafeHandle& operator=(SafeHandle const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_handle, put=__set_handle))  handle;

constexpr void __set_handle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_handle() const;

 int32_t __declspec(property(get=__get__state, put=__set__state))  _state;

constexpr void __set__state(int32_t value) ;

constexpr int32_t __get__state() const;

 bool __declspec(property(get=__get__ownsHandle, put=__set__ownsHandle))  _ownsHandle;

constexpr void __set__ownsHandle(bool value) ;

constexpr bool __get__ownsHandle() const;

 bool __declspec(property(get=__get__fullyInitialized, put=__set__fullyInitialized))  _fullyInitialized;

constexpr void __set__fullyInitialized(bool value) ;

constexpr bool __get__fullyInitialized() const;

/// @brief Field RefCount_Mask offset 0
static constexpr int32_t  RefCount_Mask{2147483644};

/// @brief Field RefCount_One offset 0
static constexpr int32_t  RefCount_One{4};


// Properties

 bool __declspec(property(get=get_IsClosed))  IsClosed;

 bool __declspec(property(get=get_IsInvalid))  IsInvalid;


// Methods

static System::Runtime::InteropServices::SafeHandle New_ctor(::cordl_internals::intptr_t invalidHandleValue, bool ownsHandle) ;

/// @brief Method .ctor addr 0x236afe4 size 0x98 virtual false final false
 void _ctor(::cordl_internals::intptr_t invalidHandleValue, bool ownsHandle) ;

/// @brief Method Finalize addr 0x236b084 size 0xa0 virtual true final false
 void Finalize() ;

/// @brief Method SetHandle addr 0x236b124 size 0x8 virtual false final false
 void SetHandle(::cordl_internals::intptr_t handle) ;

/// @brief Method DangerousGetHandle addr 0x236b12c size 0x8 virtual false final false
 ::cordl_internals::intptr_t DangerousGetHandle() ;

/// @brief Method get_IsClosed addr 0x236b134 size 0xc virtual false final false
 bool get_IsClosed() ;

/// @brief Method get_IsInvalid addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsInvalid() ;

/// @brief Method Close addr 0x236b140 size 0x10 virtual false final false
 void Close() ;

/// @brief Method Dispose addr 0x236b150 size 0x10 virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x236b160 size 0x1c virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method ReleaseHandle addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ReleaseHandle() ;

/// @brief Method SetHandleAsInvalid addr 0x236b238 size 0x84 virtual false final false
 void SetHandleAsInvalid() ;

/// @brief Method DangerousAddRef addr 0x236a74c size 0xd0 virtual false final false
 void DangerousAddRef(ByRef<bool> success) ;

/// @brief Method DangerousRelease addr 0x236a8f8 size 0x8 virtual false final false
 void DangerousRelease() ;

/// @brief Method InternalDispose addr 0x236b17c size 0xa8 virtual false final false
 void InternalDispose() ;

/// @brief Method InternalFinalize addr 0x236b224 size 0x14 virtual false final false
 void InternalFinalize() ;

/// @brief Method DangerousReleaseInternal addr 0x236b2bc size 0x170 virtual false final false
 void DangerousReleaseInternal(bool dispose) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(System::Runtime::InteropServices::SafeHandle);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::SafeHandle, "System.Runtime.InteropServices", "SafeHandle");
