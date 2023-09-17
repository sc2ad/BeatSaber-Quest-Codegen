#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace UnityEngineInternal::Input {
struct NativeInputUpdateType;
}
// Forward declare root types
namespace UnityEngineInternal::Input {
class NativeUpdateCallback;
}
// Type: UnityEngineInternal.Input::NativeUpdateCallback
namespace UnityEngineInternal::Input {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15953))
// CS Name: UnityEngineInternal.Input.NativeUpdateCallback
class CORDL_TYPE NativeUpdateCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~NativeUpdateCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeUpdateCallback", modifiers: " const&", def_value: None }]
constexpr NativeUpdateCallback(NativeUpdateCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeUpdateCallback", modifiers: "&&", def_value: None }]
constexpr NativeUpdateCallback(NativeUpdateCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeUpdateCallback(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr NativeUpdateCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeUpdateCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeUpdateCallback& operator=(NativeUpdateCallback&& o) noexcept = default;
  constexpr NativeUpdateCallback& operator=(NativeUpdateCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit NativeUpdateCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2b97a88 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2b97b4c size 0x14 virtual true final false
 void Invoke(::UnityEngineInternal::Input::NativeInputUpdateType updateType, void* buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngineInternal::Input
} // end anonymous namespace
NEED_NO_BOX(::UnityEngineInternal::Input::NativeUpdateCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::Input::NativeUpdateCallback, "UnityEngineInternal.Input", "NativeUpdateCallback");
