#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
class IPlayable;
}
namespace UnityEngine::Playables {
class IPlayableBehaviour;
}
namespace UnityEngine {
class Object;
}
namespace System {
class ICloneable;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Playables {
template<typename T>
struct ScriptPlayable_1;
}
namespace UnityEngine::Playables {
template<::cordl_internals::il2cpp_reference_type T>
struct ScriptPlayable_1<T>;
}
// Type: UnityEngine.Playables::ScriptPlayable`1
// Type: UnityEngine.Playables::ScriptPlayable`1
namespace UnityEngine::Playables {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10359)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10359), inst: 2 })
// CS Name: UnityEngine.Playables.ScriptPlayable`1
struct CORDL_TYPE ScriptPlayable_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::Playables::IPlayable
constexpr operator  UnityEngine::Playables::IPlayable() const;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::Playables::ScriptPlayable_1<T>>
constexpr operator  System::IEquatable_1<UnityEngine::Playables::ScriptPlayable_1<T>>() const;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
constexpr ScriptPlayable_1(UnityEngine::Playables::PlayableHandle m_Handle) noexcept;


                    constexpr ScriptPlayable_1(ScriptPlayable_1 const&) = default;
                    constexpr ScriptPlayable_1(ScriptPlayable_1&&) = default;
                    constexpr ScriptPlayable_1& operator=(ScriptPlayable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ScriptPlayable_1& operator=(ScriptPlayable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ScriptPlayable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Playables::PlayableHandle __declspec(property(get=__get_m_Handle, put=__set_m_Handle))  m_Handle;

constexpr void __set_m_Handle(UnityEngine::Playables::PlayableHandle value) ;

constexpr UnityEngine::Playables::PlayableHandle __get_m_Handle() const;

static UnityEngine::Playables::ScriptPlayable_1<T> __declspec(property(get=__get_m_NullPlayable, put=__set_m_NullPlayable))  m_NullPlayable;

static void __set_m_NullPlayable(UnityEngine::Playables::ScriptPlayable_1<T> value) ;

static UnityEngine::Playables::ScriptPlayable_1<T> __get_m_NullPlayable() ;


// Properties

static UnityEngine::Playables::ScriptPlayable_1<T> __declspec(property(get=get_Null))  Null;


// Methods

/// @brief Method get_Null addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::Playables::ScriptPlayable_1<T> get_Null() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::Playables::ScriptPlayable_1<T> Create(UnityEngine::Playables::PlayableGraph graph, int32_t inputCount) ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::Playables::ScriptPlayable_1<T> Create(UnityEngine::Playables::PlayableGraph graph, T template, int32_t inputCount) ;

/// @brief Method CreateHandle addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::Playables::PlayableHandle CreateHandle(UnityEngine::Playables::PlayableGraph graph, T template, int32_t inputCount) ;

/// @brief Method CreateScriptInstance addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType CreateScriptInstance() ;

/// @brief Method CloneScriptInstance addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType CloneScriptInstance(UnityEngine::Playables::IPlayableBehaviour source) ;

/// @brief Method CloneScriptInstanceFromEngineObject addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType CloneScriptInstanceFromEngineObject(UnityEngine::Object source) ;

/// @brief Method CloneScriptInstanceFromIClonable addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType CloneScriptInstanceFromIClonable(System::ICloneable source) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::Playables::PlayableHandle handle) ;

/// @brief Method GetHandle addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method GetBehaviour addr 0x0 size 0xffffffffffffffff virtual false final false
 T GetBehaviour() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::Playables::Playable op_Implicit_UnityEngine__Playables__Playable(UnityEngine::Playables::ScriptPlayable_1<T> playable) ;

/// @brief Method op_Explicit addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::Playables::ScriptPlayable_1<T> op_Explicit_UnityEngine__Playables__ScriptPlayable_1_T_(UnityEngine::Playables::Playable playable) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(UnityEngine::Playables::ScriptPlayable_1<T> other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::Playables::ScriptPlayable_1, "UnityEngine.Playables", "ScriptPlayable`1");
