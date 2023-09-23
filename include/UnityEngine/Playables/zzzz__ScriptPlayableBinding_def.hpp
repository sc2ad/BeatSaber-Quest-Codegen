#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Type;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine::Playables {
struct PlayableOutput;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
// Forward declare root types
namespace UnityEngine::Playables {
class ScriptPlayableBinding;
}
// Type: UnityEngine.Playables::ScriptPlayableBinding
namespace UnityEngine::Playables {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10368))
// CS Name: UnityEngine.Playables.ScriptPlayableBinding
class CORDL_TYPE ScriptPlayableBinding : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ScriptPlayableBinding() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScriptPlayableBinding", modifiers: " const&", def_value: None }]
constexpr ScriptPlayableBinding(ScriptPlayableBinding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScriptPlayableBinding", modifiers: "&&", def_value: None }]
constexpr ScriptPlayableBinding(ScriptPlayableBinding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScriptPlayableBinding(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ScriptPlayableBinding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScriptPlayableBinding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScriptPlayableBinding& operator=(ScriptPlayableBinding&& o) noexcept = default;
  constexpr ScriptPlayableBinding& operator=(ScriptPlayableBinding const& o) noexcept = default;
                


// Methods

/// @brief Method Create addr 0x2b7cff0 size 0xbc virtual false final false
static UnityEngine::Playables::PlayableBinding Create(::StringW name, UnityEngine::Object key, System::Type type) ;

/// @brief Method CreateScriptOutput addr 0x2b7d0ac size 0x4 virtual false final false
static UnityEngine::Playables::PlayableOutput CreateScriptOutput(UnityEngine::Playables::PlayableGraph graph, ::StringW name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Playables
NEED_NO_BOX(UnityEngine::Playables::ScriptPlayableBinding);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::ScriptPlayableBinding, "UnityEngine.Playables", "ScriptPlayableBinding");
