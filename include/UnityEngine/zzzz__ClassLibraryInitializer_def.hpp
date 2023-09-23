#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace UnityEngine {
class ClassLibraryInitializer;
}
// Type: UnityEngine::ClassLibraryInitializer
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10130))
// CS Name: UnityEngine.ClassLibraryInitializer
class CORDL_TYPE ClassLibraryInitializer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ClassLibraryInitializer() = default;

// Ctor Parameters [CppParam { name: "", ty: "ClassLibraryInitializer", modifiers: " const&", def_value: None }]
constexpr ClassLibraryInitializer(ClassLibraryInitializer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ClassLibraryInitializer", modifiers: "&&", def_value: None }]
constexpr ClassLibraryInitializer(ClassLibraryInitializer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ClassLibraryInitializer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ClassLibraryInitializer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ClassLibraryInitializer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ClassLibraryInitializer& operator=(ClassLibraryInitializer&& o) noexcept = default;
  constexpr ClassLibraryInitializer& operator=(ClassLibraryInitializer const& o) noexcept = default;
                


// Methods

/// @brief Method Init addr 0x2b55fb4 size 0x8 virtual false final false
static void Init() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::ClassLibraryInitializer);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ClassLibraryInitializer, "UnityEngine", "ClassLibraryInitializer");
