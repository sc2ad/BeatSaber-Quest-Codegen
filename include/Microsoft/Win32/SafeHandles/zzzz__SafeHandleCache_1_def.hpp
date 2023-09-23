#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Runtime::InteropServices {
class SafeHandle;
}
// Forward declare root types
namespace Microsoft::Win32::SafeHandles {
template<typename T>
class SafeHandleCache_1;
}
namespace Microsoft::Win32::SafeHandles {
template<::cordl_internals::il2cpp_reference_type T>
class SafeHandleCache_1<T>;
}
// Type: Microsoft.Win32.SafeHandles::SafeHandleCache`1
// Type: Microsoft.Win32.SafeHandles::SafeHandleCache`1
namespace Microsoft::Win32::SafeHandles {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2297))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2297), inst: 2 })
// CS Name: Microsoft.Win32.SafeHandles.SafeHandleCache`1
class CORDL_TYPE SafeHandleCache_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SafeHandleCache_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeHandleCache_1", modifiers: " const&", def_value: None }]
constexpr SafeHandleCache_1(SafeHandleCache_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeHandleCache_1", modifiers: "&&", def_value: None }]
constexpr SafeHandleCache_1(SafeHandleCache_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SafeHandleCache_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SafeHandleCache_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SafeHandleCache_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SafeHandleCache_1& operator=(SafeHandleCache_1&& o) noexcept = default;
  constexpr SafeHandleCache_1& operator=(SafeHandleCache_1 const& o) noexcept = default;
                


// Fields

static T __declspec(property(get=__get_s_invalidHandle, put=__set_s_invalidHandle))  s_invalidHandle;

static void __set_s_invalidHandle(T value) ;

static T __get_s_invalidHandle() ;


// Methods

/// @brief Method IsCachedInvalidHandle addr 0x0 size 0xffffffffffffffff virtual false final false
static bool IsCachedInvalidHandle(System::Runtime::InteropServices::SafeHandle handle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Microsoft::Win32::SafeHandles
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Microsoft::Win32::SafeHandles::SafeHandleCache_1, "Microsoft.Win32.SafeHandles", "SafeHandleCache`1");
