#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Assets::OVR::Scripts {
class FixMethodDelegate;
}
// Type: Assets.OVR.Scripts::FixMethodDelegate
namespace Assets::OVR::Scripts {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9515))
// CS Name: Assets.OVR.Scripts.FixMethodDelegate
class CORDL_TYPE FixMethodDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~FixMethodDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "FixMethodDelegate", modifiers: " const&", def_value: None }]
constexpr FixMethodDelegate(FixMethodDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FixMethodDelegate", modifiers: "&&", def_value: None }]
constexpr FixMethodDelegate(FixMethodDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FixMethodDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr FixMethodDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FixMethodDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FixMethodDelegate& operator=(FixMethodDelegate&& o) noexcept = default;
  constexpr FixMethodDelegate& operator=(FixMethodDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit FixMethodDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x266a998 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x266aac8 size 0x18 virtual true final false
 void Invoke(UnityEngine::Object obj, bool isLastInSet, int32_t selectedIndex) ;

/// @brief Method BeginInvoke addr 0x266aae0 size 0xc4 virtual true final false
 System::IAsyncResult BeginInvoke(UnityEngine::Object obj, bool isLastInSet, int32_t selectedIndex, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x266aba4 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Assets::OVR::Scripts
NEED_NO_BOX(Assets::OVR::Scripts::FixMethodDelegate);
DEFINE_IL2CPP_ARG_TYPE(Assets::OVR::Scripts::FixMethodDelegate, "Assets.OVR.Scripts", "FixMethodDelegate");
