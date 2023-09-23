#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Bindings/zzzz__NativeMethodAttribute_def.hpp"
// Forward declare root types
namespace UnityEngine::Bindings {
class ThreadSafeAttribute;
}
// Type: UnityEngine.Bindings::ThreadSafeAttribute
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15873))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15882))
// CS Name: UnityEngine.Bindings.ThreadSafeAttribute
class CORDL_TYPE ThreadSafeAttribute : public UnityEngine::Bindings::NativeMethodAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ThreadSafeAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadSafeAttribute", modifiers: " const&", def_value: None }]
constexpr ThreadSafeAttribute(ThreadSafeAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadSafeAttribute", modifiers: "&&", def_value: None }]
constexpr ThreadSafeAttribute(ThreadSafeAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ThreadSafeAttribute(void* ptr) noexcept : UnityEngine::Bindings::NativeMethodAttribute(ptr) {
}


  constexpr ThreadSafeAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ThreadSafeAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ThreadSafeAttribute& operator=(ThreadSafeAttribute&& o) noexcept = default;
  constexpr ThreadSafeAttribute& operator=(ThreadSafeAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ThreadSafeAttribute() ;

/// @brief Method .ctor addr 0x2ba175c size 0x20 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Bindings
NEED_NO_BOX(UnityEngine::Bindings::ThreadSafeAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::ThreadSafeAttribute, "UnityEngine.Bindings", "ThreadSafeAttribute");
