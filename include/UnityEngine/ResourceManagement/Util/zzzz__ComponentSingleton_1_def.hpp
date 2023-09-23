#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
template<typename T>
class ComponentSingleton_1;
}
namespace UnityEngine::ResourceManagement::Util {
template<::cordl_internals::il2cpp_reference_type T>
class ComponentSingleton_1<T>;
}
// Type: UnityEngine.ResourceManagement.Util::ComponentSingleton`1
// Type: UnityEngine.ResourceManagement.Util::ComponentSingleton`1
namespace UnityEngine::ResourceManagement::Util {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166)), TypeDefinitionIndex(TypeDefinitionIndex(14247))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14247), inst: 2 })
// CS Name: UnityEngine.ResourceManagement.Util.ComponentSingleton`1
class CORDL_TYPE ComponentSingleton_1<T> : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ComponentSingleton_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ComponentSingleton_1", modifiers: " const&", def_value: None }]
constexpr ComponentSingleton_1(ComponentSingleton_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ComponentSingleton_1", modifiers: "&&", def_value: None }]
constexpr ComponentSingleton_1(ComponentSingleton_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ComponentSingleton_1(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ComponentSingleton_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ComponentSingleton_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ComponentSingleton_1& operator=(ComponentSingleton_1&& o) noexcept = default;
  constexpr ComponentSingleton_1& operator=(ComponentSingleton_1 const& o) noexcept = default;
                


// Fields

static T __declspec(property(get=__get_s_Instance, put=__set_s_Instance))  s_Instance;

static void __set_s_Instance(T value) ;

static T __get_s_Instance() ;


// Properties

static bool __declspec(property(get=get_Exists))  Exists;

static T __declspec(property(get=get_Instance))  Instance;


// Methods

/// @brief Method get_Exists addr 0x0 size 0xffffffffffffffff virtual false final false
static bool get_Exists() ;

/// @brief Method get_Instance addr 0x0 size 0xffffffffffffffff virtual false final false
static T get_Instance() ;

/// @brief Method FindInstance addr 0x0 size 0xffffffffffffffff virtual false final false
static T FindInstance() ;

/// @brief Method GetGameObjectName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW GetGameObjectName() ;

/// @brief Method CreateNewSingleton addr 0x0 size 0xffffffffffffffff virtual false final false
static T CreateNewSingleton() ;

/// @brief Method Awake addr 0x0 size 0xffffffffffffffff virtual false final false
 void Awake() ;

/// @brief Method DestroySingleton addr 0x0 size 0xffffffffffffffff virtual false final false
static void DestroySingleton() ;

// Ctor Parameters []
explicit ComponentSingleton_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Util
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::ResourceManagement::Util::ComponentSingleton_1, "UnityEngine.ResourceManagement.Util", "ComponentSingleton`1");
