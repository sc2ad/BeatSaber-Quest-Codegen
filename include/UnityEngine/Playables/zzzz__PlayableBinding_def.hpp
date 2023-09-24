#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableOutput;
}
namespace UnityEngine::Playables {
class UnityEngine__Playables__PlayableBinding__CreateOutputMethod;
}
namespace UnityEngine {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::Playables {
class UnityEngine__Playables__PlayableBinding__CreateOutputMethod;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
// Type: ::CreateOutputMethod
namespace UnityEngine::Playables {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10366))
// CS Name: UnityEngine.Playables.PlayableBinding::CreateOutputMethod
class CORDL_TYPE UnityEngine__Playables__PlayableBinding__CreateOutputMethod : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__Playables__PlayableBinding__CreateOutputMethod() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Playables__PlayableBinding__CreateOutputMethod", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Playables__PlayableBinding__CreateOutputMethod(UnityEngine__Playables__PlayableBinding__CreateOutputMethod const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Playables__PlayableBinding__CreateOutputMethod", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Playables__PlayableBinding__CreateOutputMethod(UnityEngine__Playables__PlayableBinding__CreateOutputMethod&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Playables__PlayableBinding__CreateOutputMethod(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__Playables__PlayableBinding__CreateOutputMethod& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Playables__PlayableBinding__CreateOutputMethod& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Playables__PlayableBinding__CreateOutputMethod& operator=(UnityEngine__Playables__PlayableBinding__CreateOutputMethod&& o) noexcept = default;
  constexpr UnityEngine__Playables__PlayableBinding__CreateOutputMethod& operator=(UnityEngine__Playables__PlayableBinding__CreateOutputMethod const& o) noexcept = default;
                


// Methods

static UnityEngine::Playables::UnityEngine__Playables__PlayableBinding__CreateOutputMethod New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2b7cf18 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2b7cfdc size 0x14 virtual true final false
 UnityEngine::Playables::PlayableOutput Invoke(UnityEngine::Playables::PlayableGraph graph, ::StringW name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Playables
// Type: UnityEngine.Playables::PlayableBinding
namespace UnityEngine::Playables {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10367))
// CS Name: UnityEngine.Playables.PlayableBinding
struct CORDL_TYPE PlayableBinding : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using CreateOutputMethod = UnityEngine::Playables::UnityEngine__Playables__PlayableBinding__CreateOutputMethod;

// Ctor Parameters [CppParam { name: "m_StreamName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_SourceObject", ty: "UnityEngine::Object", modifiers: "", def_value: None }, CppParam { name: "m_SourceBindingType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "m_CreateOutputMethod", ty: "UnityEngine::Playables::UnityEngine__Playables__PlayableBinding__CreateOutputMethod", modifiers: "", def_value: None }]
constexpr PlayableBinding(::StringW m_StreamName, UnityEngine::Object m_SourceObject, System::Type m_SourceBindingType, UnityEngine::Playables::UnityEngine__Playables__PlayableBinding__CreateOutputMethod m_CreateOutputMethod) noexcept;


                    constexpr PlayableBinding(PlayableBinding const&) = default;
                    constexpr PlayableBinding(PlayableBinding&&) = default;
                    constexpr PlayableBinding& operator=(PlayableBinding const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PlayableBinding& operator=(PlayableBinding&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PlayableBinding(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_m_StreamName, put=__set_m_StreamName))  m_StreamName;

constexpr void __set_m_StreamName(::StringW value) ;

constexpr ::StringW __get_m_StreamName() const;

 UnityEngine::Object __declspec(property(get=__get_m_SourceObject, put=__set_m_SourceObject))  m_SourceObject;

constexpr void __set_m_SourceObject(UnityEngine::Object value) ;

constexpr UnityEngine::Object __get_m_SourceObject() const;

 System::Type __declspec(property(get=__get_m_SourceBindingType, put=__set_m_SourceBindingType))  m_SourceBindingType;

constexpr void __set_m_SourceBindingType(System::Type value) ;

constexpr System::Type __get_m_SourceBindingType() const;

 UnityEngine::Playables::UnityEngine__Playables__PlayableBinding__CreateOutputMethod __declspec(property(get=__get_m_CreateOutputMethod, put=__set_m_CreateOutputMethod))  m_CreateOutputMethod;

constexpr void __set_m_CreateOutputMethod(UnityEngine::Playables::UnityEngine__Playables__PlayableBinding__CreateOutputMethod value) ;

constexpr UnityEngine::Playables::UnityEngine__Playables__PlayableBinding__CreateOutputMethod __get_m_CreateOutputMethod() const;

static ::ArrayW<UnityEngine::Playables::PlayableBinding> __declspec(property(get=__get_None, put=__set_None))  None;

static void __set_None(::ArrayW<UnityEngine::Playables::PlayableBinding> value) ;

static ::ArrayW<UnityEngine::Playables::PlayableBinding> __get_None() ;

static double_t __declspec(property(get=__get_DefaultDuration, put=__set_DefaultDuration))  DefaultDuration;

static void __set_DefaultDuration(double_t value) ;

static double_t __get_DefaultDuration() ;


// Properties

 ::StringW __declspec(property(get=get_streamName))  streamName;

 UnityEngine::Object __declspec(property(get=get_sourceObject))  sourceObject;


// Methods

/// @brief Method get_streamName addr 0x2b7cd9c size 0x8 virtual false final false
 ::StringW get_streamName() ;

/// @brief Method get_sourceObject addr 0x2b7cda4 size 0x8 virtual false final false
 UnityEngine::Object get_sourceObject() ;

/// @brief Method CreateOutput addr 0x2b7cdac size 0x90 virtual false final false
 UnityEngine::Playables::PlayableOutput CreateOutput(UnityEngine::Playables::PlayableGraph graph) ;

/// @brief Method CreateInternal addr 0x2b7ce94 size 0xc virtual false final false
static UnityEngine::Playables::PlayableBinding CreateInternal(::StringW name, UnityEngine::Object sourceObject, System::Type sourceType, UnityEngine::Playables::UnityEngine__Playables__PlayableBinding__CreateOutputMethod createFunction) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Playables
NEED_NO_BOX(UnityEngine::Playables::UnityEngine__Playables__PlayableBinding__CreateOutputMethod);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::UnityEngine__Playables__PlayableBinding__CreateOutputMethod, "UnityEngine.Playables", "PlayableBinding/CreateOutputMethod");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableBinding, "UnityEngine.Playables", "PlayableBinding");
