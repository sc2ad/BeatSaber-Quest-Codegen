#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class LoadResourceFunction;
}
// Type: UnityEngine.UIElements::LoadResourceFunction
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6957))
// CS Name: UnityEngine.UIElements.LoadResourceFunction
class CORDL_TYPE LoadResourceFunction : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~LoadResourceFunction() = default;

// Ctor Parameters [CppParam { name: "", ty: "LoadResourceFunction", modifiers: " const&", def_value: None }]
constexpr LoadResourceFunction(LoadResourceFunction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LoadResourceFunction", modifiers: "&&", def_value: None }]
constexpr LoadResourceFunction(LoadResourceFunction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LoadResourceFunction(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr LoadResourceFunction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LoadResourceFunction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LoadResourceFunction& operator=(LoadResourceFunction&& o) noexcept = default;
  constexpr LoadResourceFunction& operator=(LoadResourceFunction const& o) noexcept = default;
                


// Methods

static UnityEngine::UIElements::LoadResourceFunction New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2c50cf0 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2c50dc8 size 0x14 virtual true final false
 UnityEngine::Object Invoke(::StringW pathName, System::Type type, float_t dpiScaling) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::LoadResourceFunction);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::LoadResourceFunction, "UnityEngine.UIElements", "LoadResourceFunction");
