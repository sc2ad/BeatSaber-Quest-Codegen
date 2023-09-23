#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__AndroidJavaObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
class AndroidJavaClass;
}
// Type: UnityEngine::AndroidJavaClass
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14881))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14882))
// CS Name: UnityEngine.AndroidJavaClass
class CORDL_TYPE AndroidJavaClass : public UnityEngine::AndroidJavaObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AndroidJavaClass() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJavaClass", modifiers: " const&", def_value: None }]
constexpr AndroidJavaClass(AndroidJavaClass const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJavaClass", modifiers: "&&", def_value: None }]
constexpr AndroidJavaClass(AndroidJavaClass&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidJavaClass(void* ptr) noexcept : UnityEngine::AndroidJavaObject(ptr) {
}


  constexpr AndroidJavaClass& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidJavaClass& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidJavaClass& operator=(AndroidJavaClass&& o) noexcept = default;
  constexpr AndroidJavaClass& operator=(AndroidJavaClass const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "className", ty: "::StringW", modifiers: "", def_value: None }]
explicit AndroidJavaClass(::StringW className) ;

/// @brief Method .ctor addr 0x2b0e410 size 0x2c virtual false final false
 void _ctor(::StringW className) ;

/// @brief Method _AndroidJavaClass addr 0x2b11a64 size 0xc0 virtual false final false
 void _AndroidJavaClass(::StringW className) ;

// Ctor Parameters [CppParam { name: "jclass", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit AndroidJavaClass(::cordl_internals::intptr_t jclass) ;

/// @brief Method .ctor addr 0x2b11278 size 0xf4 virtual false final false
 void _ctor(::cordl_internals::intptr_t jclass) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::AndroidJavaClass);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AndroidJavaClass, "UnityEngine", "AndroidJavaClass");
