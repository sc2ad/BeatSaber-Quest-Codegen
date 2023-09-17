#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Scripting/zzzz__PreserveAttribute_def.hpp"
namespace {
namespace UnityEngine {
struct RuntimeInitializeLoadType;
}
// Forward declare root types
namespace UnityEngine {
class RuntimeInitializeOnLoadMethodAttribute;
}
// Type: UnityEngine::RuntimeInitializeOnLoadMethodAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10253))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10137))
// CS Name: UnityEngine.RuntimeInitializeOnLoadMethodAttribute
class CORDL_TYPE RuntimeInitializeOnLoadMethodAttribute : public ::UnityEngine::Scripting::PreserveAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RuntimeInitializeOnLoadMethodAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeInitializeOnLoadMethodAttribute", modifiers: " const&", def_value: None }]
constexpr RuntimeInitializeOnLoadMethodAttribute(RuntimeInitializeOnLoadMethodAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeInitializeOnLoadMethodAttribute", modifiers: "&&", def_value: None }]
constexpr RuntimeInitializeOnLoadMethodAttribute(RuntimeInitializeOnLoadMethodAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RuntimeInitializeOnLoadMethodAttribute(void* ptr) noexcept : ::UnityEngine::Scripting::PreserveAttribute(ptr) {
}


  constexpr RuntimeInitializeOnLoadMethodAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RuntimeInitializeOnLoadMethodAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RuntimeInitializeOnLoadMethodAttribute& operator=(RuntimeInitializeOnLoadMethodAttribute&& o) noexcept = default;
  constexpr RuntimeInitializeOnLoadMethodAttribute& operator=(RuntimeInitializeOnLoadMethodAttribute const& o) noexcept = default;
                


// Fields

 ::UnityEngine::RuntimeInitializeLoadType __declspec(property(get=__get_m_LoadType, put=__set_m_LoadType))  m_LoadType;

constexpr void __set_m_LoadType(::UnityEngine::RuntimeInitializeLoadType value) ;

constexpr ::UnityEngine::RuntimeInitializeLoadType __get_m_LoadType() const;


// Properties

 ::UnityEngine::RuntimeInitializeLoadType __declspec(property(put=set_loadType))  loadType;


// Methods

// Ctor Parameters []
explicit RuntimeInitializeOnLoadMethodAttribute() ;

/// @brief Method .ctor addr 0x2b56874 size 0x1c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "loadType", ty: "::UnityEngine::RuntimeInitializeLoadType", modifiers: "", def_value: None }]
explicit RuntimeInitializeOnLoadMethodAttribute(::UnityEngine::RuntimeInitializeLoadType loadType) ;

/// @brief Method .ctor addr 0x2b56898 size 0x28 virtual false final false
 void _ctor(::UnityEngine::RuntimeInitializeLoadType loadType) ;

/// @brief Method set_loadType addr 0x2b56890 size 0x8 virtual false final false
 void set_loadType(::UnityEngine::RuntimeInitializeLoadType value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::RuntimeInitializeOnLoadMethodAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RuntimeInitializeOnLoadMethodAttribute, "UnityEngine", "RuntimeInitializeOnLoadMethodAttribute");
