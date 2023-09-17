#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace {
namespace System {
class InvalidOperationException;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class SafeBuffer;
}
// Type: System.Runtime.InteropServices::SafeBuffer
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2301))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3303))
// CS Name: System.Runtime.InteropServices.SafeBuffer
class CORDL_TYPE SafeBuffer : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SafeBuffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeBuffer", modifiers: " const&", def_value: None }]
constexpr SafeBuffer(SafeBuffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeBuffer", modifiers: "&&", def_value: None }]
constexpr SafeBuffer(SafeBuffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SafeBuffer(void* ptr) noexcept : ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid(ptr) {
}


  constexpr SafeBuffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SafeBuffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SafeBuffer& operator=(SafeBuffer&& o) noexcept = default;
  constexpr SafeBuffer& operator=(SafeBuffer const& o) noexcept = default;
                


// Fields

static ::cordl_internals::uintptr_t __declspec(property(get=__get_Uninitialized, put=__set_Uninitialized))  Uninitialized;

static void __set_Uninitialized(::cordl_internals::uintptr_t value) ;

static ::cordl_internals::uintptr_t __get_Uninitialized() ;

 ::cordl_internals::uintptr_t __declspec(property(get=__get__numBytes, put=__set__numBytes))  _numBytes;

constexpr void __set__numBytes(::cordl_internals::uintptr_t value) ;

constexpr ::cordl_internals::uintptr_t __get__numBytes() const;


// Methods

/// @brief Method AcquirePointer addr 0x236a5d0 size 0x108 virtual false final false
 void AcquirePointer(ByRef<void*> pointer) ;

/// @brief Method ReleasePointer addr 0x236a81c size 0xdc virtual false final false
 void ReleasePointer() ;

/// @brief Method NotInitialized addr 0x236a6d8 size 0x74 virtual false final false
static ::System::InvalidOperationException NotInitialized() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::InteropServices::SafeBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::SafeBuffer, "System.Runtime.InteropServices", "SafeBuffer");
