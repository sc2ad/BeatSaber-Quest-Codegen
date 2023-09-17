#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputDeviceExecuteCommandDelegate;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidSupport;
}
// Type: UnityEngine.InputSystem.Android::AndroidSupport
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6527))
// CS Name: UnityEngine.InputSystem.Android.AndroidSupport
class CORDL_TYPE AndroidSupport : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AndroidSupport() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidSupport", modifiers: " const&", def_value: None }]
constexpr AndroidSupport(AndroidSupport const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidSupport", modifiers: "&&", def_value: None }]
constexpr AndroidSupport(AndroidSupport&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidSupport(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AndroidSupport& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidSupport& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidSupport& operator=(AndroidSupport&& o) noexcept = default;
  constexpr AndroidSupport& operator=(AndroidSupport const& o) noexcept = default;
                


// Fields

/// @brief Field kAndroidInterface offset 0
static constexpr ::ConstString  kAndroidInterface{u"Android"};


// Methods

/// @brief Method Initialize addr 0x29530b8 size 0x8f4 virtual false final false
static void Initialize() ;

/// @brief Method OnFindLayoutForDevice addr 0x29539ac size 0x254 virtual false final false
static ::StringW OnFindLayoutForDevice(ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> description, ::StringW matchedLayout, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate executeCommandDelegate) ;

// Ctor Parameters []
explicit AndroidSupport() ;

/// @brief Method .ctor addr 0x2953cc0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidSupport);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidSupport, "UnityEngine.InputSystem.Android", "AndroidSupport");
