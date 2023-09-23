#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class OVROnCompleteListener;
}
// Type: ::OVROnCompleteListener
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14880))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8556))
// CS Name: OVROnCompleteListener
class CORDL_TYPE OVROnCompleteListener : public UnityEngine::AndroidJavaProxy {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OVROnCompleteListener() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVROnCompleteListener", modifiers: " const&", def_value: None }]
constexpr OVROnCompleteListener(OVROnCompleteListener const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVROnCompleteListener", modifiers: "&&", def_value: None }]
constexpr OVROnCompleteListener(OVROnCompleteListener&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVROnCompleteListener(void* ptr) noexcept : UnityEngine::AndroidJavaProxy(ptr) {
}


  constexpr OVROnCompleteListener& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVROnCompleteListener& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVROnCompleteListener& operator=(OVROnCompleteListener&& o) noexcept = default;
  constexpr OVROnCompleteListener& operator=(OVROnCompleteListener const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit OVROnCompleteListener() ;

/// @brief Method .ctor addr 0x25d01e0 size 0x70 virtual false final false
 void _ctor() ;

/// @brief Method onSuccess addr 0x0 size 0xffffffffffffffff virtual true final false
 void onSuccess() ;

/// @brief Method onFailure addr 0x0 size 0xffffffffffffffff virtual true final false
 void onFailure() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVROnCompleteListener);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVROnCompleteListener, "", "OVROnCompleteListener");
